#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"

namespace ConfigModuleLib::Runtime { class LoadOp; }
namespace MoleMole::Config { class ConfigEntitySharedAnimEvents; }

#define HLFNGCCDKGE_CREATEINDEXOP_OFFSET UNITYSDK_OFFSET(0x16F43280)
#define HLFNGCCDKGE_CREATEITEMLOADOP_OFFSET UNITYSDK_OFFSET(0x16F433E0)
#define HLFNGCCDKGE_JGOGKJFMBHB_OFFSET UNITYSDK_OFFSET(0x16F434D0)
#define HLFNGCCDKGE__CTOR_OFFSET UNITYSDK_OFFSET(0x16F43240)

inline static constexpr unsigned int HLFNGCCDKGE_TypeDefinitionIndex = 62453;

class HLFNGCCDKGE
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLFNGCCDKGE__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOp* CreateIndexOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp*(*)(::PVOID))((::PBYTE)hIl2Cpp + HLFNGCCDKGE_CREATEINDEXOP_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOp* CreateItemLoadOp(::Foundation::AssetPath CJBJONJDOLI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOp*(*)(::PVOID, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + HLFNGCCDKGE_CREATEITEMLOADOP_OFFSET))(this, CJBJONJDOLI);
	}

	::System::Void JGOGKJFMBHB(::Foundation::AssetPath OIIHCACKLHD, ::MoleMole::Config::ConfigEntitySharedAnimEvents* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath, ::MoleMole::Config::ConfigEntitySharedAnimEvents*))((::PBYTE)hIl2Cpp + HLFNGCCDKGE_JGOGKJFMBHB_OFFSET))(this, OIIHCACKLHD, DFMKILICPFB);
	}
};
