#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class EnableHugeMonsterHalfDither; }
namespace RPG::GameCore { class TaskContext; }

#define FOMCFDKOPFK_CTOR_OFFSET UNITYSDK_OFFSET(0x158F9EA0)
#define FOMCFDKOPFK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x158F9ED0)

inline static constexpr unsigned int FOMCFDKOPFK_TypeDefinitionIndex = 55015;

	class FOMCFDKOPFK
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::EnableHugeMonsterHalfDither* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::EnableHugeMonsterHalfDither*))((::PBYTE)hIl2Cpp + FOMCFDKOPFK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOMCFDKOPFK_ONTASKBEGIN_OFFSET))(this);
		}

	};
