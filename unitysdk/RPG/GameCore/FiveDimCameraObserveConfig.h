#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimCameraObserveConfig; }

#define RPG_GAMECORE_FIVEDIMCAMERAOBSERVECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6B40A0)
#define RPG_GAMECORE_FIVEDIMCAMERAOBSERVECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6B2B00)

namespace RPG::GameCore
{
	class FiveDimCameraObserveConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean EnableObserve; // 0x10
		::System::Boolean IsMinimalOvserve; // 0x11
		::System::Byte _padding0[0x2];
		::RPG::MVector2 MaxObserveOffset; // 0x14
		::System::Single ObserveRecoverTime; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCAMERAOBSERVECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimCameraObserveConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimCameraObserveConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCAMERAOBSERVECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
