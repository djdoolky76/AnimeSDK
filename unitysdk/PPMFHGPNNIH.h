#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole::Config { class ConfigSplineTag; }

#define PPMFHGPNNIH_CREATEOP_OFFSET UNITYSDK_OFFSET(0x1C67A670)
#define PPMFHGPNNIH_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x1C67A8B0)
#define PPMFHGPNNIH_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0x1C67A980)
#define PPMFHGPNNIH_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x1C67A5D0)
#define PPMFHGPNNIH__CTOR_OFFSET UNITYSDK_OFFSET(0x1C67A540)

inline static constexpr unsigned int PPMFHGPNNIH_TypeDefinitionIndex = 42819;

class PPMFHGPNNIH
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPMFHGPNNIH__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + PPMFHGPNNIH_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigSplineTag*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigSplineTag*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PPMFHGPNNIH_CREATEOP_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + PPMFHGPNNIH_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}

	::MoleMole::Config::ConfigSplineTag* KGNEJKNNODJ()
	{
		return ((::MoleMole::Config::ConfigSplineTag*(*)(::PVOID))((::PBYTE)hIl2Cpp + PPMFHGPNNIH_KGNEJKNNODJ_OFFSET))(this);
	}
};
