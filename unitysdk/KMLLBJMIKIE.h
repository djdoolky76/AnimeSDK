#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class UnlockReShaCamera; }

#define KMLLBJMIKIE_CTOR_OFFSET UNITYSDK_OFFSET(0xB55FC10)
#define KMLLBJMIKIE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB55FC40)

inline static constexpr unsigned int KMLLBJMIKIE_TypeDefinitionIndex = 53462;

	class KMLLBJMIKIE
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::UnlockReShaCamera* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::UnlockReShaCamera*))((::PBYTE)hIl2Cpp + KMLLBJMIKIE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMLLBJMIKIE_ONTASKBEGIN_OFFSET))(this);
		}

	};
