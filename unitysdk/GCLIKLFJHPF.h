#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BNAIELOHEFF.h"
#include "unitysdk/RPG/Client/SwordTraining/SwordTrainingEffectSource.h"
namespace RPG::Client { class SwordTrainingStatusChangeInfo; }
namespace RPG::GameCore { class SwordTrainingEffectRow; }

#define GCLIKLFJHPF_CTOR_OFFSET UNITYSDK_OFFSET(0x159834F0)
#define GCLIKLFJHPF_GMJDOFFGEAM_OFFSET UNITYSDK_OFFSET(0x159835B0)

	class GCLIKLFJHPF : public ::BNAIELOHEFF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::SwordTrainingEffectRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SwordTrainingEffectRow*))((::PBYTE)hIl2Cpp + GCLIKLFJHPF_CTOR_OFFSET))(this, a1);
		}

		::System::Void GMJDOFFGEAM(::RPG::Client::SwordTrainingStatusChangeInfo* a1, ::RPG::Client::SwordTraining::SwordTrainingEffectSource a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTrainingStatusChangeInfo*, ::RPG::Client::SwordTraining::SwordTrainingEffectSource))((::PBYTE)hIl2Cpp + GCLIKLFJHPF_GMJDOFFGEAM_OFFSET))(this, a1, a2);
		}

	};
