#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole::Config { class ConfigPlayerAccessoryEffect; }

#define MAOFAEGHIEM_COPIDBEMEIE_OFFSET UNITYSDK_OFFSET(0x12D4DCD0)
#define MAOFAEGHIEM_CREATEOP_OFFSET UNITYSDK_OFFSET(0x12D4D9C0)
#define MAOFAEGHIEM_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x12D4DC00)
#define MAOFAEGHIEM_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x12D4D920)
#define MAOFAEGHIEM__CTOR_OFFSET UNITYSDK_OFFSET(0x12D4D890)

inline static constexpr unsigned int MAOFAEGHIEM_TypeDefinitionIndex = 58597;

class MAOFAEGHIEM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAOFAEGHIEM__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + MAOFAEGHIEM_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigPlayerAccessoryEffect*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigPlayerAccessoryEffect*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MAOFAEGHIEM_CREATEOP_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + MAOFAEGHIEM_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}

	::MoleMole::Config::ConfigPlayerAccessoryEffect* COPIDBEMEIE()
	{
		return ((::MoleMole::Config::ConfigPlayerAccessoryEffect*(*)(::PVOID))((::PBYTE)hIl2Cpp + MAOFAEGHIEM_COPIDBEMEIE_OFFSET))(this);
	}
};
