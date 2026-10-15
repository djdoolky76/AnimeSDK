#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/PhotoGraphAimIdentifyType.h"
#include "unitysdk/RPG/GameCore/PhotoGraphFovLevel.h"
#include "unitysdk/RPG/GameCore/PhotoGraphFuncBtnType.h"
#include "unitysdk/RPG/GameCore/PuzzleFunc.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/UnityEngine/Vector3.h"
class CIEHGAHJDFN;
class EKFMIDBJDIA;
class FAHBNPMKDKG;
class HGFAKPMMGJP;
class KDJNAAOFMMJ;
class KFELGAIGHAP;
class PAKPBEKMBEA;
namespace RPG::Client { class PhotoGraphAimContainer_PhotoGraphAim; }
namespace RPG::Client { class PhotoGraphResultConditionPack; }
namespace RPG::Client { class PhotoGraphSystem; }
namespace RPG::Client { class UIController; }
namespace RPG::GameCore { class BindSwitchPhotoGraphFuncBtn; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class NotifyShowFuncBtnParam; }
namespace RPG::GameCore { class PhotoGraphFindNpc; }
namespace RPG::GameCore { class PhotoGraphModeExtraConfigSetting; }
namespace RPG::GameCore { class PhotoGraphOverrideModeConfig; }
namespace RPG::GameCore { class PhotoGraphTargetSize; }
namespace RPG::GameCore { class PropComponent; }
namespace RPG::GameCore { class ShowMainPageHint; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Coroutine; }
namespace UnityEngine { class Transform; }

#define PBDLKBEAHDL_ABMGFACNKON_OFFSET UNITYSDK_OFFSET(0xBFE73A0)
#define PBDLKBEAHDL_BBKHLOIGIJO_OFFSET UNITYSDK_OFFSET(0xBFE9D10)
#define PBDLKBEAHDL_BCMLOGBCDOL_OFFSET UNITYSDK_OFFSET(0xBFE9070)
#define PBDLKBEAHDL_BJKAAMPKEAC_OFFSET UNITYSDK_OFFSET(0xBFE9280)
#define PBDLKBEAHDL_BMLJPKEMOOE_OFFSET UNITYSDK_OFFSET(0xBFE6370)
#define PBDLKBEAHDL_CBDACHLOAIM_OFFSET UNITYSDK_OFFSET(0xBFE8A70)
#define PBDLKBEAHDL_CCTOR_OFFSET UNITYSDK_OFFSET(0xBFEA2A0)
#define PBDLKBEAHDL_CEMAANLEEMF_OFFSET UNITYSDK_OFFSET(0xBFE79F0)
#define PBDLKBEAHDL_CFDNBNPPKLK_OFFSET UNITYSDK_OFFSET(0xBFE8930)
#define PBDLKBEAHDL_CMKINDBKFIK_OFFSET UNITYSDK_OFFSET(0xBFD0370)
#define PBDLKBEAHDL_CPEDCIEOEJM_OFFSET UNITYSDK_OFFSET(0xBFD0840)
#define PBDLKBEAHDL_CTOR_OFFSET UNITYSDK_OFFSET(0xBFD0DB0)
#define PBDLKBEAHDL_DBHFFNAGEPA_OFFSET UNITYSDK_OFFSET(0xBFEA230)
#define PBDLKBEAHDL_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBFCCE80)
#define PBDLKBEAHDL_ECNKMIFCAFC_OFFSET UNITYSDK_OFFSET(0xBFE9300)
#define PBDLKBEAHDL_EJDICOMACPB_OFFSET UNITYSDK_OFFSET(0xBFE7560)
#define PBDLKBEAHDL_EOEENJCGPFG_OFFSET UNITYSDK_OFFSET(0xBFEA240)
#define PBDLKBEAHDL_FAHOIPAJJGO_OFFSET UNITYSDK_OFFSET(0xBFE9E40)
#define PBDLKBEAHDL_FAMBFOMBBJM_OFFSET UNITYSDK_OFFSET(0xBFD04F0)
#define PBDLKBEAHDL_FAMNGIHDIJP_OFFSET UNITYSDK_OFFSET(0xBFE7950)
#define PBDLKBEAHDL_FAPPCPCJEPL_OFFSET UNITYSDK_OFFSET(0xBFE95C0)
#define PBDLKBEAHDL_FILFEDPMLCI_OFFSET UNITYSDK_OFFSET(0xBFE8510)
#define PBDLKBEAHDL_GAOLMCLJEGO_OFFSET UNITYSDK_OFFSET(0xBFE7810)
#define PBDLKBEAHDL_GBJECJHGPNL_OFFSET UNITYSDK_OFFSET(0xBFEA080)
#define PBDLKBEAHDL_GET_ACTIVE_OFFSET UNITYSDK_OFFSET(0xBFEA1B0)
#define PBDLKBEAHDL_GET_AIMIDENTIFYTYPE_OFFSET UNITYSDK_OFFSET(0xBFEA1D0)
#define PBDLKBEAHDL_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0xBFEA130)
#define PBDLKBEAHDL_GET_CURRENTSHOWTIPPRIORITY_OFFSET UNITYSDK_OFFSET(0xBFEA210)
#define PBDLKBEAHDL_GET_CURRENTSHOWTIP_OFFSET UNITYSDK_OFFSET(0xBFEA1F0)
#define PBDLKBEAHDL_GET_OWNERENTITY_OFFSET UNITYSDK_OFFSET(0xBFEA170)
#define PBDLKBEAHDL_GET_OWNERPROP_OFFSET UNITYSDK_OFFSET(0xBFEA150)
#define PBDLKBEAHDL_GET_TRIGGERINRANGECOUNT_OFFSET UNITYSDK_OFFSET(0xBFEA190)
#define PBDLKBEAHDL_GFAMPFEOJJC_OFFSET UNITYSDK_OFFSET(0xBFE7740)
#define PBDLKBEAHDL_GPANJFEECJO_OFFSET UNITYSDK_OFFSET(0xBFEA250)
#define PBDLKBEAHDL_HDKIHKFAJNK_OFFSET UNITYSDK_OFFSET(0xBFE6FB0)
#define PBDLKBEAHDL_HDNEDLNJHOK_OFFSET UNITYSDK_OFFSET(0xBFE8F40)
#define PBDLKBEAHDL_HFOBJGGKKHF_OFFSET UNITYSDK_OFFSET(0xBFEA0E0)
#define PBDLKBEAHDL_IGKDBDKJDGI_OFFSET UNITYSDK_OFFSET(0xBFE7050)
#define PBDLKBEAHDL_IKOKPJFDKJG_OFFSET UNITYSDK_OFFSET(0xBFCEA30)
#define PBDLKBEAHDL_IOGEJAEDCOG_OFFSET UNITYSDK_OFFSET(0xBFE85D0)
#define PBDLKBEAHDL_IOGJFHOKEIH_OFFSET UNITYSDK_OFFSET(0xBFCDAA0)
#define PBDLKBEAHDL_JCONICPHELK_OFFSET UNITYSDK_OFFSET(0xBFD13D0)
#define PBDLKBEAHDL_JEGHJAGBLKE_OFFSET UNITYSDK_OFFSET(0xBFE8840)
#define PBDLKBEAHDL_JFICJAMHHLN_OFFSET UNITYSDK_OFFSET(0xBFD0670)
#define PBDLKBEAHDL_JHKCPNNOECM_OFFSET UNITYSDK_OFFSET(0xBFE7870)
#define PBDLKBEAHDL_JOPFBPGJGDL_OFFSET UNITYSDK_OFFSET(0xBFE6AA0)
#define PBDLKBEAHDL_JPHAADDGLIK_OFFSET UNITYSDK_OFFSET(0xBFE8CB0)
#define PBDLKBEAHDL_KALKHBCFMGJ_OFFSET UNITYSDK_OFFSET(0xBFE8AF0)
#define PBDLKBEAHDL_LEFKBBDJAPO_OFFSET UNITYSDK_OFFSET(0xBFE7650)
#define PBDLKBEAHDL_LKBGKPHIGMG_OFFSET UNITYSDK_OFFSET(0xBFE76A0)
#define PBDLKBEAHDL_LKJDDLPNIMP_OFFSET UNITYSDK_OFFSET(0xBFE7D70)
#define PBDLKBEAHDL_LMCANKPKLJD_OFFSET UNITYSDK_OFFSET(0xBFE8DE0)
#define PBDLKBEAHDL_LOOHHPKAHEP_OFFSET UNITYSDK_OFFSET(0xBFCE610)
#define PBDLKBEAHDL_MCFFDFPICNO_OFFSET UNITYSDK_OFFSET(0xBFE8240)
#define PBDLKBEAHDL_MFDFDJJLJIE_OFFSET UNITYSDK_OFFSET(0xBFE78D0)
#define PBDLKBEAHDL_NJOBMENFBFJ_OFFSET UNITYSDK_OFFSET(0xBFCF4A0)
#define PBDLKBEAHDL_OGOHMGAIKKB_OFFSET UNITYSDK_OFFSET(0xBFE8D40)
#define PBDLKBEAHDL_OMGKHMCDNBK_OFFSET UNITYSDK_OFFSET(0xBFE86D0)
#define PBDLKBEAHDL_OPAKODJKDAJ_OFFSET UNITYSDK_OFFSET(0xBFE8670)
#define PBDLKBEAHDL_PGOMEJDAJGA_OFFSET UNITYSDK_OFFSET(0xBFD0D60)
#define PBDLKBEAHDL_SET_ACTIVE_OFFSET UNITYSDK_OFFSET(0xBFEA1C0)
#define PBDLKBEAHDL_SET_AIMIDENTIFYTYPE_OFFSET UNITYSDK_OFFSET(0xBFEA1E0)
#define PBDLKBEAHDL_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0xBFEA140)
#define PBDLKBEAHDL_SET_CURRENTSHOWTIPPRIORITY_OFFSET UNITYSDK_OFFSET(0xBFEA220)
#define PBDLKBEAHDL_SET_CURRENTSHOWTIP_OFFSET UNITYSDK_OFFSET(0xBFEA200)
#define PBDLKBEAHDL_SET_OWNERENTITY_OFFSET UNITYSDK_OFFSET(0xBFEA180)
#define PBDLKBEAHDL_SET_OWNERPROP_OFFSET UNITYSDK_OFFSET(0xBFEA160)
#define PBDLKBEAHDL_SET_TRIGGERINRANGECOUNT_OFFSET UNITYSDK_OFFSET(0xBFEA1A0)
#define PBDLKBEAHDL_TICK_OFFSET UNITYSDK_OFFSET(0xBFCD380)

	class PBDLKBEAHDL : public ::System::Object
	{
	public:
		::KFELGAIGHAP* IHIKAHLOABK; // 0x10
		::RPG::GameCore::NotifyShowFuncBtnParam* MELBABBNCIL; // 0x18
		::Il2CppArray<::CIEHGAHJDFN*>* FJACOGMEIGF; // 0x20
		::System::Collections::Generic::List_1<::RPG::GameCore::PhotoGraphFindNpc*>* HJDOJCNAPAM; // 0x28
		::UnityEngine::Coroutine* AMFGLFBACBP; // 0x30
		::RPG::GameCore::BindSwitchPhotoGraphFuncBtn* _Config_k__BackingField; // 0x38
		::PAKPBEKMBEA* OOFIFJJMNJM; // 0x40
		::KDJNAAOFMMJ* LALNHIHMFAK; // 0x48
		::RPG::GameCore::PropComponent* _OwnerProp_k__BackingField; // 0x50
		::RPG::GameCore::PhotoGraphModeExtraConfigSetting* DHNPLDCBKBK; // 0x58
		::RPG::Client::PhotoGraphResultConditionPack* BCKCAMBOBJH; // 0x60
		::RPG::GameCore::GameEntity* _OwnerEntity_k__BackingField; // 0x68
		::RPG::GameCore::PhotoGraphOverrideModeConfig* OLAMJJFPPBP; // 0x70
		::Il2CppArray<::System::String*>* COCHJEJEJPC; // 0x78
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x80
		::System::String* ADPLHBMOAFF; // 0x88
		::KFELGAIGHAP* DEGHMIMBOOP; // 0x90
		::KDJNAAOFMMJ* DBCMMHMDCJJ; // 0x98
		::RPG::GameCore::ShowMainPageHint* ALAJNABLJFP; // 0xA0
		::HGFAKPMMGJP* COIBFECAMPD; // 0xA8
		::KDJNAAOFMMJ* EEEHHMBIOFK; // 0xB0
		::FAHBNPMKDKG* OIBKPJEGPOK; // 0xB8
		::UnityEngine::Coroutine* GJFNGNEJPDB; // 0xC0
		::RPG::GameCore::PhotoGraphFovLevel NJGBDGGNNFA; // 0xC8
		::System::Single CEJAJOPEFFG; // 0xCC
		::System::Boolean OLOLCIBBIKP; // 0xD0
		::System::Boolean GBKBPFDBLGK; // 0xD1
		::System::Boolean DOCIDMKAAGA; // 0xD2
		::System::Boolean BOKAHANALIF; // 0xD3
		::System::Int32 MCBIMEJMMAA; // 0xD4
		::System::Int32 IBJIGGJGCGM; // 0xD8
		::System::Boolean OIFIKNNCNEA; // 0xDC
		::System::Boolean IJGIFCDJFAF; // 0xDD
		::System::Boolean MIIMPDKLKMA; // 0xDE
		::System::Boolean CJEBDAIIIPC; // 0xDF
		::System::Single GNOFJHKBAEF; // 0xE0
		::System::Int32 KHABKHIPIPP; // 0xE4
		::RPG::Client::TextID IFMJIMNBIMA; // 0xE8
		::RPG::Client::TextID _CurrentShowTip_k__BackingField; // 0xF8
		::System::Boolean CIPLKEDMHHI; // 0x108
		::System::Boolean FKAJENEHLIM; // 0x109
		::System::Boolean _Active_k__BackingField; // 0x10A
		::System::Boolean HKCHKHIKFGB; // 0x10B
		::System::Single PDBBKIIOMEE; // 0x10C
		::System::Int32 _TriggerInRangeCount_k__BackingField; // 0x110
		::System::Single BAPGJLKNCNP; // 0x114
		::System::Int32 _CurrentShowTipPriority_k__BackingField; // 0x118
		::RPG::GameCore::PhotoGraphFuncBtnType AAOGMFOKIEJ; // 0x11C
		::RPG::Client::TextID OOBDCGOJAHK; // 0x120
		::System::Single DMFLFCJOPDK; // 0x130
		::RPG::GameCore::PhotoGraphAimIdentifyType _AimIdentifyType_k__BackingField; // 0x134
		static ::System::String** StaticGet_JOOPLIIAOGD()
		{
			return (::System::String**)UnitySDK::FromName("", "PBDLKBEAHDL")->GetStaticField(0x64380);
		}

		static ::System::Int32* StaticGet_JPLDMLLPHOL()
		{
			return (::System::Int32*)UnitySDK::FromName("", "PBDLKBEAHDL")->GetStaticField(0x14B90);
		}

		// static const ::System::Object JDPFAGHFEID; // 0x0
		// static const ::System::String* CPGAAKGMLFA; // 0x0
		::System::Void _ctor(::PAKPBEKMBEA* a1, ::System::Int32 a2, ::RPG::GameCore::TaskContext* a3, ::RPG::GameCore::BindSwitchPhotoGraphFuncBtn* a4, ::RPG::GameCore::GameEntity* a5)
		{
			return ((::System::Void(*)(::PVOID, ::PAKPBEKMBEA*, ::System::Int32, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::BindSwitchPhotoGraphFuncBtn*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + PBDLKBEAHDL_CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PBDLKBEAHDL_CCTOR_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBDLKBEAHDL_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PBDLKBEAHDL_TICK_OFFSET))(this, a1);
		}

		::System::Void NJOBMENFBFJ(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PBDLKBEAHDL_NJOBMENFBFJ_OFFSET))(this, a1);
		}

		::System::Void IKOKPJFDKJG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBDLKBEAHDL_IKOKPJFDKJG_OFFSET))(this);
		}

		::System::Boolean LOOHHPKAHEP(::RPG::GameCore::StringHash a1, ::RPG::GameCore::PhotoGraphTargetSize* a2, ::System::Single a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::StringHash, ::RPG::GameCore::PhotoGraphTargetSize*, ::System::Single))((::PBYTE)hIl2Cpp + PBDLKBEAHDL_LOOHHPKAHEP_OFFSET))(this, a1, a2, a3);
		}

		::System::Void GFAMPFEOJJC(::RPG::GameCore::StringHash a1, ::UnityEngine::Transform* a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StringHash, ::UnityEngine::Transform*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + PBDLKBEAHDL_GFAMPFEOJJC_OFFSET))(this, a1, a2, a3);
		}

		::RPG::GameCore::NotifyShowFuncBtnParam* CPEDCIEOEJM()
		{
			return ((::RPG::GameCore::NotifyShowFuncBtnParam*(*)(::PVOID))((::PBYTE)hIl2Cpp + PBDLKBEAHDL_CPEDCIEOEJM_OFFSET))(this);
		}

		::System::Boolean GAOLMCLJEGO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PBDLKBEAHDL_GAOLMCLJEGO_OFFSET))(this);
		}

		::System::Boolean JHKCPNNOECM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PBDLKBEAHDL_JHKCPNNOECM_OFFSET))(this);
		}

		::System::Void MFDFDJJLJIE(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PBDLKBEAHDL_MFDFDJJLJIE_OFFSET))(this, a1, a2);
		}

		::System::Void CMKINDBKFIK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBDLKBEAHDL_CMKINDBKFIK_OFFSET))(this);
		}

		::System::Void FAMBFOMBBJM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBDLKBEAHDL_FAMBFOMBBJM_OFFSET))(this);
		}

		::System::Boolean JCONICPHELK(::RPG::GameCore::NotifyShowFuncBtnParam* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::NotifyShowFuncBtnParam*))((::PBYTE)hIl2Cpp + PBDLKBEAHDL_JCONICPHELK_OFFSET))(this, a1);
		}

		::System::Void FAMNGIHDIJP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBDLKBEAHDL_FAMNGIHDIJP_OFFSET))(this);
		}

		::System::Void LEFKBBDJAPO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBDLKBEAHDL_LEFKBBDJAPO_OFFSET))(this);
		}

		::System::Void IOGJFHOKEIH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBDLKBEAHDL_IOGJFHOKEIH_OFFSET))(this);
		}

		::RPG::Client::UIController* MCFFDFPICNO()
		{
			return ((::RPG::Client::UIController*(*)(::PVOID))((::PBYTE)hIl2Cpp + PBDLKBEAHDL_MCFFDFPICNO_OFFSET))(this);
		}

		::System::Void FILFEDPMLCI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PBDLKBEAHDL_FILFEDPMLCI_OFFSET))(this, a1);
		}

		::System::Void BMLJPKEMOOE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBDLKBEAHDL_BMLJPKEMOOE_OFFSET))(this);
		}

		::RPG::GameCore::PuzzleFunc PGOMEJDAJGA()
		{
			return ((::RPG::GameCore::PuzzleFunc(*)(::PVOID))((::PBYTE)hIl2Cpp + PBDLKBEAHDL_PGOMEJDAJGA_OFFSET))(this);
		}

		::System::Boolean JFICJAMHHLN(::RPG::Client::PhotoGraphAimContainer_PhotoGraphAim* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PhotoGraphAimContainer_PhotoGraphAim*))((::PBYTE)hIl2Cpp + PBDLKBEAHDL_JFICJAMHHLN_OFFSET))(this, a1);
		}

		::System::Void IOGEJAEDCOG(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + PBDLKBEAHDL_IOGEJAEDCOG_OFFSET))(this, a1, a2, a3);
		}

		::System::Void JOPFBPGJGDL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBDLKBEAHDL_JOPFBPGJGDL_OFFSET))(this);
		}

		::System::Void ABMGFACNKON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBDLKBEAHDL_ABMGFACNKON_OFFSET))(this);
		}

		::System::Void OPAKODJKDAJ(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PBDLKBEAHDL_OPAKODJKDAJ_OFFSET))(this, a1);
		}

		::System::Void IGKDBDKJDGI(::System::Single a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + PBDLKBEAHDL_IGKDBDKJDGI_OFFSET))(this, a1, a2);
		}

		::System::Void OMGKHMCDNBK(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + PBDLKBEAHDL_OMGKHMCDNBK_OFFSET))(this, a1);
		}

		::System::Void JEGHJAGBLKE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBDLKBEAHDL_JEGHJAGBLKE_OFFSET))(this);
		}

		::System::Void CFDNBNPPKLK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBDLKBEAHDL_CFDNBNPPKLK_OFFSET))(this);
		}

		::System::Void CBDACHLOAIM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBDLKBEAHDL_CBDACHLOAIM_OFFSET))(this);
		}

		::System::Void KALKHBCFMGJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBDLKBEAHDL_KALKHBCFMGJ_OFFSET))(this);
		}

		::System::Void JPHAADDGLIK(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PBDLKBEAHDL_JPHAADDGLIK_OFFSET))(this, a1);
		}

		::System::Void EJDICOMACPB(::RPG::Client::PhotoGraphSystem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PhotoGraphSystem*))((::PBYTE)hIl2Cpp + PBDLKBEAHDL_EJDICOMACPB_OFFSET))(this, a1);
		}

		::System::Void LKBGKPHIGMG(::RPG::Client::PhotoGraphSystem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PhotoGraphSystem*))((::PBYTE)hIl2Cpp + PBDLKBEAHDL_LKBGKPHIGMG_OFFSET))(this, a1);
		}

		::System::Void LKJDDLPNIMP(::RPG::Client::PhotoGraphSystem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PhotoGraphSystem*))((::PBYTE)hIl2Cpp + PBDLKBEAHDL_LKJDDLPNIMP_OFFSET))(this, a1);
		}

		::System::Void CEMAANLEEMF(::RPG::Client::PhotoGraphSystem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PhotoGraphSystem*))((::PBYTE)hIl2Cpp + PBDLKBEAHDL_CEMAANLEEMF_OFFSET))(this, a1);
		}

		::System::Void OGOHMGAIKKB(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PBDLKBEAHDL_OGOHMGAIKKB_OFFSET))(this, a1);
		}

		::System::Void BCMLOGBCDOL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBDLKBEAHDL_BCMLOGBCDOL_OFFSET))(this);
		}

		::System::Void HDKIHKFAJNK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBDLKBEAHDL_HDKIHKFAJNK_OFFSET))(this);
		}

		::System::Void BJKAAMPKEAC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBDLKBEAHDL_BJKAAMPKEAC_OFFSET))(this);
		}

		::System::Void HDNEDLNJHOK(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PBDLKBEAHDL_HDNEDLNJHOK_OFFSET))(this, a1);
		}

		::System::Void LMCANKPKLJD(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PBDLKBEAHDL_LMCANKPKLJD_OFFSET))(this, a1);
		}

		::System::Void ECNKMIFCAFC(::System::Collections::Generic::List_1<::System::Object*>* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::CIEHGAHJDFN* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Object*>*, ::System::UInt32, ::System::UInt32, ::CIEHGAHJDFN*))((::PBYTE)hIl2Cpp + PBDLKBEAHDL_ECNKMIFCAFC_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void FAPPCPCJEPL(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PBDLKBEAHDL_FAPPCPCJEPL_OFFSET))(this, a1);
		}

		::System::Void FAHOIPAJJGO(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PBDLKBEAHDL_FAHOIPAJJGO_OFFSET))(this, a1);
		}

		::System::Void BBKHLOIGIJO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBDLKBEAHDL_BBKHLOIGIJO_OFFSET))(this);
		}

		::System::Void GBJECJHGPNL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBDLKBEAHDL_GBJECJHGPNL_OFFSET))(this);
		}

		::System::Void HFOBJGGKKHF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBDLKBEAHDL_HFOBJGGKKHF_OFFSET))(this);
		}

		::RPG::GameCore::BindSwitchPhotoGraphFuncBtn* get_Config()
		{
			return ((::RPG::GameCore::BindSwitchPhotoGraphFuncBtn*(*)(::PVOID))((::PBYTE)hIl2Cpp + PBDLKBEAHDL_GET_CONFIG_OFFSET))(this);
		}

		::System::Void set_Config(::RPG::GameCore::BindSwitchPhotoGraphFuncBtn* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BindSwitchPhotoGraphFuncBtn*))((::PBYTE)hIl2Cpp + PBDLKBEAHDL_SET_CONFIG_OFFSET))(this, a1);
		}

		::RPG::GameCore::PropComponent* get_OwnerProp()
		{
			return ((::RPG::GameCore::PropComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + PBDLKBEAHDL_GET_OWNERPROP_OFFSET))(this);
		}

		::System::Void set_OwnerProp(::RPG::GameCore::PropComponent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PropComponent*))((::PBYTE)hIl2Cpp + PBDLKBEAHDL_SET_OWNERPROP_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* get_OwnerEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + PBDLKBEAHDL_GET_OWNERENTITY_OFFSET))(this);
		}

		::System::Void set_OwnerEntity(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + PBDLKBEAHDL_SET_OWNERENTITY_OFFSET))(this, a1);
		}

		::System::Int32 get_TriggerInRangeCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PBDLKBEAHDL_GET_TRIGGERINRANGECOUNT_OFFSET))(this);
		}

		::System::Void set_TriggerInRangeCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PBDLKBEAHDL_SET_TRIGGERINRANGECOUNT_OFFSET))(this, a1);
		}

		::System::Boolean get_Active()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PBDLKBEAHDL_GET_ACTIVE_OFFSET))(this);
		}

		::System::Void set_Active(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PBDLKBEAHDL_SET_ACTIVE_OFFSET))(this, a1);
		}

		::RPG::GameCore::PhotoGraphAimIdentifyType get_AimIdentifyType()
		{
			return ((::RPG::GameCore::PhotoGraphAimIdentifyType(*)(::PVOID))((::PBYTE)hIl2Cpp + PBDLKBEAHDL_GET_AIMIDENTIFYTYPE_OFFSET))(this);
		}

		::System::Void set_AimIdentifyType(::RPG::GameCore::PhotoGraphAimIdentifyType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PhotoGraphAimIdentifyType))((::PBYTE)hIl2Cpp + PBDLKBEAHDL_SET_AIMIDENTIFYTYPE_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_CurrentShowTip()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + PBDLKBEAHDL_GET_CURRENTSHOWTIP_OFFSET))(this);
		}

		::System::Void set_CurrentShowTip(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + PBDLKBEAHDL_SET_CURRENTSHOWTIP_OFFSET))(this, a1);
		}

		::System::Int32 get_CurrentShowTipPriority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PBDLKBEAHDL_GET_CURRENTSHOWTIPPRIORITY_OFFSET))(this);
		}

		::System::Void set_CurrentShowTipPriority(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PBDLKBEAHDL_SET_CURRENTSHOWTIPPRIORITY_OFFSET))(this, a1);
		}

		::System::Int32 DBHFFNAGEPA()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PBDLKBEAHDL_DBHFFNAGEPA_OFFSET))(this);
		}

		::RPG::Client::PhotoGraphResultConditionPack* EOEENJCGPFG()
		{
			return ((::RPG::Client::PhotoGraphResultConditionPack*(*)(::PVOID))((::PBYTE)hIl2Cpp + PBDLKBEAHDL_EOEENJCGPFG_OFFSET))(this);
		}

		::RPG::GameCore::PhotoGraphFovLevel GPANJFEECJO()
		{
			return ((::RPG::GameCore::PhotoGraphFovLevel(*)(::PVOID))((::PBYTE)hIl2Cpp + PBDLKBEAHDL_GPANJFEECJO_OFFSET))(this);
		}

	};
