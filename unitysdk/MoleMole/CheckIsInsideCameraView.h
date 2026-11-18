#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Conditional.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

class GEIHCPAOKKK;
namespace MoleMole { class SharedGameEntity; }
namespace MoleMole::Battle { class Entity; }
namespace UnityEngine { class CapsuleCollider; }

#define MOLEMOLE_CHECKISINSIDECAMERAVIEW_ISINCAMERAVISIBLERANGE_OFFSET UNITYSDK_OFFSET(0x11E6F380)
#define MOLEMOLE_CHECKISINSIDECAMERAVIEW_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x11E6EF80)
#define MOLEMOLE_CHECKISINSIDECAMERAVIEW_ONSTART_OFFSET UNITYSDK_OFFSET(0x11E6F140)
#define MOLEMOLE_CHECKISINSIDECAMERAVIEW_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x11E6F200)
#define MOLEMOLE_CHECKISINSIDECAMERAVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0x11E6F420)
#define MOLEMOLE_CHECKISINSIDECAMERAVIEW___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x11E6F4B0)
#define MOLEMOLE_CHECKISINSIDECAMERAVIEW___BASE_ONSTART_OFFSET UNITYSDK_OFFSET(0x11E6F540)
#define MOLEMOLE_CHECKISINSIDECAMERAVIEW___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x11E6F5D0)

namespace MoleMole
{
	inline static constexpr unsigned int CheckIsInsideCameraView_TypeDefinitionIndex = 53100;

	class CheckIsInsideCameraView : public ::BehaviorDesigner::Runtime::Tasks::Conditional
	{
	public:
		::MoleMole::SharedGameEntity* SharedOwnerEntity; // 0x50
		::UnityEngine::CapsuleCollider* collider; // 0x58
		::MoleMole::Battle::Entity* ownerEntity; // 0x60
		::GEIHCPAOKKK* modelComponent; // 0x68
		::System::Single CheckDistance; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKISINSIDECAMERAVIEW__CTOR_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKISINSIDECAMERAVIEW_ONAWAKE_OFFSET))(this);
		}

		::System::Void OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKISINSIDECAMERAVIEW_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKISINSIDECAMERAVIEW_ONUPDATE_OFFSET))(this);
		}

		::System::Boolean IsInCameraVisibleRange()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKISINSIDECAMERAVIEW_ISINCAMERAVISIBLERANGE_OFFSET))(this);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKISINSIDECAMERAVIEW___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKISINSIDECAMERAVIEW___BASE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKISINSIDECAMERAVIEW___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
