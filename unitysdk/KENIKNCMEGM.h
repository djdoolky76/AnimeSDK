#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole::Config { class ConfigTurnBaseBattle; }

#define KENIKNCMEGM_CREATEOP_OFFSET UNITYSDK_OFFSET(0x178FACB0)
#define KENIKNCMEGM_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x178FAEF0)
#define KENIKNCMEGM_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0x178FAFC0)
#define KENIKNCMEGM_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x178FAC10)
#define KENIKNCMEGM__CTOR_OFFSET UNITYSDK_OFFSET(0x178FAB80)

inline static constexpr unsigned int KENIKNCMEGM_TypeDefinitionIndex = 51172;

class KENIKNCMEGM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KENIKNCMEGM__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + KENIKNCMEGM_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigTurnBaseBattle*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigTurnBaseBattle*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KENIKNCMEGM_CREATEOP_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + KENIKNCMEGM_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}

	::MoleMole::Config::ConfigTurnBaseBattle* KGNEJKNNODJ()
	{
		return ((::MoleMole::Config::ConfigTurnBaseBattle*(*)(::PVOID))((::PBYTE)hIl2Cpp + KENIKNCMEGM_KGNEJKNNODJ_OFFSET))(this);
	}
};
