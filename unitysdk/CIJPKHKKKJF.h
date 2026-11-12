#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetBattleUIPanelState; }
namespace RPG::GameCore { class TaskContext; }

#define CIJPKHKKKJF_CTOR_OFFSET UNITYSDK_OFFSET(0xD8FBBB0)
#define CIJPKHKKKJF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xD8FBBE0)

inline static constexpr unsigned int CIJPKHKKKJF_TypeDefinitionIndex = 59793;

	class CIJPKHKKKJF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetBattleUIPanelState* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetBattleUIPanelState*))((::PBYTE)hIl2Cpp + CIJPKHKKKJF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIJPKHKKKJF_ONTASKBEGIN_OFFSET))(this);
		}

	};
