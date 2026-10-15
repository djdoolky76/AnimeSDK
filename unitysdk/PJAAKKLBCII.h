#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DILHPBMCOFK.h"
#include "unitysdk/DNLHKFILMLB.h"
#include "unitysdk/FJPMJPEKLJL.h"
#include "unitysdk/HEJPHKGCNBA.h"
#include "unitysdk/KHLDHMFKOCP.h"
#include "unitysdk/RPG/Client/LittleGame/Marble/AISimulatePhase.h"
#include "unitysdk/RPG/Client/LittleGame/Marble/MarbleNetWorkMsg.h"
#include "unitysdk/RPG/GameCore/MultiPlayerGameMode.h"
#include "unitysdk/RPG/GameCore/PetMarbleLevelMode.h"
#include "unitysdk/RPG/MVector2.h"
class GFHCKBHCNDF;
class IFFJIHFGOBO;
class KJGHJALPCCP;
class MBDOBECHOJA;
class NHDEJPALGNC;
class OFADHJMIFKO;
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PJAAKKLBCII_ABJOFFNPEII_OFFSET UNITYSDK_OFFSET(0x1C9C1AD0)
#define PJAAKKLBCII_ACELJJPEOEC_OFFSET UNITYSDK_OFFSET(0x1C9C3810)
#define PJAAKKLBCII_ALFCMFIDFOA_OFFSET UNITYSDK_OFFSET(0x1C9BFBD0)
#define PJAAKKLBCII_AMBOGHCAECL_OFFSET UNITYSDK_OFFSET(0x1C9BCA50)
#define PJAAKKLBCII_AOKBOMFPAKB_OFFSET UNITYSDK_OFFSET(0x1C9C0360)
#define PJAAKKLBCII_AOPDNDCMBOH_OFFSET UNITYSDK_OFFSET(0x1C9C3970)
#define PJAAKKLBCII_BFMMKJCLCAB_OFFSET UNITYSDK_OFFSET(0x1C9C42B0)
#define PJAAKKLBCII_BGDCFCLOADP_OFFSET UNITYSDK_OFFSET(0x1C9BDCE0)
#define PJAAKKLBCII_BKIKFIHDHFD_OFFSET UNITYSDK_OFFSET(0x1C9BE850)
#define PJAAKKLBCII_BPNAHKNBALO_OFFSET UNITYSDK_OFFSET(0x1C9C3750)
#define PJAAKKLBCII_CCEKCHADPGF_OFFSET UNITYSDK_OFFSET(0x1C9C3C30)
#define PJAAKKLBCII_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C9C52F0)
#define PJAAKKLBCII_CJOLOIKBMAH_OFFSET UNITYSDK_OFFSET(0x1C9C0000)
#define PJAAKKLBCII_CKBJINAGCOK_OFFSET UNITYSDK_OFFSET(0x1C9C1C70)
#define PJAAKKLBCII_CTOR_OFFSET UNITYSDK_OFFSET(0x1C9BB8D0)
#define PJAAKKLBCII_DALKINCKLJJ_OFFSET UNITYSDK_OFFSET(0x1C9BBA80)
#define PJAAKKLBCII_DBGGPIKKKOJ_OFFSET UNITYSDK_OFFSET(0x1C9C0560)
#define PJAAKKLBCII_DHLIMDGMCGB_OFFSET UNITYSDK_OFFSET(0x1C9BC0F0)
#define PJAAKKLBCII_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C9BB980)
#define PJAAKKLBCII_EJIKHBFHJBP_OFFSET UNITYSDK_OFFSET(0x1C9BDDE0)
#define PJAAKKLBCII_FFEOCBFKNJD_OFFSET UNITYSDK_OFFSET(0x1C9BC180)
#define PJAAKKLBCII_FHFGBJCKAKI_OFFSET UNITYSDK_OFFSET(0x1C9C3160)
#define PJAAKKLBCII_FMABPNADLPC_OFFSET UNITYSDK_OFFSET(0x1C9BFED0)
#define PJAAKKLBCII_GET_PHASETIMER_OFFSET UNITYSDK_OFFSET(0x1C9C52D0)
#define PJAAKKLBCII_GET_ROOMID_OFFSET UNITYSDK_OFFSET(0x1C9C52B0)
#define PJAAKKLBCII_GHPFLEHJKAA_OFFSET UNITYSDK_OFFSET(0x1C9C0750)
#define PJAAKKLBCII_GJOHKNNNFJA_OFFSET UNITYSDK_OFFSET(0x1C9BBA00)
#define PJAAKKLBCII_GKDGAIGKEIK_OFFSET UNITYSDK_OFFSET(0x1C9C0240)
#define PJAAKKLBCII_GPKOMDADONI_OFFSET UNITYSDK_OFFSET(0x1C9BB860)
#define PJAAKKLBCII_HDOCFPFFIEH_OFFSET UNITYSDK_OFFSET(0x1C9C5210)
#define PJAAKKLBCII_HGKIJOMKHMF_OFFSET UNITYSDK_OFFSET(0x1C9BB870)
#define PJAAKKLBCII_HKDINOMKLDA_OFFSET UNITYSDK_OFFSET(0x1C9BC400)
#define PJAAKKLBCII_HOEBKHFHIJF_OFFSET UNITYSDK_OFFSET(0x1C9C09F0)
#define PJAAKKLBCII_IHNMMLPAHMB_OFFSET UNITYSDK_OFFSET(0x1C9C1D50)
#define PJAAKKLBCII_IOKNKNCCDPL_OFFSET UNITYSDK_OFFSET(0x1C9BC090)
#define PJAAKKLBCII_JBFKLNDDIKC_OFFSET UNITYSDK_OFFSET(0x1C9C3F90)
#define PJAAKKLBCII_JEBIEIEOHCH_OFFSET UNITYSDK_OFFSET(0x1C9BC830)
#define PJAAKKLBCII_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x1C9BE9B0)
#define PJAAKKLBCII_JPNKBDHHAEB_OFFSET UNITYSDK_OFFSET(0x1C9C4240)
#define PJAAKKLBCII_KAGICIAJEEA_OFFSET UNITYSDK_OFFSET(0x1C9C3700)
#define PJAAKKLBCII_KEDCBLPPKLM_OFFSET UNITYSDK_OFFSET(0x1C9C0DE0)
#define PJAAKKLBCII_KFDOOFAPMHD_OFFSET UNITYSDK_OFFSET(0x1C9BDC70)
#define PJAAKKLBCII_LBMOKIJAKCP_OFFSET UNITYSDK_OFFSET(0x1C9C3AD0)
#define PJAAKKLBCII_MBNCCHJGAPA_OFFSET UNITYSDK_OFFSET(0x1C9C1CB0)
#define PJAAKKLBCII_MICNONNJPOK_OFFSET UNITYSDK_OFFSET(0x1C9C33C0)
#define PJAAKKLBCII_MIEAOPGEPHD_OFFSET UNITYSDK_OFFSET(0x1C9BC680)
#define PJAAKKLBCII_MOJOOAGFNGJ_OFFSET UNITYSDK_OFFSET(0x1C9C0680)
#define PJAAKKLBCII_NFNINFPMHFK_OFFSET UNITYSDK_OFFSET(0x1C9C34F0)
#define PJAAKKLBCII_NLHGIIJPGJL_OFFSET UNITYSDK_OFFSET(0x1C9C0990)
#define PJAAKKLBCII_OBBPDPNLBJM_OFFSET UNITYSDK_OFFSET(0x1C9BBF70)
#define PJAAKKLBCII_OBKOIIBJLDO_OFFSET UNITYSDK_OFFSET(0x1C9C3610)
#define PJAAKKLBCII_OCOACGHIKDM_OFFSET UNITYSDK_OFFSET(0x1C9C3DB0)
#define PJAAKKLBCII_OJBDNEICJKA_OFFSET UNITYSDK_OFFSET(0x1C9BFB10)
#define PJAAKKLBCII_OKLKOMEEAPG_OFFSET UNITYSDK_OFFSET(0x1C9C5260)
#define PJAAKKLBCII_OKPKGCPJHHH_OFFSET UNITYSDK_OFFSET(0x1C9BE5A0)
#define PJAAKKLBCII_OLPMJNDPODG_OFFSET UNITYSDK_OFFSET(0x1C9BDE90)
#define PJAAKKLBCII_PCFCDMBONPL_OFFSET UNITYSDK_OFFSET(0x1C9C11A0)
#define PJAAKKLBCII_PHFIHHAGLNH_OFFSET UNITYSDK_OFFSET(0x1C9BDFC0)
#define PJAAKKLBCII_PJFKNNIHMAN_OFFSET UNITYSDK_OFFSET(0x1C9C0170)
#define PJAAKKLBCII_SET_PHASETIMER_OFFSET UNITYSDK_OFFSET(0x1C9C52E0)
#define PJAAKKLBCII_SET_ROOMID_OFFSET UNITYSDK_OFFSET(0x1C9C52C0)

inline static constexpr unsigned int PJAAKKLBCII_TypeDefinitionIndex = 43081;

	class PJAAKKLBCII : public ::KHLDHMFKOCP
	{
	public:
		::System::String* FHBEKDDOFEG; // 0x200
		::System::Collections::IEnumerator* FKLIAMKNHDN; // 0x208
		::NHDEJPALGNC* EGMCCMAJIJD; // 0x210
		::System::UInt64 _RoomId_k__BackingField; // 0x218
		::System::UInt32 ODLJCDGOIJB; // 0x220
		::RPG::Client::LittleGame::Marble::AISimulatePhase DJDFPDIGEHK; // 0x224
		::System::Single PIHHEKGDOED; // 0x228
		::System::Single JMIEEFMOFIG; // 0x22C
		::System::Single _PhaseTimer_k__BackingField; // 0x230
		::System::Boolean FHALOJGAAKC; // 0x234
		::System::Byte _padding0[0x3];
		::System::Single MAJKAKNEDBB; // 0x238
		static ::System::String** StaticGet_KAPGCGJMJGH()
		{
			return (::System::String**)UnitySDK::FromName("", "PJAAKKLBCII")->GetStaticField(0x5CFE0);
		}

		static ::System::String** StaticGet_LPDPPKKAEBK()
		{
			return (::System::String**)UnitySDK::FromName("", "PJAAKKLBCII")->GetStaticField(0x5CFE8);
		}

		static ::System::Boolean* StaticGet_GPAFNFEBBIO()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "PJAAKKLBCII")->GetStaticField(0x14030);
		}

		::System::Void _ctor(::System::UInt64 a1, ::KJGHJALPCCP* a2, ::FJPMJPEKLJL a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::KJGHJALPCCP*, ::FJPMJPEKLJL))((::PBYTE)hIl2Cpp + PJAAKKLBCII_CTOR_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PJAAKKLBCII_CCTOR_OFFSET))();
		}

		::System::UInt32 GPKOMDADONI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PJAAKKLBCII_GPKOMDADONI_OFFSET))(this);
		}

		::System::Void HGKIJOMKHMF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PJAAKKLBCII_HGKIJOMKHMF_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJAAKKLBCII_DISPOSE_OFFSET))(this);
		}

		::System::Void GJOHKNNNFJA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJAAKKLBCII_GJOHKNNNFJA_OFFSET))(this);
		}

		::System::Void DALKINCKLJJ(::GFHCKBHCNDF* a1, ::IFFJIHFGOBO* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::GFHCKBHCNDF*, ::IFFJIHFGOBO*, ::System::Boolean))((::PBYTE)hIl2Cpp + PJAAKKLBCII_DALKINCKLJJ_OFFSET))(this, a1, a2, a3);
		}

		::System::Void HKDINOMKLDA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJAAKKLBCII_HKDINOMKLDA_OFFSET))(this);
		}

		::System::Void FFEOCBFKNJD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJAAKKLBCII_FFEOCBFKNJD_OFFSET))(this);
		}

		::System::Void DHLIMDGMCGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJAAKKLBCII_DHLIMDGMCGB_OFFSET))(this);
		}

		::System::Void MIEAOPGEPHD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJAAKKLBCII_MIEAOPGEPHD_OFFSET))(this);
		}

		::System::Void OBBPDPNLBJM(::GFHCKBHCNDF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GFHCKBHCNDF*))((::PBYTE)hIl2Cpp + PJAAKKLBCII_OBBPDPNLBJM_OFFSET))(this, a1);
		}

		::System::Void IOKNKNCCDPL(::GFHCKBHCNDF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GFHCKBHCNDF*))((::PBYTE)hIl2Cpp + PJAAKKLBCII_IOKNKNCCDPL_OFFSET))(this, a1);
		}

		::System::Void JEBIEIEOHCH(::GFHCKBHCNDF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GFHCKBHCNDF*))((::PBYTE)hIl2Cpp + PJAAKKLBCII_JEBIEIEOHCH_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* AMBOGHCAECL(::GFHCKBHCNDF* a1, ::RPG::GameCore::PetMarbleLevelMode a2)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::GFHCKBHCNDF*, ::RPG::GameCore::PetMarbleLevelMode))((::PBYTE)hIl2Cpp + PJAAKKLBCII_AMBOGHCAECL_OFFSET))(this, a1, a2);
		}

		::System::Void KFDOOFAPMHD(::GFHCKBHCNDF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GFHCKBHCNDF*))((::PBYTE)hIl2Cpp + PJAAKKLBCII_KFDOOFAPMHD_OFFSET))(this, a1);
		}

		::System::Void EJIKHBFHJBP(::GFHCKBHCNDF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GFHCKBHCNDF*))((::PBYTE)hIl2Cpp + PJAAKKLBCII_EJIKHBFHJBP_OFFSET))(this, a1);
		}

		::System::Void BGDCFCLOADP(::GFHCKBHCNDF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GFHCKBHCNDF*))((::PBYTE)hIl2Cpp + PJAAKKLBCII_BGDCFCLOADP_OFFSET))(this, a1);
		}

		::OFADHJMIFKO* OLPMJNDPODG(::System::UInt32 a1, ::System::Boolean a2, ::System::Boolean a3, ::System::UInt32 a4, ::System::UInt32 a5)
		{
			return ((::OFADHJMIFKO*(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::System::Boolean, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + PJAAKKLBCII_OLPMJNDPODG_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::OFADHJMIFKO* PHFIHHAGLNH()
		{
			return ((::OFADHJMIFKO*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJAAKKLBCII_PHFIHHAGLNH_OFFSET))(this);
		}

		::System::String* OKPKGCPJHHH(::GFHCKBHCNDF* a1)
		{
			return ((::System::String*(*)(::PVOID, ::GFHCKBHCNDF*))((::PBYTE)hIl2Cpp + PJAAKKLBCII_OKPKGCPJHHH_OFFSET))(this, a1);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PJAAKKLBCII_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::UInt32>* BKIKFIHDHFD(::RPG::GameCore::MultiPlayerGameMode a1, ::System::UInt32 a2)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID, ::RPG::GameCore::MultiPlayerGameMode, ::System::UInt32))((::PBYTE)hIl2Cpp + PJAAKKLBCII_BKIKFIHDHFD_OFFSET))(this, a1, a2);
		}

		::System::Void ALFCMFIDFOA(::System::UInt32 a1, ::RPG::Client::LittleGame::Marble::MarbleNetWorkMsg a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::LittleGame::Marble::MarbleNetWorkMsg))((::PBYTE)hIl2Cpp + PJAAKKLBCII_ALFCMFIDFOA_OFFSET))(this, a1, a2);
		}

		::System::Void ABJOFFNPEII(::System::UInt32 a1, ::DNLHKFILMLB a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::DNLHKFILMLB))((::PBYTE)hIl2Cpp + PJAAKKLBCII_ABJOFFNPEII_OFFSET))(this, a1, a2);
		}

		::System::Boolean CKBJINAGCOK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PJAAKKLBCII_CKBJINAGCOK_OFFSET))(this);
		}

		::System::Void MBNCCHJGAPA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PJAAKKLBCII_MBNCCHJGAPA_OFFSET))(this, a1);
		}

		::System::Void FHFGBJCKAKI(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::MVector2 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::MVector2))((::PBYTE)hIl2Cpp + PJAAKKLBCII_FHFGBJCKAKI_OFFSET))(this, a1, a2, a3);
		}

		::System::Void MICNONNJPOK(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::MVector2 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::MVector2))((::PBYTE)hIl2Cpp + PJAAKKLBCII_MICNONNJPOK_OFFSET))(this, a1, a2, a3);
		}

		::System::Void NFNINFPMHFK(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + PJAAKKLBCII_NFNINFPMHFK_OFFSET))(this, a1, a2);
		}

		::System::UInt32 OBKOIIBJLDO(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PJAAKKLBCII_OBKOIIBJLDO_OFFSET))(this, a1);
		}

		::System::Boolean KAGICIAJEEA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PJAAKKLBCII_KAGICIAJEEA_OFFSET))(this);
		}

		::System::Boolean BPNAHKNBALO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PJAAKKLBCII_BPNAHKNBALO_OFFSET))(this);
		}

		::System::UInt32 ACELJJPEOEC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PJAAKKLBCII_ACELJJPEOEC_OFFSET))(this);
		}

		::System::Void AOPDNDCMBOH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PJAAKKLBCII_AOPDNDCMBOH_OFFSET))(this, a1);
		}

		::System::Boolean LBMOKIJAKCP(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PJAAKKLBCII_LBMOKIJAKCP_OFFSET))(this, a1);
		}

		::DILHPBMCOFK CCEKCHADPGF(::System::UInt32 a1)
		{
			return ((::DILHPBMCOFK(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PJAAKKLBCII_CCEKCHADPGF_OFFSET))(this, a1);
		}

		::System::Void OCOACGHIKDM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PJAAKKLBCII_OCOACGHIKDM_OFFSET))(this, a1);
		}

		::System::Void JBFKLNDDIKC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJAAKKLBCII_JBFKLNDDIKC_OFFSET))(this);
		}

		::MBDOBECHOJA* IHNMMLPAHMB(::System::UInt32 a1)
		{
			return ((::MBDOBECHOJA*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PJAAKKLBCII_IHNMMLPAHMB_OFFSET))(this, a1);
		}

		::System::Void CJOLOIKBMAH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJAAKKLBCII_CJOLOIKBMAH_OFFSET))(this);
		}

		::System::Void OJBDNEICJKA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJAAKKLBCII_OJBDNEICJKA_OFFSET))(this);
		}

		::System::Void PJFKNNIHMAN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJAAKKLBCII_PJFKNNIHMAN_OFFSET))(this);
		}

		::System::Void GKDGAIGKEIK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJAAKKLBCII_GKDGAIGKEIK_OFFSET))(this);
		}

		::System::Void MOJOOAGFNGJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJAAKKLBCII_MOJOOAGFNGJ_OFFSET))(this);
		}

		::System::Void KEDCBLPPKLM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJAAKKLBCII_KEDCBLPPKLM_OFFSET))(this);
		}

		::System::Boolean DBGGPIKKKOJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PJAAKKLBCII_DBGGPIKKKOJ_OFFSET))(this);
		}

		::System::Void PCFCDMBONPL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJAAKKLBCII_PCFCDMBONPL_OFFSET))(this);
		}

		::System::Void HOEBKHFHIJF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJAAKKLBCII_HOEBKHFHIJF_OFFSET))(this);
		}

		::System::Void GHPFLEHJKAA(::System::UInt32 a1, ::HEJPHKGCNBA a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::HEJPHKGCNBA))((::PBYTE)hIl2Cpp + PJAAKKLBCII_GHPFLEHJKAA_OFFSET))(this, a1, a2);
		}

		::System::Void NLHGIIJPGJL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJAAKKLBCII_NLHGIIJPGJL_OFFSET))(this);
		}

		::System::Boolean JPNKBDHHAEB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PJAAKKLBCII_JPNKBDHHAEB_OFFSET))(this);
		}

		::System::Void AOKBOMFPAKB(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::MVector2 a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::MVector2, ::System::Boolean))((::PBYTE)hIl2Cpp + PJAAKKLBCII_AOKBOMFPAKB_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::UInt32 FMABPNADLPC(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PJAAKKLBCII_FMABPNADLPC_OFFSET))(this, a1);
		}

		::System::Void HDOCFPFFIEH(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PJAAKKLBCII_HDOCFPFFIEH_OFFSET))(this, a1);
		}

		::System::Void BFMMKJCLCAB(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PJAAKKLBCII_BFMMKJCLCAB_OFFSET))(this, a1);
		}

		::System::Void OKLKOMEEAPG(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PJAAKKLBCII_OKLKOMEEAPG_OFFSET))(this, a1);
		}

		::System::UInt64 get_RoomId()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + PJAAKKLBCII_GET_ROOMID_OFFSET))(this);
		}

		::System::Void set_RoomId(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + PJAAKKLBCII_SET_ROOMID_OFFSET))(this, a1);
		}

		::System::Single get_PhaseTimer()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PJAAKKLBCII_GET_PHASETIMER_OFFSET))(this);
		}

		::System::Void set_PhaseTimer(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PJAAKKLBCII_SET_PHASETIMER_OFFSET))(this, a1);
		}

	};
