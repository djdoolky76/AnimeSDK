#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/RogueMagicStoryCategory.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueMagicStoryRow; }
namespace System { class String; }

#define RPG_GAMECORE_ROGUEMAGICSTORYROW_CTOR_OFFSET UNITYSDK_OFFSET(0x20776800)
#define RPG_GAMECORE_ROGUEMAGICSTORYROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x20776530)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueMagicStoryRow_TypeDefinitionIndex = 15048;

	class RogueMagicStoryRow : public ::System::Object
	{
	public:
		::System::String* LevelGraphPath; // 0x10
		::System::String* StoryImage; // 0x18
		::RPG::GameCore::RogueMagicStoryCategory StoryCategory; // 0x20
		::System::Boolean IsHide; // 0x24
		::System::Byte _padding0[0x3];
		::RPG::Client::TextID StoryName; // 0x28
		::System::UInt32 UnLockDisplay; // 0x38
		::System::UInt32 StoryID; // 0x3C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICSTORYROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueMagicStoryRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueMagicStoryRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICSTORYROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
