#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class ModifySpecialSP; }
namespace RPG::GameCore { class SkillData; }
namespace RPG::GameCore { class TaskContext; }

#define BGAFIFAHKFL_ANAGAHONMKO_OFFSET UNITYSDK_OFFSET(0xB176440)
#define BGAFIFAHKFL_CTOR_OFFSET UNITYSDK_OFFSET(0xB175A50)
#define BGAFIFAHKFL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB175A80)

inline static constexpr unsigned int BGAFIFAHKFL_TypeDefinitionIndex = 55217;

	class BGAFIFAHKFL
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ModifySpecialSP* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ModifySpecialSP*))((::PBYTE)hIl2Cpp + BGAFIFAHKFL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGAFIFAHKFL_ONTASKBEGIN_OFFSET))(this);
		}

		::RPG::GameCore::SkillData* ANAGAHONMKO(::RPG::GameCore::GameEntity* a1)
		{
			return ((::RPG::GameCore::SkillData*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + BGAFIFAHKFL_ANAGAHONMKO_OFFSET))(this, a1);
		}

	};
