#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"

namespace ConfigModuleLib::Runtime { class LoadOp; }
namespace MoleMole::Config { class ConfigCameraScreenOffsetDatas; }

#define LPPLKOIBNGP_CREATEINDEXOP_OFFSET UNITYSDK_OFFSET(0x1568AE00)
#define LPPLKOIBNGP_CREATEITEMLOADOP_OFFSET UNITYSDK_OFFSET(0x1568AF60)
#define LPPLKOIBNGP_JGOGKJFMBHB_OFFSET UNITYSDK_OFFSET(0x1568B050)
#define LPPLKOIBNGP__CTOR_OFFSET UNITYSDK_OFFSET(0x1568ADC0)

inline static constexpr unsigned int LPPLKOIBNGP_TypeDefinitionIndex = 84098;

class LPPLKOIBNGP
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPPLKOIBNGP__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOp* CreateIndexOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp*(*)(::PVOID))((::PBYTE)hIl2Cpp + LPPLKOIBNGP_CREATEINDEXOP_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOp* CreateItemLoadOp(::Foundation::AssetPath CJBJONJDOLI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOp*(*)(::PVOID, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + LPPLKOIBNGP_CREATEITEMLOADOP_OFFSET))(this, CJBJONJDOLI);
	}

	::System::Void JGOGKJFMBHB(::Foundation::AssetPath OIIHCACKLHD, ::MoleMole::Config::ConfigCameraScreenOffsetDatas* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath, ::MoleMole::Config::ConfigCameraScreenOffsetDatas*))((::PBYTE)hIl2Cpp + LPPLKOIBNGP_JGOGKJFMBHB_OFFSET))(this, OIIHCACKLHD, DFMKILICPFB);
	}
};
