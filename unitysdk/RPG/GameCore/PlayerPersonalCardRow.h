#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PersonalizeShowType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlayerPersonalCardRow; }
namespace System { class String; }

#define RPG_GAMECORE_PLAYERPERSONALCARDROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D936F30)
#define RPG_GAMECORE_PLAYERPERSONALCARDROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D936C70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayerPersonalCardRow_TypeDefinitionIndex = 14498;

	class PlayerPersonalCardRow : public ::System::Object
	{
	public:
		::System::String* SupportPrefabPath; // 0x10
		::System::String* CardPrefabPath; // 0x18
		::System::String* ReplaceIconPath; // 0x20
		::System::String* FriendPrefabPath; // 0x28
		::System::String* ChatPrefabPath; // 0x30
		::System::UInt32 CardID; // 0x38
		::System::UInt32 ShowParam; // 0x3C
		::RPG::GameCore::PersonalizeShowType ShowType; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERPERSONALCARDROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlayerPersonalCardRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlayerPersonalCardRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERPERSONALCARDROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
