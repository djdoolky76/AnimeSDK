#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/ActionTask.h"

namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }

#define NODECANVAS_TASKS_ACTIONS_TRIGGERBOOLEAN_FLIP_OFFSET UNITYSDK_OFFSET(0x1D491BC0)
#define NODECANVAS_TASKS_ACTIONS_TRIGGERBOOLEAN_GET_INFO_OFFSET UNITYSDK_OFFSET(0x1D491A80)
#define NODECANVAS_TASKS_ACTIONS_TRIGGERBOOLEAN_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1D491AF0)
#define NODECANVAS_TASKS_ACTIONS_TRIGGERBOOLEAN__CTOR_OFFSET UNITYSDK_OFFSET(0x1D491C10)

namespace NodeCanvas::Tasks::Actions
{
	inline static constexpr unsigned int TriggerBoolean_TypeDefinitionIndex = 30532;

	class TriggerBoolean : public ::NodeCanvas::Framework::ActionTask
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<::System::Boolean>* variable; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_TRIGGERBOOLEAN__CTOR_OFFSET))(this);
		}

		::System::String* get_info()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_TRIGGERBOOLEAN_GET_INFO_OFFSET))(this);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_TRIGGERBOOLEAN_ONEXECUTE_OFFSET))(this);
		}

		::System::Collections::IEnumerator* Flip()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_TRIGGERBOOLEAN_FLIP_OFFSET))(this);
		}
	};
}
