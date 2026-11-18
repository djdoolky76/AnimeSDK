#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole::Config { class ConfigGamepadTriggerEffect; }
namespace MoleMole::Config { class GamepadTriggerEffectEntryBase; }
namespace System { class String; }

#define IAOMONAPMLF_CREATEOP_OFFSET UNITYSDK_OFFSET(0x15BF0670)
#define IAOMONAPMLF_FNKNJEOCHKP_OFFSET UNITYSDK_OFFSET(0x15BF09B0)
#define IAOMONAPMLF_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x15BF0C50)
#define IAOMONAPMLF_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0x15BF08B0)
#define IAOMONAPMLF_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x15BF05D0)
#define IAOMONAPMLF__CTOR_OFFSET UNITYSDK_OFFSET(0x15BF0540)

inline static constexpr unsigned int IAOMONAPMLF_TypeDefinitionIndex = 92841;

class IAOMONAPMLF
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAOMONAPMLF__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + IAOMONAPMLF_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigGamepadTriggerEffect*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigGamepadTriggerEffect*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IAOMONAPMLF_CREATEOP_OFFSET))(this);
	}

	::MoleMole::Config::ConfigGamepadTriggerEffect* KGNEJKNNODJ()
	{
		return ((::MoleMole::Config::ConfigGamepadTriggerEffect*(*)(::PVOID))((::PBYTE)hIl2Cpp + IAOMONAPMLF_KGNEJKNNODJ_OFFSET))(this);
	}

	::MoleMole::Config::GamepadTriggerEffectEntryBase* FNKNJEOCHKP(::System::String* MCOHLHMKLIP)
	{
		return ((::MoleMole::Config::GamepadTriggerEffectEntryBase*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + IAOMONAPMLF_FNKNJEOCHKP_OFFSET))(this, MCOHLHMKLIP);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + IAOMONAPMLF_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}
};
