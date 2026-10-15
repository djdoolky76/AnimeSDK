#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LCEANMDMFNF_RF_GameInfoComponent.h"
#include "unitysdk/RPG/Client/LittleGameShare/TeamTowersCore/TeamTowersCoreGameState.h"
#include "unitysdk/RPG/Client/LittleGameShare/ReplicationFlag.h"
#include "unitysdk/RPG/GameCore/TeamTowersLevelGameMode.h"
#include "unitysdk/System/Object.h"
class AEDGBKOJEFD;
class LNHACPACCKH;

#define LCEANMDMFNF_CTOR_OFFSET UNITYSDK_OFFSET(0x1C6F2AD0)
#define LCEANMDMFNF_DJJPPMMFNEB_OFFSET UNITYSDK_OFFSET(0x1C6F2400)
#define LCEANMDMFNF_EBKAKPCHOFC_OFFSET UNITYSDK_OFFSET(0x1C6F23F0)
#define LCEANMDMFNF_FCHMADJPDOM_OFFSET UNITYSDK_OFFSET(0x1C6F2A30)
#define LCEANMDMFNF_HFPODBLDFOI_OFFSET UNITYSDK_OFFSET(0x1C6F2450)
#define LCEANMDMFNF_IKMJJJCNFLG_OFFSET UNITYSDK_OFFSET(0x1C6F23A0)
#define LCEANMDMFNF_LBIHOLKGMIB_OFFSET UNITYSDK_OFFSET(0x1C6F2510)
#define LCEANMDMFNF_MDKIONKAKON_OFFSET UNITYSDK_OFFSET(0x1C6F2390)
#define LCEANMDMFNF_MDPAIBDEODD_OFFSET UNITYSDK_OFFSET(0x1C6F24B0)
#define LCEANMDMFNF_MIIMNKDMHAE_OFFSET UNITYSDK_OFFSET(0x1C6F24C0)
#define LCEANMDMFNF_NALIIADEEMO_OFFSET UNITYSDK_OFFSET(0x1C6F29D0)
#define LCEANMDMFNF_NBLPPFGNHHO_OFFSET UNITYSDK_OFFSET(0x1C6F2A80)
#define LCEANMDMFNF_NJKHGPCDAMI_OFFSET UNITYSDK_OFFSET(0x1C6F27A0)
#define LCEANMDMFNF_NOAKCLCKHDJ_OFFSET UNITYSDK_OFFSET(0x1C6F2460)
#define LCEANMDMFNF_NOJIPMKAGON_OFFSET UNITYSDK_OFFSET(0x1C6F2350)
#define LCEANMDMFNF_PNJODACLLPH_OFFSET UNITYSDK_OFFSET(0x1C6F2340)

inline static constexpr unsigned int LCEANMDMFNF_TypeDefinitionIndex = 37080;

	class LCEANMDMFNF : public ::System::Object
	{
	public:
		::System::UInt32 PHIJEONIBLN; // 0x10
		::LCEANMDMFNF_RF_GameInfoComponent HFKLFHBEDEM; // 0x14
		::RPG::GameCore::TeamTowersLevelGameMode GLIJDAFOJNC; // 0x15
		::RPG::Client::LittleGameShare::TeamTowersCore::TeamTowersCoreGameState OCLBNFLFCDH; // 0x16
		::System::UInt32 ACKNHIBHHBC; // 0x18
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
