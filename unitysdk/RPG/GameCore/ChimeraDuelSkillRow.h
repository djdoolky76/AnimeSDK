#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelSkillEffectScope.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraDuelSkillRow; }
namespace System { class String; }

#define RPG_GAMECORE_CHIMERADUELSKILLROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D57CE00)
#define RPG_GAMECORE_CHIMERADUELSKILLROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D57C940)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelSkillRow_TypeDefinitionIndex = 11145;

	class ChimeraDuelSkillRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::String*>* AdditionalTriggerConditionList; // 0x10
		::Il2CppArray<::System::Single>* ParamList; // 0x18
		::Il2CppArray<::System::UInt32>* TriggerEventList; // 0x20
		::System::String* AbilityJsonPath; // 0x28
		::RPG::GameCore::ChimeraDuelSkillEffectScope Type; // 0x30
		::System::UInt32 SkillID; // 0x34
		::System::Boolean IsImmediate; // 0x38
		::System::Boolean HasDisplay; // 0x39
		::System::Byte _padding0[0x2];
		::System::UInt32 SkillCD; // 0x3C
		::System::UInt32 Priority; // 0x40
		::System::Byte _padding1[0x4];
		::RPG::Client::TextID PlainDescription; // 0x48
		::RPG::Client::TextID Description; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELSKILLROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelSkillRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelSkillRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELSKILLROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
