#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AENDIENHBKL.h"

class MBJCLLBMALO;
namespace MoleMole::Config { class HollowChessboardParticleModuleConfig; }
namespace MoleMole::Config { class HollowParticleTransformModuleConfig; }
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class Transform; }

#define KPHHKNNDIPM_DCPGAICJDBB_1_OFFSET UNITYSDK_OFFSET(0x129AF300)
#define KPHHKNNDIPM_DCPGAICJDBB_OFFSET UNITYSDK_OFFSET(0x129AF1C0)
#define KPHHKNNDIPM_EKJAPNEIJMA_OFFSET UNITYSDK_OFFSET(0x129AF0B0)
#define KPHHKNNDIPM_HJLENJDEGNO_OFFSET UNITYSDK_OFFSET(0x129AF3B0)
#define KPHHKNNDIPM_IEMADDDNGNJ_OFFSET UNITYSDK_OFFSET(0x129AF0A0)
#define KPHHKNNDIPM_OFLJJMFFAHF_OFFSET UNITYSDK_OFFSET(0x129AF3A0)
#define KPHHKNNDIPM__CTOR_OFFSET UNITYSDK_OFFSET(0x129AF170)

inline static constexpr unsigned int KPHHKNNDIPM_TypeDefinitionIndex = 74327;

class KPHHKNNDIPM : public ::AENDIENHBKL
{
public:
	::MoleMole::Config::HollowParticleTransformModuleConfig* DFMKILICPFB; // 0x20
	::UnityEngine::Transform* _HAGKJHJODKM_k__BackingField; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPHHKNNDIPM__CTOR_OFFSET))(this);
	}

	::System::Boolean IEMADDDNGNJ()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KPHHKNNDIPM_IEMADDDNGNJ_OFFSET))(this);
	}

	::AENDIENHBKL* EKJAPNEIJMA(::MoleMole::Config::HollowChessboardParticleModuleConfig* DFMKILICPFB, ::UnityEngine::ParticleSystem* JNDDJMAHNAI)
	{
		return ((::AENDIENHBKL*(*)(::PVOID, ::MoleMole::Config::HollowChessboardParticleModuleConfig*, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + KPHHKNNDIPM_EKJAPNEIJMA_OFFSET))(this, DFMKILICPFB, JNDDJMAHNAI);
	}

	::System::Void DCPGAICJDBB(::MBJCLLBMALO* GKBJOPJKCLB)
	{
		return ((::System::Void(*)(::PVOID, ::MBJCLLBMALO*))((::PBYTE)hIl2Cpp + KPHHKNNDIPM_DCPGAICJDBB_OFFSET))(this, GKBJOPJKCLB);
	}

	::System::Void DCPGAICJDBB_1(::UnityEngine::Transform* CDPNHJANCEG)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + KPHHKNNDIPM_DCPGAICJDBB_1_OFFSET))(this, CDPNHJANCEG);
	}

	::System::Void OFLJJMFFAHF(::UnityEngine::Transform* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + KPHHKNNDIPM_OFLJJMFFAHF_OFFSET))(this, EGEGIMGMJHN);
	}

	::UnityEngine::Transform* HJLENJDEGNO()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPHHKNNDIPM_HJLENJDEGNO_OFFSET))(this);
	}
};
