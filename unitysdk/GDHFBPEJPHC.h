#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
namespace RPG::Client { class Effect_FlareOcclusion; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class MonoBehaviour; }
namespace UnityEngine { class ParticleSystem; }

#define GDHFBPEJPHC_CTOR_OFFSET UNITYSDK_OFFSET(0x1599CDD0)
#define GDHFBPEJPHC_FHPAOJGFHHE_OFFSET UNITYSDK_OFFSET(0x1599CD90)
#define GDHFBPEJPHC_HBAMMNHOAED_OFFSET UNITYSDK_OFFSET(0x1599C6F0)
#define GDHFBPEJPHC_HPNDIIPEFLJ_OFFSET UNITYSDK_OFFSET(0x1599CD20)
#define GDHFBPEJPHC_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x1599C680)

	class GDHFBPEJPHC : public ::RPG::Client::BehaviorBase
	{
	public:
		::UnityEngine::Camera* EKLHELJMIKG; // 0x18
		::UnityEngine::ParticleSystem* NBJDDOGJDBP; // 0x20
		::System::Boolean EMEKMDPDPJG; // 0x28
		::System::Boolean JNKCOMNDMAD; // 0x29
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDHFBPEJPHC_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::UnityEngine::MonoBehaviour* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + GDHFBPEJPHC_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void HBAMMNHOAED()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDHFBPEJPHC_HBAMMNHOAED_OFFSET))(this);
		}

		::System::Void FHPAOJGFHHE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDHFBPEJPHC_FHPAOJGFHHE_OFFSET))(this);
		}

		::RPG::Client::Effect_FlareOcclusion* HPNDIIPEFLJ()
		{
			return ((::RPG::Client::Effect_FlareOcclusion*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDHFBPEJPHC_HPNDIIPEFLJ_OFFSET))(this);
		}

	};
