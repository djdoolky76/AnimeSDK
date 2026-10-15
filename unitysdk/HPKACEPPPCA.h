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
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Diagnostics { class StackFrame; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class Transform; }

#define HPKACEPPPCA_AGHNEJIEMPA_OFFSET UNITYSDK_OFFSET(0x15DC4170)
#define HPKACEPPPCA_AGNIGCGAFJP_OFFSET UNITYSDK_OFFSET(0x15DC46C0)
#define HPKACEPPPCA_APIGKLFOKNL_OFFSET UNITYSDK_OFFSET(0x15DC2220)
#define HPKACEPPPCA_BCMOJHKOLLM_OFFSET UNITYSDK_OFFSET(0x15DC2650)
#define HPKACEPPPCA_BFJJOJKKLGG_OFFSET UNITYSDK_OFFSET(0x15DC3940)
#define HPKACEPPPCA_BGGKFPNPNJG_OFFSET UNITYSDK_OFFSET(0x15DC2FA0)
#define HPKACEPPPCA_BMJEDKKNABD_OFFSET UNITYSDK_OFFSET(0x15DC2C50)
#define HPKACEPPPCA_CBAIDGMCODG_OFFSET UNITYSDK_OFFSET(0x15DC4790)
#define HPKACEPPPCA_CCBGIKNFCCI_OFFSET UNITYSDK_OFFSET(0x15DC4140)
#define HPKACEPPPCA_CMMLGICCEEC_OFFSET UNITYSDK_OFFSET(0x15DC2C00)
#define HPKACEPPPCA_CPDPOINFADH_OFFSET UNITYSDK_OFFSET(0x15DC2B10)
#define HPKACEPPPCA_CTOR_OFFSET UNITYSDK_OFFSET(0x15DC1FE0)
#define HPKACEPPPCA_DLLLCMBCCJO_OFFSET UNITYSDK_OFFSET(0x15DC3F90)
#define HPKACEPPPCA_DMKJAJLNEBK_OFFSET UNITYSDK_OFFSET(0x15DC3000)
#define HPKACEPPPCA_DOCEKJGCGEE_OFFSET UNITYSDK_OFFSET(0x15DC3C60)
#define HPKACEPPPCA_DOPNFIGFCCK_OFFSET UNITYSDK_OFFSET(0x15DC2270)
#define HPKACEPPPCA_DPOCBCIOGGC_OFFSET UNITYSDK_OFFSET(0x15DC4450)
#define HPKACEPPPCA_EBPHHPKBEEM_OFFSET UNITYSDK_OFFSET(0x15DC36D0)
#define HPKACEPPPCA_EGKNKHEANAN_OFFSET UNITYSDK_OFFSET(0x15DC29F0)
#define HPKACEPPPCA_ENNAMLJFOLO_OFFSET UNITYSDK_OFFSET(0x15DC2350)
#define HPKACEPPPCA_FAKMBKCFMAE_OFFSET UNITYSDK_OFFSET(0x15DC1FF0)
#define HPKACEPPPCA_FMPHNNADJPE_OFFSET UNITYSDK_OFFSET(0x15DC3D40)
#define HPKACEPPPCA_GBBKEBNMEKD_OFFSET UNITYSDK_OFFSET(0x15DC43D0)
#define HPKACEPPPCA_GET_HASDISPOSED_OFFSET UNITYSDK_OFFSET(0x15DC4410)
#define HPKACEPPPCA_GET_ISDENPENDPERSISTENTASSET_OFFSET UNITYSDK_OFFSET(0x15DC43F0)
#define HPKACEPPPCA_GET_STARTDEBUG_OFFSET UNITYSDK_OFFSET(0x15DC4430)
#define HPKACEPPPCA_GFDNIAIOOCK_OFFSET UNITYSDK_OFFSET(0x15DC4150)
#define HPKACEPPPCA_GGDLCACLCJD_OFFSET UNITYSDK_OFFSET(0x15DC4230)
#define HPKACEPPPCA_GIOKIDJCJHE_OFFSET UNITYSDK_OFFSET(0x15DC28C0)
#define HPKACEPPPCA_GJPEKAOFMLH_OFFSET UNITYSDK_OFFSET(0x15DC4880)
#define HPKACEPPPCA_GNCIPBBNIIH_OFFSET UNITYSDK_OFFSET(0x15DC2390)
#define HPKACEPPPCA_GPGPINDBCJL_OFFSET UNITYSDK_OFFSET(0x15DC4930)
#define HPKACEPPPCA_GPMDFFNHGPB_OFFSET UNITYSDK_OFFSET(0x15DC4280)
#define HPKACEPPPCA_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x15DC3A70)
#define HPKACEPPPCA_HJHGLIMIOOD_OFFSET UNITYSDK_OFFSET(0x15DC3630)
#define HPKACEPPPCA_HOJKDDMIMOK_OFFSET UNITYSDK_OFFSET(0x15DC3BE0)
#define HPKACEPPPCA_IGDIEBODAAH_OFFSET UNITYSDK_OFFSET(0x15DC2950)
#define HPKACEPPPCA_IOIGLPJCIND_OFFSET UNITYSDK_OFFSET(0x15DC3410)
#define HPKACEPPPCA_JBIAAIPOMHC_OFFSET UNITYSDK_OFFSET(0x15DC3900)
#define HPKACEPPPCA_JBJJNKOCGBE_OFFSET UNITYSDK_OFFSET(0x15DC3D00)
#define HPKACEPPPCA_JNHEFKMODHH_OFFSET UNITYSDK_OFFSET(0x15DC4290)
#define HPKACEPPPCA_JODKOPDMGHJ_OFFSET UNITYSDK_OFFSET(0x15DC3F30)
#define HPKACEPPPCA_KCNDNBEJAEL_OFFSET UNITYSDK_OFFSET(0x15DC4180)
#define HPKACEPPPCA_KFDEPHCLLIE_OFFSET UNITYSDK_OFFSET(0x15DC3E80)
#define HPKACEPPPCA_KGJAMKFPOAB_OFFSET UNITYSDK_OFFSET(0x15DC32D0)
#define HPKACEPPPCA_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x15DC2060)
#define HPKACEPPPCA_KJHFLHNBBBC_OFFSET UNITYSDK_OFFSET(0x15DC4710)
#define HPKACEPPPCA_KJMDJMBNCPE_OFFSET UNITYSDK_OFFSET(0x15DC3A00)
#define HPKACEPPPCA_KLIKJIKDPNN_OFFSET UNITYSDK_OFFSET(0x15DC2860)
#define HPKACEPPPCA_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x15DC20E0)
#define HPKACEPPPCA_LFIOEBDKGEL_OFFSET UNITYSDK_OFFSET(0x15DC38F0)
#define HPKACEPPPCA_LIMDHJCLPKL_OFFSET UNITYSDK_OFFSET(0x15DC4050)
#define HPKACEPPPCA_LNLHHJDJKBL_OFFSET UNITYSDK_OFFSET(0x15DC22C0)
#define HPKACEPPPCA_LNPBIKHAIHI_OFFSET UNITYSDK_OFFSET(0x15DC40E0)
#define HPKACEPPPCA_MFFNEOMEEIH_OFFSET UNITYSDK_OFFSET(0x15DC4190)
#define HPKACEPPPCA_MLCKJFCLKMH_OFFSET UNITYSDK_OFFSET(0x15DC3E40)
#define HPKACEPPPCA_MLKLPEHFEDP_OFFSET UNITYSDK_OFFSET(0x15DC21B0)
#define HPKACEPPPCA_MMJBLIAHKGG_OFFSET UNITYSDK_OFFSET(0x15DC3CC0)
#define HPKACEPPPCA_NADGBDCLALH_OFFSET UNITYSDK_OFFSET(0x15DC3670)
#define HPKACEPPPCA_NEPBDELGKOD_OFFSET UNITYSDK_OFFSET(0x15DC4B20)
#define HPKACEPPPCA_NFPAFPDGMPJ_OFFSET UNITYSDK_OFFSET(0x15DC3D80)
#define HPKACEPPPCA_NNEEKPGDKMF_OFFSET UNITYSDK_OFFSET(0x15DC2470)
#define HPKACEPPPCA_NPLKHELPEFL_OFFSET UNITYSDK_OFFSET(0x15DC2E30)
#define HPKACEPPPCA_OCMOOAKHPGL_OFFSET UNITYSDK_OFFSET(0x15DC4160)
#define HPKACEPPPCA_OGDLIONGCMP_OFFSET UNITYSDK_OFFSET(0x15DC3290)
#define HPKACEPPPCA_OILFELMDINP_OFFSET UNITYSDK_OFFSET(0x15DC40F0)
#define HPKACEPPPCA_OMNMDCIBDDE_OFFSET UNITYSDK_OFFSET(0x15DC41E0)
#define HPKACEPPPCA_PAIOIFFJDKF_OFFSET UNITYSDK_OFFSET(0x15DC40A0)
#define HPKACEPPPCA_PDLCJHPAKAD_OFFSET UNITYSDK_OFFSET(0x15DC43E0)
#define HPKACEPPPCA_PEBBCJGNLHE_OFFSET UNITYSDK_OFFSET(0x15DC2310)
#define HPKACEPPPCA_SET_HASDISPOSED_OFFSET UNITYSDK_OFFSET(0x15DC4420)
#define HPKACEPPPCA_SET_ISDENPENDPERSISTENTASSET_OFFSET UNITYSDK_OFFSET(0x15DC4400)
#define HPKACEPPPCA_SET_STARTDEBUG_OFFSET UNITYSDK_OFFSET(0x15DC4440)

inline static constexpr unsigned int HPKACEPPPCA_TypeDefinitionIndex = 73934;

	class HPKACEPPPCA : public ::System::Object
	{
	public:
		::RPG::Client::OpenWorld::StreamingItemData* IOBOHKDLFMP; // 0x10
		::System::Action_2<::HPKACEPPPCA*, ::System::Boolean>* PIBCMNAFAME; // 0x18
		::KLEFGGIHGMI* KGPIGCAPOCP; // 0x20
		::BGNDPIPJFCI* LAONDDLKDFI; // 0x28
		::System::Action_1<::HPKACEPPPCA*>* DJHECFAIOHJ; // 0x30
		::Il2CppArray<::System::Diagnostics::StackFrame*>* JNAAFLNPBHA; // 0x38
		::RPG::Client::OpenWorld::StreamingItemData* ICFMADGMEPC; // 0x40
		::LJFHKAJPFNE* NFPCBMCGFDD; // 0x48
		::KLEFGGIHGMI* KDLDKNBOFBN; // 0x50
		::System::Int32 PHJCBBFOFLB; // 0x58
		::RPG::Client::OpenWorld::StreamingState PLKHKGBKLMC; // 0x5C
		::System::Boolean EENMPDHBHDB; // 0x5E
		::System::Boolean DPKEKINEPKD; // 0x5F
		::System::Int32 OCDHKOEEMEP; // 0x60
		::RPG::Client::OpenWorld::StreamingInstanceLoadingState EGGHHGIEIHG; // 0x64
		::System::Boolean _HasDisposed_k__BackingField; // 0x66
		::System::Boolean _StartDebug_k__BackingField; // 0x67
		::System::Int32 JDHMGMCCHMB; // 0x68
		::System::Int32 CJCCLNEDGKB; // 0x6C
		::System::Boolean _IsDenpendPersistentAsset_k__BackingField; // 0x70
		::System::Byte _padding0[0x1];
		::RPG::Client::OpenWorld::StreamingState GAGOLPALJMA; // 0x72
		::RPG::Client::OpenWorld::StreamingInstanceLodState OJPFPJGMIFM; // 0x74
		::System::Single NALMBOOCCIN; // 0x78
		::System::Int32 ECKABHFHPDN; // 0x7C
		// static const ::System::String* FBGJAEDHJJL; // 0x0
		// static const ::System::String* LLPPKEOJJEJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPKACEPPPCA_CTOR_OFFSET))(this);
		}

		::System::Void FAKMBKCFMAE(::LJFHKAJPFNE* a1, ::System::Action_1<::HPKACEPPPCA*>* a2, ::System::Action_2<::HPKACEPPPCA*, ::System::Boolean>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::LJFHKAJPFNE*, ::System::Action_1<::HPKACEPPPCA*>*, ::System::Action_2<::HPKACEPPPCA*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + HPKACEPPPCA_FAKMBKCFMAE_OFFSET))(this, a1, a2, a3);
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
