#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole::Config { class ConfigAutoBattleAccessoryEffect; }

#define KNOAAMJMBAA_COPIDBEMEIE_OFFSET UNITYSDK_OFFSET(0x129AB9F0)
#define KNOAAMJMBAA_CREATEOP_OFFSET UNITYSDK_OFFSET(0x129AB7B0)
#define KNOAAMJMBAA_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x129ABAB0)
#define KNOAAMJMBAA_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x129AB710)
#define KNOAAMJMBAA__CTOR_OFFSET UNITYSDK_OFFSET(0x129AB680)

inline static constexpr unsigned int KNOAAMJMBAA_TypeDefinitionIndex = 86951;

class KNOAAMJMBAA
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNOAAMJMBAA__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + KNOAAMJMBAA_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigAutoBattleAccessoryEffect*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigAutoBattleAccessoryEffect*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KNOAAMJMBAA_CREATEOP_OFFSET))(this);
	}

	::MoleMole::Config::ConfigAutoBattleAccessoryEffect* COPIDBEMEIE()
	{
		return ((::MoleMole::Config::ConfigAutoBattleAccessoryEffect*(*)(::PVOID))((::PBYTE)hIl2Cpp + KNOAAMJMBAA_COPIDBEMEIE_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + KNOAAMJMBAA_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}
};
