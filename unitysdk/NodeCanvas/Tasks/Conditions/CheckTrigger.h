#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ParadoxNotion/TriggerTypes.h"
#include "unitysdk/ParadoxNotion/EventData_1.h"

namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace System { class String; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class GameObject; }

#define NODECANVAS_TASKS_CONDITIONS_CHECKTRIGGER_GET_INFO_OFFSET UNITYSDK_OFFSET(0x1F3038A0)
#define NODECANVAS_TASKS_CONDITIONS_CHECKTRIGGER_ONCHECK_OFFSET UNITYSDK_OFFSET(0x1F303950)
#define NODECANVAS_TASKS_CONDITIONS_CHECKTRIGGER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1F303B00)
#define NODECANVAS_TASKS_CONDITIONS_CHECKTRIGGER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1F303970)
#define NODECANVAS_TASKS_CONDITIONS_CHECKTRIGGER_ONTRIGGERENTER_OFFSET UNITYSDK_OFFSET(0x1F303C90)
#define NODECANVAS_TASKS_CONDITIONS_CHECKTRIGGER_ONTRIGGEREXIT_OFFSET UNITYSDK_OFFSET(0x1F303E40)
#define NODECANVAS_TASKS_CONDITIONS_CHECKTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F303FF0)

namespace NodeCanvas::Tasks::Conditions
{
	inline static constexpr unsigned int CheckTrigger_TypeDefinitionIndex = 29463;

	class CheckTrigger
	{
	public:
		::System::String* objectTag; // 0x60
		::NodeCanvas::Framework::BBParameter_1<::UnityEngine::GameObject*>* saveGameObjectAs; // 0x68
		::ParadoxNotion::TriggerTypes checkType; // 0x70
		::System::Boolean specifiedTagOnly; // 0x74
		::System::Boolean stay; // 0x75

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKTRIGGER__CTOR_OFFSET))(this);
		}

		::System::String* get_info()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKTRIGGER_GET_INFO_OFFSET))(this);
		}

		::System::Boolean OnCheck()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKTRIGGER_ONCHECK_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKTRIGGER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKTRIGGER_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnTriggerEnter(::ParadoxNotion::EventData_1<::UnityEngine::Collider*> data)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::EventData_1<::UnityEngine::Collider*>))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKTRIGGER_ONTRIGGERENTER_OFFSET))(this, data);
		}

		::System::Void OnTriggerExit(::ParadoxNotion::EventData_1<::UnityEngine::Collider*> data)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::EventData_1<::UnityEngine::Collider*>))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKTRIGGER_ONTRIGGEREXIT_OFFSET))(this, data);
		}
	};
}
