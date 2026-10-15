#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerWaveEffect; }

#define ALCEMGIGLEE_CTOR_OFFSET UNITYSDK_OFFSET(0x15556EA0)
#define ALCEMGIGLEE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15556ED0)

inline static constexpr unsigned int ALCEMGIGLEE_TypeDefinitionIndex = 55771;

	class ALCEMGIGLEE
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerWaveEffect* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerWaveEffect*))((::PBYTE)hIl2Cpp + ALCEMGIGLEE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALCEMGIGLEE_ONTASKBEGIN_OFFSET))(this);
		}

	};
