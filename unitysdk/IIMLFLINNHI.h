#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BNAIELOHEFF.h"
#include "unitysdk/RPG/Client/SwordTraining/SwordTrainingEffectSource.h"
namespace RPG::Client { class SwordTrainingStatusChangeInfo; }
namespace RPG::GameCore { class SwordTrainingEffectRow; }

#define IIMLFLINNHI_BOEPEMKFPDH_OFFSET UNITYSDK_OFFSET(0x1644E9E0)
#define IIMLFLINNHI_CTOR_OFFSET UNITYSDK_OFFSET(0x1644E9D0)
#define IIMLFLINNHI_GHMLKGCJJPD_OFFSET UNITYSDK_OFFSET(0x1644EA80)

inline static constexpr unsigned int IIMLFLINNHI_TypeDefinitionIndex = 75026;

	class IIMLFLINNHI : public ::BNAIELOHEFF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::SwordTrainingEffectRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SwordTrainingEffectRow*))((::PBYTE)hIl2Cpp + IIMLFLINNHI_CTOR_OFFSET))(this, a1);
		}

		::System::Void BOEPEMKFPDH(::RPG::Client::SwordTrainingStatusChangeInfo* a1, ::RPG::Client::SwordTraining::SwordTrainingEffectSource a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTrainingStatusChangeInfo*, ::RPG::Client::SwordTraining::SwordTrainingEffectSource))((::PBYTE)hIl2Cpp + IIMLFLINNHI_BOEPEMKFPDH_OFFSET))(this, a1, a2);
		}

		::System::Boolean GHMLKGCJJPD(::RPG::Client::SwordTrainingStatusChangeInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::SwordTrainingStatusChangeInfo*))((::PBYTE)hIl2Cpp + IIMLFLINNHI_GHMLKGCJJPD_OFFSET))(this, a1);
		}

	};
