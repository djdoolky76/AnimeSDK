#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ParadoxNotion/MouseInteractionTypes.h"
#include "unitysdk/ParadoxNotion/EventData.h"

namespace System { class String; }

#define NODECANVAS_TASKS_CONDITIONS_CHECKMOUSE2D_GET_INFO_OFFSET UNITYSDK_OFFSET(0x1EA68A60)
#define NODECANVAS_TASKS_CONDITIONS_CHECKMOUSE2D_ONCHECK_OFFSET UNITYSDK_OFFSET(0x1EA68F50)
#define NODECANVAS_TASKS_CONDITIONS_CHECKMOUSE2D_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1EA68D10)
#define NODECANVAS_TASKS_CONDITIONS_CHECKMOUSE2D_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1EA68AD0)
#define NODECANVAS_TASKS_CONDITIONS_CHECKMOUSE2D_ONMOUSEENTER_OFFSET UNITYSDK_OFFSET(0x1EA68F60)
#define NODECANVAS_TASKS_CONDITIONS_CHECKMOUSE2D_ONMOUSEEXIT_OFFSET UNITYSDK_OFFSET(0x1EA69040)
#define NODECANVAS_TASKS_CONDITIONS_CHECKMOUSE2D_ONMOUSEOVER_OFFSET UNITYSDK_OFFSET(0x1EA69120)
#define NODECANVAS_TASKS_CONDITIONS_CHECKMOUSE2D__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA69200)

namespace NodeCanvas::Tasks::Conditions
{
	inline static constexpr unsigned int CheckMouse2D_TypeDefinitionIndex = 29794;

	class CheckMouse2D
	{
	public:
		::ParadoxNotion::MouseInteractionTypes checkType; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKMOUSE2D__CTOR_OFFSET))(this);
		}

		::System::String* get_info()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKMOUSE2D_GET_INFO_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKMOUSE2D_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKMOUSE2D_ONDISABLE_OFFSET))(this);
		}

		::System::Boolean OnCheck()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKMOUSE2D_ONCHECK_OFFSET))(this);
		}

		::System::Void OnMouseEnter(::ParadoxNotion::EventData msg)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::EventData))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKMOUSE2D_ONMOUSEENTER_OFFSET))(this, msg);
		}

		::System::Void OnMouseExit(::ParadoxNotion::EventData msg)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::EventData))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKMOUSE2D_ONMOUSEEXIT_OFFSET))(this, msg);
		}

		::System::Void OnMouseOver(::ParadoxNotion::EventData msg)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::EventData))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKMOUSE2D_ONMOUSEOVER_OFFSET))(this, msg);
		}
	};
}
