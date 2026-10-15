#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class RewindTimeRewindTargetInRange; }
namespace RPG::GameCore { class TaskContext; }

#define LGHOONFIAKM_CTOR_OFFSET UNITYSDK_OFFSET(0xB697F60)
#define LGHOONFIAKM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB697F90)

inline static constexpr unsigned int LGHOONFIAKM_TypeDefinitionIndex = 53387;

	class LGHOONFIAKM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RewindTimeRewindTargetInRange* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RewindTimeRewindTargetInRange*))((::PBYTE)hIl2Cpp + LGHOONFIAKM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGHOONFIAKM_ONTASKBEGIN_OFFSET))(this);
		}

	};
