#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EffectSimulate/IEffectSimulate.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class ParticleSystem; }

#define MOLEMOLE_EFFECTSIMULATE_ESPARTICLERENDOMSEEDFOLLOW_DMDAJJOEKJC_OFFSET UNITYSDK_OFFSET(0x118FB380)
#define MOLEMOLE_EFFECTSIMULATE_ESPARTICLERENDOMSEEDFOLLOW_LIJKGJHHBMK_OFFSET UNITYSDK_OFFSET(0x118FB100)
#define MOLEMOLE_EFFECTSIMULATE_ESPARTICLERENDOMSEEDFOLLOW_MLOKIDFFEPH_OFFSET UNITYSDK_OFFSET(0x118FB630)
#define MOLEMOLE_EFFECTSIMULATE_ESPARTICLERENDOMSEEDFOLLOW_PKOOKCIHDHF_OFFSET UNITYSDK_OFFSET(0x118FAD50)
#define MOLEMOLE_EFFECTSIMULATE_ESPARTICLERENDOMSEEDFOLLOW__CTOR_OFFSET UNITYSDK_OFFSET(0x118FB2E0)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESParticleRendomSeedFollow_TypeDefinitionIndex = 55002;

	class ESParticleRendomSeedFollow : public ::MoleMole::EffectSimulate::IEffectSimulate
	{
	public:
		// static const ::System::Int32 k_MaxRandInt = 0x2710; // 0x0
		::System::Collections::Generic::List_1<::UnityEngine::ParticleSystem*>* controlPSs; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPARTICLERENDOMSEEDFOLLOW__CTOR_OFFSET))(this);
		}

		::System::Void PKOOKCIHDHF(::UnityEngine::GameObject* NJOAJLDJCCJ)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPARTICLERENDOMSEEDFOLLOW_PKOOKCIHDHF_OFFSET))(this, NJOAJLDJCCJ);
		}

		::System::Void LIJKGJHHBMK(::UnityEngine::ParticleSystem* FCOHNKGKHAD, ::System::UInt32 LOPMOALAPNE, ::System::Boolean CKCNBIAHBCD)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem*, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPARTICLERENDOMSEEDFOLLOW_LIJKGJHHBMK_OFFSET))(this, FCOHNKGKHAD, LOPMOALAPNE, CKCNBIAHBCD);
		}

		::System::Collections::Generic::List_1<::UnityEngine::ParticleSystem*>* DMDAJJOEKJC()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::ParticleSystem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPARTICLERENDOMSEEDFOLLOW_DMDAJJOEKJC_OFFSET))(this);
		}

		::System::Void MLOKIDFFEPH(::UnityEngine::GameObject* MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPARTICLERENDOMSEEDFOLLOW_MLOKIDFFEPH_OFFSET))(this, MIALFKCCCPI);
		}
	};
}
