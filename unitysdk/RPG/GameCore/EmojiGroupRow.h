#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/EmojiGroupTypeEnum.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class EmojiGroupRow; }
namespace System { class String; }

#define RPG_GAMECORE_EMOJIGROUPROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E87B480)
#define RPG_GAMECORE_EMOJIGROUPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E87ADA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EmojiGroupRow_TypeDefinitionIndex = 13296;

	class EmojiGroupRow : public ::System::Object
	{
	public:
		::System::String* ImgPath; // 0x10
		::RPG::Client::TextID GroupName; // 0x18
		::System::UInt32 EmojiGroupID; // 0x28
		::RPG::GameCore::EmojiGroupTypeEnum EmojiGroupType; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EMOJIGROUPROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::EmojiGroupRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::EmojiGroupRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EMOJIGROUPROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
