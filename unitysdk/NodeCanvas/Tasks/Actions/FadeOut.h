#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/ActionTask.h"

#define NODECANVAS_TASKS_ACTIONS_FADEOUT_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1E407B50)
#define NODECANVAS_TASKS_ACTIONS_FADEOUT_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1E407B80)
#define NODECANVAS_TASKS_ACTIONS_FADEOUT__CTOR_OFFSET UNITYSDK_OFFSET(0x1E407BD0)

namespace NodeCanvas::Tasks::Actions
{
	inline static constexpr unsigned int FadeOut_TypeDefinitionIndex = 30222;

	class FadeOut : public ::NodeCanvas::Framework::ActionTask
	{
	public:
		::System::Single fadeTime; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_FADEOUT__CTOR_OFFSET))(this);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_FADEOUT_ONEXECUTE_OFFSET))(this);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_FADEOUT_ONUPDATE_OFFSET))(this);
		}
	};
}
