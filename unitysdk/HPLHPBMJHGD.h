#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueAdventureGameplayType.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class RogueAdventureRoomRow; }
namespace RPG::GameCore { class RogueArcadeConfigRow; }
namespace RPG::GameCore { class RogueDLCAdventureRoomRow; }
namespace RPG::GameCore { class RogueMagicAdventureRoomRow; }
namespace RPG::GameCore { class RogueTournAdventureRoomRow; }

#define HPLHPBMJHGD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x16D5DE80)
#define HPLHPBMJHGD_CTOR_2_OFFSET UNITYSDK_OFFSET(0x16D5DEB0)
#define HPLHPBMJHGD_CTOR_3_OFFSET UNITYSDK_OFFSET(0x16D5DEE0)
#define HPLHPBMJHGD_CTOR_4_OFFSET UNITYSDK_OFFSET(0x16D5DF00)
#define HPLHPBMJHGD_CTOR_OFFSET UNITYSDK_OFFSET(0x16D5DE60)
#define HPLHPBMJHGD_GET_ADVENTURETYPE_OFFSET UNITYSDK_OFFSET(0x16D772F0)
#define HPLHPBMJHGD_GET_PARAMGROUPID_OFFSET UNITYSDK_OFFSET(0x16D77310)
#define HPLHPBMJHGD_SET_ADVENTURETYPE_OFFSET UNITYSDK_OFFSET(0x16D77300)
#define HPLHPBMJHGD_SET_PARAMGROUPID_OFFSET UNITYSDK_OFFSET(0x16D77320)

inline static constexpr unsigned int HPLHPBMJHGD_TypeDefinitionIndex = 69105;

	class HPLHPBMJHGD : public ::System::Object
	{
	public:
		::RPG::GameCore::RogueAdventureGameplayType _AdventureType_k__BackingField; // 0x10
		::System::UInt32 _ParamGroupID_k__BackingField; // 0x14
		::System::Void _ctor(::RPG::GameCore::RogueDLCAdventureRoomRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueDLCAdventureRoomRow*))((::PBYTE)hIl2Cpp + HPLHPBMJHGD_CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::RPG::GameCore::RogueAdventureRoomRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueAdventureRoomRow*))((::PBYTE)hIl2Cpp + HPLHPBMJHGD_CTOR_1_OFFSET))(this, a1);
		}

		::System::Void _ctor_2(::RPG::GameCore::RogueTournAdventureRoomRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueTournAdventureRoomRow*))((::PBYTE)hIl2Cpp + HPLHPBMJHGD_CTOR_2_OFFSET))(this, a1);
		}

		::System::Void _ctor_3(::RPG::GameCore::RogueArcadeConfigRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueArcadeConfigRow*))((::PBYTE)hIl2Cpp + HPLHPBMJHGD_CTOR_3_OFFSET))(this, a1);
		}

		::System::Void _ctor_4(::RPG::GameCore::RogueMagicAdventureRoomRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueMagicAdventureRoomRow*))((::PBYTE)hIl2Cpp + HPLHPBMJHGD_CTOR_4_OFFSET))(this, a1);
		}

		::RPG::GameCore::RogueAdventureGameplayType get_AdventureType()
		{
			return ((::RPG::GameCore::RogueAdventureGameplayType(*)(::PVOID))((::PBYTE)hIl2Cpp + HPLHPBMJHGD_GET_ADVENTURETYPE_OFFSET))(this);
		}

		::System::Void set_AdventureType(::RPG::GameCore::RogueAdventureGameplayType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueAdventureGameplayType))((::PBYTE)hIl2Cpp + HPLHPBMJHGD_SET_ADVENTURETYPE_OFFSET))(this, a1);
		}

		::System::UInt32 get_ParamGroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HPLHPBMJHGD_GET_PARAMGROUPID_OFFSET))(this);
		}

		::System::Void set_ParamGroupID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HPLHPBMJHGD_SET_PARAMGROUPID_OFFSET))(this, a1);
		}

	};
