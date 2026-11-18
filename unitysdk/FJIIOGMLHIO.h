#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"

namespace ConfigModuleLib::Runtime { class LoadOp; }
namespace MoleMole::Config { class ConfigCameraShakes; }

#define FJIIOGMLHIO_CREATEINDEXOP_OFFSET UNITYSDK_OFFSET(0x11C55FF0)
#define FJIIOGMLHIO_CREATEITEMLOADOP_OFFSET UNITYSDK_OFFSET(0x11C56150)
#define FJIIOGMLHIO_JGOGKJFMBHB_OFFSET UNITYSDK_OFFSET(0x11C56240)
#define FJIIOGMLHIO__CTOR_OFFSET UNITYSDK_OFFSET(0x11C55FB0)

inline static constexpr unsigned int FJIIOGMLHIO_TypeDefinitionIndex = 67035;

class FJIIOGMLHIO
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJIIOGMLHIO__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOp* CreateIndexOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp*(*)(::PVOID))((::PBYTE)hIl2Cpp + FJIIOGMLHIO_CREATEINDEXOP_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOp* CreateItemLoadOp(::Foundation::AssetPath CJBJONJDOLI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOp*(*)(::PVOID, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + FJIIOGMLHIO_CREATEITEMLOADOP_OFFSET))(this, CJBJONJDOLI);
	}

	::System::Void JGOGKJFMBHB(::Foundation::AssetPath OIIHCACKLHD, ::MoleMole::Config::ConfigCameraShakes* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath, ::MoleMole::Config::ConfigCameraShakes*))((::PBYTE)hIl2Cpp + FJIIOGMLHIO_JGOGKJFMBHB_OFFSET))(this, OIIHCACKLHD, DFMKILICPFB);
	}
};
