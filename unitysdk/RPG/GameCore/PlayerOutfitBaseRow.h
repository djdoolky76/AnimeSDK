#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PlayerOutfitSlotType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlayerOutfitBaseRow; }

#define RPG_GAMECORE_PLAYEROUTFITBASEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D936640)
#define RPG_GAMECORE_PLAYEROUTFITBASEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D9364F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayerOutfitBaseRow_TypeDefinitionIndex = 14509;

	class PlayerOutfitBaseRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::PlayerOutfitSlotType>* SlotTypeList; // 0x10
		::System::UInt32 ItemID; // 0x18
		::System::UInt32 OutfitID; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYEROUTFITBASEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlayerOutfitBaseRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlayerOutfitBaseRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYEROUTFITBASEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
