#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ParadoxNotion/TriggerTypes.h"
#include "unitysdk/ParadoxNotion/EventData_1.h"

namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace System { class String; }
namespace UnityEngine { class Collider2D; }
namespace UnityEngine { class GameObject; }

#define NODECANVAS_TASKS_CONDITIONS_CHECKTRIGGER2D_TRANSFORM_GET_INFO_OFFSET UNITYSDK_OFFSET(0x1E9D5EB0)
#define NODECANVAS_TASKS_CONDITIONS_CHECKTRIGGER2D_TRANSFORM_ONCHECK_OFFSET UNITYSDK_OFFSET(0x1E9D5F60)
#define NODECANVAS_TASKS_CONDITIONS_CHECKTRIGGER2D_TRANSFORM_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1E9D6110)
#define NODECANVAS_TASKS_CONDITIONS_CHECKTRIGGER2D_TRANSFORM_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1E9D5F80)
#define NODECANVAS_TASKS_CONDITIONS_CHECKTRIGGER2D_TRANSFORM_ONTRIGGERENTER2D_OFFSET UNITYSDK_OFFSET(0x1E9D62A0)
#define NODECANVAS_TASKS_CONDITIONS_CHECKTRIGGER2D_TRANSFORM_ONTRIGGEREXIT2D_OFFSET UNITYSDK_OFFSET(0x1E9D6450)
#define NODECANVAS_TASKS_CONDITIONS_CHECKTRIGGER2D_TRANSFORM__CTOR_OFFSET UNITYSDK_OFFSET(0x1E9D6600)

namespace NodeCanvas::Tasks::Conditions
{
	inline static constexpr unsigned int CheckTrigger2D_Transform_TypeDefinitionIndex = 30460;

	class CheckTrigger2D_Transform
	{
	public:
		::System::String* objectTag; // 0x60
		::NodeCanvas::Framework::BBParameter_1<::UnityEngine::GameObject*>* saveGameObjectAs; // 0x68
		::System::Boolean specifiedTagOnly; // 0x70
		::System::Boolean stay; // 0x71
		::System::Byte _padding0[0x2];
		::ParadoxNotion::TriggerTypes CheckType; // 0x74

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKTRIGGER2D_TRANSFORM__CTOR_OFFSET))(this);
		}

		::System::String* get_info()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKTRIGGER2D_TRANSFORM_GET_INFO_OFFSET))(this);
		}

		::System::Boolean OnCheck()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKTRIGGER2D_TRANSFORM_ONCHECK_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKTRIGGER2D_TRANSFORM_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKTRIGGER2D_TRANSFORM_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnTriggerEnter2D(::ParadoxNotion::EventData_1<::UnityEngine::Collider2D*> data)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::EventData_1<::UnityEngine::Collider2D*>))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKTRIGGER2D_TRANSFORM_ONTRIGGERENTER2D_OFFSET))(this, data);
		}

		::System::Void OnTriggerExit2D(::ParadoxNotion::EventData_1<::UnityEngine::Collider2D*> data)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::EventData_1<::UnityEngine::Collider2D*>))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKTRIGGER2D_TRANSFORM_ONTRIGGEREXIT2D_OFFSET))(this, data);
		}
	};
}
