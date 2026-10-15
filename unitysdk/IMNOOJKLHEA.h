#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByIsTeamLeader; }
namespace RPG::GameCore { class TaskContext; }

#define IMNOOJKLHEA_CTOR_OFFSET UNITYSDK_OFFSET(0x164E11A0)
#define IMNOOJKLHEA_EVALUATE_OFFSET UNITYSDK_OFFSET(0x164E11D0)

inline static constexpr unsigned int IMNOOJKLHEA_TypeDefinitionIndex = 53150;

	class IMNOOJKLHEA
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsTeamLeader* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsTeamLeader*))((::PBYTE)hIl2Cpp + IMNOOJKLHEA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IMNOOJKLHEA_EVALUATE_OFFSET))(this);
		}

	};
