#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BPBFCHPINDD_FadingDoneActionType.h"
#include "unitysdk/RPG/Client/OpenWorld/StreamingInstanceLoadingState.h"
#include "unitysdk/RPG/Client/OpenWorld/StreamingInstanceLodState.h"
#include "unitysdk/RPG/Client/OpenWorld/StreamingState.h"
#include "unitysdk/System/Object.h"
class BGNDPIPJFCI;
class HPKACEPPPCA;
class KLEFGGIHGMI;
class LJFHKAJPFNE;
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Diagnostics { class StackFrame; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class Transform; }

#define HPKACEPPPCA_AGHNEJIEMPA_OFFSET UNITYSDK_OFFSET(0x15DD0A70)
#define HPKACEPPPCA_AGNIGCGAFJP_OFFSET UNITYSDK_OFFSET(0x15DD0FC0)
#define HPKACEPPPCA_APIGKLFOKNL_OFFSET UNITYSDK_OFFSET(0x15DCEB20)
#define HPKACEPPPCA_BCMOJHKOLLM_OFFSET UNITYSDK_OFFSET(0x15DCEF50)
#define HPKACEPPPCA_BFJJOJKKLGG_OFFSET UNITYSDK_OFFSET(0x15DD0240)
#define HPKACEPPPCA_BGGKFPNPNJG_OFFSET UNITYSDK_OFFSET(0x15DCF8A0)
#define HPKACEPPPCA_BMJEDKKNABD_OFFSET UNITYSDK_OFFSET(0x15DCF550)
#define HPKACEPPPCA_CBAIDGMCODG_OFFSET UNITYSDK_OFFSET(0x15DD1090)
#define HPKACEPPPCA_CCBGIKNFCCI_OFFSET UNITYSDK_OFFSET(0x15DD0A40)
#define HPKACEPPPCA_CMMLGICCEEC_OFFSET UNITYSDK_OFFSET(0x15DCF500)
#define HPKACEPPPCA_CPDPOINFADH_OFFSET UNITYSDK_OFFSET(0x15DCF410)
#define HPKACEPPPCA_CTOR_OFFSET UNITYSDK_OFFSET(0x15DCE8E0)
#define HPKACEPPPCA_DLLLCMBCCJO_OFFSET UNITYSDK_OFFSET(0x15DD0890)
#define HPKACEPPPCA_DMKJAJLNEBK_OFFSET UNITYSDK_OFFSET(0x15DCF900)
#define HPKACEPPPCA_DOCEKJGCGEE_OFFSET UNITYSDK_OFFSET(0x15DD0560)
#define HPKACEPPPCA_DOPNFIGFCCK_OFFSET UNITYSDK_OFFSET(0x15DCEB70)
#define HPKACEPPPCA_DPOCBCIOGGC_OFFSET UNITYSDK_OFFSET(0x15DD0D50)
#define HPKACEPPPCA_EBPHHPKBEEM_OFFSET UNITYSDK_OFFSET(0x15DCFFD0)
#define HPKACEPPPCA_EGKNKHEANAN_OFFSET UNITYSDK_OFFSET(0x15DCF2F0)
#define HPKACEPPPCA_ENNAMLJFOLO_OFFSET UNITYSDK_OFFSET(0x15DCEC50)
#define HPKACEPPPCA_FAKMBKCFMAE_OFFSET UNITYSDK_OFFSET(0x15DCE8F0)
#define HPKACEPPPCA_FMPHNNADJPE_OFFSET UNITYSDK_OFFSET(0x15DD0640)
#define HPKACEPPPCA_GBBKEBNMEKD_OFFSET UNITYSDK_OFFSET(0x15DD0CD0)
#define HPKACEPPPCA_GET_HASDISPOSED_OFFSET UNITYSDK_OFFSET(0x15DD0D10)
#define HPKACEPPPCA_GET_ISDENPENDPERSISTENTASSET_OFFSET UNITYSDK_OFFSET(0x15DD0CF0)
#define HPKACEPPPCA_GET_STARTDEBUG_OFFSET UNITYSDK_OFFSET(0x15DD0D30)
#define HPKACEPPPCA_GFDNIAIOOCK_OFFSET UNITYSDK_OFFSET(0x15DD0A50)
#define HPKACEPPPCA_GGDLCACLCJD_OFFSET UNITYSDK_OFFSET(0x15DD0B30)
#define HPKACEPPPCA_GIOKIDJCJHE_OFFSET UNITYSDK_OFFSET(0x15DCF1C0)
#define HPKACEPPPCA_GJPEKAOFMLH_OFFSET UNITYSDK_OFFSET(0x15DD1180)
#define HPKACEPPPCA_GNCIPBBNIIH_OFFSET UNITYSDK_OFFSET(0x15DCEC90)
#define HPKACEPPPCA_GPGPINDBCJL_OFFSET UNITYSDK_OFFSET(0x15DD1230)
#define HPKACEPPPCA_GPMDFFNHGPB_OFFSET UNITYSDK_OFFSET(0x15DD0B80)
#define HPKACEPPPCA_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x15DD0370)
#define HPKACEPPPCA_HJHGLIMIOOD_OFFSET UNITYSDK_OFFSET(0x15DCFF30)
#define HPKACEPPPCA_HOJKDDMIMOK_OFFSET UNITYSDK_OFFSET(0x15DD04E0)
#define HPKACEPPPCA_IGDIEBODAAH_OFFSET UNITYSDK_OFFSET(0x15DCF250)
#define HPKACEPPPCA_IOIGLPJCIND_OFFSET UNITYSDK_OFFSET(0x15DCFD10)
#define HPKACEPPPCA_JBIAAIPOMHC_OFFSET UNITYSDK_OFFSET(0x15DD0200)
#define HPKACEPPPCA_JBJJNKOCGBE_OFFSET UNITYSDK_OFFSET(0x15DD0600)
#define HPKACEPPPCA_JNHEFKMODHH_OFFSET UNITYSDK_OFFSET(0x15DD0B90)
#define HPKACEPPPCA_JODKOPDMGHJ_OFFSET UNITYSDK_OFFSET(0x15DD0830)
#define HPKACEPPPCA_KCNDNBEJAEL_OFFSET UNITYSDK_OFFSET(0x15DD0A80)
#define HPKACEPPPCA_KFDEPHCLLIE_OFFSET UNITYSDK_OFFSET(0x15DD0780)
#define HPKACEPPPCA_KGJAMKFPOAB_OFFSET UNITYSDK_OFFSET(0x15DCFBD0)
#define HPKACEPPPCA_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x15DCE960)
#define HPKACEPPPCA_KJHFLHNBBBC_OFFSET UNITYSDK_OFFSET(0x15DD1010)
#define HPKACEPPPCA_KJMDJMBNCPE_OFFSET UNITYSDK_OFFSET(0x15DD0300)
#define HPKACEPPPCA_KLIKJIKDPNN_OFFSET UNITYSDK_OFFSET(0x15DCF160)
#define HPKACEPPPCA_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x15DCE9E0)
#define HPKACEPPPCA_LFIOEBDKGEL_OFFSET UNITYSDK_OFFSET(0x15DD01F0)
#define HPKACEPPPCA_LIMDHJCLPKL_OFFSET UNITYSDK_OFFSET(0x15DD0950)
#define HPKACEPPPCA_LNLHHJDJKBL_OFFSET UNITYSDK_OFFSET(0x15DCEBC0)
#define HPKACEPPPCA_LNPBIKHAIHI_OFFSET UNITYSDK_OFFSET(0x15DD09E0)
#define HPKACEPPPCA_MFFNEOMEEIH_OFFSET UNITYSDK_OFFSET(0x15DD0A90)
#define HPKACEPPPCA_MLCKJFCLKMH_OFFSET UNITYSDK_OFFSET(0x15DD0740)
#define HPKACEPPPCA_MLKLPEHFEDP_OFFSET UNITYSDK_OFFSET(0x15DCEAB0)
#define HPKACEPPPCA_MMJBLIAHKGG_OFFSET UNITYSDK_OFFSET(0x15DD05C0)
#define HPKACEPPPCA_NADGBDCLALH_OFFSET UNITYSDK_OFFSET(0x15DCFF70)
#define HPKACEPPPCA_NEPBDELGKOD_OFFSET UNITYSDK_OFFSET(0x15DD1420)
#define HPKACEPPPCA_NFPAFPDGMPJ_OFFSET UNITYSDK_OFFSET(0x15DD0680)
#define HPKACEPPPCA_NNEEKPGDKMF_OFFSET UNITYSDK_OFFSET(0x15DCED70)
#define HPKACEPPPCA_NPLKHELPEFL_OFFSET UNITYSDK_OFFSET(0x15DCF730)
#define HPKACEPPPCA_OCMOOAKHPGL_OFFSET UNITYSDK_OFFSET(0x15DD0A60)
#define HPKACEPPPCA_OGDLIONGCMP_OFFSET UNITYSDK_OFFSET(0x15DCFB90)
#define HPKACEPPPCA_OILFELMDINP_OFFSET UNITYSDK_OFFSET(0x15DD09F0)
#define HPKACEPPPCA_OMNMDCIBDDE_OFFSET UNITYSDK_OFFSET(0x15DD0AE0)
#define HPKACEPPPCA_PAIOIFFJDKF_OFFSET UNITYSDK_OFFSET(0x15DD09A0)
#define HPKACEPPPCA_PDLCJHPAKAD_OFFSET UNITYSDK_OFFSET(0x15DD0CE0)
#define HPKACEPPPCA_PEBBCJGNLHE_OFFSET UNITYSDK_OFFSET(0x15DCEC10)
#define HPKACEPPPCA_SET_HASDISPOSED_OFFSET UNITYSDK_OFFSET(0x15DD0D20)
#define HPKACEPPPCA_SET_ISDENPENDPERSISTENTASSET_OFFSET UNITYSDK_OFFSET(0x15DD0D00)
#define HPKACEPPPCA_SET_STARTDEBUG_OFFSET UNITYSDK_OFFSET(0x15DD0D40)

	class HPKACEPPPCA : public ::System::Object
	{
	public:
		::KLEFGGIHGMI* KGPIGCAPOCP; // 0x10
		::RPG::Client::OpenWorld::StreamingItemData* IOBOHKDLFMP; // 0x18
		::System::Action* DJHECFAIOHJ; // 0x20
		::RPG::Client::OpenWorld::StreamingItemData* ICFMADGMEPC; // 0x28
		::System::Action* PIBCMNAFAME; // 0x30
		::LJFHKAJPFNE* NFPCBMCGFDD; // 0x38
		::Il2CppArray<::System::Diagnostics::StackFrame*>* JNAAFLNPBHA; // 0x40
		::BGNDPIPJFCI* LAONDDLKDFI; // 0x48
		::KLEFGGIHGMI* KDLDKNBOFBN; // 0x50
		::System::Int32 PHJCBBFOFLB; // 0x58
		::System::Int32 OCDHKOEEMEP; // 0x5C
		::System::Single NALMBOOCCIN; // 0x60
		::System::Int32 ECKABHFHPDN; // 0x64
		::RPG::Client::OpenWorld::StreamingState PLKHKGBKLMC; // 0x68
		::RPG::Client::OpenWorld::StreamingInstanceLodState OJPFPJGMIFM; // 0x6A
		::System::Int32 JDHMGMCCHMB; // 0x6C
		::RPG::Client::OpenWorld::StreamingInstanceLoadingState EGGHHGIEIHG; // 0x70
		::System::Boolean _HasDisposed_k__BackingField; // 0x72
		::System::Boolean EENMPDHBHDB; // 0x73
		::System::Boolean _IsDenpendPersistentAsset_k__BackingField; // 0x74
		::System::Boolean DPKEKINEPKD; // 0x75
		::RPG::Client::OpenWorld::StreamingState GAGOLPALJMA; // 0x76
		::System::Boolean _StartDebug_k__BackingField; // 0x78
		::System::Byte _padding0[0x3];
		::System::Int32 CJCCLNEDGKB; // 0x7C
		// static const ::System::String* FBGJAEDHJJL; // 0x0
		// static const ::System::String* LLPPKEOJJEJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPKACEPPPCA_CTOR_OFFSET))(this);
		}

		::System::Void FAKMBKCFMAE(::LJFHKAJPFNE* a1, ::System::Action* a2, ::System::Action* a3)
		{
			return ((::System::Void(*)(::PVOID, ::LJFHKAJPFNE*, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + HPKACEPPPCA_FAKMBKCFMAE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPKACEPPPCA_KHGIKBFDLFB_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::RPG::Client::OpenWorld::StreamingItemData* a1, ::UnityEngine::GameObject* a2, ::KLEFGGIHGMI* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::GameObject*, ::KLEFGGIHGMI*))((::PBYTE)hIl2Cpp + HPKACEPPPCA_KPJGDHLENIP_OFFSET))(this, a1, a2, a3);
		}

		::System::Void APIGKLFOKNL(::UnityEngine::GameObject* a1, ::RPG::Client::OpenWorld::StreamingItemData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + HPKACEPPPCA_APIGKLFOKNL_OFFSET))(this, a1, a2);
		}

		::System::Boolean DOPNFIGFCCK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HPKACEPPPCA_DOPNFIGFCCK_OFFSET))(this);
		}

		::System::String* LNLHHJDJKBL()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPKACEPPPCA_LNLHHJDJKBL_OFFSET))(this);
		}

		::System::Void PEBBCJGNLHE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPKACEPPPCA_PEBBCJGNLHE_OFFSET))(this);
		}

		::System::Void ENNAMLJFOLO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPKACEPPPCA_ENNAMLJFOLO_OFFSET))(this);
		}

		::System::Void GNCIPBBNIIH(::BGNDPIPJFCI* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::BGNDPIPJFCI*, ::System::Int32))((::PBYTE)hIl2Cpp + HPKACEPPPCA_GNCIPBBNIIH_OFFSET))(this, a1, a2);
		}

		::System::Void NNEEKPGDKMF(::BGNDPIPJFCI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BGNDPIPJFCI*))((::PBYTE)hIl2Cpp + HPKACEPPPCA_NNEEKPGDKMF_OFFSET))(this, a1);
		}

		::System::Void IGDIEBODAAH(::BGNDPIPJFCI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BGNDPIPJFCI*))((::PBYTE)hIl2Cpp + HPKACEPPPCA_IGDIEBODAAH_OFFSET))(this, a1);
		}

		::System::Void EGKNKHEANAN(::BGNDPIPJFCI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BGNDPIPJFCI*))((::PBYTE)hIl2Cpp + HPKACEPPPCA_EGKNKHEANAN_OFFSET))(this, a1);
		}

		::System::Void CPDPOINFADH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPKACEPPPCA_CPDPOINFADH_OFFSET))(this);
		}

		::System::Void NPLKHELPEFL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPKACEPPPCA_NPLKHELPEFL_OFFSET))(this);
		}

		::System::Void DMKJAJLNEBK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPKACEPPPCA_DMKJAJLNEBK_OFFSET))(this);
		}

		::System::Void OGDLIONGCMP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPKACEPPPCA_OGDLIONGCMP_OFFSET))(this);
		}

		::System::Void KGJAMKFPOAB(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HPKACEPPPCA_KGJAMKFPOAB_OFFSET))(this, a1);
		}

		::System::Void IOIGLPJCIND()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPKACEPPPCA_IOIGLPJCIND_OFFSET))(this);
		}

		::System::Void HJHGLIMIOOD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPKACEPPPCA_HJHGLIMIOOD_OFFSET))(this);
		}

		::System::Void NADGBDCLALH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HPKACEPPPCA_NADGBDCLALH_OFFSET))(this, a1);
		}

		::System::Void EBPHHPKBEEM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPKACEPPPCA_EBPHHPKBEEM_OFFSET))(this);
		}

		::System::Void JBIAAIPOMHC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPKACEPPPCA_JBIAAIPOMHC_OFFSET))(this);
		}

		::System::Boolean BFJJOJKKLGG(::UnityEngine::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + HPKACEPPPCA_BFJJOJKKLGG_OFFSET))(this, a1);
		}

		::System::Void KJMDJMBNCPE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPKACEPPPCA_KJMDJMBNCPE_OFFSET))(this);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPKACEPPPCA_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Void HOJKDDMIMOK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPKACEPPPCA_HOJKDDMIMOK_OFFSET))(this);
		}

		::System::Void MMJBLIAHKGG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPKACEPPPCA_MMJBLIAHKGG_OFFSET))(this);
		}

		::UnityEngine::GameObject* JBJJNKOCGBE()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPKACEPPPCA_JBJJNKOCGBE_OFFSET))(this);
		}

		::System::Void FMPHNNADJPE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPKACEPPPCA_FMPHNNADJPE_OFFSET))(this);
		}

		::UnityEngine::Transform* NFPAFPDGMPJ()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPKACEPPPCA_NFPAFPDGMPJ_OFFSET))(this);
		}

		::UnityEngine::GameObject* MLCKJFCLKMH()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPKACEPPPCA_MLCKJFCLKMH_OFFSET))(this);
		}

		::System::Void KFDEPHCLLIE(::KLEFGGIHGMI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KLEFGGIHGMI*))((::PBYTE)hIl2Cpp + HPKACEPPPCA_KFDEPHCLLIE_OFFSET))(this, a1);
		}

		::System::Void DOCEKJGCGEE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPKACEPPPCA_DOCEKJGCGEE_OFFSET))(this);
		}

		::System::Void JODKOPDMGHJ(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HPKACEPPPCA_JODKOPDMGHJ_OFFSET))(this, a1);
		}

		::System::Boolean DLLLCMBCCJO(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HPKACEPPPCA_DLLLCMBCCJO_OFFSET))(this, a1);
		}

		::System::Boolean LIMDHJCLPKL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HPKACEPPPCA_LIMDHJCLPKL_OFFSET))(this);
		}

		::System::Void PAIOIFFJDKF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPKACEPPPCA_PAIOIFFJDKF_OFFSET))(this);
		}

		::KLEFGGIHGMI* LNPBIKHAIHI()
		{
			return ((::KLEFGGIHGMI*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPKACEPPPCA_LNPBIKHAIHI_OFFSET))(this);
		}

		::System::Void OILFELMDINP(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + HPKACEPPPCA_OILFELMDINP_OFFSET))(this, a1, a2);
		}

		::RPG::Client::OpenWorld::StreamingState CCBGIKNFCCI()
		{
			return ((::RPG::Client::OpenWorld::StreamingState(*)(::PVOID))((::PBYTE)hIl2Cpp + HPKACEPPPCA_CCBGIKNFCCI_OFFSET))(this);
		}

		::System::Void GFDNIAIOOCK(::RPG::Client::OpenWorld::StreamingState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingState))((::PBYTE)hIl2Cpp + HPKACEPPPCA_GFDNIAIOOCK_OFFSET))(this, a1);
		}

		::RPG::Client::OpenWorld::StreamingInstanceLoadingState OCMOOAKHPGL()
		{
			return ((::RPG::Client::OpenWorld::StreamingInstanceLoadingState(*)(::PVOID))((::PBYTE)hIl2Cpp + HPKACEPPPCA_OCMOOAKHPGL_OFFSET))(this);
		}

		::System::Void AGHNEJIEMPA(::RPG::Client::OpenWorld::StreamingInstanceLoadingState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingInstanceLoadingState))((::PBYTE)hIl2Cpp + HPKACEPPPCA_AGHNEJIEMPA_OFFSET))(this, a1);
		}

		::RPG::Client::OpenWorld::StreamingInstanceLodState KCNDNBEJAEL()
		{
			return ((::RPG::Client::OpenWorld::StreamingInstanceLodState(*)(::PVOID))((::PBYTE)hIl2Cpp + HPKACEPPPCA_KCNDNBEJAEL_OFFSET))(this);
		}

		::System::Void CMMLGICCEEC(::RPG::Client::OpenWorld::StreamingInstanceLodState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingInstanceLodState))((::PBYTE)hIl2Cpp + HPKACEPPPCA_CMMLGICCEEC_OFFSET))(this, a1);
		}

		::RPG::Client::OpenWorld::StreamingState GIOKIDJCJHE()
		{
			return ((::RPG::Client::OpenWorld::StreamingState(*)(::PVOID))((::PBYTE)hIl2Cpp + HPKACEPPPCA_GIOKIDJCJHE_OFFSET))(this);
		}

		::System::Boolean MFFNEOMEEIH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HPKACEPPPCA_MFFNEOMEEIH_OFFSET))(this);
		}

		::System::Boolean OMNMDCIBDDE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HPKACEPPPCA_OMNMDCIBDDE_OFFSET))(this);
		}

		::System::Boolean GGDLCACLCJD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HPKACEPPPCA_GGDLCACLCJD_OFFSET))(this);
		}

		::System::Boolean BGGKFPNPNJG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HPKACEPPPCA_BGGKFPNPNJG_OFFSET))(this);
		}

		::System::Boolean LFIOEBDKGEL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HPKACEPPPCA_LFIOEBDKGEL_OFFSET))(this);
		}

		::System::Int32 JNHEFKMODHH()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HPKACEPPPCA_JNHEFKMODHH_OFFSET))(this);
		}

		::System::Int32 KLIKJIKDPNN()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HPKACEPPPCA_KLIKJIKDPNN_OFFSET))(this);
		}

		::System::Void MLKLPEHFEDP(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HPKACEPPPCA_MLKLPEHFEDP_OFFSET))(this, a1);
		}

		::System::Int32 GBBKEBNMEKD()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HPKACEPPPCA_GBBKEBNMEKD_OFFSET))(this);
		}

		::System::Void PDLCJHPAKAD(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HPKACEPPPCA_PDLCJHPAKAD_OFFSET))(this, a1);
		}

		::System::Boolean get_IsDenpendPersistentAsset()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HPKACEPPPCA_GET_ISDENPENDPERSISTENTASSET_OFFSET))(this);
		}

		::System::Void set_IsDenpendPersistentAsset(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HPKACEPPPCA_SET_ISDENPENDPERSISTENTASSET_OFFSET))(this, a1);
		}

		::System::Boolean get_HasDisposed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HPKACEPPPCA_GET_HASDISPOSED_OFFSET))(this);
		}

		::System::Void set_HasDisposed(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HPKACEPPPCA_SET_HASDISPOSED_OFFSET))(this, a1);
		}

		::System::Boolean get_StartDebug()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HPKACEPPPCA_GET_STARTDEBUG_OFFSET))(this);
		}

		::System::Void set_StartDebug(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HPKACEPPPCA_SET_STARTDEBUG_OFFSET))(this, a1);
		}

		::System::Boolean BMJEDKKNABD(::BPBFCHPINDD_FadingDoneActionType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BPBFCHPINDD_FadingDoneActionType))((::PBYTE)hIl2Cpp + HPKACEPPPCA_BMJEDKKNABD_OFFSET))(this, a1);
		}

		::System::Void AGNIGCGAFJP(::BPBFCHPINDD_FadingDoneActionType a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::BPBFCHPINDD_FadingDoneActionType, ::System::Boolean))((::PBYTE)hIl2Cpp + HPKACEPPPCA_AGNIGCGAFJP_OFFSET))(this, a1, a2);
		}

		::System::Void DPOCBCIOGGC(::BPBFCHPINDD_FadingDoneActionType a1)
		{
			return ((::System::Void(*)(::PVOID, ::BPBFCHPINDD_FadingDoneActionType))((::PBYTE)hIl2Cpp + HPKACEPPPCA_DPOCBCIOGGC_OFFSET))(this, a1);
		}

		::System::Void KJHFLHNBBBC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPKACEPPPCA_KJHFLHNBBBC_OFFSET))(this);
		}

		::System::Void CBAIDGMCODG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPKACEPPPCA_CBAIDGMCODG_OFFSET))(this);
		}

		::System::Void GJPEKAOFMLH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPKACEPPPCA_GJPEKAOFMLH_OFFSET))(this);
		}

		::System::Void GPGPINDBCJL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPKACEPPPCA_GPGPINDBCJL_OFFSET))(this);
		}

		::System::Void BCMOJHKOLLM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPKACEPPPCA_BCMOJHKOLLM_OFFSET))(this);
		}

		::System::Boolean NEPBDELGKOD(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + HPKACEPPPCA_NEPBDELGKOD_OFFSET))(this, a1, a2);
		}

		::System::Boolean GPMDFFNHGPB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HPKACEPPPCA_GPMDFFNHGPB_OFFSET))(this);
		}

	};
