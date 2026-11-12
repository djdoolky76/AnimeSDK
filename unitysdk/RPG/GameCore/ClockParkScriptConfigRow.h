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

#define RPG_GAMECORE_CLOCKPARKSCRIPTCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7D2BA0)
#define RPG_GAMECORE_CLOCKPARKSCRIPTCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E7D2040)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ClockParkScriptConfigRow_TypeDefinitionIndex = 11179;

	class ClockParkScriptConfigRow : public ::System::Object
	{
	public:
		::RPG::GameCore::ClockParkUnlockCost* ScriptUnlockCost; // 0x10
		::System::String* ImgPath; // 0x18
		::System::String* ScriptPostPrefabPath; // 0x20
		::Il2CppArray<::System::UInt32>* TalentCanBeUsed; // 0x28
		::System::String* PrefabPath; // 0x30
		::System::String* ScriptBGM; // 0x38
		::Il2CppArray<::RPG::GameCore::ConditionParam*>* ScriptUnlockCondition; // 0x40
		::System::String* IconPath; // 0x48
		::System::String* ScriptResultLogoMaskPath; // 0x50
		::RPG::Client::TextID ScriptCharacteristic; // 0x58
		::RPG::Client::TextID ScriptDesc; // 0x68
		::System::UInt32 ActivityStudioScriptID; // 0x78
		::System::UInt32 StartChapterID; // 0x7C
		::System::UInt32 ScriptGamePlayGuideGroupID; // 0x80
		::System::UInt32 ScriptEndingUnlockChapterID; // 0x84
		::System::UInt32 ActivityModuleID; // 0x88
		::RPG::GameCore::ClockParkScriptType ScriptType; // 0x8C
		::RPG::Client::TextID ScriptGamePlayDesc; // 0x90
		::RPG::Client::TextID ScriptTitle; // 0xA0
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
