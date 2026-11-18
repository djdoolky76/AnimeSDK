#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/MoleMole/Config/CharacterSize.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole::Config { class ConfigGhostEffect; }
namespace MoleMole::Config { class ConfigGhostEffects; }
namespace MoleMole::Config { class ConfigGhostMove; }
namespace System { class String; }

#define OHGJLANBAGJ_COPIDBEMEIE_OFFSET UNITYSDK_OFFSET(0x10072310)
#define OHGJLANBAGJ_CREATEOP_OFFSET UNITYSDK_OFFSET(0x10071DF0)
#define OHGJLANBAGJ_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x10072240)
#define OHGJLANBAGJ_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0x100723D0)
#define OHGJLANBAGJ_PMOAMLBDMNL_OFFSET UNITYSDK_OFFSET(0x10072090)
#define OHGJLANBAGJ_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x10071D50)
#define OHGJLANBAGJ__CTOR_OFFSET UNITYSDK_OFFSET(0x10071CC0)

inline static constexpr unsigned int OHGJLANBAGJ_TypeDefinitionIndex = 38360;

class OHGJLANBAGJ
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHGJLANBAGJ__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + OHGJLANBAGJ_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigGhostEffects*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigGhostEffects*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OHGJLANBAGJ_CREATEOP_OFFSET))(this);
	}

	::MoleMole::Config::ConfigGhostMove* PMOAMLBDMNL(::MoleMole::Config::CharacterSize BEPMDFENBMH)
	{
		return ((::MoleMole::Config::ConfigGhostMove*(*)(::PVOID, ::MoleMole::Config::CharacterSize))((::PBYTE)hIl2Cpp + OHGJLANBAGJ_PMOAMLBDMNL_OFFSET))(this, BEPMDFENBMH);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + OHGJLANBAGJ_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}

	::MoleMole::Config::ConfigGhostEffects* COPIDBEMEIE()
	{
		return ((::MoleMole::Config::ConfigGhostEffects*(*)(::PVOID))((::PBYTE)hIl2Cpp + OHGJLANBAGJ_COPIDBEMEIE_OFFSET))(this);
	}

	::MoleMole::Config::ConfigGhostEffect* KGNEJKNNODJ(::System::String* MCOHLHMKLIP)
	{
		return ((::MoleMole::Config::ConfigGhostEffect*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + OHGJLANBAGJ_KGNEJKNNODJ_OFFSET))(this, MCOHLHMKLIP);
	}
};
