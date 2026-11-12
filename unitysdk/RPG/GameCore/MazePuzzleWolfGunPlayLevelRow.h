#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/GunPlayModeType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MazePuzzleWolfGunPlayLevelRow; }
namespace System { class String; }

#define RPG_GAMECORE_MAZEPUZZLEWOLFGUNPLAYLEVELROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA8AEE0)
#define RPG_GAMECORE_MAZEPUZZLEWOLFGUNPLAYLEVELROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EA8A5E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MazePuzzleWolfGunPlayLevelRow_TypeDefinitionIndex = 14242;

	class MazePuzzleWolfGunPlayLevelRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* QuestList; // 0x10
		::System::String* TriggerCustomString; // 0x18
		::RPG::GameCore::GunPlayModeType GunMode; // 0x20
		::System::Boolean ShowInUI; // 0x24
		::System::Byte _padding0[0x3];
		::RPG::Client::TextID Description; // 0x28
		::System::UInt32 UnlockConditionMode; // 0x38
		::System::UInt32 GunLevel; // 0x3C
		::RPG::Client::TextID Title; // 0x40
		::System::UInt32 UnlockCondition; // 0x50
		::System::UInt32 TargetScore; // 0x54
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPUZZLEWOLFGUNPLAYLEVELROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::MazePuzzleWolfGunPlayLevelRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MazePuzzleWolfGunPlayLevelRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPUZZLEWOLFGUNPLAYLEVELROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
