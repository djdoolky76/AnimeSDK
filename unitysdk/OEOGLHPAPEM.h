#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetMonsterHUDType; }
namespace RPG::GameCore { class TaskContext; }

#define OEOGLHPAPEM_CTOR_OFFSET UNITYSDK_OFFSET(0x1765E8F0)
#define OEOGLHPAPEM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1765E920)

inline static constexpr unsigned int OEOGLHPAPEM_TypeDefinitionIndex = 56735;

	class OEOGLHPAPEM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetMonsterHUDType* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetMonsterHUDType*))((::PBYTE)hIl2Cpp + OEOGLHPAPEM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEOGLHPAPEM_ONTASKBEGIN_OFFSET))(this);
		}

	};
