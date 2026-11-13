#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace RPG::Client { class GridFightEffectController; }
namespace System { class Action; }
namespace System { class Object; }
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class ParticleSystemRenderer; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_GRIDFIGHTUNLOCKPARTICLEEFFECT_CIHFGJDCHIA_OFFSET UNITYSDK_OFFSET(0x1CA03E60)
#define RPG_CLIENT_GRIDFIGHTUNLOCKPARTICLEEFFECT_CMADHBAPJMJ_OFFSET UNITYSDK_OFFSET(0x1CA039A0)
#define RPG_CLIENT_GRIDFIGHTUNLOCKPARTICLEEFFECT_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA040A0)
#define RPG_CLIENT_GRIDFIGHTUNLOCKPARTICLEEFFECT_DESPAWNED_OFFSET UNITYSDK_OFFSET(0x1CA03B80)
#define RPG_CLIENT_GRIDFIGHTUNLOCKPARTICLEEFFECT_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1CA03BD0)
#define RPG_CLIENT_GRIDFIGHTUNLOCKPARTICLEEFFECT_EBBGNFPNGFE_OFFSET UNITYSDK_OFFSET(0x1CA03F30)
#define RPG_CLIENT_GRIDFIGHTUNLOCKPARTICLEEFFECT_JDAGFHEPMHF_OFFSET UNITYSDK_OFFSET(0x1CA03C70)
#define RPG_CLIENT_GRIDFIGHTUNLOCKPARTICLEEFFECT_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1CA03F90)
#define RPG_CLIENT_GRIDFIGHTUNLOCKPARTICLEEFFECT_ONCREATE_OFFSET UNITYSDK_OFFSET(0x1CA039E0)
#define RPG_CLIENT_GRIDFIGHTUNLOCKPARTICLEEFFECT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1CA04050)
#define RPG_CLIENT_GRIDFIGHTUNLOCKPARTICLEEFFECT_SPAWNED_OFFSET UNITYSDK_OFFSET(0x1CA03B40)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightUnlockParticleEffect_TypeDefinitionIndex = 65942;

	class GridFightUnlockParticleEffect : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Il2CppArray<::UnityEngine::ParticleSystem*>* FCNHEMEPBMN; // 0x18
		::Il2CppArray<::UnityEngine::ParticleSystemRenderer*>* MOECGMPCECP; // 0x20
		::RPG::Client::GridFightEffectController* CPIIOIPAAKK; // 0x28
		::UnityEngine::Transform* MAHNABPLDIO; // 0x30
		::System::Action* DJOEDGEAPPP; // 0x38
		::System::Boolean OPIFOLJBMDA; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUNLOCKPARTICLEEFFECT_CTOR_OFFSET))(this);
		}

		::UnityEngine::Transform* CMADHBAPJMJ()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUNLOCKPARTICLEEFFECT_CMADHBAPJMJ_OFFSET))(this);
		}

		::System::Void OnCreate(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUNLOCKPARTICLEEFFECT_ONCREATE_OFFSET))(this, a1);
		}

		::System::Void Spawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUNLOCKPARTICLEEFFECT_SPAWNED_OFFSET))(this);
		}

		::System::Void Despawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUNLOCKPARTICLEEFFECT_DESPAWNED_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUNLOCKPARTICLEEFFECT_DISPOSE_OFFSET))(this);
		}

		::System::Void JDAGFHEPMHF(::RPG::Client::GridFightEffectController* a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightEffectController*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUNLOCKPARTICLEEFFECT_JDAGFHEPMHF_OFFSET))(this, a1, a2);
		}

		::System::Void CIHFGJDCHIA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUNLOCKPARTICLEEFFECT_CIHFGJDCHIA_OFFSET))(this);
		}

		::System::Void EBBGNFPNGFE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUNLOCKPARTICLEEFFECT_EBBGNFPNGFE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUNLOCKPARTICLEEFFECT_LATEUPDATE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUNLOCKPARTICLEEFFECT_ONDISABLE_OFFSET))(this);
		}

	};
}
