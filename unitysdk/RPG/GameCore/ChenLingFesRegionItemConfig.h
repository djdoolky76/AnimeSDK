#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChenLingFesPosition; }
namespace RPG::GameCore { class ChenLingFesRegionItemConfig; }

#define RPG_GAMECORE_CHENLINGFESREGIONITEMCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D590B50)
#define RPG_GAMECORE_CHENLINGFESREGIONITEMCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D590A00)

namespace RPG::GameCore
{
	class ChenLingFesRegionItemConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 ID; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::GameCore::ChenLingFesPosition* Position; // 0x18
		::System::UInt32 RotateAngle; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGFESREGIONITEMCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingFesRegionItemConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingFesRegionItemConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGFESREGIONITEMCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
