#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole { class SummerEventShootingGamePlayConfig; }
namespace MoleMole { class SummerPlayerWeaponInfo; }

#define FBBOIJEOLGB_COPIDBEMEIE_OFFSET UNITYSDK_OFFSET(0x11CEC730)
#define FBBOIJEOLGB_CREATEOP_OFFSET UNITYSDK_OFFSET(0x11CEC1A0)
#define FBBOIJEOLGB_GOCCMIOMGLB_OFFSET UNITYSDK_OFFSET(0x11CEC4B0)
#define FBBOIJEOLGB_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x11CEC3E0)
#define FBBOIJEOLGB_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x11CEC100)
#define FBBOIJEOLGB__CTOR_OFFSET UNITYSDK_OFFSET(0x11CEC070)

inline static constexpr unsigned int FBBOIJEOLGB_TypeDefinitionIndex = 46456;

class FBBOIJEOLGB
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBBOIJEOLGB__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + FBBOIJEOLGB_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::SummerEventShootingGamePlayConfig*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::SummerEventShootingGamePlayConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBBOIJEOLGB_CREATEOP_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + FBBOIJEOLGB_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}

	::MoleMole::SummerPlayerWeaponInfo* GOCCMIOMGLB(::System::Int32 LJMPPBEMEPP)
	{
		return ((::MoleMole::SummerPlayerWeaponInfo*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FBBOIJEOLGB_GOCCMIOMGLB_OFFSET))(this, LJMPPBEMEPP);
	}

	::MoleMole::SummerEventShootingGamePlayConfig* COPIDBEMEIE()
	{
		return ((::MoleMole::SummerEventShootingGamePlayConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBBOIJEOLGB_COPIDBEMEIE_OFFSET))(this);
	}
};
