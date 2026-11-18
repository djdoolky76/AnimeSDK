#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"

namespace ConfigModuleLib::Runtime { class LoadOp; }
namespace MoleMole::Config { class ConfigCameraCutscenes; }

#define NCKIOAOLDCL_CREATEINDEXOP_OFFSET UNITYSDK_OFFSET(0x16B631D0)
#define NCKIOAOLDCL_CREATEITEMLOADOP_OFFSET UNITYSDK_OFFSET(0x16B63330)
#define NCKIOAOLDCL_JGOGKJFMBHB_OFFSET UNITYSDK_OFFSET(0x16B63420)
#define NCKIOAOLDCL__CTOR_OFFSET UNITYSDK_OFFSET(0x16B63190)

inline static constexpr unsigned int NCKIOAOLDCL_TypeDefinitionIndex = 53838;

class NCKIOAOLDCL
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCKIOAOLDCL__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOp* CreateIndexOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCKIOAOLDCL_CREATEINDEXOP_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOp* CreateItemLoadOp(::Foundation::AssetPath CJBJONJDOLI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOp*(*)(::PVOID, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + NCKIOAOLDCL_CREATEITEMLOADOP_OFFSET))(this, CJBJONJDOLI);
	}

	::System::Void JGOGKJFMBHB(::Foundation::AssetPath OIIHCACKLHD, ::MoleMole::Config::ConfigCameraCutscenes* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath, ::MoleMole::Config::ConfigCameraCutscenes*))((::PBYTE)hIl2Cpp + NCKIOAOLDCL_JGOGKJFMBHB_OFFSET))(this, OIIHCACKLHD, DFMKILICPFB);
	}
};
