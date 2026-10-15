#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/WolfBroGunProjectile.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client { class MonoWolfBroCustomData; }
namespace System { class String; }
namespace UnityEngine { class Collider; }

#define RPG_CLIENT_WOLFBROGUNTARGETPROJECTILE_AAFFGPMIAMM_OFFSET UNITYSDK_OFFSET(0xE4733C0)
#define RPG_CLIENT_WOLFBROGUNTARGETPROJECTILE_BGKIEKNOAJD_OFFSET UNITYSDK_OFFSET(0xE4736E0)
#define RPG_CLIENT_WOLFBROGUNTARGETPROJECTILE_CTOR_OFFSET UNITYSDK_OFFSET(0xE474130)
#define RPG_CLIENT_WOLFBROGUNTARGETPROJECTILE_GKOIKCBJICD_1_OFFSET UNITYSDK_OFFSET(0xE4735E0)
#define RPG_CLIENT_WOLFBROGUNTARGETPROJECTILE_GKOIKCBJICD_OFFSET UNITYSDK_OFFSET(0xE473500)
#define RPG_CLIENT_WOLFBROGUNTARGETPROJECTILE_GMLMAJOCAGJ_OFFSET UNITYSDK_OFFSET(0xE4729C0)
#define RPG_CLIENT_WOLFBROGUNTARGETPROJECTILE_GOLCDGNLEKL_OFFSET UNITYSDK_OFFSET(0xE4730F0)
#define RPG_CLIENT_WOLFBROGUNTARGETPROJECTILE_NNPCJBDOECC_OFFSET UNITYSDK_OFFSET(0xE473B20)
#define RPG_CLIENT_WOLFBROGUNTARGETPROJECTILE_TESTTARGET_OFFSET UNITYSDK_OFFSET(0xE472BF0)
#define RPG_CLIENT_WOLFBROGUNTARGETPROJECTILE_TICK_OFFSET UNITYSDK_OFFSET(0xE472B60)

namespace RPG::Client
{
	inline static constexpr unsigned int WolfBroGunTargetProjectile_TypeDefinitionIndex = 68766;

	class WolfBroGunTargetProjectile : public ::RPG::Client::WolfBroGunProjectile
	{
	public:
		::System::Single delScore; // 0x78
		::System::Single aliveTime; // 0x7C
		::System::Boolean destroyOnHit; // 0x80
		::System::Byte _padding0[0x7];
		::System::String* onHitCustomString; // 0x88
		::System::String* fireAudioEvent; // 0x90
		::UnityEngine::LayerMask targetLayers; // 0x98
		::System::Single FAJIIBBJJEP; // 0x9C
		::UnityEngine::Vector3 MGOGCAONHIN; // 0xA0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNTARGETPROJECTILE_CTOR_OFFSET))(this);
		}

		::System::Void GMLMAJOCAGJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNTARGETPROJECTILE_GMLMAJOCAGJ_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNTARGETPROJECTILE_TICK_OFFSET))(this, a1);
		}

		::System::Void GOLCDGNLEKL(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNTARGETPROJECTILE_GOLCDGNLEKL_OFFSET))(this, a1);
		}

		::System::Boolean AAFFGPMIAMM(::UnityEngine::Collider* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNTARGETPROJECTILE_AAFFGPMIAMM_OFFSET))(this, a1);
		}

		::System::Void GKOIKCBJICD(::UnityEngine::Collider* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNTARGETPROJECTILE_GKOIKCBJICD_OFFSET))(this, a1, a2);
		}

		::System::Void GKOIKCBJICD_1(::RPG::Client::MonoWolfBroCustomData* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoWolfBroCustomData*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNTARGETPROJECTILE_GKOIKCBJICD_1_OFFSET))(this, a1, a2);
		}

		::System::Void TestTarget()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNTARGETPROJECTILE_TESTTARGET_OFFSET))(this);
		}

		::System::Void BGKIEKNOAJD(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNTARGETPROJECTILE_BGKIEKNOAJD_OFFSET))(this, a1, a2, a3);
		}

		::System::Void NNPCJBDOECC(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNTARGETPROJECTILE_NNPCJBDOECC_OFFSET))(this, a1, a2, a3, a4);
		}

	};
}
