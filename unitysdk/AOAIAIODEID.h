#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BNAIELOHEFF.h"
#include "unitysdk/RPG/Client/SwordTraining/SwordTrainingEffectSource.h"
namespace RPG::Client { class SwordTrainingStatusChangeInfo; }
namespace RPG::GameCore { class SwordTrainingEffectRow; }

#define AOAIAIODEID_CTOR_OFFSET UNITYSDK_OFFSET(0x158A5D00)
#define AOAIAIODEID_NDGMNPMNPAD_OFFSET UNITYSDK_OFFSET(0x158A5D10)

inline static constexpr unsigned int AOAIAIODEID_TypeDefinitionIndex = 75017;

	class AOAIAIODEID : public ::BNAIELOHEFF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::SwordTrainingEffectRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SwordTrainingEffectRow*))((::PBYTE)hIl2Cpp + AOAIAIODEID_CTOR_OFFSET))(this, a1);
		}

		::System::Void NDGMNPMNPAD(::RPG::Client::SwordTrainingStatusChangeInfo* a1, ::RPG::Client::SwordTraining::SwordTrainingEffectSource a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTrainingStatusChangeInfo*, ::RPG::Client::SwordTraining::SwordTrainingEffectSource))((::PBYTE)hIl2Cpp + AOAIAIODEID_NDGMNPMNPAD_OFFSET))(this, a1, a2);
		}

	};
