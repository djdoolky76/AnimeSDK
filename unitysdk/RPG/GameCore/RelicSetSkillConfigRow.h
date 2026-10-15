#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class NOCGHCNMOKB;
namespace RPG::GameCore { class RelicSetSkillConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_RELICSETSKILLCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D982020)
#define RPG_GAMECORE_RELICSETSKILLCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D981930)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RelicSetSkillConfigRow_TypeDefinitionIndex = 14638;

	class RelicSetSkillConfigRow : public ::System::Object
	{
	public:
		::System::String* AbilityName; // 0x10
		::Il2CppArray<::NOCGHCNMOKB*>* PropertyList; // 0x18
		::System::String* SkillDesc; // 0x20
		::Il2CppArray<::RPG::GameCore::FixPoint>* AbilityParamList; // 0x28
		::System::UInt32 SetID; // 0x30
		::System::UInt32 RequireNum; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICSETSKILLCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RelicSetSkillConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RelicSetSkillConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICSETSKILLCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
