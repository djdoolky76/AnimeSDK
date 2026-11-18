#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole::Config { class ConfigHack; }

#define ANODDHDMICG_CREATEOP_OFFSET UNITYSDK_OFFSET(0x16D97ED0)
#define ANODDHDMICG_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x16D98110)
#define ANODDHDMICG_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0x16D981E0)
#define ANODDHDMICG_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x16D97E30)
#define ANODDHDMICG__CTOR_OFFSET UNITYSDK_OFFSET(0x16D97DA0)

inline static constexpr unsigned int ANODDHDMICG_TypeDefinitionIndex = 58918;

class ANODDHDMICG
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANODDHDMICG__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + ANODDHDMICG_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigHack*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigHack*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANODDHDMICG_CREATEOP_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + ANODDHDMICG_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}

	::MoleMole::Config::ConfigHack* KGNEJKNNODJ()
	{
		return ((::MoleMole::Config::ConfigHack*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANODDHDMICG_KGNEJKNNODJ_OFFSET))(this);
	}
};
