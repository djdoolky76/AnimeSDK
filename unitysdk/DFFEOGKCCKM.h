#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"

namespace ConfigModuleLib::Runtime { class LoadOp; }
namespace MoleMole::Config { class ConfigCameraLockTargetDatas; }

#define DFFEOGKCCKM_CREATEINDEXOP_OFFSET UNITYSDK_OFFSET(0x12409D40)
#define DFFEOGKCCKM_CREATEITEMLOADOP_OFFSET UNITYSDK_OFFSET(0x12409EA0)
#define DFFEOGKCCKM_JGOGKJFMBHB_OFFSET UNITYSDK_OFFSET(0x12409F90)
#define DFFEOGKCCKM__CTOR_OFFSET UNITYSDK_OFFSET(0x12409D00)

inline static constexpr unsigned int DFFEOGKCCKM_TypeDefinitionIndex = 65447;

class DFFEOGKCCKM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFFEOGKCCKM__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOp* CreateIndexOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFFEOGKCCKM_CREATEINDEXOP_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOp* CreateItemLoadOp(::Foundation::AssetPath CJBJONJDOLI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOp*(*)(::PVOID, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + DFFEOGKCCKM_CREATEITEMLOADOP_OFFSET))(this, CJBJONJDOLI);
	}

	::System::Void JGOGKJFMBHB(::Foundation::AssetPath OIIHCACKLHD, ::MoleMole::Config::ConfigCameraLockTargetDatas* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath, ::MoleMole::Config::ConfigCameraLockTargetDatas*))((::PBYTE)hIl2Cpp + DFFEOGKCCKM_JGOGKJFMBHB_OFFSET))(this, OIIHCACKLHD, DFMKILICPFB);
	}
};
