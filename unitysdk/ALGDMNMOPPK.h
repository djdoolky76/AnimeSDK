#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdventureSubmitSkill; }
namespace RPG::GameCore { class TaskContext; }

#define ALGDMNMOPPK_CTOR_OFFSET UNITYSDK_OFFSET(0x163D69D0)
#define ALGDMNMOPPK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x163D6A00)

inline static constexpr unsigned int ALGDMNMOPPK_TypeDefinitionIndex = 59152;

	class ALGDMNMOPPK
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdventureSubmitSkill* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdventureSubmitSkill*))((::PBYTE)hIl2Cpp + ALGDMNMOPPK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALGDMNMOPPK_ONTASKBEGIN_OFFSET))(this);
		}

	};
