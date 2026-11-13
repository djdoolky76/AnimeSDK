#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ModifierEffectType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueNousAeonRow; }

#define RPG_GAMECORE_ROGUENOUSAEONROW_CTOR_OFFSET UNITYSDK_OFFSET(0x207A81C0)
#define RPG_GAMECORE_ROGUENOUSAEONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x207A7960)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueNousAeonRow_TypeDefinitionIndex = 15075;

	class RogueNousAeonRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* EffectParam1; // 0x10
		::RPG::Client::TextID EffectDesc1; // 0x18
		::System::UInt32 RogueBuffType; // 0x28
		::RPG::GameCore::ModifierEffectType EffectType1; // 0x2C
		::System::UInt32 Sort; // 0x30
		::System::UInt32 AeonID; // 0x34
		::System::UInt32 BattleEventEnhanceBuffGroup; // 0x38
		::System::UInt32 DisplayID; // 0x3C
		::System::UInt32 UnlockID; // 0x40
		::System::UInt32 BattleEventBuffGroup; // 0x44
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSAEONROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueNousAeonRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueNousAeonRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSAEONROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
