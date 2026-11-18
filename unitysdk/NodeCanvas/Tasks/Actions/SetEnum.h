#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/ActionTask.h"

namespace NodeCanvas::Framework::Internal { class BBObjectParameter; }
namespace System { class String; }

#define NODECANVAS_TASKS_ACTIONS_SETENUM_GET_INFO_OFFSET UNITYSDK_OFFSET(0x1EF6BBA0)
#define NODECANVAS_TASKS_ACTIONS_SETENUM_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1EF6BBE0)
#define NODECANVAS_TASKS_ACTIONS_SETENUM__CTOR_OFFSET UNITYSDK_OFFSET(0x1EF6BC80)

namespace NodeCanvas::Tasks::Actions
{
	inline static constexpr unsigned int SetEnum_TypeDefinitionIndex = 29486;

	class SetEnum : public ::NodeCanvas::Framework::ActionTask
	{
	public:
		::NodeCanvas::Framework::Internal::BBObjectParameter* valueA; // 0x60
		::NodeCanvas::Framework::Internal::BBObjectParameter* valueB; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_SETENUM__CTOR_OFFSET))(this);
		}

		::System::String* get_info()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_SETENUM_GET_INFO_OFFSET))(this);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_SETENUM_ONEXECUTE_OFFSET))(this);
		}
	};
}
