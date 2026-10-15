#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SwitchAudioListenerToCamera; }
namespace RPG::GameCore { class TaskContext; }

#define BPLGLKMKNBF_CTOR_OFFSET UNITYSDK_OFFSET(0xC1A8250)
#define BPLGLKMKNBF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC1A8280)

inline static constexpr unsigned int BPLGLKMKNBF_TypeDefinitionIndex = 58741;

	class BPLGLKMKNBF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SwitchAudioListenerToCamera* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SwitchAudioListenerToCamera*))((::PBYTE)hIl2Cpp + BPLGLKMKNBF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPLGLKMKNBF_ONTASKBEGIN_OFFSET))(this);
		}

	};
