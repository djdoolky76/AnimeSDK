#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RollShopRewardRow; }

#define RPG_GAMECORE_ROLLSHOPREWARDROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA46D60)
#define RPG_GAMECORE_ROLLSHOPREWARDROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DA46C70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RollShopRewardRow_TypeDefinitionIndex = 15080;

	class RollShopRewardRow : public ::System::Object
	{
	public:
		::System::UInt32 RewardID; // 0x10
		::System::UInt32 GroupID; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROLLSHOPREWARDROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RollShopRewardRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RollShopRewardRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROLLSHOPREWARDROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
