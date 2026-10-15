#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AutoUseUltraSkill; }
namespace RPG::GameCore { class TaskContext; }

#define BICNPGEKNJI_CTOR_OFFSET UNITYSDK_OFFSET(0xB491B90)
#define BICNPGEKNJI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB491BC0)

inline static constexpr unsigned int BICNPGEKNJI_TypeDefinitionIndex = 54872;

	class BICNPGEKNJI
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AutoUseUltraSkill* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AutoUseUltraSkill*))((::PBYTE)hIl2Cpp + BICNPGEKNJI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BICNPGEKNJI_ONTASKBEGIN_OFFSET))(this);
		}

	};
