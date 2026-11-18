#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole::Config { class ConfigMultiplayer; }

#define KBEAECLDNMO_COPIDBEMEIE_OFFSET UNITYSDK_OFFSET(0x130A7D10)
#define KBEAECLDNMO_CREATEOP_OFFSET UNITYSDK_OFFSET(0x130A7A00)
#define KBEAECLDNMO_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x130A7C40)
#define KBEAECLDNMO_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x130A7960)
#define KBEAECLDNMO__CTOR_OFFSET UNITYSDK_OFFSET(0x130A78D0)

inline static constexpr unsigned int KBEAECLDNMO_TypeDefinitionIndex = 83144;

class KBEAECLDNMO
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBEAECLDNMO__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + KBEAECLDNMO_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigMultiplayer*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigMultiplayer*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KBEAECLDNMO_CREATEOP_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + KBEAECLDNMO_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}

	::MoleMole::Config::ConfigMultiplayer* COPIDBEMEIE()
	{
		return ((::MoleMole::Config::ConfigMultiplayer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KBEAECLDNMO_COPIDBEMEIE_OFFSET))(this);
	}
};
