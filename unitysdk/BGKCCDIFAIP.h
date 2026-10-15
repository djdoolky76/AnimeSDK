#pragma once
#include "unitysdk/unitysdk.h"
class GJLMLKJJJPC;
namespace RPG::GameCore { class TaskContext; }

#define BGKCCDIFAIP_CTOR_OFFSET UNITYSDK_OFFSET(0xB18BED0)
#define BGKCCDIFAIP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB18BF00)

inline static constexpr unsigned int BGKCCDIFAIP_TypeDefinitionIndex = 55530;

	class BGKCCDIFAIP
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::GJLMLKJJJPC* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::GJLMLKJJJPC*))((::PBYTE)hIl2Cpp + BGKCCDIFAIP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGKCCDIFAIP_ONTASKBEGIN_OFFSET))(this);
		}

	};
