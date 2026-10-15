#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ClearEntityFloatMessage; }
namespace RPG::GameCore { class TaskContext; }

#define MHOKGJANLHM_CTOR_OFFSET UNITYSDK_OFFSET(0xB949D50)
#define MHOKGJANLHM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB949D80)

inline static constexpr unsigned int MHOKGJANLHM_TypeDefinitionIndex = 54962;

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
