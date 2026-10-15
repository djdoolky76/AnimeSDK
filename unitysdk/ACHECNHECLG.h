#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SwitchOverrideController; }
namespace RPG::GameCore { class TaskContext; }

#define ACHECNHECLG_CTOR_OFFSET UNITYSDK_OFFSET(0xB11E970)
#define ACHECNHECLG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB11E9A0)

inline static constexpr unsigned int ACHECNHECLG_TypeDefinitionIndex = 55689;

	class ACHECNHECLG
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SwitchOverrideController* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SwitchOverrideController*))((::PBYTE)hIl2Cpp + ACHECNHECLG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACHECNHECLG_ONTASKBEGIN_OFFSET))(this);
		}

	};
