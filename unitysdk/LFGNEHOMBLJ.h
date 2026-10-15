#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BFHDICJPGLD.h"
#include "unitysdk/HPHEBLCCOOK.h"
#include "unitysdk/INKMMBKPNMJ.h"
#include "unitysdk/OBFNJDGEHPH.h"
#include "unitysdk/RPG/GameCore/BPSortType.h"
#include "unitysdk/RPG/GameCore/BPValueType.h"
#include "unitysdk/RPG/GameCore/BpChangeReason.h"
#include "unitysdk/RPG/GameCore/SpecialBPDisplayStyle.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
class IEIGLAPKDNK;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SpecialBpFeature; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class LinkedList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LFGNEHOMBLJ_ACKLIGDBGIA_OFFSET UNITYSDK_OFFSET(0xB664770)
#define LFGNEHOMBLJ_AHIPNOKJMEI_OFFSET UNITYSDK_OFFSET(0xB665C80)
#define LFGNEHOMBLJ_BENFMFPFIAF_OFFSET UNITYSDK_OFFSET(0xB665100)
#define LFGNEHOMBLJ_BGMNPBCCBNL_OFFSET UNITYSDK_OFFSET(0xB664030)
#define LFGNEHOMBLJ_BJBJOLOCNGB_OFFSET UNITYSDK_OFFSET(0xB666500)
#define LFGNEHOMBLJ_BMOMBCHEEEI_OFFSET UNITYSDK_OFFSET(0xB665D30)
#define LFGNEHOMBLJ_CCTOR_OFFSET UNITYSDK_OFFSET(0xB6670E0)
#define LFGNEHOMBLJ_CEFNNCLCFEF_OFFSET UNITYSDK_OFFSET(0xB664A50)
#define LFGNEHOMBLJ_CKKINOLFNAD_OFFSET UNITYSDK_OFFSET(0xB6661D0)
#define LFGNEHOMBLJ_COJEMLNOOFI_OFFSET UNITYSDK_OFFSET(0xB664670)
#define LFGNEHOMBLJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB662F00)
#define LFGNEHOMBLJ_DGBBIDBJJIM_OFFSET UNITYSDK_OFFSET(0xB6641D0)
#define LFGNEHOMBLJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB662FA0)
#define LFGNEHOMBLJ_DPLOPKFJCGB_OFFSET UNITYSDK_OFFSET(0xB665410)
#define LFGNEHOMBLJ_DPPDGCMFAMD_OFFSET UNITYSDK_OFFSET(0xB666FC0)
#define LFGNEHOMBLJ_EAPIAGJIBDA_OFFSET UNITYSDK_OFFSET(0xB6665D0)
#define LFGNEHOMBLJ_ECDDJPEDIEN_OFFSET UNITYSDK_OFFSET(0xB666D80)
#define LFGNEHOMBLJ_EEOMPFPGNNC_OFFSET UNITYSDK_OFFSET(0xB6662D0)
#define LFGNEHOMBLJ_EFCCMNFFDGC_OFFSET UNITYSDK_OFFSET(0xB663C90)
#define LFGNEHOMBLJ_FGJLNPEBNAL_OFFSET UNITYSDK_OFFSET(0xB664910)
#define LFGNEHOMBLJ_FIOJEOLAFFF_OFFSET UNITYSDK_OFFSET(0xB666270)
#define LFGNEHOMBLJ_GBLLDDEJGOB_OFFSET UNITYSDK_OFFSET(0xB6663B0)
#define LFGNEHOMBLJ_GDBNNFFLCPG_OFFSET UNITYSDK_OFFSET(0xB663BE0)
#define LFGNEHOMBLJ_GEPGMFIBBHK_OFFSET UNITYSDK_OFFSET(0xB6658A0)
#define LFGNEHOMBLJ_GET_SORTTYPE_OFFSET UNITYSDK_OFFSET(0xB6670C0)
#define LFGNEHOMBLJ_GET_TEAM_OFFSET UNITYSDK_OFFSET(0xB666ED0)
#define LFGNEHOMBLJ_GKPLCDECJEB_OFFSET UNITYSDK_OFFSET(0xB666710)
#define LFGNEHOMBLJ_GOCHIEJDPJG_OFFSET UNITYSDK_OFFSET(0xB666AA0)
#define LFGNEHOMBLJ_GPGKDIPNIFL_OFFSET UNITYSDK_OFFSET(0xB665C10)
#define LFGNEHOMBLJ_HAEKJFNLOKA_OFFSET UNITYSDK_OFFSET(0xB665EC0)
#define LFGNEHOMBLJ_HBDMFAKIMIO_OFFSET UNITYSDK_OFFSET(0xB6634C0)
#define LFGNEHOMBLJ_HKHECBIKILH_OFFSET UNITYSDK_OFFSET(0xB666470)
#define LFGNEHOMBLJ_HOJHAFLJKNG_OFFSET UNITYSDK_OFFSET(0xB663460)
#define LFGNEHOMBLJ_HPHFDCOBNJJ_OFFSET UNITYSDK_OFFSET(0xB6658B0)
#define LFGNEHOMBLJ_IBBJKNLFGHL_OFFSET UNITYSDK_OFFSET(0xB666460)
#define LFGNEHOMBLJ_ICNAHHBJAEJ_OFFSET UNITYSDK_OFFSET(0xB666130)
#define LFGNEHOMBLJ_IGLNBFJFNGB_OFFSET UNITYSDK_OFFSET(0xB666630)
#define LFGNEHOMBLJ_IMKKGDCMDOG_OFFSET UNITYSDK_OFFSET(0xB667050)
#define LFGNEHOMBLJ_KCIMNPKKACG_OFFSET UNITYSDK_OFFSET(0xB665190)
#define LFGNEHOMBLJ_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xB6631E0)
#define LFGNEHOMBLJ_LLAKHEKMDOD_OFFSET UNITYSDK_OFFSET(0xB665330)
#define LFGNEHOMBLJ_LLIOADHJDEF_OFFSET UNITYSDK_OFFSET(0xB665B70)
#define LFGNEHOMBLJ_LPMFHLFKBDJ_OFFSET UNITYSDK_OFFSET(0xB665B10)
#define LFGNEHOMBLJ_MDIAAJMPHAG_OFFSET UNITYSDK_OFFSET(0xB663A40)
#define LFGNEHOMBLJ_NFGMNFOFNHB_OFFSET UNITYSDK_OFFSET(0xB666EF0)
#define LFGNEHOMBLJ_NJADDMBMKKA_OFFSET UNITYSDK_OFFSET(0xB6666C0)
#define LFGNEHOMBLJ_NKEAFBCBPJA_OFFSET UNITYSDK_OFFSET(0xB6670B0)
#define LFGNEHOMBLJ_NNGOEGHABPB_OFFSET UNITYSDK_OFFSET(0xB664BA0)
#define LFGNEHOMBLJ_OAGFCBGCGKO_OFFSET UNITYSDK_OFFSET(0xB666930)
#define LFGNEHOMBLJ_OCDGJGBNFMH_OFFSET UNITYSDK_OFFSET(0xB6669D0)
#define LFGNEHOMBLJ_OEFJHHDMHOG_OFFSET UNITYSDK_OFFSET(0xB6643B0)
#define LFGNEHOMBLJ_OGDDKFDNDIF_OFFSET UNITYSDK_OFFSET(0xB663520)
#define LFGNEHOMBLJ_PAFLCFEPBKF_OFFSET UNITYSDK_OFFSET(0xB662EA0)
#define LFGNEHOMBLJ_PFJANGKDOLH_OFFSET UNITYSDK_OFFSET(0xB6658F0)
#define LFGNEHOMBLJ_SET_SORTTYPE_OFFSET UNITYSDK_OFFSET(0xB6670D0)
#define LFGNEHOMBLJ_SET_TEAM_OFFSET UNITYSDK_OFFSET(0xB666EE0)

inline static constexpr unsigned int LFGNEHOMBLJ_TypeDefinitionIndex = 56900;

	class LFGNEHOMBLJ : public ::System::Object
	{
	public:
		::System::Collections::Generic::LinkedList_1<::INKMMBKPNMJ>* PGEOIKDNAKL; // 0x10
		::System::Collections::Generic::List_1<::IEIGLAPKDNK*>* PDHPIJFGCMB; // 0x18
		::System::Collections::Generic::List_1<::BFHDICJPGLD>* MCPFCFMGCPL; // 0x20
		::System::Collections::Generic::List_1<::HPHEBLCCOOK>* JLNBPFPPBLM; // 0x28
		::RPG::GameCore::GameEntity* ICHEDAEHEBG; // 0x30
		::System::Int32 HPPGHIHNLHL; // 0x38
		::System::Nullable_1<::System::Int32> JAKGHBENGNO; // 0x3C
		::RPG::GameCore::TeamType _Team_k__BackingField; // 0x44
		::System::Int32 IMGACOCGIKC; // 0x48
		::OBFNJDGEHPH MJCLFMOHPGG; // 0x4C
		::System::Nullable_1<::System::Int32> KPJLGCCHBEL; // 0x5C
		::System::Int32 LDJFONHLCFA; // 0x64
		::System::Int32 AHOMFEIDAMC; // 0x68
		::RPG::GameCore::BPSortType _SortType_k__BackingField; // 0x6C
		static ::System::Int32* StaticGet_EPIKBOGMFCP()
		{
			return (::System::Int32*)UnitySDK::FromName("", "LFGNEHOMBLJ")->GetStaticField(0x140E0);
		}

		::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + LFGNEHOMBLJ_CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LFGNEHOMBLJ_CCTOR_OFFSET))();
		}

		static ::System::Int32 PAFLCFEPBKF()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + LFGNEHOMBLJ_PAFLCFEPBKF_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFGNEHOMBLJ_DISPOSE_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFGNEHOMBLJ_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void OGDDKFDNDIF(::RPG::GameCore::SpecialBpFeature* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SpecialBpFeature*))((::PBYTE)hIl2Cpp + LFGNEHOMBLJ_OGDDKFDNDIF_OFFSET))(this, a1);
		}

		::System::Void EFCCMNFFDGC(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + LFGNEHOMBLJ_EFCCMNFFDGC_OFFSET))(this, a1);
		}

		::System::Void BGMNPBCCBNL(::BFHDICJPGLD a1)
		{
			return ((::System::Void(*)(::PVOID, ::BFHDICJPGLD))((::PBYTE)hIl2Cpp + LFGNEHOMBLJ_BGMNPBCCBNL_OFFSET))(this, a1);
		}

		::System::Void DGBBIDBJJIM(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + LFGNEHOMBLJ_DGBBIDBJJIM_OFFSET))(this, a1);
		}

		::System::Void OEFJHHDMHOG(::HPHEBLCCOOK a1)
		{
			return ((::System::Void(*)(::PVOID, ::HPHEBLCCOOK))((::PBYTE)hIl2Cpp + LFGNEHOMBLJ_OEFJHHDMHOG_OFFSET))(this, a1);
		}

		::System::Void FGJLNPEBNAL(::HPHEBLCCOOK a1)
		{
			return ((::System::Void(*)(::PVOID, ::HPHEBLCCOOK))((::PBYTE)hIl2Cpp + LFGNEHOMBLJ_FGJLNPEBNAL_OFFSET))(this, a1);
		}

		::System::Void CEFNNCLCFEF(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + LFGNEHOMBLJ_CEFNNCLCFEF_OFFSET))(this, a1);
		}

		::System::Void HOJHAFLJKNG(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LFGNEHOMBLJ_HOJHAFLJKNG_OFFSET))(this, a1);
		}

		::System::Void BENFMFPFIAF(::System::Int32 a1, ::RPG::GameCore::BpChangeReason a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::GameCore::BpChangeReason))((::PBYTE)hIl2Cpp + LFGNEHOMBLJ_BENFMFPFIAF_OFFSET))(this, a1, a2);
		}

		::System::Void LLAKHEKMDOD(::System::Int32 a1, ::RPG::GameCore::BpChangeReason a2, ::IEIGLAPKDNK* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::GameCore::BpChangeReason, ::IEIGLAPKDNK*))((::PBYTE)hIl2Cpp + LFGNEHOMBLJ_LLAKHEKMDOD_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 DPLOPKFJCGB(::RPG::GameCore::TurnBasedModifierInstance* a1, ::IEIGLAPKDNK* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*, ::IEIGLAPKDNK*))((::PBYTE)hIl2Cpp + LFGNEHOMBLJ_DPLOPKFJCGB_OFFSET))(this, a1, a2);
		}

		::System::Void LLIOADHJDEF(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LFGNEHOMBLJ_LLIOADHJDEF_OFFSET))(this, a1);
		}

		::System::Void GPGKDIPNIFL(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + LFGNEHOMBLJ_GPGKDIPNIFL_OFFSET))(this, a1, a2);
		}

		::INKMMBKPNMJ BMOMBCHEEEI(::System::Int32 a1)
		{
			return ((::INKMMBKPNMJ(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LFGNEHOMBLJ_BMOMBCHEEEI_OFFSET))(this, a1);
		}

		::System::Void HAEKJFNLOKA(::OBFNJDGEHPH a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::OBFNJDGEHPH, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + LFGNEHOMBLJ_HAEKJFNLOKA_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::SpecialBPDisplayStyle CKKINOLFNAD(::System::Int32 a1)
		{
			return ((::RPG::GameCore::SpecialBPDisplayStyle(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LFGNEHOMBLJ_CKKINOLFNAD_OFFSET))(this, a1);
		}

		::RPG::GameCore::SpecialBPDisplayStyle EEOMPFPGNNC(::System::Int32 a1)
		{
			return ((::RPG::GameCore::SpecialBPDisplayStyle(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LFGNEHOMBLJ_EEOMPFPGNNC_OFFSET))(this, a1);
		}

		::RPG::GameCore::SpecialBpFeature* FIOJEOLAFFF()
		{
			return ((::RPG::GameCore::SpecialBpFeature*(*)(::PVOID))((::PBYTE)hIl2Cpp + LFGNEHOMBLJ_FIOJEOLAFFF_OFFSET))(this);
		}

		::System::Nullable_1<::INKMMBKPNMJ> BJBJOLOCNGB()
		{
			return ((::System::Nullable_1<::INKMMBKPNMJ>(*)(::PVOID))((::PBYTE)hIl2Cpp + LFGNEHOMBLJ_BJBJOLOCNGB_OFFSET))(this);
		}

		::System::Int32 PFJANGKDOLH(::RPG::GameCore::BPValueType a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::BPValueType))((::PBYTE)hIl2Cpp + LFGNEHOMBLJ_PFJANGKDOLH_OFFSET))(this, a1);
		}

		::System::Void NJADDMBMKKA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFGNEHOMBLJ_NJADDMBMKKA_OFFSET))(this);
		}

		::System::Void OAGFCBGCGKO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFGNEHOMBLJ_OAGFCBGCGKO_OFFSET))(this);
		}

		::System::Void GKPLCDECJEB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFGNEHOMBLJ_GKPLCDECJEB_OFFSET))(this);
		}

		::System::Void NNGOEGHABPB(::IEIGLAPKDNK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IEIGLAPKDNK*))((::PBYTE)hIl2Cpp + LFGNEHOMBLJ_NNGOEGHABPB_OFFSET))(this, a1);
		}

		::System::Void KCIMNPKKACG(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LFGNEHOMBLJ_KCIMNPKKACG_OFFSET))(this, a1);
		}

		::System::Void AHIPNOKJMEI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LFGNEHOMBLJ_AHIPNOKJMEI_OFFSET))(this, a1);
		}

		::System::Void ECDDJPEDIEN(::INKMMBKPNMJ a1)
		{
			return ((::System::Void(*)(::PVOID, ::INKMMBKPNMJ))((::PBYTE)hIl2Cpp + LFGNEHOMBLJ_ECDDJPEDIEN_OFFSET))(this, a1);
		}

		::INKMMBKPNMJ MDIAAJMPHAG(::IEIGLAPKDNK* a1)
		{
			return ((::INKMMBKPNMJ(*)(::PVOID, ::IEIGLAPKDNK*))((::PBYTE)hIl2Cpp + LFGNEHOMBLJ_MDIAAJMPHAG_OFFSET))(this, a1);
		}

		::System::Void ICNAHHBJAEJ(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LFGNEHOMBLJ_ICNAHHBJAEJ_OFFSET))(this, a1);
		}

		::System::Void GDBNNFFLCPG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFGNEHOMBLJ_GDBNNFFLCPG_OFFSET))(this);
		}

		::System::Int32 COJEMLNOOFI()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LFGNEHOMBLJ_COJEMLNOOFI_OFFSET))(this);
		}

		::System::Void ACKLIGDBGIA(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + LFGNEHOMBLJ_ACKLIGDBGIA_OFFSET))(this, a1, a2);
		}

		::System::Void GOCHIEJDPJG(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LFGNEHOMBLJ_GOCHIEJDPJG_OFFSET))(this, a1);
		}

		::System::Void HPHFDCOBNJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFGNEHOMBLJ_HPHFDCOBNJJ_OFFSET))(this);
		}

		::RPG::GameCore::TeamType get_Team()
		{
			return ((::RPG::GameCore::TeamType(*)(::PVOID))((::PBYTE)hIl2Cpp + LFGNEHOMBLJ_GET_TEAM_OFFSET))(this);
		}

		::System::Void set_Team(::RPG::GameCore::TeamType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TeamType))((::PBYTE)hIl2Cpp + LFGNEHOMBLJ_SET_TEAM_OFFSET))(this, a1);
		}

		::System::Int32 HBDMFAKIMIO()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LFGNEHOMBLJ_HBDMFAKIMIO_OFFSET))(this);
		}

		::System::Int32 GBLLDDEJGOB()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LFGNEHOMBLJ_GBLLDDEJGOB_OFFSET))(this);
		}

		::System::Int32 NFGMNFOFNHB()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LFGNEHOMBLJ_NFGMNFOFNHB_OFFSET))(this);
		}

		::System::Int32 LPMFHLFKBDJ()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LFGNEHOMBLJ_LPMFHLFKBDJ_OFFSET))(this);
		}

		::System::Void DPPDGCMFAMD(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LFGNEHOMBLJ_DPPDGCMFAMD_OFFSET))(this, a1);
		}

		::System::Int32 OCDGJGBNFMH()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LFGNEHOMBLJ_OCDGJGBNFMH_OFFSET))(this);
		}

		::System::Int32 EAPIAGJIBDA()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LFGNEHOMBLJ_EAPIAGJIBDA_OFFSET))(this);
		}

		::System::Void IMKKGDCMDOG(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LFGNEHOMBLJ_IMKKGDCMDOG_OFFSET))(this, a1);
		}

		::System::Int32 IGLNBFJFNGB()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LFGNEHOMBLJ_IGLNBFJFNGB_OFFSET))(this);
		}

		::System::Collections::Generic::LinkedList_1<::INKMMBKPNMJ>* NKEAFBCBPJA()
		{
			return ((::System::Collections::Generic::LinkedList_1<::INKMMBKPNMJ>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LFGNEHOMBLJ_NKEAFBCBPJA_OFFSET))(this);
		}

		::RPG::GameCore::BPSortType get_SortType()
		{
			return ((::RPG::GameCore::BPSortType(*)(::PVOID))((::PBYTE)hIl2Cpp + LFGNEHOMBLJ_GET_SORTTYPE_OFFSET))(this);
		}

		::System::Void set_SortType(::RPG::GameCore::BPSortType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BPSortType))((::PBYTE)hIl2Cpp + LFGNEHOMBLJ_SET_SORTTYPE_OFFSET))(this, a1);
		}

		::System::Int32 IBBJKNLFGHL()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LFGNEHOMBLJ_IBBJKNLFGHL_OFFSET))(this);
		}

		::IEIGLAPKDNK* HKHECBIKILH()
		{
			return ((::IEIGLAPKDNK*(*)(::PVOID))((::PBYTE)hIl2Cpp + LFGNEHOMBLJ_HKHECBIKILH_OFFSET))(this);
		}

		::System::Boolean GEPGMFIBBHK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LFGNEHOMBLJ_GEPGMFIBBHK_OFFSET))(this);
		}

	};
