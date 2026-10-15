#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SetClockBoyEmotion; }
namespace RPG::GameCore { class TaskContext; }

#define AENCKAGKNGC_CTOR_OFFSET UNITYSDK_OFFSET(0xCF03200)
#define AENCKAGKNGC_ODIEBHLKMIA_OFFSET UNITYSDK_OFFSET(0xCF03550)
#define AENCKAGKNGC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xCF03230)
#define AENCKAGKNGC_PGGFGFNNDDD_OFFSET UNITYSDK_OFFSET(0xCF033B0)

inline static constexpr unsigned int AENCKAGKNGC_TypeDefinitionIndex = 56399;

	class AENCKAGKNGC
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetClockBoyEmotion* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetClockBoyEmotion*))((::PBYTE)hIl2Cpp + AENCKAGKNGC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AENCKAGKNGC_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void PGGFGFNNDDD(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + AENCKAGKNGC_PGGFGFNNDDD_OFFSET))(this, a1);
		}

		::System::Void ODIEBHLKMIA(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + AENCKAGKNGC_ODIEBHLKMIA_OFFSET))(this, a1);
		}

	};
