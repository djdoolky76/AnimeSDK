#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"
#include "unitysdk/Foundation/AssetPath.h"

namespace ConfigModuleLib::Runtime { class LoadOp; }
namespace MoleMole::Config { class ConfigDynamicObjectRegistry; }
namespace MoleMole::Config { class DynamicObjectEntry; }
namespace System { class String; }

#define LJJECMFOIAF_CREATEINDEXOP_OFFSET UNITYSDK_OFFSET(0x12568190)
#define LJJECMFOIAF_CREATEITEMLOADOP_OFFSET UNITYSDK_OFFSET(0x125682F0)
#define LJJECMFOIAF_HJBNAAILLDE_OFFSET UNITYSDK_OFFSET(0x12568550)
#define LJJECMFOIAF_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x12568610)
#define LJJECMFOIAF_NFGBODGPBAN_OFFSET UNITYSDK_OFFSET(0x125683E0)
#define LJJECMFOIAF_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x125680F0)
#define LJJECMFOIAF__CTOR_OFFSET UNITYSDK_OFFSET(0x125680B0)

inline static constexpr unsigned int LJJECMFOIAF_TypeDefinitionIndex = 85487;

class LJJECMFOIAF
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJJECMFOIAF__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + LJJECMFOIAF_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ConfigModuleLib::Runtime::LoadOp* CreateIndexOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJJECMFOIAF_CREATEINDEXOP_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOp* CreateItemLoadOp(::Foundation::AssetPath CJBJONJDOLI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOp*(*)(::PVOID, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + LJJECMFOIAF_CREATEITEMLOADOP_OFFSET))(this, CJBJONJDOLI);
	}

	::System::Void NFGBODGPBAN(::Foundation::AssetPath OIIHCACKLHD, ::MoleMole::Config::ConfigDynamicObjectRegistry* FBIEIIHOAMM)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath, ::MoleMole::Config::ConfigDynamicObjectRegistry*))((::PBYTE)hIl2Cpp + LJJECMFOIAF_NFGBODGPBAN_OFFSET))(this, OIIHCACKLHD, FBIEIIHOAMM);
	}

	::MoleMole::Config::DynamicObjectEntry* HJBNAAILLDE(::System::String* KEGJECMIADD)
	{
		return ((::MoleMole::Config::DynamicObjectEntry*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + LJJECMFOIAF_HJBNAAILLDE_OFFSET))(this, KEGJECMIADD);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + LJJECMFOIAF_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}
};
