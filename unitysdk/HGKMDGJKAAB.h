#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole::Config { class ConfigGachaPerformanceLights; }

#define HGKMDGJKAAB_COPIDBEMEIE_OFFSET UNITYSDK_OFFSET(0x15DA8A20)
#define HGKMDGJKAAB_CREATEOP_OFFSET UNITYSDK_OFFSET(0x15DA8710)
#define HGKMDGJKAAB_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x15DA8950)
#define HGKMDGJKAAB_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x15DA8670)
#define HGKMDGJKAAB__CTOR_OFFSET UNITYSDK_OFFSET(0x15DA85E0)

inline static constexpr unsigned int HGKMDGJKAAB_TypeDefinitionIndex = 85843;

class HGKMDGJKAAB
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGKMDGJKAAB__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + HGKMDGJKAAB_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigGachaPerformanceLights*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigGachaPerformanceLights*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HGKMDGJKAAB_CREATEOP_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + HGKMDGJKAAB_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}

	::MoleMole::Config::ConfigGachaPerformanceLights* COPIDBEMEIE()
	{
		return ((::MoleMole::Config::ConfigGachaPerformanceLights*(*)(::PVOID))((::PBYTE)hIl2Cpp + HGKMDGJKAAB_COPIDBEMEIE_OFFSET))(this);
	}
};
