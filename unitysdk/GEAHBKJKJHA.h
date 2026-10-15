#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerTeamEditUI; }

#define GEAHBKJKJHA_CTOR_OFFSET UNITYSDK_OFFSET(0x159C6360)
#define GEAHBKJKJHA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x159C6390)

inline static constexpr unsigned int GEAHBKJKJHA_TypeDefinitionIndex = 58801;

	class GEAHBKJKJHA
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerTeamEditUI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerTeamEditUI*))((::PBYTE)hIl2Cpp + GEAHBKJKJHA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEAHBKJKJHA_ONTASKBEGIN_OFFSET))(this);
		}

	};
