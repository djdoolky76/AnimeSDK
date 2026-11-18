#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"

namespace ConfigModuleLib::Runtime { class LoadOp; }
namespace MoleMole::Cameras { class ConfigCameraOverrideTrack; }

#define JJJHIBECFIP_CREATEINDEXOP_OFFSET UNITYSDK_OFFSET(0x1873F9C0)
#define JJJHIBECFIP_CREATEITEMLOADOP_OFFSET UNITYSDK_OFFSET(0x1873FB20)
#define JJJHIBECFIP_JGOGKJFMBHB_OFFSET UNITYSDK_OFFSET(0x1873FC10)
#define JJJHIBECFIP__CTOR_OFFSET UNITYSDK_OFFSET(0x1873F980)

inline static constexpr unsigned int JJJHIBECFIP_TypeDefinitionIndex = 92174;

class JJJHIBECFIP
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJJHIBECFIP__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOp* CreateIndexOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp*(*)(::PVOID))((::PBYTE)hIl2Cpp + JJJHIBECFIP_CREATEINDEXOP_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOp* CreateItemLoadOp(::Foundation::AssetPath CJBJONJDOLI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOp*(*)(::PVOID, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + JJJHIBECFIP_CREATEITEMLOADOP_OFFSET))(this, CJBJONJDOLI);
	}

	::System::Void JGOGKJFMBHB(::Foundation::AssetPath OIIHCACKLHD, ::MoleMole::Cameras::ConfigCameraOverrideTrack* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath, ::MoleMole::Cameras::ConfigCameraOverrideTrack*))((::PBYTE)hIl2Cpp + JJJHIBECFIP_JGOGKJFMBHB_OFFSET))(this, OIIHCACKLHD, DFMKILICPFB);
	}
};
