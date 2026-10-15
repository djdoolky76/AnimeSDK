#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetBattleTargetDialogOffset; }
namespace RPG::GameCore { class TaskContext; }

#define FGELGMIOMPJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1574D8A0)
#define FGELGMIOMPJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1574D8D0)

inline static constexpr unsigned int FGELGMIOMPJ_TypeDefinitionIndex = 47608;

	class FGELGMIOMPJ
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetBattleTargetDialogOffset* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetBattleTargetDialogOffset*))((::PBYTE)hIl2Cpp + FGELGMIOMPJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGELGMIOMPJ_ONTASKBEGIN_OFFSET))(this);
		}

	};
