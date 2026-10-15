#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ResetAdventureCharacterCollider; }
namespace RPG::GameCore { class TaskContext; }

#define OMGCNGCGMLE_CTOR_OFFSET UNITYSDK_OFFSET(0xBF272E0)
#define OMGCNGCGMLE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBF27310)

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
