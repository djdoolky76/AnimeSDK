#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define NODECANVAS_TASKS_ACTIONS_PATROL_GET_INFO_OFFSET UNITYSDK_OFFSET(0x1EF6A600)
#define NODECANVAS_TASKS_ACTIONS_PATROL_ONDRAWGIZMOSSELECTED_OFFSET UNITYSDK_OFFSET(0x1EF6AED0)
#define NODECANVAS_TASKS_ACTIONS_PATROL_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1EF6A670)
#define NODECANVAS_TASKS_ACTIONS_PATROL_ONPAUSE_OFFSET UNITYSDK_OFFSET(0x1EF6AE10)
#define NODECANVAS_TASKS_ACTIONS_PATROL_ONSTOP_OFFSET UNITYSDK_OFFSET(0x1EF6AE20)
#define NODECANVAS_TASKS_ACTIONS_PATROL_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1EF6ABB0)
#define NODECANVAS_TASKS_ACTIONS_PATROL__CTOR_OFFSET UNITYSDK_OFFSET(0x1EF6B250)

namespace NodeCanvas::Tasks::Actions
{
	inline static constexpr unsigned int Patrol_TypeDefinitionIndex = 30572;

	class Patrol
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<::System::Single>* keepDistance; // 0x60
		::NodeCanvas::Framework::BBParameter_1<::System::Single>* speed; // 0x68
		::NodeCanvas::Framework::BBParameter_1<::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*>* targetList; // 0x70
		::NodeCanvas::Framework::BBParameter_1<::System::Object*>* patrolMode; // 0x78
		::System::Int32 index; // 0x80
		::System::Nullable_1<::UnityEngine::Vector3> lastRequest; // 0x84

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_PATROL__CTOR_OFFSET))(this);
		}

		::System::String* get_info()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_PATROL_GET_INFO_OFFSET))(this);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_PATROL_ONEXECUTE_OFFSET))(this);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_PATROL_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnPause()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_PATROL_ONPAUSE_OFFSET))(this);
		}

		::System::Void OnStop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_PATROL_ONSTOP_OFFSET))(this);
		}

		::System::Void OnDrawGizmosSelected()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_PATROL_ONDRAWGIZMOSSELECTED_OFFSET))(this);
		}
	};
}
