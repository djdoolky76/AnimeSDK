#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateRinCardPileType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class GPPCNHKCMNC;
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class TaskConfig; }

#define GPPCNHKCMNC_CTOR_OFFSET UNITYSDK_OFFSET(0x1CE7A780)
#define GPPCNHKCMNC_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CE7A790)
#define GPPCNHKCMNC_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CE7A750)

	class GPPCNHKCMNC : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* NKCKAJPAJCJ; // 0x18
		::RPG::GameCore::PredicateConfig* FHAAHMEJMCI; // 0x20
		::RPG::GameCore::FateRinCardPileType IANCHJFBKFC; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPPCNHKCMNC_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::GPPCNHKCMNC* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::GPPCNHKCMNC*))((::PBYTE)hIl2Cpp + GPPCNHKCMNC_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::GPPCNHKCMNC* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::GPPCNHKCMNC*))((::PBYTE)hIl2Cpp + GPPCNHKCMNC_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
