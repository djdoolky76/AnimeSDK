#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdventureTriggerMoveApplyRunSpeed; }
namespace RPG::GameCore { class TaskContext; }

#define MNIFJMMMEHD_CTOR_OFFSET UNITYSDK_OFFSET(0xBA07390)

inline static constexpr unsigned int MNIFJMMMEHD_TypeDefinitionIndex = 57926;

	class MNIFJMMMEHD
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdventureTriggerMoveApplyRunSpeed* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdventureTriggerMoveApplyRunSpeed*))((::PBYTE)hIl2Cpp + MNIFJMMMEHD_CTOR_OFFSET))(this, a1, a2);
		}

	};
