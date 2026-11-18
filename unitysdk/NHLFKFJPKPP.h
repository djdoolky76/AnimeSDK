#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"

namespace ConfigModuleLib::Runtime { class LoadOp; }
namespace MoleMole::Config { class ConfigCameraZooms; }

#define NHLFKFJPKPP_CREATEINDEXOP_OFFSET UNITYSDK_OFFSET(0x1728A6D0)
#define NHLFKFJPKPP_CREATEITEMLOADOP_OFFSET UNITYSDK_OFFSET(0x1728A830)
#define NHLFKFJPKPP_JGOGKJFMBHB_OFFSET UNITYSDK_OFFSET(0x1728A920)
#define NHLFKFJPKPP__CTOR_OFFSET UNITYSDK_OFFSET(0x1728A690)

inline static constexpr unsigned int NHLFKFJPKPP_TypeDefinitionIndex = 91816;

class NHLFKFJPKPP
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHLFKFJPKPP__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOp* CreateIndexOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp*(*)(::PVOID))((::PBYTE)hIl2Cpp + NHLFKFJPKPP_CREATEINDEXOP_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOp* CreateItemLoadOp(::Foundation::AssetPath CJBJONJDOLI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOp*(*)(::PVOID, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + NHLFKFJPKPP_CREATEITEMLOADOP_OFFSET))(this, CJBJONJDOLI);
	}

	::System::Void JGOGKJFMBHB(::Foundation::AssetPath OIIHCACKLHD, ::MoleMole::Config::ConfigCameraZooms* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath, ::MoleMole::Config::ConfigCameraZooms*))((::PBYTE)hIl2Cpp + NHLFKFJPKPP_JGOGKJFMBHB_OFFSET))(this, OIIHCACKLHD, DFMKILICPFB);
	}
};
