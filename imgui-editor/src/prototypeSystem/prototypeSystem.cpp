#include "prototypeSystem.hpp"
#include "../utils/utils.hpp"

void prototypeSystem::addCursorPos(ImVec2 size)
{
	widgetPrototype w = {};
	w.type = elementType::CURSOR_POS;
	w.name = "SetCursorPos";
	w.cursorPos = size;

	prototypes.push_back(w);
}

void prototypeSystem::addSameline(float width)
{
	widgetPrototype w = {};
	w.type = elementType::SAMELINE;
	w.name = "SameLine";
	w.fWidth = width;

	prototypes.push_back(w);
}

void prototypeSystem::addCheckbox()
{
	widgetPrototype w = {};
	w.type = elementType::CHECKBOX;
	w.name = "Checkbox";

	prototypes.push_back(w);
}

void prototypeSystem::addSliderInt(int min, int max)
{
	widgetPrototype w = {};
	w.type = elementType::SLIDER_INT;
	w.name = "SliderInt";
	w.iMin = min;
	w.iMax = max;

	prototypes.push_back(w);
}

void prototypeSystem::addSliderFloat(float min, float max)
{
	widgetPrototype w = {};
	w.type = elementType::SLIDER_FLOAT;
	w.name = "SliderFloat";
	w.fMin = min;
	w.fMax = max;

	prototypes.push_back(w);
}

void prototypeSystem::addCombo()
{
	widgetPrototype w = {};
	w.type = elementType::COMBO;
	w.name = "Combo";

	prototypes.push_back(w);
}

void prototypeSystem::addButton()
{
	widgetPrototype w = {};
	w.type = elementType::BUTTON;
	w.name = "Button";

	prototypes.push_back(w);
}

void prototypeSystem::addTab()
{
	widgetPrototype w = {};
	w.type = elementType::TAB;
	w.name = "Tab";

	prototypes.push_back(w);
}

void prototypeSystem::addSubtab()
{
	widgetPrototype w = {};
	w.type = elementType::SUBTAB;
	w.name = "Subtab";

	prototypes.push_back(w);
}

void prototypeSystem::addColorpicker()
{
	widgetPrototype w = {};
	w.type = elementType::COLORPICKER;
	w.name = "ColorPicker";

	prototypes.push_back(w);
}

void prototypeSystem::addChild(ImVec2 size)
{
	widgetPrototype w = {};
	w.type = elementType::CHILD;
	w.name = "Child";
	w.childSize = size;

	prototypes.push_back(w);
}

void prototypeSystem::addGroup()
{
	widgetPrototype w = {};
	w.type = elementType::GROUP;
	w.name = "Group";

	prototypes.push_back(w);
}
