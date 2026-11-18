#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole::Config { class ConfigZipLineMap; }

#define INEHCLLKDDK_CREATEOP_OFFSET UNITYSDK_OFFSET(0x13822570)
#define INEHCLLKDDK_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x138227B0)
#define INEHCLLKDDK_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0x13822880)
#define INEHCLLKDDK_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x138224D0)
#define INEHCLLKDDK__CTOR_OFFSET UNITYSDK_OFFSET(0x13822440)

inline static constexpr unsigned int INEHCLLKDDK_TypeDefinitionIndex = 84464;

class INEHCLLKDDK
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INEHCLLKDDK__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + INEHCLLKDDK_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigZipLineMap*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigZipLineMap*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + INEHCLLKDDK_CREATEOP_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + INEHCLLKDDK_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}

	::MoleMole::Config::ConfigZipLineMap* KGNEJKNNODJ()
	{
		return ((::MoleMole::Config::ConfigZipLineMap*(*)(::PVOID))((::PBYTE)hIl2Cpp + INEHCLLKDDK_KGNEJKNNODJ_OFFSET))(this);
	}
};
