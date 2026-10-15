#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KCOAIPGGMGJ_ConvinceState.h"
#include "unitysdk/RPG/Client/TalkConvinceTalkingSide.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ConvinceTrickSkillType.h"
#include "unitysdk/System/Object.h"
class KJCHLFOFENJ;
class NHBJIOIJBII;
namespace RPG::Client { class ConvinceConfig; }
namespace RPG::Client { class ConvinceTrickSkillGroup; }
namespace RPG::GameCore { class ConvinceInitialize; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class VCameraShakeV2; }
namespace RPGTools::Timeline { class CameraShakeConfig; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define KCOAIPGGMGJ_AEHABEMALLH_OFFSET UNITYSDK_OFFSET(0xB33B640)
#define KCOAIPGGMGJ_AJBLLIJADAB_OFFSET UNITYSDK_OFFSET(0xB33B6E0)
#define KCOAIPGGMGJ_AMJMKDCCAIA_OFFSET UNITYSDK_OFFSET(0xB33C090)
#define KCOAIPGGMGJ_BCJGEJGOHLD_OFFSET UNITYSDK_OFFSET(0xB33BD80)
#define KCOAIPGGMGJ_BEBOODHCIJO_OFFSET UNITYSDK_OFFSET(0xB33B450)
#define KCOAIPGGMGJ_BFLENEMBIBM_OFFSET UNITYSDK_OFFSET(0xB33A600)
#define KCOAIPGGMGJ_CCTOR_OFFSET UNITYSDK_OFFSET(0xB33D6A0)
#define KCOAIPGGMGJ_CLAELLCHJHL_OFFSET UNITYSDK_OFFSET(0xB33AF40)
#define KCOAIPGGMGJ_CMEJOEJFKMM_OFFSET UNITYSDK_OFFSET(0xB33C200)
#define KCOAIPGGMGJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB33D600)
#define KCOAIPGGMGJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB338FC0)
#define KCOAIPGGMGJ_DKGBPOPCGBI_OFFSET UNITYSDK_OFFSET(0xB339EA0)
#define KCOAIPGGMGJ_DMICMOJHKBL_OFFSET UNITYSDK_OFFSET(0xB3399B0)
#define KCOAIPGGMGJ_EELOJPAPMMG_OFFSET UNITYSDK_OFFSET(0xB33BAE0)
#define KCOAIPGGMGJ_FDKPIFOMAAK_OFFSET UNITYSDK_OFFSET(0xB33B030)
#define KCOAIPGGMGJ_FFAMPICKBJD_OFFSET UNITYSDK_OFFSET(0xB3396A0)
#define KCOAIPGGMGJ_FIEEBOGPOBK_OFFSET UNITYSDK_OFFSET(0xB33AEA0)
#define KCOAIPGGMGJ_FIOPILFPNLB_OFFSET UNITYSDK_OFFSET(0xB33AC90)
#define KCOAIPGGMGJ_FPAPADPPFFI_OFFSET UNITYSDK_OFFSET(0xB33AB80)
#define KCOAIPGGMGJ_GBMOIHHCOAK_OFFSET UNITYSDK_OFFSET(0xB33BD20)
#define KCOAIPGGMGJ_GFNPGIOJFPA_OFFSET UNITYSDK_OFFSET(0xB33BE00)
#define KCOAIPGGMGJ_GMPDOFHCHHO_OFFSET UNITYSDK_OFFSET(0xB33B200)
#define KCOAIPGGMGJ_GNALCFIBJEC_OFFSET UNITYSDK_OFFSET(0xB33C500)
#define KCOAIPGGMGJ_HCCKBPDFINA_OFFSET UNITYSDK_OFFSET(0xB338F30)
#define KCOAIPGGMGJ_HGOJNJLHINC_OFFSET UNITYSDK_OFFSET(0xB33B370)
#define KCOAIPGGMGJ_HIPIOAPPCOB_OFFSET UNITYSDK_OFFSET(0xB33A040)
#define KCOAIPGGMGJ_HJNJHENHGHK_OFFSET UNITYSDK_OFFSET(0xB3394E0)
#define KCOAIPGGMGJ_HOLNFPGHHFH_OFFSET UNITYSDK_OFFSET(0xB339440)
#define KCOAIPGGMGJ_IHGKDCBOPJM_OFFSET UNITYSDK_OFFSET(0xB33AE00)
#define KCOAIPGGMGJ_IJIFLAMHLLG_OFFSET UNITYSDK_OFFSET(0xB339D40)
#define KCOAIPGGMGJ_IKABMMJPDLF_OFFSET UNITYSDK_OFFSET(0xB33B090)
#define KCOAIPGGMGJ_IMOMFFOOBNI_OFFSET UNITYSDK_OFFSET(0xB33C290)
#define KCOAIPGGMGJ_IPDNDKKPHFI_OFFSET UNITYSDK_OFFSET(0xB33C4F0)
#define KCOAIPGGMGJ_JAHNMBEFPNJ_OFFSET UNITYSDK_OFFSET(0xB33AF90)
#define KCOAIPGGMGJ_KHENKNCLKEA_OFFSET UNITYSDK_OFFSET(0xB33C520)
#define KCOAIPGGMGJ_KLGAMHINOJO_OFFSET UNITYSDK_OFFSET(0xB33C510)
#define KCOAIPGGMGJ_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xB33A330)
#define KCOAIPGGMGJ_LCFFPDNHILG_OFFSET UNITYSDK_OFFSET(0xB33BE60)
#define KCOAIPGGMGJ_LDCPBIMMCKF_OFFSET UNITYSDK_OFFSET(0xB33C420)
#define KCOAIPGGMGJ_LFEBMICNFEB_OFFSET UNITYSDK_OFFSET(0xB33C100)
#define KCOAIPGGMGJ_LHEDDMIPDMA_OFFSET UNITYSDK_OFFSET(0xB33BBA0)
#define KCOAIPGGMGJ_LMEHGELGFBA_OFFSET UNITYSDK_OFFSET(0xB339C30)
#define KCOAIPGGMGJ_LOAPDPNNBEE_OFFSET UNITYSDK_OFFSET(0xB33B300)
#define KCOAIPGGMGJ_LPNKDDMANLE_OFFSET UNITYSDK_OFFSET(0xB33AC10)
#define KCOAIPGGMGJ_MGOGNMOFFMK_OFFSET UNITYSDK_OFFSET(0xB33C490)
#define KCOAIPGGMGJ_MLICPCBMPEE_OFFSET UNITYSDK_OFFSET(0xB33A0F0)
#define KCOAIPGGMGJ_NAAOJLBCBNJ_OFFSET UNITYSDK_OFFSET(0xB33BA80)
#define KCOAIPGGMGJ_NGCHHNMBNGF_OFFSET UNITYSDK_OFFSET(0xB339E10)
#define KCOAIPGGMGJ_NJNJJDIFNCB_OFFSET UNITYSDK_OFFSET(0xB33A140)
#define KCOAIPGGMGJ_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0xB3397B0)
#define KCOAIPGGMGJ_NPGOGNMPLJC_OFFSET UNITYSDK_OFFSET(0xB33C3D0)
#define KCOAIPGGMGJ_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0xB339010)
#define KCOAIPGGMGJ_TICK_OFFSET UNITYSDK_OFFSET(0xB338EA0)

inline static constexpr unsigned int KCOAIPGGMGJ_TypeDefinitionIndex = 60682;

	class KCOAIPGGMGJ : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::UInt32>* BKBMJJJMDEK; // 0x10
		::System::Collections::Generic::HashSet_1<::System::String*>* BPAALBMMHKC; // 0x18
		::NHBJIOIJBII* OJDINFLDMIM; // 0x20
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
		::RPG::Client::ConvinceConfig* GICAOBHJIGF; // 0x30
		::System::Collections::Generic::HashSet_1<::RPG::Client::TextID>* DDANABDPMCL; // 0x38
		::RPG::Client::ConvinceTrickSkillGroup* HPLGHIDENNG; // 0x40
		::System::Action* OGKIFCLJLDE; // 0x48
		::RPG::GameCore::ConvinceInitialize* LMOFIAJECPF; // 0x50
		::System::String* NKCNGCHLNEI; // 0x58
		::System::UInt32 MJPJJAPCBNA; // 0x60
		::System::Int32 CIOIEBCBGNC; // 0x64
		::RPG::Client::TextID BFGFHEHIGJK; // 0x68
		::RPG::Client::TextID KKBAFKHMCPF; // 0x78
		::RPG::Client::TextID LLJCKEKIDOG; // 0x88
		::System::Boolean MENJDPNJOKP; // 0x98
		::System::Byte _padding0[0x3];
		::RPG::Client::TalkConvinceTalkingSide EAFDHKDCKDN; // 0x9C
		::System::Int32 AHFPPJCBBBE; // 0xA0
		::System::Int32 LHMKGNNBOCM; // 0xA4
		::System::UInt32 ADHAANPLBIP; // 0xA8
		::System::Int32 EBFECJEBACB; // 0xAC
		::KCOAIPGGMGJ_ConvinceState DLNIGFGLPLJ; // 0xB0
		static ::System::String** StaticGet_PPOCNNJIMAK()
		{
			return (::System::String**)UnitySDK::FromName("", "KCOAIPGGMGJ")->GetStaticField(0x35AD0);
		}

		// static const ::System::Object IAMCCHCLELL; // 0x0
		// static const ::System::Object PCENJAKFELG; // 0x0
		// static const ::System::Object NGMABPCIOLE; // 0x0
		// static const ::System::Object MDIPEMGGJLI; // 0x0
		// static const ::System::Object KKJHPAADBJH; // 0x0
		// static const ::System::String* LHCLCGHFLEO; // 0x0
		// static const ::System::String* ACCBGDDMINL; // 0x0
		// static const ::System::Object BJGLEOAOIBP; // 0x0
		// static const ::System::String* LKDPPAMLMCL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCOAIPGGMGJ_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KCOAIPGGMGJ_CCTOR_OFFSET))();
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KCOAIPGGMGJ_TICK_OFFSET))(this, a1);
		}

		::System::Void HCCKBPDFINA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KCOAIPGGMGJ_HCCKBPDFINA_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCOAIPGGMGJ_DISPOSE_OFFSET))(this);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCOAIPGGMGJ_PJPFIHFAHGO_OFFSET))(this);
		}

		::System::Void NPAFMEBNFOB(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + KCOAIPGGMGJ_NPAFMEBNFOB_OFFSET))(this, a1);
		}

		::System::Void IJIFLAMHLLG(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + KCOAIPGGMGJ_IJIFLAMHLLG_OFFSET))(this, a1, a2);
		}

		::System::Void KPJGDHLENIP(::RPG::GameCore::ConvinceInitialize* a1, ::RPG::GameCore::TaskContext* a2, ::System::String* a3, ::System::UInt32 a4, ::System::UInt32 a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ConvinceInitialize*, ::RPG::GameCore::TaskContext*, ::System::String*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + KCOAIPGGMGJ_KPJGDHLENIP_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void BFLENEMBIBM(::System::Boolean a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + KCOAIPGGMGJ_BFLENEMBIBM_OFFSET))(this, a1, a2);
		}

		::System::Void FPAPADPPFFI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCOAIPGGMGJ_FPAPADPPFFI_OFFSET))(this);
		}

		::System::Void LPNKDDMANLE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCOAIPGGMGJ_LPNKDDMANLE_OFFSET))(this);
		}

		::System::Void FIEEBOGPOBK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCOAIPGGMGJ_FIEEBOGPOBK_OFFSET))(this);
		}

		::System::UInt32 CLAELLCHJHL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KCOAIPGGMGJ_CLAELLCHJHL_OFFSET))(this);
		}

		::System::Void HOLNFPGHHFH(::KCOAIPGGMGJ_ConvinceState a1)
		{
			return ((::System::Void(*)(::PVOID, ::KCOAIPGGMGJ_ConvinceState))((::PBYTE)hIl2Cpp + KCOAIPGGMGJ_HOLNFPGHHFH_OFFSET))(this, a1);
		}

		::System::Void JAHNMBEFPNJ(::KCOAIPGGMGJ_ConvinceState a1, ::KCOAIPGGMGJ_ConvinceState a2)
		{
			return ((::System::Void(*)(::PVOID, ::KCOAIPGGMGJ_ConvinceState, ::KCOAIPGGMGJ_ConvinceState))((::PBYTE)hIl2Cpp + KCOAIPGGMGJ_JAHNMBEFPNJ_OFFSET))(this, a1, a2);
		}

		::System::Void FDKPIFOMAAK(::KCOAIPGGMGJ_ConvinceState a1)
		{
			return ((::System::Void(*)(::PVOID, ::KCOAIPGGMGJ_ConvinceState))((::PBYTE)hIl2Cpp + KCOAIPGGMGJ_FDKPIFOMAAK_OFFSET))(this, a1);
		}

		::System::Void LMEHGELGFBA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCOAIPGGMGJ_LMEHGELGFBA_OFFSET))(this);
		}

		::System::Void FFAMPICKBJD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCOAIPGGMGJ_FFAMPICKBJD_OFFSET))(this);
		}

		::System::Void IKABMMJPDLF(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KCOAIPGGMGJ_IKABMMJPDLF_OFFSET))(this, a1);
		}

		::System::Void HGOJNJLHINC(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KCOAIPGGMGJ_HGOJNJLHINC_OFFSET))(this, a1);
		}

		::System::Void NJNJJDIFNCB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCOAIPGGMGJ_NJNJJDIFNCB_OFFSET))(this);
		}

		::System::Void NGCHHNMBNGF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCOAIPGGMGJ_NGCHHNMBNGF_OFFSET))(this);
		}

		::System::Void GMPDOFHCHHO(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + KCOAIPGGMGJ_GMPDOFHCHHO_OFFSET))(this, a1);
		}

		::System::Tuple_2<::RPG::Client::TextID, ::RPG::Client::TextID>* IHGKDCBOPJM()
		{
			return ((::System::Tuple_2<::RPG::Client::TextID, ::RPG::Client::TextID>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KCOAIPGGMGJ_IHGKDCBOPJM_OFFSET))(this);
		}

		::System::Tuple_2<::System::Int32, ::System::Int32>* AEHABEMALLH()
		{
			return ((::System::Tuple_2<::System::Int32, ::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KCOAIPGGMGJ_AEHABEMALLH_OFFSET))(this);
		}

		::System::Void HIPIOAPPCOB(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KCOAIPGGMGJ_HIPIOAPPCOB_OFFSET))(this, a1);
		}

		::System::Void AJBLLIJADAB(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KCOAIPGGMGJ_AJBLLIJADAB_OFFSET))(this, a1);
		}

		::System::Void NAAOJLBCBNJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCOAIPGGMGJ_NAAOJLBCBNJ_OFFSET))(this);
		}

		::System::Void EELOJPAPMMG(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KCOAIPGGMGJ_EELOJPAPMMG_OFFSET))(this, a1);
		}

		::System::Void GBMOIHHCOAK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCOAIPGGMGJ_GBMOIHHCOAK_OFFSET))(this);
		}

		::System::Void LHEDDMIPDMA(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KCOAIPGGMGJ_LHEDDMIPDMA_OFFSET))(this, a1);
		}

		::System::Void LOAPDPNNBEE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KCOAIPGGMGJ_LOAPDPNNBEE_OFFSET))(this, a1);
		}

		::System::Void DKGBPOPCGBI(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KCOAIPGGMGJ_DKGBPOPCGBI_OFFSET))(this, a1);
		}

		::System::Void LCFFPDNHILG(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KCOAIPGGMGJ_LCFFPDNHILG_OFFSET))(this, a1);
		}

		::System::Single AMJMKDCCAIA()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KCOAIPGGMGJ_AMJMKDCCAIA_OFFSET))(this);
		}

		::System::Void BCJGEJGOHLD(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KCOAIPGGMGJ_BCJGEJGOHLD_OFFSET))(this, a1);
		}

		::System::Boolean LFEBMICNFEB(::System::Single a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KCOAIPGGMGJ_LFEBMICNFEB_OFFSET))(this, a1);
		}

		::System::Void GFNPGIOJFPA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCOAIPGGMGJ_GFNPGIOJFPA_OFFSET))(this);
		}

		::System::Void CMEJOEJFKMM(::System::Single a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + KCOAIPGGMGJ_CMEJOEJFKMM_OFFSET))(this, a1, a2);
		}

		::System::Void IMOMFFOOBNI(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KCOAIPGGMGJ_IMOMFFOOBNI_OFFSET))(this, a1);
		}

		::System::Void MLICPCBMPEE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCOAIPGGMGJ_MLICPCBMPEE_OFFSET))(this);
		}

		::System::Void FIOPILFPNLB(::RPG::Client::TalkConvinceTalkingSide a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TalkConvinceTalkingSide))((::PBYTE)hIl2Cpp + KCOAIPGGMGJ_FIOPILFPNLB_OFFSET))(this, a1);
		}

		::RPG::Client::TalkConvinceTalkingSide NPGOGNMPLJC()
		{
			return ((::RPG::Client::TalkConvinceTalkingSide(*)(::PVOID))((::PBYTE)hIl2Cpp + KCOAIPGGMGJ_NPGOGNMPLJC_OFFSET))(this);
		}

		::RPGTools::Timeline::CameraShakeConfig* LDCPBIMMCKF(::System::String* a1)
		{
			return ((::RPGTools::Timeline::CameraShakeConfig*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + KCOAIPGGMGJ_LDCPBIMMCKF_OFFSET))(this, a1);
		}

		::KJCHLFOFENJ* MGOGNMOFFMK(::RPG::GameCore::VCameraShakeV2* a1)
		{
			return ((::KJCHLFOFENJ*(*)(::PVOID, ::RPG::GameCore::VCameraShakeV2*))((::PBYTE)hIl2Cpp + KCOAIPGGMGJ_MGOGNMOFFMK_OFFSET))(this, a1);
		}

		::System::Void BEBOODHCIJO(::RPG::GameCore::ConvinceTrickSkillType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ConvinceTrickSkillType))((::PBYTE)hIl2Cpp + KCOAIPGGMGJ_BEBOODHCIJO_OFFSET))(this, a1);
		}

		::System::Boolean IPDNDKKPHFI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KCOAIPGGMGJ_IPDNDKKPHFI_OFFSET))(this);
		}

		::System::Int32 GNALCFIBJEC()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KCOAIPGGMGJ_GNALCFIBJEC_OFFSET))(this);
		}

		::RPG::Client::ConvinceTrickSkillGroup* KLGAMHINOJO()
		{
			return ((::RPG::Client::ConvinceTrickSkillGroup*(*)(::PVOID))((::PBYTE)hIl2Cpp + KCOAIPGGMGJ_KLGAMHINOJO_OFFSET))(this);
		}

		::System::Void DMICMOJHKBL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCOAIPGGMGJ_DMICMOJHKBL_OFFSET))(this);
		}

		::System::Void HJNJHENHGHK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCOAIPGGMGJ_HJNJHENHGHK_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* KHENKNCLKEA()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KCOAIPGGMGJ_KHENKNCLKEA_OFFSET))(this);
		}

	};
