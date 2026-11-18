#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace System { class String; }

#define NODECANVAS_TASKS_ACTIONS_MOVETOPOSITION_GET_INFO_OFFSET UNITYSDK_OFFSET(0x1EF94090)
#define NODECANVAS_TASKS_ACTIONS_MOVETOPOSITION_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1EF940D0)
#define NODECANVAS_TASKS_ACTIONS_MOVETOPOSITION_ONPAUSE_OFFSET UNITYSDK_OFFSET(0x1EF945A0)
#define NODECANVAS_TASKS_ACTIONS_MOVETOPOSITION_ONSTOP_OFFSET UNITYSDK_OFFSET(0x1EF94500)
#define NODECANVAS_TASKS_ACTIONS_MOVETOPOSITION_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1EF942A0)
#define NODECANVAS_TASKS_ACTIONS_MOVETOPOSITION__CTOR_OFFSET UNITYSDK_OFFSET(0x1EF945B0)

namespace NodeCanvas::Tasks::Actions
{
	inline static constexpr unsigned int MoveToPosition_TypeDefinitionIndex = 29901;

	class MoveToPosition
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<::System::Single>* keepDistance; // 0x60
		::NodeCanvas::Framework::BBParameter_1<::System::Single>* speed; // 0x68
		::NodeCanvas::Framework::BBParameter_1<::UnityEngine::Vector3>* targetPosition; // 0x70
		::System::Nullable_1<::UnityEngine::Vector3> lastRequest; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_MOVETOPOSITION__CTOR_OFFSET))(this);
		}

		::System::String* get_info()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_MOVETOPOSITION_GET_INFO_OFFSET))(this);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_MOVETOPOSITION_ONEXECUTE_OFFSET))(this);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_MOVETOPOSITION_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnStop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_MOVETOPOSITION_ONSTOP_OFFSET))(this);
		}

		::System::Void OnPause()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_MOVETOPOSITION_ONPAUSE_OFFSET))(this);
		}
	};
}
