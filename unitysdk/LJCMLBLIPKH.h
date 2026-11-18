#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole::Config { class LevelGlobalCounterstrokeConfig; }

#define LJCMLBLIPKH_CREATEOP_OFFSET UNITYSDK_OFFSET(0x158E55A0)
#define LJCMLBLIPKH_GACPDCEMJOA_OFFSET UNITYSDK_OFFSET(0x158E58A0)
#define LJCMLBLIPKH_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x158E57D0)
#define LJCMLBLIPKH_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x158E5500)
#define LJCMLBLIPKH__CTOR_OFFSET UNITYSDK_OFFSET(0x158E5470)

inline static constexpr unsigned int LJCMLBLIPKH_TypeDefinitionIndex = 53888;

class LJCMLBLIPKH
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJCMLBLIPKH__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + LJCMLBLIPKH_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::LevelGlobalCounterstrokeConfig*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::LevelGlobalCounterstrokeConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJCMLBLIPKH_CREATEOP_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + LJCMLBLIPKH_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}

	::MoleMole::Config::LevelGlobalCounterstrokeConfig* GACPDCEMJOA()
	{
		return ((::MoleMole::Config::LevelGlobalCounterstrokeConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJCMLBLIPKH_GACPDCEMJOA_OFFSET))(this);
	}
};
