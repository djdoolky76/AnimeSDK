#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetTargetTrackMove; }
namespace RPG::GameCore { class TaskContext; }

#define CCKCBFABFEL_CTOR_OFFSET UNITYSDK_OFFSET(0xC7472E0)
#define CCKCBFABFEL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC747310)

inline static constexpr unsigned int CCKCBFABFEL_TypeDefinitionIndex = 58588;

	class CCKCBFABFEL
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetTargetTrackMove* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetTargetTrackMove*))((::PBYTE)hIl2Cpp + CCKCBFABFEL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCKCBFABFEL_ONTASKBEGIN_OFFSET))(this);
		}

	};
