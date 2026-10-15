#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdvSetSkillSlotData; }
namespace RPG::GameCore { class TaskContext; }

#define LGJNNFOFONN_CTOR_OFFSET UNITYSDK_OFFSET(0xB693230)
#define LGJNNFOFONN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB693260)

inline static constexpr unsigned int LGJNNFOFONN_TypeDefinitionIndex = 57889;

	class LGJNNFOFONN
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvSetSkillSlotData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvSetSkillSlotData*))((::PBYTE)hIl2Cpp + LGJNNFOFONN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGJNNFOFONN_ONTASKBEGIN_OFFSET))(this);
		}

	};
