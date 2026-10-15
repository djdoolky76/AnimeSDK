#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BNAIELOHEFF.h"
#include "unitysdk/RPG/Client/SwordTraining/SwordTrainingEffectSource.h"
class JBAMKMBEEHC;
namespace RPG::Client { class SwordTrainingStatusChangeInfo; }
namespace RPG::GameCore { class SwordTrainingEffectRow; }

#define KIIJBEPBAJG_CTOR_OFFSET UNITYSDK_OFFSET(0xB430A00)
#define KIIJBEPBAJG_EDAOHPOFPPH_OFFSET UNITYSDK_OFFSET(0xB431180)
#define KIIJBEPBAJG_JLLHFBAIFIK_OFFSET UNITYSDK_OFFSET(0xB430F60)
#define KIIJBEPBAJG_KMFNLBBPOKK_OFFSET UNITYSDK_OFFSET(0xB430B80)

inline static constexpr unsigned int KIIJBEPBAJG_TypeDefinitionIndex = 75016;

	class KIIJBEPBAJG : public ::BNAIELOHEFF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::SwordTrainingEffectRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SwordTrainingEffectRow*))((::PBYTE)hIl2Cpp + KIIJBEPBAJG_CTOR_OFFSET))(this, a1);
		}

		::System::Void KMFNLBBPOKK(::JBAMKMBEEHC* a1, ::RPG::Client::SwordTraining::SwordTrainingEffectSource a2)
		{
			return ((::System::Void(*)(::PVOID, ::JBAMKMBEEHC*, ::RPG::Client::SwordTraining::SwordTrainingEffectSource))((::PBYTE)hIl2Cpp + KIIJBEPBAJG_KMFNLBBPOKK_OFFSET))(this, a1, a2);
		}

		::System::Void EDAOHPOFPPH(::RPG::Client::SwordTrainingStatusChangeInfo* a1, ::RPG::Client::SwordTraining::SwordTrainingEffectSource a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTrainingStatusChangeInfo*, ::RPG::Client::SwordTraining::SwordTrainingEffectSource))((::PBYTE)hIl2Cpp + KIIJBEPBAJG_EDAOHPOFPPH_OFFSET))(this, a1, a2);
		}

		::System::Void JLLHFBAIFIK(::JBAMKMBEEHC* a1, ::RPG::Client::SwordTraining::SwordTrainingEffectSource a2)
		{
			return ((::System::Void(*)(::PVOID, ::JBAMKMBEEHC*, ::RPG::Client::SwordTraining::SwordTrainingEffectSource))((::PBYTE)hIl2Cpp + KIIJBEPBAJG_JLLHFBAIFIK_OFFSET))(this, a1, a2);
		}

	};
