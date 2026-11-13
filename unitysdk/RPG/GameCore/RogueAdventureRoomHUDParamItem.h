#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueAdventureGameplayType.h"
#include "unitysdk/System/Object.h"

#define RPG_GAMECORE_ROGUEADVENTUREROOMHUDPARAMITEM_CTOR_OFFSET UNITYSDK_OFFSET(0x1928E910)
#define RPG_GAMECORE_ROGUEADVENTUREROOMHUDPARAMITEM_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1928E8F0)
#define RPG_GAMECORE_ROGUEADVENTUREROOMHUDPARAMITEM_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1928E8D0)
#define RPG_GAMECORE_ROGUEADVENTUREROOMHUDPARAMITEM_SET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1928E900)
#define RPG_GAMECORE_ROGUEADVENTUREROOMHUDPARAMITEM_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x1928E8E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueAdventureRoomHUDParamItem_TypeDefinitionIndex = 59708;

	class RogueAdventureRoomHUDParamItem : public ::System::Object
	{
	public:
		::System::UInt32 _GroupID_k__BackingField; // 0x10
		::RPG::GameCore::RogueAdventureGameplayType _Type_k__BackingField; // 0x14
		::System::Void _ctor(::RPG::GameCore::RogueAdventureGameplayType a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueAdventureGameplayType, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEADVENTUREROOMHUDPARAMITEM_CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::RogueAdventureGameplayType get_Type()
		{
			return ((::RPG::GameCore::RogueAdventureGameplayType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEADVENTUREROOMHUDPARAMITEM_GET_TYPE_OFFSET))(this);
		}

		::System::Void set_Type(::RPG::GameCore::RogueAdventureGameplayType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueAdventureGameplayType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEADVENTUREROOMHUDPARAMITEM_SET_TYPE_OFFSET))(this, a1);
		}

		::System::UInt32 get_GroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEADVENTUREROOMHUDPARAMITEM_GET_GROUPID_OFFSET))(this);
		}

		::System::Void set_GroupID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEADVENTUREROOMHUDPARAMITEM_SET_GROUPID_OFFSET))(this, a1);
		}

	};
}
