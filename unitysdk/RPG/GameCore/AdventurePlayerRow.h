#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdventurePlayerRow; }
namespace System { class String; }

#define RPG_GAMECORE_ADVENTUREPLAYERROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3CC350)
#define RPG_GAMECORE_ADVENTUREPLAYERROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D3CBBF0)

namespace RPG::GameCore
{
	class AdventurePlayerRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* MazeSkillIdList; // 0x10
		::System::String* PlayerJsonPath; // 0x18
		::System::String* DefaultAvatarHeadIconPath; // 0x20
		::System::String* PlayerPrefabPath; // 0x28
		::RPG::Client::TextID PlayerName; // 0x30
		::System::UInt32 ID; // 0x40
		::System::UInt32 AvatarID; // 0x44
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREPLAYERROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdventurePlayerRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdventurePlayerRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREPLAYERROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
