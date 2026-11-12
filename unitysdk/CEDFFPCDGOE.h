#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class RemoveEffectOnCharacter; }
namespace RPG::GameCore { class TaskContext; }

#define CEDFFPCDGOE_CTOR_OFFSET UNITYSDK_OFFSET(0xD0E95E0)
#define CEDFFPCDGOE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xD0E9610)

inline static constexpr unsigned int CEDFFPCDGOE_TypeDefinitionIndex = 59642;

	class CEDFFPCDGOE
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RemoveEffectOnCharacter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RemoveEffectOnCharacter*))((::PBYTE)hIl2Cpp + CEDFFPCDGOE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEDFFPCDGOE_ONTASKBEGIN_OFFSET))(this);
		}

	};
