#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MonsterDifficultyGuideConfigRow; }

#define RPG_GAMECORE_MONSTERDIFFICULTYGUIDECONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D882920)
#define RPG_GAMECORE_MONSTERDIFFICULTYGUIDECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D882240)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonsterDifficultyGuideConfigRow_TypeDefinitionIndex = 14208;

	class MonsterDifficultyGuideConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Single>* ParameterList; // 0x10
		::RPG::Client::TextID DifficultyGuideDescription; // 0x18
		::System::UInt32 DifficultyGuideID; // 0x28
		::System::UInt32 SkillID; // 0x2C
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
