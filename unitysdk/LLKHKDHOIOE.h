#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"
#include "unitysdk/Foundation/AssetPath.h"

namespace ConfigModuleLib::Runtime { class LoadOp; }
namespace MoleMole::Config { class ConfigLogicMovementRegistry; }
namespace MoleMole::Config { class ConfigMovement; }
namespace System { class String; }

#define LLKHKDHOIOE_CREATEINDEXOP_OFFSET UNITYSDK_OFFSET(0x125956E0)
#define LLKHKDHOIOE_CREATEITEMLOADOP_OFFSET UNITYSDK_OFFSET(0x12595840)
#define LLKHKDHOIOE_HDFPPLOKFNC_OFFSET UNITYSDK_OFFSET(0x12595930)
#define LLKHKDHOIOE_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x12595BC0)
#define LLKHKDHOIOE_NFGBODGPBAN_OFFSET UNITYSDK_OFFSET(0x125959F0)
#define LLKHKDHOIOE_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x12595640)
#define LLKHKDHOIOE__CTOR_OFFSET UNITYSDK_OFFSET(0x12595600)

inline static constexpr unsigned int LLKHKDHOIOE_TypeDefinitionIndex = 77541;

class LLKHKDHOIOE
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLKHKDHOIOE__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + LLKHKDHOIOE_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ConfigModuleLib::Runtime::LoadOp* CreateIndexOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp*(*)(::PVOID))((::PBYTE)hIl2Cpp + LLKHKDHOIOE_CREATEINDEXOP_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOp* CreateItemLoadOp(::Foundation::AssetPath CJBJONJDOLI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOp*(*)(::PVOID, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + LLKHKDHOIOE_CREATEITEMLOADOP_OFFSET))(this, CJBJONJDOLI);
	}

	::MoleMole::Config::ConfigMovement* HDFPPLOKFNC(::System::String* KEGJECMIADD)
	{
		return ((::MoleMole::Config::ConfigMovement*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + LLKHKDHOIOE_HDFPPLOKFNC_OFFSET))(this, KEGJECMIADD);
	}

	::System::Void NFGBODGPBAN(::Foundation::AssetPath OIIHCACKLHD, ::MoleMole::Config::ConfigLogicMovementRegistry* FBIEIIHOAMM)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath, ::MoleMole::Config::ConfigLogicMovementRegistry*))((::PBYTE)hIl2Cpp + LLKHKDHOIOE_NFGBODGPBAN_OFFSET))(this, OIIHCACKLHD, FBIEIIHOAMM);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + LLKHKDHOIOE_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}
};
