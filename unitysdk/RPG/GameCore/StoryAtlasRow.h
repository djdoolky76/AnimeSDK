#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class StoryAtlasRow; }

#define RPG_GAMECORE_STORYATLASROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1ED38140)
#define RPG_GAMECORE_STORYATLASROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1ED37EC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StoryAtlasRow_TypeDefinitionIndex = 12754;

	class StoryAtlasRow : public ::System::Object
	{
	public:
		::System::Int32 SortID; // 0x10
		::System::UInt32 Unlock; // 0x14
		::System::UInt32 ReplaceID; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID Story; // 0x20
		::System::UInt32 AvatarID; // 0x30
		::System::UInt32 StoryID; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STORYATLASROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::StoryAtlasRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StoryAtlasRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STORYATLASROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
