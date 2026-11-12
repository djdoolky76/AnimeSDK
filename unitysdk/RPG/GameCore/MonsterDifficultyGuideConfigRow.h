#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MonsterDifficultyGuideConfigRow; }

#define RPG_GAMECORE_MONSTERDIFFICULTYGUIDECONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EACA2A0)
#define RPG_GAMECORE_MONSTERDIFFICULTYGUIDECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EAC9BC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonsterDifficultyGuideConfigRow_TypeDefinitionIndex = 14365;

	class MonsterDifficultyGuideConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Single>* ParameterList; // 0x10
		::System::UInt32 SkillID; // 0x18
		::System::UInt32 DifficultyGuideID; // 0x1C
		::RPG::Client::TextID DifficultyGuideDescription; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDIFFICULTYGUIDECONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::MonsterDifficultyGuideConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MonsterDifficultyGuideConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDIFFICULTYGUIDECONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
