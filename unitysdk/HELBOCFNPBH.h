#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerWavePerformStartString; }

#define HELBOCFNPBH_CTOR_OFFSET UNITYSDK_OFFSET(0x15C5A600)
#define HELBOCFNPBH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15C5A630)

inline static constexpr unsigned int HELBOCFNPBH_TypeDefinitionIndex = 58803;

	class HELBOCFNPBH
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerWavePerformStartString* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerWavePerformStartString*))((::PBYTE)hIl2Cpp + HELBOCFNPBH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HELBOCFNPBH_ONTASKBEGIN_OFFSET))(this);
		}

	};
