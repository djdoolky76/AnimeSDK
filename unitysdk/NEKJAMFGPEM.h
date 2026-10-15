#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdventureByIsBattlePostureType; }
namespace RPG::GameCore { class TaskContext; }

#define NEKJAMFGPEM_CTOR_OFFSET UNITYSDK_OFFSET(0xBB6F150)
#define NEKJAMFGPEM_EVALUATE_OFFSET UNITYSDK_OFFSET(0xBB6F180)

inline static constexpr unsigned int NEKJAMFGPEM_TypeDefinitionIndex = 54463;

	class NEKJAMFGPEM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdventureByIsBattlePostureType* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdventureByIsBattlePostureType*))((::PBYTE)hIl2Cpp + NEKJAMFGPEM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEKJAMFGPEM_EVALUATE_OFFSET))(this);
		}

	};
