#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TeamMemberCountingOption.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

inline static constexpr unsigned int MHIDMJPLGCK_TypeDefinitionIndex = 56432;

	struct alignas(8) MHIDMJPLGCK
	{
		::RPG::GameCore::TargetEvaluator* DMJCIFFAFNK; // 0x10
		::System::String* BDMNDNBMKAG; // 0x18
		::System::Boolean OIPOMFLGBOB; // 0x20
		::System::Byte _padding0[0x7];
		::RPG::GameCore::TargetEvaluator* KGONNLNKLDB; // 0x28
		::System::Boolean JPNNNDFMBBJ; // 0x30
		::System::Byte _padding1[0x3];
		::RPG::GameCore::TeamType BEGKIKOGEOD; // 0x34
		::System::Boolean DAJDJCBHMHK; // 0x38
		::System::Byte _padding2[0x7];
		::RPG::GameCore::TaskContext* GPKCGOLOJKC; // 0x40
		::RPG::GameCore::TeamMemberCountingOption CBFAMPJIHKG; // 0x48
	};
