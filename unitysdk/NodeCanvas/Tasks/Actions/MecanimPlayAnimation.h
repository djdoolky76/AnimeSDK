#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"

namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace System { class String; }

#define NODECANVAS_TASKS_ACTIONS_MECANIMPLAYANIMATION_GET_INFO_OFFSET UNITYSDK_OFFSET(0x1EBB6ED0)
#define NODECANVAS_TASKS_ACTIONS_MECANIMPLAYANIMATION_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1EBB6F30)
#define NODECANVAS_TASKS_ACTIONS_MECANIMPLAYANIMATION_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1EBB7100)
#define NODECANVAS_TASKS_ACTIONS_MECANIMPLAYANIMATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1EBB72C0)

namespace NodeCanvas::Tasks::Actions
{
	inline static constexpr unsigned int MecanimPlayAnimation_TypeDefinitionIndex = 29937;

	class MecanimPlayAnimation
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<::System::String*>* stateName; // 0x60
		::NodeCanvas::Framework::BBParameter_1<::System::Int32>* layerIndex; // 0x68
		::UnityEngine::AnimatorStateInfo stateInfo; // 0x70
		::System::Single transitTime; // 0x98
		::System::Boolean played; // 0x9C
		::System::Boolean waitUntilFinish; // 0x9D

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_MECANIMPLAYANIMATION__CTOR_OFFSET))(this);
		}

		::System::String* get_info()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_MECANIMPLAYANIMATION_GET_INFO_OFFSET))(this);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_MECANIMPLAYANIMATION_ONEXECUTE_OFFSET))(this);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_MECANIMPLAYANIMATION_ONUPDATE_OFFSET))(this);
		}
	};
}
