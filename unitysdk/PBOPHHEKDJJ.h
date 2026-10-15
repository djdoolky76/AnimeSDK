#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class CharacterHeadResetLookAtSpeed; }
namespace RPG::GameCore { class TaskContext; }

#define PBOPHHEKDJJ_CTOR_OFFSET UNITYSDK_OFFSET(0xBFF6D20)
#define PBOPHHEKDJJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBFF6D50)

inline static constexpr unsigned int PBOPHHEKDJJ_TypeDefinitionIndex = 58004;

	class PBOPHHEKDJJ
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CharacterHeadResetLookAtSpeed* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CharacterHeadResetLookAtSpeed*))((::PBYTE)hIl2Cpp + PBOPHHEKDJJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBOPHHEKDJJ_ONTASKBEGIN_OFFSET))(this);
		}

	};
