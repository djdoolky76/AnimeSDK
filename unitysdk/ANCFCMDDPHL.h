#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SkipTriggerSound; }
namespace RPG::GameCore { class TaskContext; }

#define ANCFCMDDPHL_CTOR_OFFSET UNITYSDK_OFFSET(0x166FA5E0)
#define ANCFCMDDPHL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x166FA610)

inline static constexpr unsigned int ANCFCMDDPHL_TypeDefinitionIndex = 57679;

	class ANCFCMDDPHL
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SkipTriggerSound* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SkipTriggerSound*))((::PBYTE)hIl2Cpp + ANCFCMDDPHL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANCFCMDDPHL_ONTASKBEGIN_OFFSET))(this);
		}

	};
