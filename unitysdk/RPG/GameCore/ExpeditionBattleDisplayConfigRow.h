#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ExpeditionBattleDisplayConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_EXPEDITIONBATTLEDISPLAYCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D661200)
#define RPG_GAMECORE_EXPEDITIONBATTLEDISPLAYCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D660EE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ExpeditionBattleDisplayConfigRow_TypeDefinitionIndex = 11454;

	class ExpeditionBattleDisplayConfigRow : public ::System::Object
	{
	public:
		::System::String* BattleEmojiPath; // 0x10
		::System::String* EmojiPath; // 0x18
		::RPG::Client::TextID CommonTalk; // 0x20
		::System::UInt32 AvatarID; // 0x30
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID VictoryTalk; // 0x38
		::RPG::Client::TextID StartTalk; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONBATTLEDISPLAYCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ExpeditionBattleDisplayConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ExpeditionBattleDisplayConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONBATTLEDISPLAYCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
