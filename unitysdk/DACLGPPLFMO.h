#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DACLGPPLFMO;
class KMDEHNNGIDD;
namespace RPG::Client { class CakeRacePVEGameManager; }
namespace RPG::Client { class CakeRaceStartGameData; }
namespace RPG::Client::CakeRace { class CakeRaceGameFlow; }
namespace RPG::Client::CakeRace { class CakeRaceGameplayContext; }
namespace RPG::Client::Promises { class IPromise; }
namespace System { class IDisposable; }

#define DACLGPPLFMO_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xE91FE10)
#define DACLGPPLFMO_CECAHMEOCDM_OFFSET UNITYSDK_OFFSET(0xE91FD40)
#define DACLGPPLFMO_CTOR_OFFSET UNITYSDK_OFFSET(0xE91FED0)
#define DACLGPPLFMO_DIOEAJEHHND_OFFSET UNITYSDK_OFFSET(0xE91FEE0)
#define DACLGPPLFMO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE91FF30)
#define DACLGPPLFMO_DOEMAIEEKBB_OFFSET UNITYSDK_OFFSET(0xE920800)
#define DACLGPPLFMO_EDLIDEBOJEB_OFFSET UNITYSDK_OFFSET(0xE9208D0)
#define DACLGPPLFMO_EGFMJKAAPDI_OFFSET UNITYSDK_OFFSET(0xE920C90)
#define DACLGPPLFMO_EPCONIFKKDD_OFFSET UNITYSDK_OFFSET(0xE920510)
#define DACLGPPLFMO_GET_GAMEPLAYCONTEXT_OFFSET UNITYSDK_OFFSET(0xE91FDF0)
#define DACLGPPLFMO_GET_PVEGAMEMANAGER_OFFSET UNITYSDK_OFFSET(0xE91FD20)
#define DACLGPPLFMO_GET_PVPGAMEMANAGER_OFFSET UNITYSDK_OFFSET(0xE91FD00)
#define DACLGPPLFMO_HJBACKHPDKC_OFFSET UNITYSDK_OFFSET(0xE9216C0)
#define DACLGPPLFMO_HOKICGCPEFJ_OFFSET UNITYSDK_OFFSET(0xE920150)
#define DACLGPPLFMO_ICEGNJONKIB_OFFSET UNITYSDK_OFFSET(0xE91FC50)
#define DACLGPPLFMO_IEENOGHPGGI_OFFSET UNITYSDK_OFFSET(0xE9204B0)
#define DACLGPPLFMO_ILDKDDGOGEJ_OFFSET UNITYSDK_OFFSET(0xE920FB0)
#define DACLGPPLFMO_JCCCMFEJLMH_OFFSET UNITYSDK_OFFSET(0xE9211F0)
#define DACLGPPLFMO_JCOGLEDKBIJ_OFFSET UNITYSDK_OFFSET(0xE921450)
#define DACLGPPLFMO_JHNCJNCPKNK_OFFSET UNITYSDK_OFFSET(0xE9202D0)
#define DACLGPPLFMO_KHDOPKOIMNN_OFFSET UNITYSDK_OFFSET(0xE921660)
#define DACLGPPLFMO_KOENENAAIEM_OFFSET UNITYSDK_OFFSET(0xE91FD90)
#define DACLGPPLFMO_MCMAMLLDKJG_OFFSET UNITYSDK_OFFSET(0xE920E10)
#define DACLGPPLFMO_NJPHEINAENJ_OFFSET UNITYSDK_OFFSET(0xE921060)
#define DACLGPPLFMO_NKCDEJFPAIH_OFFSET UNITYSDK_OFFSET(0xE921710)
#define DACLGPPLFMO_NKIAOHPNLCO_OFFSET UNITYSDK_OFFSET(0xE920AB0)
#define DACLGPPLFMO_PDGNDJNPBKK_OFFSET UNITYSDK_OFFSET(0xE9200F0)
#define DACLGPPLFMO_PDPMIINOHBC_OFFSET UNITYSDK_OFFSET(0xE9214E0)
#define DACLGPPLFMO_PHLPHJPECLN_OFFSET UNITYSDK_OFFSET(0xE9206F0)
#define DACLGPPLFMO_SET_GAMEPLAYCONTEXT_OFFSET UNITYSDK_OFFSET(0xE91FE00)
#define DACLGPPLFMO_SET_PVEGAMEMANAGER_OFFSET UNITYSDK_OFFSET(0xE91FD30)
#define DACLGPPLFMO_SET_PVPGAMEMANAGER_OFFSET UNITYSDK_OFFSET(0xE91FD10)
#define DACLGPPLFMO__TRYEXITGAME_B__33_0_OFFSET UNITYSDK_OFFSET(0xE921790)
#define DACLGPPLFMO__TRYEXITGAME_B__33_1_OFFSET UNITYSDK_OFFSET(0xE921820)

inline static constexpr unsigned int DACLGPPLFMO_TypeDefinitionIndex = 78783;

	class DACLGPPLFMO : public ::System::Object
	{
	public:
		::RPG::Client::CakeRace::CakeRaceGameplayContext* _GameplayContext_k__BackingField; // 0x10
		::RPG::Client::CakeRacePVEGameManager* _PVEGameManager_k__BackingField; // 0x18
		::KMDEHNNGIDD* _PVPGameManager_k__BackingField; // 0x20
		::System::IDisposable* IDDCLDHMEEM; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DACLGPPLFMO_CTOR_OFFSET))(this);
		}

		::RPG::Client::CakeRace::CakeRaceGameFlow* ICEGNJONKIB()
		{
			return ((::RPG::Client::CakeRace::CakeRaceGameFlow*(*)(::PVOID))((::PBYTE)hIl2Cpp + DACLGPPLFMO_ICEGNJONKIB_OFFSET))(this);
		}

		::KMDEHNNGIDD* get_PVPGameManager()
		{
			return ((::KMDEHNNGIDD*(*)(::PVOID))((::PBYTE)hIl2Cpp + DACLGPPLFMO_GET_PVPGAMEMANAGER_OFFSET))(this);
		}

		::System::Void set_PVPGameManager(::KMDEHNNGIDD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KMDEHNNGIDD*))((::PBYTE)hIl2Cpp + DACLGPPLFMO_SET_PVPGAMEMANAGER_OFFSET))(this, a1);
		}

		::RPG::Client::CakeRacePVEGameManager* get_PVEGameManager()
		{
			return ((::RPG::Client::CakeRacePVEGameManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + DACLGPPLFMO_GET_PVEGAMEMANAGER_OFFSET))(this);
		}

		::System::Void set_PVEGameManager(::RPG::Client::CakeRacePVEGameManager* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRacePVEGameManager*))((::PBYTE)hIl2Cpp + DACLGPPLFMO_SET_PVEGAMEMANAGER_OFFSET))(this, a1);
		}

		::System::Boolean CECAHMEOCDM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DACLGPPLFMO_CECAHMEOCDM_OFFSET))(this);
		}

		::System::Boolean KOENENAAIEM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DACLGPPLFMO_KOENENAAIEM_OFFSET))(this);
		}

		::RPG::Client::CakeRace::CakeRaceGameplayContext* get_GameplayContext()
		{
			return ((::RPG::Client::CakeRace::CakeRaceGameplayContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + DACLGPPLFMO_GET_GAMEPLAYCONTEXT_OFFSET))(this);
		}

		::System::Void set_GameplayContext(::RPG::Client::CakeRace::CakeRaceGameplayContext* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRace::CakeRaceGameplayContext*))((::PBYTE)hIl2Cpp + DACLGPPLFMO_SET_GAMEPLAYCONTEXT_OFFSET))(this, a1);
		}

		static ::DACLGPPLFMO* BPLPBPMEODA()
		{
			return ((::DACLGPPLFMO*(*)())((::PBYTE)hIl2Cpp + DACLGPPLFMO_BPLPBPMEODA_OFFSET))();
		}

		::System::Void DIOEAJEHHND()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DACLGPPLFMO_DIOEAJEHHND_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DACLGPPLFMO_DISPOSE_OFFSET))(this);
		}

		::System::Void HOKICGCPEFJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DACLGPPLFMO_HOKICGCPEFJ_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* JHNCJNCPKNK(::RPG::Client::CakeRaceStartGameData* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::CakeRaceStartGameData*))((::PBYTE)hIl2Cpp + DACLGPPLFMO_JHNCJNCPKNK_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* IEENOGHPGGI()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + DACLGPPLFMO_IEENOGHPGGI_OFFSET))(this);
		}

		::System::Void EPCONIFKKDD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DACLGPPLFMO_EPCONIFKKDD_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* PHLPHJPECLN(::RPG::Client::CakeRaceStartGameData* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::CakeRaceStartGameData*))((::PBYTE)hIl2Cpp + DACLGPPLFMO_PHLPHJPECLN_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* DOEMAIEEKBB()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + DACLGPPLFMO_DOEMAIEEKBB_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* NKIAOHPNLCO()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + DACLGPPLFMO_NKIAOHPNLCO_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* EDLIDEBOJEB()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + DACLGPPLFMO_EDLIDEBOJEB_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* EGFMJKAAPDI()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + DACLGPPLFMO_EGFMJKAAPDI_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* MCMAMLLDKJG()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + DACLGPPLFMO_MCMAMLLDKJG_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* ILDKDDGOGEJ(::RPG::Client::CakeRaceStartGameData* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::CakeRaceStartGameData*))((::PBYTE)hIl2Cpp + DACLGPPLFMO_ILDKDDGOGEJ_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* NJPHEINAENJ()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + DACLGPPLFMO_NJPHEINAENJ_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* JCCCMFEJLMH()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + DACLGPPLFMO_JCCCMFEJLMH_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* JCOGLEDKBIJ(::System::Boolean a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DACLGPPLFMO_JCOGLEDKBIJ_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* PDPMIINOHBC()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + DACLGPPLFMO_PDPMIINOHBC_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* KHDOPKOIMNN()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + DACLGPPLFMO_KHDOPKOIMNN_OFFSET))(this);
		}

		::System::Void PDGNDJNPBKK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DACLGPPLFMO_PDGNDJNPBKK_OFFSET))(this);
		}

		::System::Void HJBACKHPDKC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DACLGPPLFMO_HJBACKHPDKC_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* NKCDEJFPAIH()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + DACLGPPLFMO_NKCDEJFPAIH_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _TryExitGame_b__33_0()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + DACLGPPLFMO__TRYEXITGAME_B__33_0_OFFSET))(this);
		}

		::System::Void _TryExitGame_b__33_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DACLGPPLFMO__TRYEXITGAME_B__33_1_OFFSET))(this);
		}

	};
