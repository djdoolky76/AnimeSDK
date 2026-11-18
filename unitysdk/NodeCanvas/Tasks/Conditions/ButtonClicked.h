#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/ConditionTask.h"

namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace System { class String; }
namespace UnityEngine::UI { class Button; }

#define NODECANVAS_TASKS_CONDITIONS_BUTTONCLICKED_GET_INFO_OFFSET UNITYSDK_OFFSET(0x1D5E8400)
#define NODECANVAS_TASKS_CONDITIONS_BUTTONCLICKED_ONCHECK_OFFSET UNITYSDK_OFFSET(0x1D5E8520)
#define NODECANVAS_TASKS_CONDITIONS_BUTTONCLICKED_ONCLICK_OFFSET UNITYSDK_OFFSET(0x1D5E8530)
#define NODECANVAS_TASKS_CONDITIONS_BUTTONCLICKED_ONINIT_OFFSET UNITYSDK_OFFSET(0x1D5E8480)
#define NODECANVAS_TASKS_CONDITIONS_BUTTONCLICKED__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5E8610)

namespace NodeCanvas::Tasks::Conditions
{
	inline static constexpr unsigned int ButtonClicked_TypeDefinitionIndex = 30126;

	class ButtonClicked : public ::NodeCanvas::Framework::ConditionTask
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<::UnityEngine::UI::Button*>* button; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_BUTTONCLICKED__CTOR_OFFSET))(this);
		}

		::System::String* get_info()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_BUTTONCLICKED_GET_INFO_OFFSET))(this);
		}

		::System::String* OnInit()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_BUTTONCLICKED_ONINIT_OFFSET))(this);
		}

		::System::Boolean OnCheck()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_BUTTONCLICKED_ONCHECK_OFFSET))(this);
		}

		::System::Void OnClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_BUTTONCLICKED_ONCLICK_OFFSET))(this);
		}
	};
}
