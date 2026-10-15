#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AlleyFloorType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AlleyMapRewardRow; }

#define RPG_GAMECORE_ALLEYMAPREWARDROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3E7C00)
#define RPG_GAMECORE_ALLEYMAPREWARDROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D3E7A50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AlleyMapRewardRow_TypeDefinitionIndex = 12640;

	class AlleyMapRewardRow : public ::System::Object
	{
	public:
		::RPG::GameCore::AlleyFloorType LayerID; // 0x10
		::System::UInt32 MapScore; // 0x14
		::System::UInt32 ScoreID; // 0x18
		::System::UInt32 RewardID; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYMAPREWARDROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::AlleyMapRewardRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AlleyMapRewardRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYMAPREWARDROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
