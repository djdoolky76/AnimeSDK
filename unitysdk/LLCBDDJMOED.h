#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/MoleMole/Config/DamageElementType.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole::Config { class ConfigEntityAttackEffectNames; }
namespace System { class String; }

#define LLCBDDJMOED_COPIDBEMEIE_OFFSET UNITYSDK_OFFSET(0x11F20C70)
#define LLCBDDJMOED_CREATEOP_OFFSET UNITYSDK_OFFSET(0x11F20A70)
#define LLCBDDJMOED_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x11F20BA0)
#define LLCBDDJMOED_PCBGNBELMAI_OFFSET UNITYSDK_OFFSET(0x11F20D30)
#define LLCBDDJMOED_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x11F209D0)
#define LLCBDDJMOED__CTOR_OFFSET UNITYSDK_OFFSET(0x11F20940)

inline static constexpr unsigned int LLCBDDJMOED_TypeDefinitionIndex = 65350;

class LLCBDDJMOED
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLCBDDJMOED__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + LLCBDDJMOED_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigEntityAttackEffectNames*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigEntityAttackEffectNames*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LLCBDDJMOED_CREATEOP_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + LLCBDDJMOED_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}

	::MoleMole::Config::ConfigEntityAttackEffectNames* COPIDBEMEIE()
	{
		return ((::MoleMole::Config::ConfigEntityAttackEffectNames*(*)(::PVOID))((::PBYTE)hIl2Cpp + LLCBDDJMOED_COPIDBEMEIE_OFFSET))(this);
	}

	::System::String* PCBGNBELMAI(::System::String* JMDHBJMNBCP, ::MoleMole::Config::DamageElementType EIILOAOBACD)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*, ::MoleMole::Config::DamageElementType))((::PBYTE)hIl2Cpp + LLCBDDJMOED_PCBGNBELMAI_OFFSET))(this, JMDHBJMNBCP, EIILOAOBACD);
	}
};
