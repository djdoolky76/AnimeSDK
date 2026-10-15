#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByIsAllLightTeamDied; }
namespace RPG::GameCore { class TaskContext; }

#define LMABOPJHFAJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB772F50)
#define LMABOPJHFAJ_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB772F80)

inline static constexpr unsigned int LMABOPJHFAJ_TypeDefinitionIndex = 54633;

	class LMABOPJHFAJ
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsAllLightTeamDied* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsAllLightTeamDied*))((::PBYTE)hIl2Cpp + LMABOPJHFAJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LMABOPJHFAJ_EVALUATE_OFFSET))(this);
		}

	};
