#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole::Config { class ConfigZipLineSubSystem; }

#define BCDEOLCDDNB_CREATEOP_OFFSET UNITYSDK_OFFSET(0x12D19900)
#define BCDEOLCDDNB_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x12D19C40)
#define BCDEOLCDDNB_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0x12D19B40)
#define BCDEOLCDDNB_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x12D19860)
#define BCDEOLCDDNB__CTOR_OFFSET UNITYSDK_OFFSET(0x12D197D0)

inline static constexpr unsigned int BCDEOLCDDNB_TypeDefinitionIndex = 74543;

class BCDEOLCDDNB
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCDEOLCDDNB__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + BCDEOLCDDNB_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigZipLineSubSystem*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigZipLineSubSystem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCDEOLCDDNB_CREATEOP_OFFSET))(this);
	}

	::MoleMole::Config::ConfigZipLineSubSystem* KGNEJKNNODJ()
	{
		return ((::MoleMole::Config::ConfigZipLineSubSystem*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCDEOLCDDNB_KGNEJKNNODJ_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + BCDEOLCDDNB_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}
};
