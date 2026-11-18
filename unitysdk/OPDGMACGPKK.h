#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole::Config { class ConfigZipLine; }

#define OPDGMACGPKK_CREATEOP_OFFSET UNITYSDK_OFFSET(0x16C4AB90)
#define OPDGMACGPKK_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x16C4AED0)
#define OPDGMACGPKK_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0x16C4ADD0)
#define OPDGMACGPKK_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x16C4AAF0)
#define OPDGMACGPKK__CTOR_OFFSET UNITYSDK_OFFSET(0x16C4AA60)

inline static constexpr unsigned int OPDGMACGPKK_TypeDefinitionIndex = 58417;

class OPDGMACGPKK
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPDGMACGPKK__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + OPDGMACGPKK_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigZipLine*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigZipLine*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OPDGMACGPKK_CREATEOP_OFFSET))(this);
	}

	::MoleMole::Config::ConfigZipLine* KGNEJKNNODJ()
	{
		return ((::MoleMole::Config::ConfigZipLine*(*)(::PVOID))((::PBYTE)hIl2Cpp + OPDGMACGPKK_KGNEJKNNODJ_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + OPDGMACGPKK_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}
};
