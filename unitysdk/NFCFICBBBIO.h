#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BNAIELOHEFF.h"
#include "unitysdk/RPG/Client/SwordTraining/SwordTrainingEffectSource.h"
namespace RPG::Client { class SwordTrainingStatusChangeInfo; }
namespace RPG::GameCore { class SwordTrainingEffectRow; }

#define NFCFICBBBIO_ABMAJIMOMBA_OFFSET UNITYSDK_OFFSET(0xBB72C80)
#define NFCFICBBBIO_BOEPEMKFPDH_OFFSET UNITYSDK_OFFSET(0xBB72BE0)
#define NFCFICBBBIO_CTOR_OFFSET UNITYSDK_OFFSET(0xBB72B20)

inline static constexpr unsigned int NFCFICBBBIO_TypeDefinitionIndex = 75022;

	class NFCFICBBBIO : public ::BNAIELOHEFF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::SwordTrainingEffectRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SwordTrainingEffectRow*))((::PBYTE)hIl2Cpp + NFCFICBBBIO_CTOR_OFFSET))(this, a1);
		}

		::System::Void BOEPEMKFPDH(::RPG::Client::SwordTrainingStatusChangeInfo* a1, ::RPG::Client::SwordTraining::SwordTrainingEffectSource a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTrainingStatusChangeInfo*, ::RPG::Client::SwordTraining::SwordTrainingEffectSource))((::PBYTE)hIl2Cpp + NFCFICBBBIO_BOEPEMKFPDH_OFFSET))(this, a1, a2);
		}

		::System::Int32 ABMAJIMOMBA()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NFCFICBBBIO_ABMAJIMOMBA_OFFSET))(this);
		}

	};
