#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class LevelChallengeTurnAcc; }
namespace RPG::GameCore { class TaskContext; }

#define HBGNNGHBKLO_CTOR_OFFSET UNITYSDK_OFFSET(0x15C03600)
#define HBGNNGHBKLO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15C03630)

inline static constexpr unsigned int HBGNNGHBKLO_TypeDefinitionIndex = 55137;

	class HBGNNGHBKLO
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::LevelChallengeTurnAcc* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::LevelChallengeTurnAcc*))((::PBYTE)hIl2Cpp + HBGNNGHBKLO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBGNNGHBKLO_ONTASKBEGIN_OFFSET))(this);
		}

	};
