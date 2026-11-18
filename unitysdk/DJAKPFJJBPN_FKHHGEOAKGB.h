#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class DJAKPFJJBPN;
namespace MoleMole::Cameras { class ConfigCameraBangbooAdjustment; }

#define DJAKPFJJBPN_FKHHGEOAKGB_BHEKKKNPHAM_OFFSET UNITYSDK_OFFSET(0x7FBDCC0)
#define DJAKPFJJBPN_FKHHGEOAKGB__CTOR_OFFSET UNITYSDK_OFFSET(0x7FBDCB0)

inline static constexpr unsigned int DJAKPFJJBPN_FKHHGEOAKGB_TypeDefinitionIndex = 87569;

class DJAKPFJJBPN_FKHHGEOAKGB : public ::System::Object
{
public:
	::DJAKPFJJBPN* KLHPEBKNIFB; // 0x10
	::Foundation::AssetPath CJBJONJDOLI; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJAKPFJJBPN_FKHHGEOAKGB__CTOR_OFFSET))(this);
	}

	::System::Void BHEKKKNPHAM(::MoleMole::Cameras::ConfigCameraBangbooAdjustment* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Cameras::ConfigCameraBangbooAdjustment*))((::PBYTE)hIl2Cpp + DJAKPFJJBPN_FKHHGEOAKGB_BHEKKKNPHAM_OFFSET))(this, DFMKILICPFB);
	}
};
