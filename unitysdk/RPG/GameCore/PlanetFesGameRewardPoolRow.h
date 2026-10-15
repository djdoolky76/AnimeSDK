#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PlanetFesMiniGameRewardType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlanetFesGameRewardPoolRow; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_PLANETFESGAMEREWARDPOOLROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D926AF0)
#define RPG_GAMECORE_PLANETFESGAMEREWARDPOOLROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D926940)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlanetFesGameRewardPoolRow_TypeDefinitionIndex = 12244;

	class PlanetFesGameRewardPoolRow : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* RewardParam; // 0x10
		::System::UInt32 RewardPoolID; // 0x18
		::RPG::GameCore::PlanetFesMiniGameRewardType Type; // 0x1C
		::System::UInt32 Order; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESGAMEREWARDPOOLROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlanetFesGameRewardPoolRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlanetFesGameRewardPoolRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESGAMEREWARDPOOLROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
