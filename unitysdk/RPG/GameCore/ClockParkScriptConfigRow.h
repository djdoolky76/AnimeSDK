#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ClockParkScriptType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ClockParkScriptConfigRow; }
namespace RPG::GameCore { class ClockParkUnlockCost; }
namespace RPG::GameCore { class ConditionParam; }
namespace System { class String; }

#define RPG_GAMECORE_CLOCKPARKSCRIPTCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1F50B900)
#define RPG_GAMECORE_CLOCKPARKSCRIPTCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1F50ADA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ClockParkScriptConfigRow_TypeDefinitionIndex = 11179;

	class ClockParkScriptConfigRow : public ::System::Object
	{
	public:
		::System::String* PrefabPath; // 0x10
		::System::String* ScriptBGM; // 0x18
		::System::String* ImgPath; // 0x20
		::System::String* ScriptPostPrefabPath; // 0x28
		::RPG::GameCore::ClockParkUnlockCost* ScriptUnlockCost; // 0x30
		::Il2CppArray<::RPG::GameCore::ConditionParam*>* ScriptUnlockCondition; // 0x38
		::System::String* IconPath; // 0x40
		::System::String* ScriptResultLogoMaskPath; // 0x48
		::Il2CppArray<::System::UInt32>* TalentCanBeUsed; // 0x50
		::System::UInt32 ActivityStudioScriptID; // 0x58
		::System::UInt32 StartChapterID; // 0x5C
		::RPG::Client::TextID ScriptGamePlayDesc; // 0x60
		::RPG::GameCore::ClockParkScriptType ScriptType; // 0x70
		::System::UInt32 ActivityModuleID; // 0x74
		::RPG::Client::TextID ScriptCharacteristic; // 0x78
		::RPG::Client::TextID ScriptDesc; // 0x88
		::RPG::Client::TextID ScriptTitle; // 0x98
		::System::UInt32 ScriptEndingUnlockChapterID; // 0xA8
		::System::UInt32 ScriptGamePlayGuideGroupID; // 0xAC
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKSCRIPTCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ClockParkScriptConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ClockParkScriptConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKSCRIPTCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
