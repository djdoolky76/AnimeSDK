#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ResetAdventureCharacterCollider; }
namespace RPG::GameCore { class TaskContext; }

#define OMGCNGCGMLE_CTOR_OFFSET UNITYSDK_OFFSET(0xC824C00)
#define OMGCNGCGMLE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC824C30)

inline static constexpr unsigned int OMGCNGCGMLE_TypeDefinitionIndex = 57086;

	class OMGCNGCGMLE
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ResetAdventureCharacterCollider* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ResetAdventureCharacterCollider*))((::PBYTE)hIl2Cpp + OMGCNGCGMLE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMGCNGCGMLE_ONTASKBEGIN_OFFSET))(this);
		}

	};
