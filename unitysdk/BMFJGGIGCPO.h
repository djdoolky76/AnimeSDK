#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ActiveCommonSkillPool; }
namespace RPG::GameCore { class TaskContext; }

#define BMFJGGIGCPO_CTOR_OFFSET UNITYSDK_OFFSET(0xBDA8810)
#define BMFJGGIGCPO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBDA8840)

inline static constexpr unsigned int BMFJGGIGCPO_TypeDefinitionIndex = 54804;

	class BMFJGGIGCPO
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ActiveCommonSkillPool* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ActiveCommonSkillPool*))((::PBYTE)hIl2Cpp + BMFJGGIGCPO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMFJGGIGCPO_ONTASKBEGIN_OFFSET))(this);
		}

	};
