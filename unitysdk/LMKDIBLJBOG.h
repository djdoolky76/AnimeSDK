#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CakeRace/CakeRaceLoadingDisplayState.h"
#include "unitysdk/RPG/Client/LittleGameShare/CakeRaceCore/LevelStateType.h"
#include "unitysdk/System/Object.h"
class BJIAFAFAFNE;
class LMKDIBLJBOG;
namespace RPG::Client::CakeRace { class CakeRaceGameFlow; }
namespace RPG::Client::CakeRace { class CakeRaceGameplayContext; }
namespace RPG::Client::Promises { class IPromise; }
namespace System { class Action; }

#define LMKDIBLJBOG_ADD_ONLOADINGSTART_OFFSET UNITYSDK_OFFSET(0xB7CD3C0)
#define LMKDIBLJBOG_AKKBAEEOCPB_OFFSET UNITYSDK_OFFSET(0xB7CD9A0)
#define LMKDIBLJBOG_ALNDIBAIIMP_OFFSET UNITYSDK_OFFSET(0xB7CD500)
#define LMKDIBLJBOG_APGCCKJIGHC_OFFSET UNITYSDK_OFFSET(0xB7CDF10)
#define LMKDIBLJBOG_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xB7CD480)
#define LMKDIBLJBOG_CFMOANIDNAK_OFFSET UNITYSDK_OFFSET(0xB7CDD80)
#define LMKDIBLJBOG_CMKIGNKPOGE_OFFSET UNITYSDK_OFFSET(0xB7CD640)
#define LMKDIBLJBOG_CTOR_OFFSET UNITYSDK_OFFSET(0xB7CD4F0)
#define LMKDIBLJBOG_DAPOAIHMMAI_OFFSET UNITYSDK_OFFSET(0xB7CDAB0)
#define LMKDIBLJBOG_DGADGAMJPBN_OFFSET UNITYSDK_OFFSET(0xB7CDFD0)
#define LMKDIBLJBOG_EBJEAILEMHH_OFFSET UNITYSDK_OFFSET(0xB7CDB10)
#define LMKDIBLJBOG_EDFPNLFJFLH_OFFSET UNITYSDK_OFFSET(0xB7CD8D0)
#define LMKDIBLJBOG_FJJDDBALCKD_OFFSET UNITYSDK_OFFSET(0xB7CDDD0)
#define LMKDIBLJBOG_FLDFECJNCFG_OFFSET UNITYSDK_OFFSET(0xB7CDF70)
#define LMKDIBLJBOG_GGBMPEBBHHB_OFFSET UNITYSDK_OFFSET(0xB7CD170)
#define LMKDIBLJBOG_ICEGNJONKIB_OFFSET UNITYSDK_OFFSET(0xB7CD0E0)
#define LMKDIBLJBOG_JJDDNHLJMAI_OFFSET UNITYSDK_OFFSET(0xB7CDB70)
#define LMKDIBLJBOG_LEHKGLNGAGF_OFFSET UNITYSDK_OFFSET(0xB7CD350)
#define LMKDIBLJBOG_MANMKMPIHFC_OFFSET UNITYSDK_OFFSET(0xB7CDCF0)
#define LMKDIBLJBOG_MCCMMFDBFFF_OFFSET UNITYSDK_OFFSET(0xB7CD280)
#define LMKDIBLJBOG_PMFBJDHPFPB_OFFSET UNITYSDK_OFFSET(0xB7CD6F0)
#define LMKDIBLJBOG_REMOVE_ONLOADINGSTART_OFFSET UNITYSDK_OFFSET(0xB7CD420)

	class LMKDIBLJBOG : public ::System::Object
	{
	public:
		::System::Action* OnLoadingStart; // 0x10
		::System::Boolean EJKLLLDDFOP; // 0x18
		::System::Boolean PGKLCPFJCFL; // 0x19
		::System::Boolean PNHNENFOJJG; // 0x1A
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMKDIBLJBOG_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::CakeRace::CakeRaceGameFlow* ICEGNJONKIB()
		{
			return ((::RPG::Client::CakeRace::CakeRaceGameFlow*(*)())((::PBYTE)hIl2Cpp + LMKDIBLJBOG_ICEGNJONKIB_OFFSET))();
		}

		::RPG::Client::CakeRace::CakeRaceGameplayContext* GGBMPEBBHHB()
		{
			return ((::RPG::Client::CakeRace::CakeRaceGameplayContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMKDIBLJBOG_GGBMPEBBHHB_OFFSET))(this);
		}

		::BJIAFAFAFNE* MCCMMFDBFFF()
		{
			return ((::BJIAFAFAFNE*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMKDIBLJBOG_MCCMMFDBFFF_OFFSET))(this);
		}

		::System::Boolean LEHKGLNGAGF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LMKDIBLJBOG_LEHKGLNGAGF_OFFSET))(this);
		}

		::System::Void add_OnLoadingStart(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + LMKDIBLJBOG_ADD_ONLOADINGSTART_OFFSET))(this, a1);
		}

		::System::Void remove_OnLoadingStart(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + LMKDIBLJBOG_REMOVE_ONLOADINGSTART_OFFSET))(this, a1);
		}

		static ::LMKDIBLJBOG* BPLPBPMEODA()
		{
			return ((::LMKDIBLJBOG*(*)())((::PBYTE)hIl2Cpp + LMKDIBLJBOG_BPLPBPMEODA_OFFSET))();
		}

		::System::Void ALNDIBAIIMP(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LMKDIBLJBOG_ALNDIBAIIMP_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* PMFBJDHPFPB(::RPG::Client::CakeRace::CakeRaceLoadingDisplayState a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::CakeRace::CakeRaceLoadingDisplayState))((::PBYTE)hIl2Cpp + LMKDIBLJBOG_PMFBJDHPFPB_OFFSET))(this, a1);
		}

		static ::System::Action* EDFPNLFJFLH(::RPG::Client::CakeRace::CakeRaceLoadingDisplayState a1)
		{
			return ((::System::Action*(*)(::RPG::Client::CakeRace::CakeRaceLoadingDisplayState))((::PBYTE)hIl2Cpp + LMKDIBLJBOG_EDFPNLFJFLH_OFFSET))(a1);
		}

		::RPG::Client::Promises::IPromise* AKKBAEEOCPB()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMKDIBLJBOG_AKKBAEEOCPB_OFFSET))(this);
		}

		::System::Void DAPOAIHMMAI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMKDIBLJBOG_DAPOAIHMMAI_OFFSET))(this);
		}

		::System::Void EBJEAILEMHH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMKDIBLJBOG_EBJEAILEMHH_OFFSET))(this);
		}

		::System::Void JJDDNHLJMAI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMKDIBLJBOG_JJDDNHLJMAI_OFFSET))(this);
		}

		::System::Void MANMKMPIHFC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMKDIBLJBOG_MANMKMPIHFC_OFFSET))(this);
		}

		::System::Void CFMOANIDNAK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMKDIBLJBOG_CFMOANIDNAK_OFFSET))(this);
		}

		::System::Void FJJDDBALCKD(::RPG::Client::LittleGameShare::CakeRaceCore::LevelStateType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGameShare::CakeRaceCore::LevelStateType))((::PBYTE)hIl2Cpp + LMKDIBLJBOG_FJJDDBALCKD_OFFSET))(this, a1);
		}

		::System::Void APGCCKJIGHC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMKDIBLJBOG_APGCCKJIGHC_OFFSET))(this);
		}

		::System::Void FLDFECJNCFG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMKDIBLJBOG_FLDFECJNCFG_OFFSET))(this);
		}

		::System::Void DGADGAMJPBN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMKDIBLJBOG_DGADGAMJPBN_OFFSET))(this);
		}

		::System::Void CMKIGNKPOGE(::System::Boolean a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + LMKDIBLJBOG_CMKIGNKPOGE_OFFSET))(this, a1, a2, a3);
		}

	};
