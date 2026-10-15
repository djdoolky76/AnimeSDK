#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BNAIELOHEFF.h"
#include "unitysdk/RPG/Client/SwordTraining/SwordTrainingEffectSource.h"
namespace RPG::Client { class SwordTrainingStatusChangeInfo; }
namespace RPG::GameCore { class SwordTrainingEffectRow; }

#define BMMKCIOEGKJ_CTOR_OFFSET UNITYSDK_OFFSET(0xBDBEB20)
#define BMMKCIOEGKJ_NDGMNPMNPAD_OFFSET UNITYSDK_OFFSET(0xBDBEB40)

inline static constexpr unsigned int BMMKCIOEGKJ_TypeDefinitionIndex = 75015;

	class BMMKCIOEGKJ : public ::BNAIELOHEFF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::SwordTrainingEffectRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SwordTrainingEffectRow*))((::PBYTE)hIl2Cpp + BMMKCIOEGKJ_CTOR_OFFSET))(this, a1);
		}

		::System::Void NDGMNPMNPAD(::RPG::Client::SwordTrainingStatusChangeInfo* a1, ::RPG::Client::SwordTraining::SwordTrainingEffectSource a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTrainingStatusChangeInfo*, ::RPG::Client::SwordTraining::SwordTrainingEffectSource))((::PBYTE)hIl2Cpp + BMMKCIOEGKJ_NDGMNPMNPAD_OFFSET))(this, a1, a2);
		}

	};
