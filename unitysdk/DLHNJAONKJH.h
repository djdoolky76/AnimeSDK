#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"
#include "unitysdk/Foundation/AssetPath.h"

namespace ConfigModuleLib::Runtime { class LoadOp; }
namespace MoleMole::Config { class ConfigLogicRotationRegistry; }
namespace MoleMole::Config { class ConfigRotation; }
namespace System { class String; }

#define DLHNJAONKJH_BAHLJHDONME_OFFSET UNITYSDK_OFFSET(0x12420840)
#define DLHNJAONKJH_CREATEINDEXOP_OFFSET UNITYSDK_OFFSET(0x12420420)
#define DLHNJAONKJH_CREATEITEMLOADOP_OFFSET UNITYSDK_OFFSET(0x12420580)
#define DLHNJAONKJH_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x12420900)
#define DLHNJAONKJH_NFGBODGPBAN_OFFSET UNITYSDK_OFFSET(0x12420670)
#define DLHNJAONKJH_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x12420380)
#define DLHNJAONKJH__CTOR_OFFSET UNITYSDK_OFFSET(0x12420340)

inline static constexpr unsigned int DLHNJAONKJH_TypeDefinitionIndex = 70432;

class DLHNJAONKJH
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLHNJAONKJH__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + DLHNJAONKJH_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ConfigModuleLib::Runtime::LoadOp* CreateIndexOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp*(*)(::PVOID))((::PBYTE)hIl2Cpp + DLHNJAONKJH_CREATEINDEXOP_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOp* CreateItemLoadOp(::Foundation::AssetPath CJBJONJDOLI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOp*(*)(::PVOID, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + DLHNJAONKJH_CREATEITEMLOADOP_OFFSET))(this, CJBJONJDOLI);
	}

	::System::Void NFGBODGPBAN(::Foundation::AssetPath OIIHCACKLHD, ::MoleMole::Config::ConfigLogicRotationRegistry* FBIEIIHOAMM)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath, ::MoleMole::Config::ConfigLogicRotationRegistry*))((::PBYTE)hIl2Cpp + DLHNJAONKJH_NFGBODGPBAN_OFFSET))(this, OIIHCACKLHD, FBIEIIHOAMM);
	}

	::MoleMole::Config::ConfigRotation* BAHLJHDONME(::System::String* KEGJECMIADD)
	{
		return ((::MoleMole::Config::ConfigRotation*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DLHNJAONKJH_BAHLJHDONME_OFFSET))(this, KEGJECMIADD);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + DLHNJAONKJH_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}
};
