#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/ModifierEffectType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueDLCAeonRow; }
namespace System { class String; }

#define RPG_GAMECORE_ROGUEDLCAEONROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EC01870)
#define RPG_GAMECORE_ROGUEDLCAEONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EC00BA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueDLCAeonRow_TypeDefinitionIndex = 14893;

	class RogueDLCAeonRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* EffectParam2; // 0x10
		::Il2CppArray<::System::UInt32>* EffectParam1; // 0x18
		::Il2CppArray<::System::UInt32>* ExtraEffect; // 0x20
		::Il2CppArray<::System::Int32>* EffectParam4; // 0x28
		::Il2CppArray<::RPG::GameCore::FixPoint>* DescParam; // 0x30
		::Il2CppArray<::System::UInt32>* EffectParam3; // 0x38
		::System::String* EntrancePrefabPath; // 0x40
		::RPG::GameCore::ModifierEffectType EffectType2; // 0x48
		::System::UInt32 UnlockID; // 0x4C
		::RPG::Client::TextID EffectDesc2; // 0x50
		::RPG::GameCore::ModifierEffectType EffectType3; // 0x60
		::System::UInt32 RogueBuffType; // 0x64
		::System::UInt32 Sort; // 0x68
		::System::UInt32 RogueAeonDisplayID; // 0x6C
		::System::UInt32 BattleEventEnhanceBuffGroup; // 0x70
		::System::UInt32 AeonDiceID; // 0x74
		::System::UInt32 AeonID; // 0x78
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID PlayShortDesc; // 0x80
		::RPG::Client::TextID EffectDesc1; // 0x90
		::System::UInt32 BattleEventBuffGroup; // 0xA0
		::RPG::GameCore::ModifierEffectType EffectType1; // 0xA4
		::RPG::Client::TextID EffectDesc3; // 0xA8
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCAEONROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueDLCAeonRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueDLCAeonRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCAEONROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
