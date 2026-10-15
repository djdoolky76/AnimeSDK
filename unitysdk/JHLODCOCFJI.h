#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class MoveStageOnTargetForward; }
namespace RPG::GameCore { class TaskContext; }

#define JHLODCOCFJI_CTOR_OFFSET UNITYSDK_OFFSET(0xB1B4F70)
#define JHLODCOCFJI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB1B4FA0)

inline static constexpr unsigned int JHLODCOCFJI_TypeDefinitionIndex = 55225;

	class JHLODCOCFJI
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::MoveStageOnTargetForward* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::MoveStageOnTargetForward*))((::PBYTE)hIl2Cpp + JHLODCOCFJI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHLODCOCFJI_ONTASKBEGIN_OFFSET))(this);
		}

	};
