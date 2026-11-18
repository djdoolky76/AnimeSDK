#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/MoleMole/Config/AnimatorHitEffect.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole::Config { class ConfigDamageStaggerLevel; }

#define CPOBIHJJNAP_CREATEOP_OFFSET UNITYSDK_OFFSET(0x1688B040)
#define CPOBIHJJNAP_FJEPEMGLNGM_OFFSET UNITYSDK_OFFSET(0x1688B350)
#define CPOBIHJJNAP_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x1688B280)
#define CPOBIHJJNAP_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x1688AFA0)
#define CPOBIHJJNAP__CTOR_OFFSET UNITYSDK_OFFSET(0x1688AF10)

inline static constexpr unsigned int CPOBIHJJNAP_TypeDefinitionIndex = 85097;

class CPOBIHJJNAP
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPOBIHJJNAP__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + CPOBIHJJNAP_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigDamageStaggerLevel*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigDamageStaggerLevel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPOBIHJJNAP_CREATEOP_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + CPOBIHJJNAP_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Boolean FJEPEMGLNGM(::MoleMole::Config::AnimatorHitEffect OGIGOPHMJEP, ::System::Int32 LAIGJIOIELN, ::System::Int32& JIABCLMAFJK)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::AnimatorHitEffect, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + CPOBIHJJNAP_FJEPEMGLNGM_OFFSET))(this, OGIGOPHMJEP, LAIGJIOIELN, JIABCLMAFJK);
	}
};
