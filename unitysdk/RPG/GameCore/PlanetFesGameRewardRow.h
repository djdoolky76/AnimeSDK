#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlanetFesGameRewardRow; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_PLANETFESGAMEREWARDROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8F9370)
#define RPG_GAMECORE_PLANETFESGAMEREWARDROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D8F9190)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlanetFesGameRewardRow_TypeDefinitionIndex = 12250;

	class PlanetFesGameRewardRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* BuffList; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* ItemList; // 0x18
		::System::UInt32 GoldNum; // 0x20
		::System::UInt32 GameRewardID; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESGAMEREWARDROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlanetFesGameRewardRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlanetFesGameRewardRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESGAMEREWARDROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
