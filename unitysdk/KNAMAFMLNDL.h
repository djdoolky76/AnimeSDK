#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TrainPartySwitchPerformance; }

#define KNAMAFMLNDL_CTOR_OFFSET UNITYSDK_OFFSET(0x18F98AA0)
#define KNAMAFMLNDL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18F98AD0)

inline static constexpr unsigned int KNAMAFMLNDL_TypeDefinitionIndex = 54593;

	class KNAMAFMLNDL
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TrainPartySwitchPerformance* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TrainPartySwitchPerformance*))((::PBYTE)hIl2Cpp + KNAMAFMLNDL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNAMAFMLNDL_ONTASKBEGIN_OFFSET))(this);
		}

	};
