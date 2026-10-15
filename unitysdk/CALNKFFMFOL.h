#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GamePhaseType.h"
#include "unitysdk/RPG/Client/LoginPhase.h"
#include "unitysdk/RPG/Client/TextID.h"
class CFNBLNHMHGO;
class JIAFOPELMJJ;
class PCLKBDDGBJE;
class PKONCMDMODF;
namespace RPG::Client { class VersionUpdateProgressInfo; }
namespace System { class Object; }
namespace System { class String; }

#define CALNKFFMFOL_ABBEGBMEDEF_OFFSET UNITYSDK_OFFSET(0xC483E60)
#define CALNKFFMFOL_ABMAKLPAJJK_OFFSET UNITYSDK_OFFSET(0xC4830C0)
#define CALNKFFMFOL_AJAHKNEBJAE_OFFSET UNITYSDK_OFFSET(0xC4841D0)
#define CALNKFFMFOL_APLDEEOKDBF_OFFSET UNITYSDK_OFFSET(0xC4826F0)
#define CALNKFFMFOL_BJLAAMCKJOM_OFFSET UNITYSDK_OFFSET(0xC481A20)
#define CALNKFFMFOL_CHAMHFBICKC_OFFSET UNITYSDK_OFFSET(0xC4845B0)
#define CALNKFFMFOL_CTOR_OFFSET UNITYSDK_OFFSET(0xC481B80)
#define CALNKFFMFOL_DHGMLJIGPBK_OFFSET UNITYSDK_OFFSET(0xC483B30)
#define CALNKFFMFOL_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC482650)
#define CALNKFFMFOL_DMLJPCJGDHM_OFFSET UNITYSDK_OFFSET(0xC481D30)
#define CALNKFFMFOL_ENCKNIOAMHM_OFFSET UNITYSDK_OFFSET(0xC482DC0)
#define CALNKFFMFOL_ENTER_OFFSET UNITYSDK_OFFSET(0xC4821E0)
#define CALNKFFMFOL_EPEEEOIMAOL_OFFSET UNITYSDK_OFFSET(0xC4820F0)
#define CALNKFFMFOL_FKAJAGNNDIL_OFFSET UNITYSDK_OFFSET(0xC484D90)
#define CALNKFFMFOL_GETGAMEPHASETYPE_OFFSET UNITYSDK_OFFSET(0xC483AE0)
#define CALNKFFMFOL_GHCGOLPENGA_OFFSET UNITYSDK_OFFSET(0xC483CD0)
#define CALNKFFMFOL_HKKFKBACKCC_OFFSET UNITYSDK_OFFSET(0xC4849C0)
#define CALNKFFMFOL_HODOIEKAKEP_OFFSET UNITYSDK_OFFSET(0xC484C80)
#define CALNKFFMFOL_IDEECBDDGIH_OFFSET UNITYSDK_OFFSET(0xC482C30)
#define CALNKFFMFOL_IKLJKOJLICM_OFFSET UNITYSDK_OFFSET(0xC484420)
#define CALNKFFMFOL_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xC483210)
#define CALNKFFMFOL_LBPONIBCJHE_OFFSET UNITYSDK_OFFSET(0xC4831A0)
#define CALNKFFMFOL_LDJLKCCHJOE_OFFSET UNITYSDK_OFFSET(0xC482130)
#define CALNKFFMFOL_LEAVE_OFFSET UNITYSDK_OFFSET(0xC483270)
#define CALNKFFMFOL_LFNBBKHPEOI_OFFSET UNITYSDK_OFFSET(0xC484290)
#define CALNKFFMFOL_NAFGIEKEJLO_OFFSET UNITYSDK_OFFSET(0xC483600)
#define CALNKFFMFOL_NMKPKJBFCIP_OFFSET UNITYSDK_OFFSET(0xC481F30)
#define CALNKFFMFOL_TICK_OFFSET UNITYSDK_OFFSET(0xC482CE0)
#define CALNKFFMFOL___STARTFORDESIGNPACK_B__27_0_OFFSET UNITYSDK_OFFSET(0xC484FD0)
#define CALNKFFMFOL___STARTFORMIDPACKPS_B__28_0_OFFSET UNITYSDK_OFFSET(0xC484FE0)
#define CALNKFFMFOL___STARTFORMIDPACK_B__29_0_OFFSET UNITYSDK_OFFSET(0xC485080)

inline static constexpr unsigned int CALNKFFMFOL_TypeDefinitionIndex = 61165;

	class CALNKFFMFOL : public ::RPG::Client::LoginPhase
	{
	public:
		::RPG::Client::VersionUpdateProgressInfo* JFIFPDDHHMP; // 0x28
		::JIAFOPELMJJ* MIPPNCGOJNM; // 0x30
		::PKONCMDMODF* OMOKCNINHKG; // 0x38
		::PCLKBDDGBJE* JFDMEIHEGOP; // 0x40
		::System::Boolean APCKGAOKNLE; // 0x48
		::System::Boolean CDHMGHHFKJL; // 0x49
		::System::Boolean GLLPLJPPLEC; // 0x4A
		::System::Boolean DNPPNAIGJHE; // 0x4B
		::System::Boolean BDCPNDDNBKK; // 0x4C
		::System::Boolean MGHFHHMNDNA; // 0x4D
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CALNKFFMFOL_CTOR_OFFSET))(this);
		}

		::System::Boolean BJLAAMCKJOM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CALNKFFMFOL_BJLAAMCKJOM_OFFSET))(this);
		}

		::System::Void DMLJPCJGDHM(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CALNKFFMFOL_DMLJPCJGDHM_OFFSET))(this, a1);
		}

		::System::Void NMKPKJBFCIP(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CALNKFFMFOL_NMKPKJBFCIP_OFFSET))(this, a1);
		}

		::System::Boolean EPEEEOIMAOL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CALNKFFMFOL_EPEEEOIMAOL_OFFSET))(this);
		}

		::System::Void LDJLKCCHJOE(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CALNKFFMFOL_LDJLKCCHJOE_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CALNKFFMFOL_DISPOSE_OFFSET))(this);
		}

		::System::Boolean Enter()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CALNKFFMFOL_ENTER_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CALNKFFMFOL_TICK_OFFSET))(this, a1);
		}

		::System::Void LateUpdate(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CALNKFFMFOL_LATEUPDATE_OFFSET))(this, a1);
		}

		::System::Boolean Leave(::CFNBLNHMHGO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CFNBLNHMHGO*))((::PBYTE)hIl2Cpp + CALNKFFMFOL_LEAVE_OFFSET))(this, a1);
		}

		::System::Void NAFGIEKEJLO(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CALNKFFMFOL_NAFGIEKEJLO_OFFSET))(this, a1);
		}

		::RPG::Client::GamePhaseType GetGamePhaseType()
		{
			return ((::RPG::Client::GamePhaseType(*)(::PVOID))((::PBYTE)hIl2Cpp + CALNKFFMFOL_GETGAMEPHASETYPE_OFFSET))(this);
		}

		::System::Void DHGMLJIGPBK(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CALNKFFMFOL_DHGMLJIGPBK_OFFSET))(this, a1);
		}

		::System::Void APLDEEOKDBF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CALNKFFMFOL_APLDEEOKDBF_OFFSET))(this);
		}

		::System::Void ABBEGBMEDEF(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CALNKFFMFOL_ABBEGBMEDEF_OFFSET))(this, a1, a2);
		}

		::System::Void LFNBBKHPEOI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CALNKFFMFOL_LFNBBKHPEOI_OFFSET))(this);
		}

		::System::Void IKLJKOJLICM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CALNKFFMFOL_IKLJKOJLICM_OFFSET))(this);
		}

		::System::Void GHCGOLPENGA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CALNKFFMFOL_GHCGOLPENGA_OFFSET))(this);
		}

		::System::Void CHAMHFBICKC(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CALNKFFMFOL_CHAMHFBICKC_OFFSET))(this, a1);
		}

		::System::Void HKKFKBACKCC(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CALNKFFMFOL_HKKFKBACKCC_OFFSET))(this, a1);
		}

		::System::Void HODOIEKAKEP(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CALNKFFMFOL_HODOIEKAKEP_OFFSET))(this, a1);
		}

		::System::Void FKAJAGNNDIL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CALNKFFMFOL_FKAJAGNNDIL_OFFSET))(this);
		}

		::System::Void IDEECBDDGIH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CALNKFFMFOL_IDEECBDDGIH_OFFSET))(this);
		}

		::System::Void ABMAKLPAJJK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CALNKFFMFOL_ABMAKLPAJJK_OFFSET))(this);
		}

		::System::Void ENCKNIOAMHM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CALNKFFMFOL_ENCKNIOAMHM_OFFSET))(this);
		}

		::System::Void LBPONIBCJHE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CALNKFFMFOL_LBPONIBCJHE_OFFSET))(this);
		}

		static ::RPG::Client::TextID AJAHKNEBJAE()
		{
			return ((::RPG::Client::TextID(*)())((::PBYTE)hIl2Cpp + CALNKFFMFOL_AJAHKNEBJAE_OFFSET))();
		}

		::System::Void __StartForDesignPack_b__27_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CALNKFFMFOL___STARTFORDESIGNPACK_B__27_0_OFFSET))(this);
		}

		::System::Void __StartForMidPackPS_b__28_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CALNKFFMFOL___STARTFORMIDPACKPS_B__28_0_OFFSET))(this);
		}

		::System::Void __StartForMidPack_b__29_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CALNKFFMFOL___STARTFORMIDPACK_B__29_0_OFFSET))(this);
		}

	};
