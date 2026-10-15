#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LCEANMDMFNF_RF_GameInfoComponent.h"
#include "unitysdk/RPG/Client/LittleGameShare/TeamTowersCore/TeamTowersCoreGameState.h"
#include "unitysdk/RPG/Client/LittleGameShare/ReplicationFlag.h"
#include "unitysdk/RPG/GameCore/TeamTowersLevelGameMode.h"
#include "unitysdk/System/Object.h"
class AEDGBKOJEFD;
class LNHACPACCKH;

#define LCEANMDMFNF_CTOR_OFFSET UNITYSDK_OFFSET(0x1C720DC0)
#define LCEANMDMFNF_DJJPPMMFNEB_OFFSET UNITYSDK_OFFSET(0x1C7206F0)
#define LCEANMDMFNF_EBKAKPCHOFC_OFFSET UNITYSDK_OFFSET(0x1C7206E0)
#define LCEANMDMFNF_FCHMADJPDOM_OFFSET UNITYSDK_OFFSET(0x1C720D20)
#define LCEANMDMFNF_HFPODBLDFOI_OFFSET UNITYSDK_OFFSET(0x1C720740)
#define LCEANMDMFNF_IKMJJJCNFLG_OFFSET UNITYSDK_OFFSET(0x1C720690)
#define LCEANMDMFNF_LBIHOLKGMIB_OFFSET UNITYSDK_OFFSET(0x1C720800)
#define LCEANMDMFNF_MDKIONKAKON_OFFSET UNITYSDK_OFFSET(0x1C720680)
#define LCEANMDMFNF_MDPAIBDEODD_OFFSET UNITYSDK_OFFSET(0x1C7207A0)
#define LCEANMDMFNF_MIIMNKDMHAE_OFFSET UNITYSDK_OFFSET(0x1C7207B0)
#define LCEANMDMFNF_NALIIADEEMO_OFFSET UNITYSDK_OFFSET(0x1C720CC0)
#define LCEANMDMFNF_NBLPPFGNHHO_OFFSET UNITYSDK_OFFSET(0x1C720D70)
#define LCEANMDMFNF_NJKHGPCDAMI_OFFSET UNITYSDK_OFFSET(0x1C720A90)
#define LCEANMDMFNF_NOAKCLCKHDJ_OFFSET UNITYSDK_OFFSET(0x1C720750)
#define LCEANMDMFNF_NOJIPMKAGON_OFFSET UNITYSDK_OFFSET(0x1C720640)
#define LCEANMDMFNF_PNJODACLLPH_OFFSET UNITYSDK_OFFSET(0x1C720630)

	class LCEANMDMFNF : public ::System::Object
	{
	public:
		::System::UInt32 ACKNHIBHHBC; // 0x10
		::RPG::Client::LittleGameShare::TeamTowersCore::TeamTowersCoreGameState OCLBNFLFCDH; // 0x14
		::LCEANMDMFNF_RF_GameInfoComponent HFKLFHBEDEM; // 0x15
		::RPG::GameCore::TeamTowersLevelGameMode GLIJDAFOJNC; // 0x16
		::System::UInt32 PHIJEONIBLN; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCEANMDMFNF_CTOR_OFFSET))(this);
		}

		::System::Boolean PNJODACLLPH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LCEANMDMFNF_PNJODACLLPH_OFFSET))(this);
		}

		::System::Void NOJIPMKAGON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCEANMDMFNF_NOJIPMKAGON_OFFSET))(this);
		}

		::System::UInt32 MDKIONKAKON()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LCEANMDMFNF_MDKIONKAKON_OFFSET))(this);
		}

		::System::Void IKMJJJCNFLG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LCEANMDMFNF_IKMJJJCNFLG_OFFSET))(this, a1);
		}

		::RPG::Client::LittleGameShare::TeamTowersCore::TeamTowersCoreGameState EBKAKPCHOFC()
		{
			return ((::RPG::Client::LittleGameShare::TeamTowersCore::TeamTowersCoreGameState(*)(::PVOID))((::PBYTE)hIl2Cpp + LCEANMDMFNF_EBKAKPCHOFC_OFFSET))(this);
		}

		::System::Void DJJPPMMFNEB(::RPG::Client::LittleGameShare::TeamTowersCore::TeamTowersCoreGameState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGameShare::TeamTowersCore::TeamTowersCoreGameState))((::PBYTE)hIl2Cpp + LCEANMDMFNF_DJJPPMMFNEB_OFFSET))(this, a1);
		}

		::RPG::GameCore::TeamTowersLevelGameMode HFPODBLDFOI()
		{
			return ((::RPG::GameCore::TeamTowersLevelGameMode(*)(::PVOID))((::PBYTE)hIl2Cpp + LCEANMDMFNF_HFPODBLDFOI_OFFSET))(this);
		}

		::System::Void NOAKCLCKHDJ(::RPG::GameCore::TeamTowersLevelGameMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TeamTowersLevelGameMode))((::PBYTE)hIl2Cpp + LCEANMDMFNF_NOAKCLCKHDJ_OFFSET))(this, a1);
		}

		::System::UInt32 MDPAIBDEODD()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LCEANMDMFNF_MDPAIBDEODD_OFFSET))(this);
		}

		::System::Void MIIMNKDMHAE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LCEANMDMFNF_MIIMNKDMHAE_OFFSET))(this, a1);
		}

		::System::Void LBIHOLKGMIB(::AEDGBKOJEFD* a1, ::RPG::Client::LittleGameShare::ReplicationFlag a2)
		{
			return ((::System::Void(*)(::PVOID, ::AEDGBKOJEFD*, ::RPG::Client::LittleGameShare::ReplicationFlag))((::PBYTE)hIl2Cpp + LCEANMDMFNF_LBIHOLKGMIB_OFFSET))(this, a1, a2);
		}

		::System::Void NJKHGPCDAMI(::LNHACPACCKH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LNHACPACCKH*))((::PBYTE)hIl2Cpp + LCEANMDMFNF_NJKHGPCDAMI_OFFSET))(this, a1);
		}

		::System::Void NALIIADEEMO(::LNHACPACCKH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LNHACPACCKH*))((::PBYTE)hIl2Cpp + LCEANMDMFNF_NALIIADEEMO_OFFSET))(this, a1);
		}

		::System::Boolean FCHMADJPDOM(::LCEANMDMFNF_RF_GameInfoComponent a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LCEANMDMFNF_RF_GameInfoComponent))((::PBYTE)hIl2Cpp + LCEANMDMFNF_FCHMADJPDOM_OFFSET))(this, a1);
		}

		::System::Boolean NBLPPFGNHHO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LCEANMDMFNF_NBLPPFGNHHO_OFFSET))(this);
		}

	};
