#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AENDIENHBKL.h"
#include "unitysdk/UnityEngine/ParticleSystem_MainModule.h"

namespace MoleMole::Config { class HollowChessboardParticleModuleConfig; }
namespace UnityEngine { class ParticleSystem; }

#define KNPOHIDOMEG_EKJAPNEIJMA_OFFSET UNITYSDK_OFFSET(0x1791A300)
#define KNPOHIDOMEG_FDAACIJBDFL_OFFSET UNITYSDK_OFFSET(0x1791A480)
#define KNPOHIDOMEG_GFBGFPECBNG_OFFSET UNITYSDK_OFFSET(0x1791A4B0)
#define KNPOHIDOMEG_IEMADDDNGNJ_OFFSET UNITYSDK_OFFSET(0x1791A2F0)
#define KNPOHIDOMEG_MDOGCLIIAJA_OFFSET UNITYSDK_OFFSET(0x1791A490)
#define KNPOHIDOMEG_NPBMEDBHFHP_OFFSET UNITYSDK_OFFSET(0x1791A4A0)
#define KNPOHIDOMEG__CTOR_OFFSET UNITYSDK_OFFSET(0x1791A430)

inline static constexpr unsigned int KNPOHIDOMEG_TypeDefinitionIndex = 84395;

class KNPOHIDOMEG : public ::AENDIENHBKL
{
public:
	::UnityEngine::ParticleSystem_MainModule FEHFAEJPOOD; // 0x20
	::System::Boolean _APCPAKAGDBN_k__BackingField; // 0x28
	::System::Boolean _OLPFEBHPKFJ_k__BackingField; // 0x29

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNPOHIDOMEG__CTOR_OFFSET))(this);
	}

	::System::Boolean IEMADDDNGNJ()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KNPOHIDOMEG_IEMADDDNGNJ_OFFSET))(this);
	}

	::AENDIENHBKL* EKJAPNEIJMA(::MoleMole::Config::HollowChessboardParticleModuleConfig* DFMKILICPFB, ::UnityEngine::ParticleSystem* JNDDJMAHNAI)
	{
		return ((::AENDIENHBKL*(*)(::PVOID, ::MoleMole::Config::HollowChessboardParticleModuleConfig*, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + KNPOHIDOMEG_EKJAPNEIJMA_OFFSET))(this, DFMKILICPFB, JNDDJMAHNAI);
	}

	::System::Boolean FDAACIJBDFL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KNPOHIDOMEG_FDAACIJBDFL_OFFSET))(this);
	}

	::System::Void MDOGCLIIAJA(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KNPOHIDOMEG_MDOGCLIIAJA_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void NPBMEDBHFHP(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KNPOHIDOMEG_NPBMEDBHFHP_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean GFBGFPECBNG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KNPOHIDOMEG_GFBGFPECBNG_OFFSET))(this);
	}
};
