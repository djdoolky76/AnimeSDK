#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AENDIENHBKL.h"
#include "unitysdk/UnityEngine/ParticleSystem_TextureSheetAnimationModule.h"

namespace MoleMole::Config { class HollowChessboardParticleModuleConfig; }
namespace UnityEngine { class ParticleSystem; }

#define GINALBGHNFN_EKJAPNEIJMA_OFFSET UNITYSDK_OFFSET(0x179F3680)
#define GINALBGHNFN_IEMADDDNGNJ_OFFSET UNITYSDK_OFFSET(0x179F3670)
#define GINALBGHNFN__CTOR_OFFSET UNITYSDK_OFFSET(0x179F36F0)

inline static constexpr unsigned int GINALBGHNFN_TypeDefinitionIndex = 75556;

class GINALBGHNFN : public ::AENDIENHBKL
{
public:
	::UnityEngine::ParticleSystem_TextureSheetAnimationModule FEHFAEJPOOD; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GINALBGHNFN__CTOR_OFFSET))(this);
	}

	::System::Boolean IEMADDDNGNJ()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GINALBGHNFN_IEMADDDNGNJ_OFFSET))(this);
	}

	::AENDIENHBKL* EKJAPNEIJMA(::MoleMole::Config::HollowChessboardParticleModuleConfig* DFMKILICPFB, ::UnityEngine::ParticleSystem* JNDDJMAHNAI)
	{
		return ((::AENDIENHBKL*(*)(::PVOID, ::MoleMole::Config::HollowChessboardParticleModuleConfig*, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + GINALBGHNFN_EKJAPNEIJMA_OFFSET))(this, DFMKILICPFB, JNDDJMAHNAI);
	}
};
