#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ParadoxNotion/CollisionTypes.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/ParadoxNotion/EventData_1.h"

namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace System { class String; }
namespace UnityEngine { class Collision2D; }
namespace UnityEngine { class GameObject; }

#define NODECANVAS_TASKS_CONDITIONS_CHECKCOLLISION2D_RIGIDBODY_GET_INFO_OFFSET UNITYSDK_OFFSET(0x1EA68110)
#define NODECANVAS_TASKS_CONDITIONS_CHECKCOLLISION2D_RIGIDBODY_ONCHECK_OFFSET UNITYSDK_OFFSET(0x1EA681C0)
#define NODECANVAS_TASKS_CONDITIONS_CHECKCOLLISION2D_RIGIDBODY_ONCOLLISIONENTER2D_OFFSET UNITYSDK_OFFSET(0x1EA68500)
#define NODECANVAS_TASKS_CONDITIONS_CHECKCOLLISION2D_RIGIDBODY_ONCOLLISIONEXIT2D_OFFSET UNITYSDK_OFFSET(0x1EA68870)
#define NODECANVAS_TASKS_CONDITIONS_CHECKCOLLISION2D_RIGIDBODY_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1EA68370)
#define NODECANVAS_TASKS_CONDITIONS_CHECKCOLLISION2D_RIGIDBODY_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1EA681E0)
#define NODECANVAS_TASKS_CONDITIONS_CHECKCOLLISION2D_RIGIDBODY__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA68A20)

namespace NodeCanvas::Tasks::Conditions
{
	inline static constexpr unsigned int CheckCollision2D_Rigidbody_TypeDefinitionIndex = 30891;

	class CheckCollision2D_Rigidbody
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<::UnityEngine::GameObject*>* saveGameObjectAs; // 0x60
		::NodeCanvas::Framework::BBParameter_1<::UnityEngine::Vector3>* saveContactNormal; // 0x68
		::System::String* objectTag; // 0x70
		::NodeCanvas::Framework::BBParameter_1<::UnityEngine::Vector3>* saveContactPoint; // 0x78
		::System::Boolean specifiedTagOnly; // 0x80
		::System::Boolean stay; // 0x81
		::System::Byte _padding0[0x2];
		::ParadoxNotion::CollisionTypes checkType; // 0x84

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKCOLLISION2D_RIGIDBODY__CTOR_OFFSET))(this);
		}

		::System::String* get_info()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKCOLLISION2D_RIGIDBODY_GET_INFO_OFFSET))(this);
		}

		::System::Boolean OnCheck()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKCOLLISION2D_RIGIDBODY_ONCHECK_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKCOLLISION2D_RIGIDBODY_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKCOLLISION2D_RIGIDBODY_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnCollisionEnter2D(::ParadoxNotion::EventData_1<::UnityEngine::Collision2D*> data)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::EventData_1<::UnityEngine::Collision2D*>))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKCOLLISION2D_RIGIDBODY_ONCOLLISIONENTER2D_OFFSET))(this, data);
		}

		::System::Void OnCollisionExit2D(::ParadoxNotion::EventData_1<::UnityEngine::Collision2D*> data)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::EventData_1<::UnityEngine::Collision2D*>))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKCOLLISION2D_RIGIDBODY_ONCOLLISIONEXIT2D_OFFSET))(this, data);
		}
	};
}
