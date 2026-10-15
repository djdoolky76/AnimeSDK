#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TrainPartySwitchEnvironment; }

#define DELOABOEEKJ_CTOR_OFFSET UNITYSDK_OFFSET(0xE519A30)
#define DELOABOEEKJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xE519A60)

inline static constexpr unsigned int DELOABOEEKJ_TypeDefinitionIndex = 53430;

	class DELOABOEEKJ
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TrainPartySwitchEnvironment* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TrainPartySwitchEnvironment*))((::PBYTE)hIl2Cpp + DELOABOEEKJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DELOABOEEKJ_ONTASKBEGIN_OFFSET))(this);
		}

	};
