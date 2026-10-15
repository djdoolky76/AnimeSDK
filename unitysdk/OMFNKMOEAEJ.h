#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdvGameplayTrackNpcInit; }
namespace RPG::GameCore { class TaskContext; }

#define OMFNKMOEAEJ_CTOR_OFFSET UNITYSDK_OFFSET(0xBF27140)
#define OMFNKMOEAEJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBF27170)

inline static constexpr unsigned int OMFNKMOEAEJ_TypeDefinitionIndex = 52379;

	class OMFNKMOEAEJ
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvGameplayTrackNpcInit* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvGameplayTrackNpcInit*))((::PBYTE)hIl2Cpp + OMFNKMOEAEJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMFNKMOEAEJ_ONTASKBEGIN_OFFSET))(this);
		}

	};
