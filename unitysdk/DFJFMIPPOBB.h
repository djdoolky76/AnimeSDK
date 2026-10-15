#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdvGameplayTrackNpcReset; }
namespace RPG::GameCore { class TaskContext; }

#define DFJFMIPPOBB_CTOR_OFFSET UNITYSDK_OFFSET(0xE824C40)
#define DFJFMIPPOBB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xE824C70)

inline static constexpr unsigned int DFJFMIPPOBB_TypeDefinitionIndex = 52380;

	class DFJFMIPPOBB
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvGameplayTrackNpcReset* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvGameplayTrackNpcReset*))((::PBYTE)hIl2Cpp + DFJFMIPPOBB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFJFMIPPOBB_ONTASKBEGIN_OFFSET))(this);
		}

	};
