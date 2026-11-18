#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class LGINJIKKBJA;
namespace MoleMole { class UISkillButtonBaseController; }
namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_UIBUTTONVIEW_GET_BTN_OFFSET UNITYSDK_OFFSET(0x15C6B5B0)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_UIBUTTONVIEW_GET_BUTTONAREA_OFFSET UNITYSDK_OFFSET(0x15C6B810)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_UIBUTTONVIEW_GET_BUTTONROOT_OFFSET UNITYSDK_OFFSET(0x15C6B5D0)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_UIBUTTONVIEW_GET_MAXDRAGAREA_OFFSET UNITYSDK_OFFSET(0x15C6B690)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_UIBUTTONVIEW_GET_MINDRAGAREA_OFFSET UNITYSDK_OFFSET(0x15C6B750)
#define MOLEMOLE_UISKILLBUTTONBASECONTROLLER_UIBUTTONVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0x15C6B8D0)

namespace MoleMole
{
	inline static constexpr unsigned int UISkillButtonBaseController_UIButtonView_TypeDefinitionIndex = 55447;

	class UISkillButtonBaseController_UIButtonView : public ::System::Object
	{
	public:
		::MoleMole::UISkillButtonBaseController* _owner; // 0x10

		::System::Void _ctor(::MoleMole::UISkillButtonBaseController* owner)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UISkillButtonBaseController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKILLBUTTONBASECONTROLLER_UIBUTTONVIEW__CTOR_OFFSET))(this, owner);
		}

		::LGINJIKKBJA* get_Btn()
		{
			return ((::LGINJIKKBJA*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKILLBUTTONBASECONTROLLER_UIBUTTONVIEW_GET_BTN_OFFSET))(this);
		}

		::UnityEngine::RectTransform* get_ButtonRoot()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKILLBUTTONBASECONTROLLER_UIBUTTONVIEW_GET_BUTTONROOT_OFFSET))(this);
		}

		::UnityEngine::RectTransform* get_MaxDragArea()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKILLBUTTONBASECONTROLLER_UIBUTTONVIEW_GET_MAXDRAGAREA_OFFSET))(this);
		}

		::UnityEngine::RectTransform* get_MinDragArea()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKILLBUTTONBASECONTROLLER_UIBUTTONVIEW_GET_MINDRAGAREA_OFFSET))(this);
		}

		::UnityEngine::RectTransform* get_ButtonArea()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKILLBUTTONBASECONTROLLER_UIBUTTONVIEW_GET_BUTTONAREA_OFFSET))(this);
		}
	};
}
