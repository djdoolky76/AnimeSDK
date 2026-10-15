#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/MonoPushDownObject_MotionCurve.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client::Prop { class MonoPushDownObject_FDPFJHGNGIJ; }
namespace RPG::GameCore { class GameEntity; }
namespace UnityEngine { class CapsuleCollider; }
namespace UnityEngine { class Collider; }

#define RPG_CLIENT_PROP_MONOPUSHDOWNOBJECT_AIBMGHMKOOL_OFFSET UNITYSDK_OFFSET(0xDD221D0)
#define RPG_CLIENT_PROP_MONOPUSHDOWNOBJECT_CCTOR_OFFSET UNITYSDK_OFFSET(0xDD227D0)
#define RPG_CLIENT_PROP_MONOPUSHDOWNOBJECT_CTOR_OFFSET UNITYSDK_OFFSET(0xDD22790)
#define RPG_CLIENT_PROP_MONOPUSHDOWNOBJECT_DKEDPMCGKJB_OFFSET UNITYSDK_OFFSET(0xDD22160)
#define RPG_CLIENT_PROP_MONOPUSHDOWNOBJECT_INIT_OFFSET UNITYSDK_OFFSET(0xDD21070)
#define RPG_CLIENT_PROP_MONOPUSHDOWNOBJECT_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xDD21180)
#define RPG_CLIENT_PROP_MONOPUSHDOWNOBJECT_MJLLHMGLOHL_OFFSET UNITYSDK_OFFSET(0xDD21E30)
#define RPG_CLIENT_PROP_MONOPUSHDOWNOBJECT_PUSH_OFFSET UNITYSDK_OFFSET(0xDD21120)
#define RPG_CLIENT_PROP_MONOPUSHDOWNOBJECT_RAYCAST_OFFSET UNITYSDK_OFFSET(0xDD217C0)
#define RPG_CLIENT_PROP_MONOPUSHDOWNOBJECT_RESET_OFFSET UNITYSDK_OFFSET(0xDD210C0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int MonoPushDownObject_TypeDefinitionIndex = 78685;

	class MonoPushDownObject : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Vector3 forward; // 0x18
		::UnityEngine::Vector3 right; // 0x24
		::RPG::Client::Prop::MonoPushDownObject_MotionCurve locationCurve; // 0x30
		::RPG::Client::Prop::MonoPushDownObject_MotionCurve rotationCurve; // 0x40
		::System::Single downTimePoint; // 0x50
		::System::Single downGravity; // 0x54
		::System::Single maxDownSpeed; // 0x58
		::System::Byte _padding0[0x4];
		::UnityEngine::CapsuleCollider* rootCollider; // 0x60
		::UnityEngine::LayerMask raycastLayers; // 0x68
		::System::Byte _padding1[0x4];
		::RPG::GameCore::GameEntity* CFKHNPGEAJA; // 0x70
		::System::Boolean PKLPDEEKKED; // 0x78
		::System::Boolean CIJGDENIFFF; // 0x79
		::System::Byte _padding2[0x2];
		::System::Single LKDEMNFIHHM; // 0x7C
		::System::Single MLKGEFGBHIE; // 0x80
		::System::Byte _padding3[0x4];
		::RPG::Client::Prop::MonoPushDownObject_FDPFJHGNGIJ* MPKAFEJFNKN; // 0x88
		static ::Il2CppArray<::UnityEngine::RaycastHit>** StaticGet_HLHDLNNKFMP()
		{
			return (::Il2CppArray<::UnityEngine::RaycastHit>**)UnitySDK::FromName("RPG.Client.Prop", "MonoPushDownObject")->GetStaticField(0x44490);
		}

		static ::Il2CppArray<::UnityEngine::Collider*>** StaticGet_IKADOAGOFEM()
		{
			return (::Il2CppArray<::UnityEngine::Collider*>**)UnitySDK::FromName("RPG.Client.Prop", "MonoPushDownObject")->GetStaticField(0x44498);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_MONOPUSHDOWNOBJECT_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_MONOPUSHDOWNOBJECT_CCTOR_OFFSET))();
		}

		::System::Void Init(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_MONOPUSHDOWNOBJECT_INIT_OFFSET))(this, a1);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_MONOPUSHDOWNOBJECT_RESET_OFFSET))(this);
		}

		::System::Void Push(::RPG::Client::Prop::MonoPushDownObject_FDPFJHGNGIJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::MonoPushDownObject_FDPFJHGNGIJ*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_MONOPUSHDOWNOBJECT_PUSH_OFFSET))(this, a1);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_MONOPUSHDOWNOBJECT_LATEUPDATE_OFFSET))(this);
		}

		::System::Void Raycast(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_MONOPUSHDOWNOBJECT_RAYCAST_OFFSET))(this, a1);
		}

		::System::Boolean MJLLHMGLOHL(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::RPG::GameCore::GameEntity* a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_MONOPUSHDOWNOBJECT_MJLLHMGLOHL_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean AIBMGHMKOOL(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::RPG::GameCore::GameEntity* a4, ::System::Single a5)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::RPG::GameCore::GameEntity*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_MONOPUSHDOWNOBJECT_AIBMGHMKOOL_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void DKEDPMCGKJB(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_MONOPUSHDOWNOBJECT_DKEDPMCGKJB_OFFSET))(this, a1);
		}

	};
}
