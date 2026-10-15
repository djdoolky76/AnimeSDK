#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BNAIELOHEFF.h"
#include "unitysdk/RPG/Client/SwordTraining/SwordTrainingEffectSource.h"
namespace RPG::Client { class SwordTrainingStatusChangeInfo; }
namespace RPG::GameCore { class SwordTrainingEffectRow; }

#define IPBLEHNFOGF_BOEPEMKFPDH_OFFSET UNITYSDK_OFFSET(0x1651D410)
#define IPBLEHNFOGF_CTOR_OFFSET UNITYSDK_OFFSET(0x1651D400)

	class IPBLEHNFOGF : public ::BNAIELOHEFF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::SwordTrainingEffectRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SwordTrainingEffectRow*))((::PBYTE)hIl2Cpp + IPBLEHNFOGF_CTOR_OFFSET))(this, a1);
		}

		::System::Void BOEPEMKFPDH(::RPG::Client::SwordTrainingStatusChangeInfo* a1, ::RPG::Client::SwordTraining::SwordTrainingEffectSource a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTrainingStatusChangeInfo*, ::RPG::Client::SwordTraining::SwordTrainingEffectSource))((::PBYTE)hIl2Cpp + IPBLEHNFOGF_BOEPEMKFPDH_OFFSET))(this, a1, a2);
		}

	};
