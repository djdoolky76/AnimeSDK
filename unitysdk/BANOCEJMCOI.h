#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole::Config { class ConfigSummerTideTreasure; }

#define BANOCEJMCOI_CREATEOP_OFFSET UNITYSDK_OFFSET(0x18548D30)
#define BANOCEJMCOI_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x18549070)
#define BANOCEJMCOI_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0x18548F70)
#define BANOCEJMCOI_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x18548C90)
#define BANOCEJMCOI__CTOR_OFFSET UNITYSDK_OFFSET(0x18548C00)

inline static constexpr unsigned int BANOCEJMCOI_TypeDefinitionIndex = 87080;

class BANOCEJMCOI
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BANOCEJMCOI__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + BANOCEJMCOI_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigSummerTideTreasure*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigSummerTideTreasure*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BANOCEJMCOI_CREATEOP_OFFSET))(this);
	}

	::MoleMole::Config::ConfigSummerTideTreasure* KGNEJKNNODJ()
	{
		return ((::MoleMole::Config::ConfigSummerTideTreasure*(*)(::PVOID))((::PBYTE)hIl2Cpp + BANOCEJMCOI_KGNEJKNNODJ_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + BANOCEJMCOI_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}
};
