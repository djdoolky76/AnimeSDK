#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WolfBroGunPlayPuzzleLoadClockParkModifier; }

#define DFFMCKGHOBM_CTOR_OFFSET UNITYSDK_OFFSET(0xE827AE0)
#define DFFMCKGHOBM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xE827B10)

inline static constexpr unsigned int DFFMCKGHOBM_TypeDefinitionIndex = 58955;

	class DFFMCKGHOBM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WolfBroGunPlayPuzzleLoadClockParkModifier* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WolfBroGunPlayPuzzleLoadClockParkModifier*))((::PBYTE)hIl2Cpp + DFFMCKGHOBM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFFMCKGHOBM_ONTASKBEGIN_OFFSET))(this);
		}

	};
