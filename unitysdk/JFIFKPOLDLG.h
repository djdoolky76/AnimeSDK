#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class MoveTeam; }
namespace RPG::GameCore { class TaskContext; }

#define JFIFKPOLDLG_CTOR_OFFSET UNITYSDK_OFFSET(0x1664E500)
#define JFIFKPOLDLG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1664E530)

inline static constexpr unsigned int JFIFKPOLDLG_TypeDefinitionIndex = 55227;

	class JFIFKPOLDLG
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::MoveTeam* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::MoveTeam*))((::PBYTE)hIl2Cpp + JFIFKPOLDLG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFIFKPOLDLG_ONTASKBEGIN_OFFSET))(this);
		}

	};
