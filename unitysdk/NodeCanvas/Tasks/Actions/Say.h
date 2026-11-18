#pragma once
#include "unitysdk/unitysdk.h"

namespace NodeCanvas::DialogueTrees { class Statement; }
namespace System { class String; }

#define NODECANVAS_TASKS_ACTIONS_SAY_GET_INFO_OFFSET UNITYSDK_OFFSET(0x1F301CF0)
#define NODECANVAS_TASKS_ACTIONS_SAY_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1F301DE0)
#define NODECANVAS_TASKS_ACTIONS_SAY__CTOR_OFFSET UNITYSDK_OFFSET(0x1F301FD0)

namespace NodeCanvas::Tasks::Actions
{
	inline static constexpr unsigned int Say_TypeDefinitionIndex = 29229;

	class Say
	{
	public:
		::NodeCanvas::DialogueTrees::Statement* statement; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_SAY__CTOR_OFFSET))(this);
		}

		::System::String* get_info()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_SAY_GET_INFO_OFFSET))(this);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_SAY_ONEXECUTE_OFFSET))(this);
		}
	};
}
