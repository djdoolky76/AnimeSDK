#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole::Config { class ConfigLevelResultPerforms; }

#define AIPMGHKNMJK_COPIDBEMEIE_OFFSET UNITYSDK_OFFSET(0x17DDB490)
#define AIPMGHKNMJK_CREATEOP_OFFSET UNITYSDK_OFFSET(0x17DDB2A0)
#define AIPMGHKNMJK_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x17DDB550)
#define AIPMGHKNMJK_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x17DDB200)
#define AIPMGHKNMJK__CTOR_OFFSET UNITYSDK_OFFSET(0x17DDB170)

inline static constexpr unsigned int AIPMGHKNMJK_TypeDefinitionIndex = 63290;

class AIPMGHKNMJK
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIPMGHKNMJK__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + AIPMGHKNMJK_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigLevelResultPerforms*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigLevelResultPerforms*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AIPMGHKNMJK_CREATEOP_OFFSET))(this);
	}

	::MoleMole::Config::ConfigLevelResultPerforms* COPIDBEMEIE()
	{
		return ((::MoleMole::Config::ConfigLevelResultPerforms*(*)(::PVOID))((::PBYTE)hIl2Cpp + AIPMGHKNMJK_COPIDBEMEIE_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + AIPMGHKNMJK_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}
};
