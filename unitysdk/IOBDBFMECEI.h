#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ChimeraDuel/ChimeraDuelMasterShowType.h"
#include "unitysdk/RPG/Client/LittleGame/ChimeraDuelSettleReason.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelTeamType.h"
#include "unitysdk/System/Object.h"
class CHKILIBKHLO;
class ECIIEBFKNMJ;
class IOBDBFMECEI_KFEEEEFEDGL;
class KAKADGHNMFK;
class LMJPODEEGKK;

#define IOBDBFMECEI_AFNBGKICCEK_OFFSET UNITYSDK_OFFSET(0x164FBF50)
#define IOBDBFMECEI_ANHMEDANKHE_OFFSET UNITYSDK_OFFSET(0x164FC210)
#define IOBDBFMECEI_CBGNNIICCMA_OFFSET UNITYSDK_OFFSET(0x164FD900)
#define IOBDBFMECEI_CTOR_OFFSET UNITYSDK_OFFSET(0x164FB9C0)
#define IOBDBFMECEI_DEKPKAPNLGM_OFFSET UNITYSDK_OFFSET(0x164FBA50)
#define IOBDBFMECEI_DFHNPCMFNHF_OFFSET UNITYSDK_OFFSET(0x164FCBB0)
#define IOBDBFMECEI_DLABAHMNDBO_OFFSET UNITYSDK_OFFSET(0x164FBC60)
#define IOBDBFMECEI_EOIEGLELPNL_OFFSET UNITYSDK_OFFSET(0x164FCE50)
#define IOBDBFMECEI_EXECUTE_OFFSET UNITYSDK_OFFSET(0x164FB9D0)
#define IOBDBFMECEI_HCMPBFCMLJD_OFFSET UNITYSDK_OFFSET(0x164FD4A0)
#define IOBDBFMECEI_JAKIDCMAOML_OFFSET UNITYSDK_OFFSET(0x164FC2E0)
#define IOBDBFMECEI_JJICIHHBEII_OFFSET UNITYSDK_OFFSET(0x164FC6D0)
#define IOBDBFMECEI_MMGCDECNBPG_OFFSET UNITYSDK_OFFSET(0x164FBFB0)
#define IOBDBFMECEI_NBKOPMNBCJM_OFFSET UNITYSDK_OFFSET(0x164FCC80)
#define IOBDBFMECEI_NHGEBJDAPDL_OFFSET UNITYSDK_OFFSET(0x164FD5B0)
#define IOBDBFMECEI_NMMFCAIOJNM_OFFSET UNITYSDK_OFFSET(0x164FBAB0)

	class IOBDBFMECEI : public ::System::Object
	{
	public:
		::ECIIEBFKNMJ* PDENFEFCAGN; // 0x10
		::LMJPODEEGKK* FKINCGODJEP; // 0x18
		::System::Void _ctor(::LMJPODEEGKK* a1, ::ECIIEBFKNMJ* a2)
		{
			return ((::System::Void(*)(::PVOID, ::LMJPODEEGKK*, ::ECIIEBFKNMJ*))((::PBYTE)hIl2Cpp + IOBDBFMECEI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOBDBFMECEI_EXECUTE_OFFSET))(this);
		}

		::System::Void DEKPKAPNLGM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOBDBFMECEI_DEKPKAPNLGM_OFFSET))(this);
		}

		::System::Boolean NMMFCAIOJNM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IOBDBFMECEI_NMMFCAIOJNM_OFFSET))(this);
		}

		::IOBDBFMECEI_KFEEEEFEDGL* MMGCDECNBPG()
		{
			return ((::IOBDBFMECEI_KFEEEEFEDGL*(*)(::PVOID))((::PBYTE)hIl2Cpp + IOBDBFMECEI_MMGCDECNBPG_OFFSET))(this);
		}

		::System::Boolean ANHMEDANKHE(::IOBDBFMECEI_KFEEEEFEDGL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IOBDBFMECEI_KFEEEEFEDGL*))((::PBYTE)hIl2Cpp + IOBDBFMECEI_ANHMEDANKHE_OFFSET))(this, a1);
		}

		::System::Void JAKIDCMAOML(::KAKADGHNMFK* a1, ::IOBDBFMECEI_KFEEEEFEDGL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::KAKADGHNMFK*, ::IOBDBFMECEI_KFEEEEFEDGL*))((::PBYTE)hIl2Cpp + IOBDBFMECEI_JAKIDCMAOML_OFFSET))(this, a1, a2);
		}

		::KAKADGHNMFK* NHGEBJDAPDL()
		{
			return ((::KAKADGHNMFK*(*)(::PVOID))((::PBYTE)hIl2Cpp + IOBDBFMECEI_NHGEBJDAPDL_OFFSET))(this);
		}

		::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelMasterShowType HCMPBFCMLJD(::RPG::Client::LittleGame::ChimeraDuelSettleReason a1)
		{
			return ((::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelMasterShowType(*)(::PVOID, ::RPG::Client::LittleGame::ChimeraDuelSettleReason))((::PBYTE)hIl2Cpp + IOBDBFMECEI_HCMPBFCMLJD_OFFSET))(this, a1);
		}

		::System::Void CBGNNIICCMA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOBDBFMECEI_CBGNNIICCMA_OFFSET))(this);
		}

		::System::Boolean DFHNPCMFNHF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IOBDBFMECEI_DFHNPCMFNHF_OFFSET))(this);
		}

		::System::Boolean JJICIHHBEII(::RPG::GameCore::ChimeraDuelTeamType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChimeraDuelTeamType))((::PBYTE)hIl2Cpp + IOBDBFMECEI_JJICIHHBEII_OFFSET))(this, a1);
		}

		::System::Boolean EOIEGLELPNL(::RPG::GameCore::ChimeraDuelTeamType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChimeraDuelTeamType))((::PBYTE)hIl2Cpp + IOBDBFMECEI_EOIEGLELPNL_OFFSET))(this, a1);
		}

		::System::Void NBKOPMNBCJM(::RPG::GameCore::ChimeraDuelTeamType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChimeraDuelTeamType))((::PBYTE)hIl2Cpp + IOBDBFMECEI_NBKOPMNBCJM_OFFSET))(this, a1);
		}

		::System::Boolean DLABAHMNDBO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IOBDBFMECEI_DLABAHMNDBO_OFFSET))(this);
		}

		::CHKILIBKHLO* AFNBGKICCEK()
		{
			return ((::CHKILIBKHLO*(*)(::PVOID))((::PBYTE)hIl2Cpp + IOBDBFMECEI_AFNBGKICCEK_OFFSET))(this);
		}

	};
