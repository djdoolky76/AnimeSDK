#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole::LevelPerform { class LevelPerformConfig; }

#define KCAGPHDKFHC_CREATEOP_OFFSET UNITYSDK_OFFSET(0x1514BC10)
#define KCAGPHDKFHC_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x1514BE80)
#define KCAGPHDKFHC_KCKBIOBGKBH_OFFSET UNITYSDK_OFFSET(0x1514BF50)
#define KCAGPHDKFHC_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x1514BB70)
#define KCAGPHDKFHC__CTOR_OFFSET UNITYSDK_OFFSET(0x1514BAE0)

inline static constexpr unsigned int KCAGPHDKFHC_TypeDefinitionIndex = 40212;

class KCAGPHDKFHC
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCAGPHDKFHC__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + KCAGPHDKFHC_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::LevelPerform::LevelPerformConfig*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::LevelPerform::LevelPerformConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KCAGPHDKFHC_CREATEOP_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + KCAGPHDKFHC_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}

	::MoleMole::LevelPerform::LevelPerformConfig* KCKBIOBGKBH()
	{
		return ((::MoleMole::LevelPerform::LevelPerformConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + KCAGPHDKFHC_KCKBIOBGKBH_OFFSET))(this);
	}
};
