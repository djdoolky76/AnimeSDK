#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AetherSpiritType.h"
#include "unitysdk/RPG/GameCore/AttackType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/SkillEffect.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AetherDivideSpiritSkillRow; }
namespace System { class String; }

#define RPG_GAMECORE_AETHERDIVIDESPIRITSKILLROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5FC760)
#define RPG_GAMECORE_AETHERDIVIDESPIRITSKILLROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E5FB890)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AetherDivideSpiritSkillRow_TypeDefinitionIndex = 10924;

	class AetherDivideSpiritSkillRow : public ::System::Object
	{
	public:
		::System::String* UltraSkillIcon; // 0x10
		::Il2CppArray<::RPG::GameCore::FixPoint>* SimpleParamList; // 0x18
		::Il2CppArray<::System::UInt32>* ExtraEffectIDList; // 0x20
		::Il2CppArray<::RPG::GameCore::FixPoint>* ParamList; // 0x28
		::Il2CppArray<::System::UInt32>* SimpleExtraEffectIDList; // 0x30
		::System::String* SkillTriggerKey; // 0x38
		::System::String* SkillIcon; // 0x40
		::RPG::GameCore::FixPoint BPAdd; // 0x48
		::RPG::GameCore::FixPoint SPBase; // 0x50
		::RPG::GameCore::FixPoint SPNeed; // 0x58
		::RPG::Client::TextID SkillName; // 0x60
		::RPG::GameCore::SkillEffect SkillEffect; // 0x70
		::RPG::GameCore::AetherSpiritType PropertyType; // 0x74
		::RPG::Client::TextID SimpleSkillDesc; // 0x78
		::RPG::GameCore::AttackType AttackType; // 0x88
		::System::UInt32 SkillID; // 0x8C
		::RPG::GameCore::FixPoint BPNeed; // 0x90
		::RPG::GameCore::FixPoint SPMultipleRatio; // 0x98
		::RPG::Client::TextID SkillDesc; // 0xA0
		::RPG::Client::TextID SkillTag; // 0xB0
		::RPG::GameCore::FixPoint SkillComboValueDelta; // 0xC0
		::RPG::Client::TextID SkillTypeDesc; // 0xC8
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDESPIRITSKILLROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::AetherDivideSpiritSkillRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AetherDivideSpiritSkillRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDESPIRITSKILLROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
