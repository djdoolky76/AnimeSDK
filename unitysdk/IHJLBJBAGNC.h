#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BNAIELOHEFF.h"
#include "unitysdk/RPG/Client/SwordTraining/SwordTrainingEffectSource.h"
namespace RPG::Client { class SwordTrainingStatusChangeInfo; }
namespace RPG::GameCore { class SwordTrainingEffectRow; }

#define IHJLBJBAGNC_BOEPEMKFPDH_OFFSET UNITYSDK_OFFSET(0x16422820)
#define IHJLBJBAGNC_CTOR_OFFSET UNITYSDK_OFFSET(0x16422810)
#define IHJLBJBAGNC_ENFMKLPIAGG_OFFSET UNITYSDK_OFFSET(0x16422930)
#define IHJLBJBAGNC_GHMLKGCJJPD_OFFSET UNITYSDK_OFFSET(0x164229A0)

	class IHJLBJBAGNC : public ::BNAIELOHEFF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::SwordTrainingEffectRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SwordTrainingEffectRow*))((::PBYTE)hIl2Cpp + IHJLBJBAGNC_CTOR_OFFSET))(this, a1);
		}

		::System::Void BOEPEMKFPDH(::RPG::Client::SwordTrainingStatusChangeInfo* a1, ::RPG::Client::SwordTraining::SwordTrainingEffectSource a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTrainingStatusChangeInfo*, ::RPG::Client::SwordTraining::SwordTrainingEffectSource))((::PBYTE)hIl2Cpp + IHJLBJBAGNC_BOEPEMKFPDH_OFFSET))(this, a1, a2);
		}

		::System::Boolean GHMLKGCJJPD(::RPG::Client::SwordTrainingStatusChangeInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::SwordTrainingStatusChangeInfo*))((::PBYTE)hIl2Cpp + IHJLBJBAGNC_GHMLKGCJJPD_OFFSET))(this, a1);
		}

		::System::Int32 ENFMKLPIAGG()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IHJLBJBAGNC_ENFMKLPIAGG_OFFSET))(this);
		}

	};
