#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetBattleResultAsWin; }
namespace RPG::GameCore { class TaskContext; }

#define DHNKLIIMNKC_CTOR_OFFSET UNITYSDK_OFFSET(0xEBEBA50)
#define DHNKLIIMNKC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xEBEBA80)

inline static constexpr unsigned int DHNKLIIMNKC_TypeDefinitionIndex = 58518;

	class DHNKLIIMNKC
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetBattleResultAsWin* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetBattleResultAsWin*))((::PBYTE)hIl2Cpp + DHNKLIIMNKC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHNKLIIMNKC_ONTASKBEGIN_OFFSET))(this);
		}

	};
