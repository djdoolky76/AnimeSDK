#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class PumanHuntTriggerEscapeEvent; }
namespace RPG::GameCore { class TaskContext; }

#define IJNLKOIDIDC_CTOR_OFFSET UNITYSDK_OFFSET(0x16471870)
#define IJNLKOIDIDC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x164718A0)

inline static constexpr unsigned int IJNLKOIDIDC_TypeDefinitionIndex = 53188;

	class IJNLKOIDIDC
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PumanHuntTriggerEscapeEvent* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PumanHuntTriggerEscapeEvent*))((::PBYTE)hIl2Cpp + IJNLKOIDIDC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJNLKOIDIDC_ONTASKBEGIN_OFFSET))(this);
		}

	};
