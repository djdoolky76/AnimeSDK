#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole::Config { class ConfigGachaPerformance; }

#define PJJKDONDJKH_COPIDBEMEIE_OFFSET UNITYSDK_OFFSET(0x1D62BB00)
#define PJJKDONDJKH_CREATEOP_OFFSET UNITYSDK_OFFSET(0x1D62B910)
#define PJJKDONDJKH_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x1D62BBC0)
#define PJJKDONDJKH_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x1D62B870)
#define PJJKDONDJKH__CTOR_OFFSET UNITYSDK_OFFSET(0x1D62B7E0)

inline static constexpr unsigned int PJJKDONDJKH_TypeDefinitionIndex = 74164;

class PJJKDONDJKH
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJJKDONDJKH__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + PJJKDONDJKH_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigGachaPerformance*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigGachaPerformance*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJJKDONDJKH_CREATEOP_OFFSET))(this);
	}

	::MoleMole::Config::ConfigGachaPerformance* COPIDBEMEIE()
	{
		return ((::MoleMole::Config::ConfigGachaPerformance*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJJKDONDJKH_COPIDBEMEIE_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + PJJKDONDJKH_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}
};
