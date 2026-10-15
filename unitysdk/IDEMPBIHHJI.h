#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetAllMissionWaypointsVisiable; }
namespace RPG::GameCore { class TaskContext; }

#define IDEMPBIHHJI_CTOR_OFFSET UNITYSDK_OFFSET(0x15EBACA0)
#define IDEMPBIHHJI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15EBACD0)

inline static constexpr unsigned int IDEMPBIHHJI_TypeDefinitionIndex = 58508;

	class IDEMPBIHHJI
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetAllMissionWaypointsVisiable* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetAllMissionWaypointsVisiable*))((::PBYTE)hIl2Cpp + IDEMPBIHHJI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDEMPBIHHJI_ONTASKBEGIN_OFFSET))(this);
		}

	};
