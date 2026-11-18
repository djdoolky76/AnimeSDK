#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole::Config { class ConfigGroupVideo; }

#define KOLACFGNPNL_CREATEOP_OFFSET UNITYSDK_OFFSET(0x17734500)
#define KOLACFGNPNL_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x17734740)
#define KOLACFGNPNL_JGBAEAFDKJB_OFFSET UNITYSDK_OFFSET(0x17734810)
#define KOLACFGNPNL_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x17734460)
#define KOLACFGNPNL__CTOR_OFFSET UNITYSDK_OFFSET(0x177343D0)

inline static constexpr unsigned int KOLACFGNPNL_TypeDefinitionIndex = 53250;

class KOLACFGNPNL
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOLACFGNPNL__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + KOLACFGNPNL_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigGroupVideo*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigGroupVideo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KOLACFGNPNL_CREATEOP_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + KOLACFGNPNL_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}

	::MoleMole::Config::ConfigGroupVideo* JGBAEAFDKJB()
	{
		return ((::MoleMole::Config::ConfigGroupVideo*(*)(::PVOID))((::PBYTE)hIl2Cpp + KOLACFGNPNL_JGBAEAFDKJB_OFFSET))(this);
	}
};
