#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SwitchAudioListenerToTarget; }
namespace RPG::GameCore { class TaskContext; }

#define LGLGHDFHKCN_CTOR_OFFSET UNITYSDK_OFFSET(0xB69C330)
#define LGLGHDFHKCN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB69C360)

inline static constexpr unsigned int LGLGHDFHKCN_TypeDefinitionIndex = 58742;

	class LGLGHDFHKCN
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SwitchAudioListenerToTarget* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SwitchAudioListenerToTarget*))((::PBYTE)hIl2Cpp + LGLGHDFHKCN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGLGHDFHKCN_ONTASKBEGIN_OFFSET))(this);
		}

	};
