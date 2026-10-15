#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class RemoveNavMeshState; }
namespace RPG::GameCore { class TaskContext; }

#define PCJEFBOMLDG_CTOR_OFFSET UNITYSDK_OFFSET(0xBFFB210)
#define PCJEFBOMLDG_ODJGBNPAKMC_OFFSET UNITYSDK_OFFSET(0xBFFB290)
#define PCJEFBOMLDG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBFFB240)

inline static constexpr unsigned int PCJEFBOMLDG_TypeDefinitionIndex = 53199;

	class PCJEFBOMLDG
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RemoveNavMeshState* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RemoveNavMeshState*))((::PBYTE)hIl2Cpp + PCJEFBOMLDG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCJEFBOMLDG_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void ODJGBNPAKMC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCJEFBOMLDG_ODJGBNPAKMC_OFFSET))(this);
		}

	};
