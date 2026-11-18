#pragma once
#include "unitysdk/unitysdk.h"

namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define NODECANVAS_TASKS_ACTIONS_FLEE_GET_INFO_OFFSET UNITYSDK_OFFSET(0x1EF69B90)
#define NODECANVAS_TASKS_ACTIONS_FLEE_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1EF69C00)
#define NODECANVAS_TASKS_ACTIONS_FLEE_ONPAUSE_OFFSET UNITYSDK_OFFSET(0x1EF6A410)
#define NODECANVAS_TASKS_ACTIONS_FLEE_ONSTOP_OFFSET UNITYSDK_OFFSET(0x1EF6A420)
#define NODECANVAS_TASKS_ACTIONS_FLEE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1EF69F30)
#define NODECANVAS_TASKS_ACTIONS_FLEE__CTOR_OFFSET UNITYSDK_OFFSET(0x1EF6A4B0)

namespace NodeCanvas::Tasks::Actions
{
	inline static constexpr unsigned int Flee_TypeDefinitionIndex = 30396;

	class Flee
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<::System::Single>* lookAhead; // 0x60
		::NodeCanvas::Framework::BBParameter_1<::System::Single>* speed; // 0x68
		::NodeCanvas::Framework::BBParameter_1<::System::Single>* fledDistance; // 0x70
		::NodeCanvas::Framework::BBParameter_1<::UnityEngine::GameObject*>* target; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_FLEE__CTOR_OFFSET))(this);
		}

		::System::String* get_info()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_FLEE_GET_INFO_OFFSET))(this);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_FLEE_ONEXECUTE_OFFSET))(this);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_FLEE_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnPause()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_FLEE_ONPAUSE_OFFSET))(this);
		}

		::System::Void OnStop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_FLEE_ONSTOP_OFFSET))(this);
		}
	};
}
