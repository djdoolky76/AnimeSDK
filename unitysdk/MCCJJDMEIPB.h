#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"
#include "unitysdk/Foundation/AssetPath.h"

namespace ConfigModuleLib::Runtime { class LoadOp; }
namespace MoleMole::Config { class ConfigHitData; }
namespace MoleMole::Config { class ConfigHitDatas; }
namespace System { class String; }

#define MCCJJDMEIPB_CREATEINDEXOP_OFFSET UNITYSDK_OFFSET(0x17D06750)
#define MCCJJDMEIPB_CREATEITEMLOADOP_OFFSET UNITYSDK_OFFSET(0x17D068B0)
#define MCCJJDMEIPB_JCKIMGDKLDP_OFFSET UNITYSDK_OFFSET(0x17D069A0)
#define MCCJJDMEIPB_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x17D06C50)
#define MCCJJDMEIPB_NFGBODGPBAN_OFFSET UNITYSDK_OFFSET(0x17D06A50)
#define MCCJJDMEIPB_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x17D066B0)
#define MCCJJDMEIPB__CTOR_OFFSET UNITYSDK_OFFSET(0x17D06670)

inline static constexpr unsigned int MCCJJDMEIPB_TypeDefinitionIndex = 89969;

class MCCJJDMEIPB
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCCJJDMEIPB__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + MCCJJDMEIPB_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ConfigModuleLib::Runtime::LoadOp* CreateIndexOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp*(*)(::PVOID))((::PBYTE)hIl2Cpp + MCCJJDMEIPB_CREATEINDEXOP_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOp* CreateItemLoadOp(::Foundation::AssetPath CJBJONJDOLI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOp*(*)(::PVOID, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + MCCJJDMEIPB_CREATEITEMLOADOP_OFFSET))(this, CJBJONJDOLI);
	}

	::MoleMole::Config::ConfigHitData* JCKIMGDKLDP(::System::String* ANGLHCBLFNK)
	{
		return ((::MoleMole::Config::ConfigHitData*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MCCJJDMEIPB_JCKIMGDKLDP_OFFSET))(this, ANGLHCBLFNK);
	}

	::System::Void NFGBODGPBAN(::Foundation::AssetPath OIIHCACKLHD, ::MoleMole::Config::ConfigHitDatas* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath, ::MoleMole::Config::ConfigHitDatas*))((::PBYTE)hIl2Cpp + MCCJJDMEIPB_NFGBODGPBAN_OFFSET))(this, OIIHCACKLHD, DFMKILICPFB);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + MCCJJDMEIPB_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}
};
