#pragma once
#include "unitysdk/unitysdk.h"

namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace System { class String; }

#define NODECANVAS_TASKS_ACTIONS_MECANIMSETTRIGGER_GET_INFO_OFFSET UNITYSDK_OFFSET(0x1EF93E60)
#define NODECANVAS_TASKS_ACTIONS_MECANIMSETTRIGGER_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1EF93F40)
#define NODECANVAS_TASKS_ACTIONS_MECANIMSETTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1EF94070)

namespace NodeCanvas::Tasks::Actions
{
	inline static constexpr unsigned int MecanimSetTrigger_TypeDefinitionIndex = 30336;

	class MecanimSetTrigger
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<::System::Int32>* parameterHashID; // 0x60
		::NodeCanvas::Framework::BBParameter_1<::System::String*>* parameter; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_MECANIMSETTRIGGER__CTOR_OFFSET))(this);
		}

		::System::String* get_info()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_MECANIMSETTRIGGER_GET_INFO_OFFSET))(this);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_MECANIMSETTRIGGER_ONEXECUTE_OFFSET))(this);
		}
	};
}
