#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Quaternion.h"
class FICJADOJGMF;
class KFELGAIGHAP;
namespace System { class String; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class CapsuleCollider; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_WOLFBROGUNPROJECTILE_AAFFGPMIAMM_OFFSET UNITYSDK_OFFSET(0xE47D340)
#define RPG_CLIENT_WOLFBROGUNPROJECTILE_AIBMGHMKOOL_OFFSET UNITYSDK_OFFSET(0xE47CCB0)
#define RPG_CLIENT_WOLFBROGUNPROJECTILE_CCTOR_OFFSET UNITYSDK_OFFSET(0xE47D400)
#define RPG_CLIENT_WOLFBROGUNPROJECTILE_CTOR_OFFSET UNITYSDK_OFFSET(0xE47BA10)
#define RPG_CLIENT_WOLFBROGUNPROJECTILE_FIRE_OFFSET UNITYSDK_OFFSET(0xE47BCE0)
#define RPG_CLIENT_WOLFBROGUNPROJECTILE_GET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0xE47D390)
#define RPG_CLIENT_WOLFBROGUNPROJECTILE_GET_ISFIRED_OFFSET UNITYSDK_OFFSET(0xE47D3A0)
#define RPG_CLIENT_WOLFBROGUNPROJECTILE_GET_ISHITTED_OFFSET UNITYSDK_OFFSET(0xE47D3B0)
#define RPG_CLIENT_WOLFBROGUNPROJECTILE_GET_MOVEFORWARD_OFFSET UNITYSDK_OFFSET(0xE47B740)
#define RPG_CLIENT_WOLFBROGUNPROJECTILE_GET_ONHITCALLBACK_OFFSET UNITYSDK_OFFSET(0xE47D3E0)
#define RPG_CLIENT_WOLFBROGUNPROJECTILE_GET_ROADMAP_OFFSET UNITYSDK_OFFSET(0xE47D3C0)
#define RPG_CLIENT_WOLFBROGUNPROJECTILE_GKOIKCBJICD_OFFSET UNITYSDK_OFFSET(0xE47B190)
#define RPG_CLIENT_WOLFBROGUNPROJECTILE_GMLMAJOCAGJ_OFFSET UNITYSDK_OFFSET(0xE47D300)
#define RPG_CLIENT_WOLFBROGUNPROJECTILE_MJLLHMGLOHL_OFFSET UNITYSDK_OFFSET(0xE47C780)
#define RPG_CLIENT_WOLFBROGUNPROJECTILE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xE47BBA0)
#define RPG_CLIENT_WOLFBROGUNPROJECTILE_ONENABLE_OFFSET UNITYSDK_OFFSET(0xE47BB40)
#define RPG_CLIENT_WOLFBROGUNPROJECTILE_RAYCAST_OFFSET UNITYSDK_OFFSET(0xE47C100)
#define RPG_CLIENT_WOLFBROGUNPROJECTILE_RESET_OFFSET UNITYSDK_OFFSET(0xE47BA30)
#define RPG_CLIENT_WOLFBROGUNPROJECTILE_SET_ONHITCALLBACK_OFFSET UNITYSDK_OFFSET(0xE47D3F0)
#define RPG_CLIENT_WOLFBROGUNPROJECTILE_SET_ROADMAP_OFFSET UNITYSDK_OFFSET(0xE47D3D0)
#define RPG_CLIENT_WOLFBROGUNPROJECTILE_TICK_OFFSET UNITYSDK_OFFSET(0xE47BFC0)

namespace RPG::Client
{
	inline static constexpr unsigned int WolfBroGunProjectile_TypeDefinitionIndex = 68764;

	class WolfBroGunProjectile : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Animator* animator; // 0x18
		::UnityEngine::CapsuleCollider* collider; // 0x20
		::UnityEngine::LayerMask raycastLayers; // 0x28
		::UnityEngine::Vector3 forward; // 0x2C
		::System::String* effectPath; // 0x38
		::System::Single speed; // 0x40
		::System::Single boomRange; // 0x44
		::System::String* hitEffectPath; // 0x48
		::FICJADOJGMF* _RoadMap_k__BackingField; // 0x50
		::KFELGAIGHAP* _OnHitCallback_k__BackingField; // 0x58
		::System::String* IJMGEMMNNPI; // 0x60
		::System::Boolean MABFMALCGKF; // 0x68
		::System::Boolean HPEICGKCODK; // 0x69
		::System::Boolean ELMIMNDCKKJ; // 0x6A
		::System::Byte _padding0[0x5];
		::UnityEngine::Transform* PDJGEDNLBKJ; // 0x70
		static ::Il2CppArray<::UnityEngine::RaycastHit>** StaticGet_HLHDLNNKFMP()
		{
			return (::Il2CppArray<::UnityEngine::RaycastHit>**)UnitySDK::FromName("RPG.Client", "WolfBroGunProjectile")->GetStaticField(0x50240);
		}

		static ::Il2CppArray<::UnityEngine::Collider*>** StaticGet_IKADOAGOFEM()
		{
			return (::Il2CppArray<::UnityEngine::Collider*>**)UnitySDK::FromName("RPG.Client", "WolfBroGunProjectile")->GetStaticField(0x50248);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPROJECTILE_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPROJECTILE_CCTOR_OFFSET))();
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPROJECTILE_RESET_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPROJECTILE_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPROJECTILE_ONDISABLE_OFFSET))(this);
		}

		::System::Void Fire(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPROJECTILE_FIRE_OFFSET))(this, a1, a2);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPROJECTILE_TICK_OFFSET))(this, a1);
		}

		::System::Void Raycast(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPROJECTILE_RAYCAST_OFFSET))(this, a1);
		}

		::System::Void GMLMAJOCAGJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPROJECTILE_GMLMAJOCAGJ_OFFSET))(this);
		}

		::System::Void GKOIKCBJICD(::UnityEngine::Collider* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPROJECTILE_GKOIKCBJICD_OFFSET))(this, a1, a2);
		}

		::System::Boolean AAFFGPMIAMM(::UnityEngine::Collider* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPROJECTILE_AAFFGPMIAMM_OFFSET))(this, a1);
		}

		::System::Boolean MJLLHMGLOHL(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPROJECTILE_MJLLHMGLOHL_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean AIBMGHMKOOL(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPROJECTILE_AIBMGHMKOOL_OFFSET))(this, a1, a2, a3, a4);
		}

		::UnityEngine::Vector3 get_MoveForward()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPROJECTILE_GET_MOVEFORWARD_OFFSET))(this);
		}

		::System::Boolean get_IsFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPROJECTILE_GET_ISFINISHED_OFFSET))(this);
		}

		::System::Boolean get_IsFired()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPROJECTILE_GET_ISFIRED_OFFSET))(this);
		}

		::System::Boolean get_IsHitted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPROJECTILE_GET_ISHITTED_OFFSET))(this);
		}

		::FICJADOJGMF* get_RoadMap()
		{
			return ((::FICJADOJGMF*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPROJECTILE_GET_ROADMAP_OFFSET))(this);
		}

		::System::Void set_RoadMap(::FICJADOJGMF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FICJADOJGMF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPROJECTILE_SET_ROADMAP_OFFSET))(this, a1);
		}

		::KFELGAIGHAP* get_OnHitCallback()
		{
			return ((::KFELGAIGHAP*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPROJECTILE_GET_ONHITCALLBACK_OFFSET))(this);
		}

		::System::Void set_OnHitCallback(::KFELGAIGHAP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KFELGAIGHAP*))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPROJECTILE_SET_ONHITCALLBACK_OFFSET))(this, a1);
		}

	};
}
