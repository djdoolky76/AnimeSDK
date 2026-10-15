#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdvReleaseTrigger; }
namespace RPG::GameCore { class TaskContext; }

#define FJHABNAMGKA_CTOR_OFFSET UNITYSDK_OFFSET(0x157B83F0)
#define FJHABNAMGKA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x157B8420)

inline static constexpr unsigned int FJHABNAMGKA_TypeDefinitionIndex = 52479;

	class FJHABNAMGKA
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvReleaseTrigger* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvReleaseTrigger*))((::PBYTE)hIl2Cpp + FJHABNAMGKA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJHABNAMGKA_ONTASKBEGIN_OFFSET))(this);
		}

	};
