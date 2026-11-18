#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole::Config { class ConfigWanderMove; }

#define JCECODMFGFD_CREATEOP_OFFSET UNITYSDK_OFFSET(0x13ABEFD0)
#define JCECODMFGFD_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x13ABF210)
#define JCECODMFGFD_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0x13ABF2E0)
#define JCECODMFGFD_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x13ABEF30)
#define JCECODMFGFD__CTOR_OFFSET UNITYSDK_OFFSET(0x13ABEEA0)

inline static constexpr unsigned int JCECODMFGFD_TypeDefinitionIndex = 77815;

class JCECODMFGFD
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCECODMFGFD__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + JCECODMFGFD_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigWanderMove*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigWanderMove*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JCECODMFGFD_CREATEOP_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + JCECODMFGFD_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}

	::MoleMole::Config::ConfigWanderMove* KGNEJKNNODJ()
	{
		return ((::MoleMole::Config::ConfigWanderMove*(*)(::PVOID))((::PBYTE)hIl2Cpp + JCECODMFGFD_KGNEJKNNODJ_OFFSET))(this);
	}
};
