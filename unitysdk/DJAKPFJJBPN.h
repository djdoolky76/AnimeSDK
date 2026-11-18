#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"

namespace ConfigModuleLib::Runtime { class LoadOp; }
namespace MoleMole::Cameras { class ConfigCameraBangbooAdjustment; }

#define DJAKPFJJBPN_CREATEINDEXOP_OFFSET UNITYSDK_OFFSET(0x13446F10)
#define DJAKPFJJBPN_CREATEITEMLOADOP_OFFSET UNITYSDK_OFFSET(0x13447070)
#define DJAKPFJJBPN_JGOGKJFMBHB_OFFSET UNITYSDK_OFFSET(0x13447160)
#define DJAKPFJJBPN__CTOR_OFFSET UNITYSDK_OFFSET(0x13446ED0)

inline static constexpr unsigned int DJAKPFJJBPN_TypeDefinitionIndex = 87568;

class DJAKPFJJBPN
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJAKPFJJBPN__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOp* CreateIndexOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJAKPFJJBPN_CREATEINDEXOP_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOp* CreateItemLoadOp(::Foundation::AssetPath CJBJONJDOLI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOp*(*)(::PVOID, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + DJAKPFJJBPN_CREATEITEMLOADOP_OFFSET))(this, CJBJONJDOLI);
	}

	::System::Void JGOGKJFMBHB(::Foundation::AssetPath OIIHCACKLHD, ::MoleMole::Cameras::ConfigCameraBangbooAdjustment* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath, ::MoleMole::Cameras::ConfigCameraBangbooAdjustment*))((::PBYTE)hIl2Cpp + DJAKPFJJBPN_JGOGKJFMBHB_OFFSET))(this, OIIHCACKLHD, DFMKILICPFB);
	}
};
