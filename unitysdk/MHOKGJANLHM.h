#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ClearEntityFloatMessage; }
namespace RPG::GameCore { class TaskContext; }

#define MHOKGJANLHM_CTOR_OFFSET UNITYSDK_OFFSET(0x1B36AE20)
#define MHOKGJANLHM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1B36AE50)

inline static constexpr unsigned int MHOKGJANLHM_TypeDefinitionIndex = 56136;

	class MHOKGJANLHM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ClearEntityFloatMessage* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ClearEntityFloatMessage*))((::PBYTE)hIl2Cpp + MHOKGJANLHM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHOKGJANLHM_ONTASKBEGIN_OFFSET))(this);
		}

	};
