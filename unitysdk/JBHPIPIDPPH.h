#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class BattleChangeAvatar_LeaveStage; }
namespace RPG::GameCore { class TaskContext; }

#define JBHPIPIDPPH_CTOR_OFFSET UNITYSDK_OFFSET(0x16570890)
#define JBHPIPIDPPH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x165708C0)

inline static constexpr unsigned int JBHPIPIDPPH_TypeDefinitionIndex = 54877;

	class JBHPIPIDPPH
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::BattleChangeAvatar_LeaveStage* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::BattleChangeAvatar_LeaveStage*))((::PBYTE)hIl2Cpp + JBHPIPIDPPH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBHPIPIDPPH_ONTASKBEGIN_OFFSET))(this);
		}

	};
