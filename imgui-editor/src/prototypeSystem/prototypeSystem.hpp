#pragma once

#include <memory>
#include <vector>
#include <string>

#include "../context.hpp"
#include "../utils/utils.hpp"

#include "../../dependencies/imgui/imgui.h"
#include "../../dependencies/imgui/imgui_internal.h"

enum class elementType : int {
	CURSOR_POS, SAMELINE,
	CHILD, GROUP,
	TAB, SUBTAB,
	CHECKBOX, SLIDER_INT, SLIDER_FLOAT, COMBO, BUTTON, COLORPICKER
};

struct widgetPrototype {
	elementType type;
	std::string name;

	// checkbox
	bool bVal;

	// combo
	std::vector<std::string> comboNames;

	// slider int, slider float
	int iVal, iMin, iMax;
	float fVal, fMin, fMax;

	// cursor pos
	ImVec2 cursorPos;
	
	// sameline
	float fWidth;

	// button 
	ImVec2 btnSize;

	// child / group
	ImVec2 childSize;
	std::vector<widgetPrototype> items;

	void addCursorPos(ImVec2 size)
	{
		widgetPrototype w = {};
		w.type = elementType::CURSOR_POS;
		w.name = "SetCursorPos";
		w.cursorPos = size;

		items.push_back( w );
	}

	void addSameline(float width)
	{
		widgetPrototype w = {};
		w.type = elementType::SAMELINE;
		w.name = "SameLine";
		w.fWidth = width;

		items.push_back( w );
	}

	void addCheckbox()
	{
		widgetPrototype w = {};
		w.type = elementType::CHECKBOX;
		w.name = "Checkbox";

		items.push_back( w );
	}

	void addSliderInt(int min, int max)
	{
		widgetPrototype w = {};
		w.type = elementType::SLIDER_INT;
		w.name = "SliderInt";
		w.iMin = min;
		w.iMax = max;

		items.push_back( w );
	}

	void addSliderFloat(float min, float max)
	{
		widgetPrototype w = {};
		w.type = elementType::SLIDER_FLOAT;
		w.name = "SliderFloat";
		w.fMin = min;
		w.fMax = max;

		items.push_back( w );
	}

	void addCombo()
	{
		widgetPrototype w = {};
		w.type = elementType::COMBO;
		w.name = "Combo";

		items.push_back( w );
	}

	void addChild(ImVec2 size)
	{
		widgetPrototype w = {};
		w.type = elementType::CHILD;
		w.name = "Child";
		w.childSize = size;

		items.push_back( w );
	}

	void addGroup()
	{
		widgetPrototype w = {};
		w.type = elementType::GROUP;
		w.name = "Group";

		items.push_back( w );
	}

	void addButton()
	{
		widgetPrototype w = {};
		w.type = elementType::BUTTON;
		w.name = "Button";

		items.push_back( w );
	}

	void addTab()
	{
		widgetPrototype w = {};
		w.type = elementType::TAB;
		w.name = "Tab";

		items.push_back( w );
	}

	void addSubtab()
	{
		widgetPrototype w = {};
		w.type = elementType::SUBTAB;
		w.name = "Subtab";

		items.push_back( w );
	}

	void addColorpicker()
	{
		widgetPrototype w = {};
		w.type = elementType::COLORPICKER;
		w.name = "ColorPicker";

		items.push_back( w );
	}
};

class prototypeSystem {
public:
	void addCursorPos(ImVec2 size);
	void addSameline(float width);

	void addCheckbox();
	void addSliderInt(int min, int max);
	void addSliderFloat(float min, float max);
	void addCombo();

	void addButton();
	void addTab();
	void addSubtab();
	void addColorpicker();

	void addChild(ImVec2 size);
	void addGroup();

	std::vector<widgetPrototype> prototypes;
};

inline auto gPrototypeSystem = std::make_shared<prototypeSystem>();

