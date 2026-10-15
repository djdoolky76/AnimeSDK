#pragma once
#include "unitysdk/unitysdk.h"
class IPLFIMHABNO;
namespace RPG::GameCore { class TaskContext; }

#define MOFGGFPAJPG_CTOR_OFFSET UNITYSDK_OFFSET(0xBA245F0)
#define MOFGGFPAJPG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBA24620)

inline static constexpr unsigned int MOFGGFPAJPG_TypeDefinitionIndex = 53867;

	class MOFGGFPAJPG
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::IPLFIMHABNO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::IPLFIMHABNO*))((::PBYTE)hIl2Cpp + MOFGGFPAJPG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOFGGFPAJPG_ONTASKBEGIN_OFFSET))(this);
		}

	};
