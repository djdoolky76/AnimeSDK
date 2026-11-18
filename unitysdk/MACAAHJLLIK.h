#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole::Config { class ConfigRabGame; }

#define MACAAHJLLIK_COPIDBEMEIE_OFFSET UNITYSDK_OFFSET(0x13D11A80)
#define MACAAHJLLIK_CREATEOP_OFFSET UNITYSDK_OFFSET(0x13D11950)
#define MACAAHJLLIK_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x13D11B40)
#define MACAAHJLLIK_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x13D118B0)
#define MACAAHJLLIK__CTOR_OFFSET UNITYSDK_OFFSET(0x13D11820)

inline static constexpr unsigned int MACAAHJLLIK_TypeDefinitionIndex = 49943;

class MACAAHJLLIK
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MACAAHJLLIK__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + MACAAHJLLIK_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigRabGame*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigRabGame*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MACAAHJLLIK_CREATEOP_OFFSET))(this);
	}

	::MoleMole::Config::ConfigRabGame* COPIDBEMEIE()
	{
		return ((::MoleMole::Config::ConfigRabGame*(*)(::PVOID))((::PBYTE)hIl2Cpp + MACAAHJLLIK_COPIDBEMEIE_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + MACAAHJLLIK_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}
};
