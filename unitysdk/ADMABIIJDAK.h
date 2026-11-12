#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ResetMissionAudioState; }
namespace RPG::GameCore { class TaskContext; }

#define ADMABIIJDAK_CTOR_OFFSET UNITYSDK_OFFSET(0xB7AB9D0)
#define ADMABIIJDAK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB7ABA00)

inline static constexpr unsigned int ADMABIIJDAK_TypeDefinitionIndex = 59653;

	class ADMABIIJDAK
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ResetMissionAudioState* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ResetMissionAudioState*))((::PBYTE)hIl2Cpp + ADMABIIJDAK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADMABIIJDAK_ONTASKBEGIN_OFFSET))(this);
		}

	};
