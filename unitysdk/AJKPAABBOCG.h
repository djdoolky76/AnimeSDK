#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCompareMusicRhythmSongID; }
namespace RPG::GameCore { class TaskContext; }

#define AJKPAABBOCG_CTOR_OFFSET UNITYSDK_OFFSET(0x12CBF660)
#define AJKPAABBOCG_EVALUATE_OFFSET UNITYSDK_OFFSET(0x12CBF690)

inline static constexpr unsigned int AJKPAABBOCG_TypeDefinitionIndex = 54551;

	class AJKPAABBOCG
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareMusicRhythmSongID* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareMusicRhythmSongID*))((::PBYTE)hIl2Cpp + AJKPAABBOCG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AJKPAABBOCG_EVALUATE_OFFSET))(this);
		}

	};
