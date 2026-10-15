#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimDashBasicConfig; }

#define RPG_GAMECORE_FIVEDIMDASHBASICCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6B8150)
#define RPG_GAMECORE_FIVEDIMDASHBASICCONFIG_FPBFHHHPFGH_OFFSET UNITYSDK_OFFSET(0x1D6B8160)
#define RPG_GAMECORE_FIVEDIMDASHBASICCONFIG_FPGOHDHOAGP_OFFSET UNITYSDK_OFFSET(0x1D6B81D0)
#define RPG_GAMECORE_FIVEDIMDASHBASICCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6B7F70)

namespace RPG::GameCore
{
	class FiveDimDashBasicConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single DashDist; // 0x10
		::System::Single Duration; // 0x14
		::System::Single EndSpeedMultiplier; // 0x18
		::System::Single DashInitSpeed; // 0x1C
		::System::Single DashAcc; // 0x20
		// static const ::System::Object SMALL_NUMBER; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMDASHBASICCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimDashBasicConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimDashBasicConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMDASHBASICCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		::System::Void FPBFHHHPFGH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMDASHBASICCONFIG_FPBFHHHPFGH_OFFSET))(this);
		}

		static ::System::Void FPGOHDHOAGP(::RPG::GameCore::FiveDimDashBasicConfig* a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::RPG::GameCore::FiveDimDashBasicConfig*, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMDASHBASICCONFIG_FPGOHDHOAGP_OFFSET))(a1, a2, a3, a4);
		}

	};
}
