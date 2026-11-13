#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BNAIELOHEFF.h"
#include "unitysdk/RPG/Client/SwordTraining/SwordTrainingEffectSource.h"
namespace RPG::Client { class SwordTrainingStatusChangeInfo; }
namespace RPG::GameCore { class SwordTrainingEffectRow; }

#define CPLPPAEHOHK_CTOR_OFFSET UNITYSDK_OFFSET(0x1990C540)
#define CPLPPAEHOHK_GMJDOFFGEAM_OFFSET UNITYSDK_OFFSET(0x1990C550)

inline static constexpr unsigned int CPLPPAEHOHK_TypeDefinitionIndex = 77354;

	class CPLPPAEHOHK : public ::BNAIELOHEFF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::SwordTrainingEffectRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SwordTrainingEffectRow*))((::PBYTE)hIl2Cpp + CPLPPAEHOHK_CTOR_OFFSET))(this, a1);
		}

		::System::Void GMJDOFFGEAM(::RPG::Client::SwordTrainingStatusChangeInfo* a1, ::RPG::Client::SwordTraining::SwordTrainingEffectSource a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTrainingStatusChangeInfo*, ::RPG::Client::SwordTraining::SwordTrainingEffectSource))((::PBYTE)hIl2Cpp + CPLPPAEHOHK_GMJDOFFGEAM_OFFSET))(this, a1, a2);
		}

	};
