#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AetherPassiveSkillType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AetherDividePassiveSkillRow; }
namespace System { class String; }

#define RPG_GAMECORE_AETHERDIVIDEPASSIVESKILLROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE8EE20)
#define RPG_GAMECORE_AETHERDIVIDEPASSIVESKILLROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DE8E580)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AetherDividePassiveSkillRow_TypeDefinitionIndex = 10926;

	class AetherDividePassiveSkillRow : public ::System::Object
	{
	public:
		::System::String* PassiveSkillName; // 0x10
		::System::String* ItemDescription; // 0x18
		::Il2CppArray<::System::UInt32>* SimpleExtraEffectIDList; // 0x20
		::Il2CppArray<::RPG::GameCore::FixPoint>* SimpleParamList; // 0x28
		::System::String* AbilityName; // 0x30
		::Il2CppArray<::RPG::GameCore::FixPoint>* ParamList; // 0x38
		::System::String* PassiveSkillDescription; // 0x40
		::Il2CppArray<::System::UInt32>* ExtraEffectIDList; // 0x48
		::System::UInt32 Rarity; // 0x50
		::RPG::GameCore::AetherPassiveSkillType PassiveSkillType; // 0x54
		::System::UInt32 ItemID; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDEPASSIVESKILLROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::AetherDividePassiveSkillRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AetherDividePassiveSkillRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDEPASSIVESKILLROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
