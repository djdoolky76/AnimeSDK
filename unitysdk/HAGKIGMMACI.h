#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class OverrideEntityModifierPhaseCamera; }
namespace RPG::GameCore { class TaskContext; }

#define HAGKIGMMACI_CTOR_OFFSET UNITYSDK_OFFSET(0x15B76550)
#define HAGKIGMMACI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15B76580)

inline static constexpr unsigned int HAGKIGMMACI_TypeDefinitionIndex = 55239;

	class HAGKIGMMACI
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::OverrideEntityModifierPhaseCamera* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::OverrideEntityModifierPhaseCamera*))((::PBYTE)hIl2Cpp + HAGKIGMMACI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAGKIGMMACI_ONTASKBEGIN_OFFSET))(this);
		}

	};
