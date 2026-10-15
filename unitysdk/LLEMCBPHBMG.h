#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class PerformanceReplay_SetGroupProperty; }
namespace RPG::GameCore { class TaskContext; }

#define LLEMCBPHBMG_CTOR_OFFSET UNITYSDK_OFFSET(0xB75DB20)
#define LLEMCBPHBMG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB75DB50)

inline static constexpr unsigned int LLEMCBPHBMG_TypeDefinitionIndex = 58252;

	class LLEMCBPHBMG
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PerformanceReplay_SetGroupProperty* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PerformanceReplay_SetGroupProperty*))((::PBYTE)hIl2Cpp + LLEMCBPHBMG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLEMCBPHBMG_ONTASKBEGIN_OFFSET))(this);
		}

	};
