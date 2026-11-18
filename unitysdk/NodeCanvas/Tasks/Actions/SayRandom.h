#pragma once
#include "unitysdk/unitysdk.h"

namespace NodeCanvas::DialogueTrees { class Statement; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NODECANVAS_TASKS_ACTIONS_SAYRANDOM_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1EF6B380)
#define NODECANVAS_TASKS_ACTIONS_SAYRANDOM__CTOR_OFFSET UNITYSDK_OFFSET(0x1EF6B5B0)

namespace NodeCanvas::Tasks::Actions
{
	inline static constexpr unsigned int SayRandom_TypeDefinitionIndex = 29488;

	class SayRandom
	{
	public:
		::System::Collections::Generic::List_1<::NodeCanvas::DialogueTrees::Statement*>* statements; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_SAYRANDOM__CTOR_OFFSET))(this);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_SAYRANDOM_ONEXECUTE_OFFSET))(this);
		}
	};
}
