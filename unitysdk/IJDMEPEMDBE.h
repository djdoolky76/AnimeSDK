#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole::Config { class ConfigMultiplayerUI; }

#define IJDMEPEMDBE_COPIDBEMEIE_OFFSET UNITYSDK_OFFSET(0x1987C870)
#define IJDMEPEMDBE_CREATEOP_OFFSET UNITYSDK_OFFSET(0x1987C630)
#define IJDMEPEMDBE_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x1987C930)
#define IJDMEPEMDBE_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x1987C590)
#define IJDMEPEMDBE__CTOR_OFFSET UNITYSDK_OFFSET(0x1987C500)

inline static constexpr unsigned int IJDMEPEMDBE_TypeDefinitionIndex = 87321;

class IJDMEPEMDBE
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJDMEPEMDBE__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + IJDMEPEMDBE_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigMultiplayerUI*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigMultiplayerUI*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IJDMEPEMDBE_CREATEOP_OFFSET))(this);
	}

	::MoleMole::Config::ConfigMultiplayerUI* COPIDBEMEIE()
	{
		return ((::MoleMole::Config::ConfigMultiplayerUI*(*)(::PVOID))((::PBYTE)hIl2Cpp + IJDMEPEMDBE_COPIDBEMEIE_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + IJDMEPEMDBE_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}
};
