#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/IdleLiveAvatarPropertyType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/ActivityIdleLive/IdleLiveDecimal.h"
#include "unitysdk/RPG/Client/ActivityIdleLive/SlotUiData.h"
class CBNNMKNBLDI;
class GNKNAOBCBMI;
class INPDCDFPKON;
class NJHJJCFEHPK;
namespace RPG::Client::ActivityIdleLive { class IdleLiveBaseTeamInfo; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveEquipmentData; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveQuestTreeItemData; }
namespace RPG::Client::ActivityIdleLive { class SpEquipSlotInfo; }
namespace RPG::Client::ActivityIdleLive { class SpSlotUiData; }
namespace RPG::Client::ActivityIdleLive { class SpecialEquip; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOBLPGFPLEM_BBCBCKLEKLK_OFFSET UNITYSDK_OFFSET(0xBA234B0)
#define MOBLPGFPLEM_BJLGBFGFHGC_OFFSET UNITYSDK_OFFSET(0xBA22010)
#define MOBLPGFPLEM_BLHHBGLHDNA_OFFSET UNITYSDK_OFFSET(0xBA23A50)
#define MOBLPGFPLEM_CALLGHLAJPD_OFFSET UNITYSDK_OFFSET(0xBA236D0)
#define MOBLPGFPLEM_CCDNEGPPMIG_OFFSET UNITYSDK_OFFSET(0xBA242B0)
#define MOBLPGFPLEM_CTOR_OFFSET UNITYSDK_OFFSET(0xBA21E50)
#define MOBLPGFPLEM_DGBBAJLMBMK_OFFSET UNITYSDK_OFFSET(0xBA22BF0)
#define MOBLPGFPLEM_DNNKJLGGJEM_OFFSET UNITYSDK_OFFSET(0xBA22340)
#define MOBLPGFPLEM_ECBFBCJNANN_OFFSET UNITYSDK_OFFSET(0xBA23840)
#define MOBLPGFPLEM_EECJBLDIPGA_OFFSET UNITYSDK_OFFSET(0xBA23B70)
#define MOBLPGFPLEM_EEPCGEMJAFF_OFFSET UNITYSDK_OFFSET(0xBA22ED0)
#define MOBLPGFPLEM_EHBMGAPHFDE_OFFSET UNITYSDK_OFFSET(0xBA22AA0)
#define MOBLPGFPLEM_ELEFMKJEKLF_OFFSET UNITYSDK_OFFSET(0xBA21DB0)
#define MOBLPGFPLEM_FGIKAAACJGL_OFFSET UNITYSDK_OFFSET(0xBA21DF0)
#define MOBLPGFPLEM_GET_EQUIPMENTMODIFIERSOURCE_OFFSET UNITYSDK_OFFSET(0xBA24B70)
#define MOBLPGFPLEM_GET_VERSION_OFFSET UNITYSDK_OFFSET(0xBA21E30)
#define MOBLPGFPLEM_GHHGAMJDMNF_OFFSET UNITYSDK_OFFSET(0xBA23B10)
#define MOBLPGFPLEM_GJDAJJLPPNC_OFFSET UNITYSDK_OFFSET(0xBA22A60)
#define MOBLPGFPLEM_HGGABIEGFJB_OFFSET UNITYSDK_OFFSET(0xBA22920)
#define MOBLPGFPLEM_HINOIKENADH_OFFSET UNITYSDK_OFFSET(0xBA22F30)
#define MOBLPGFPLEM_HOKFJHCBDOM_OFFSET UNITYSDK_OFFSET(0xBA23550)
#define MOBLPGFPLEM_IIHDLGOAEDL_OFFSET UNITYSDK_OFFSET(0xBA22760)
#define MOBLPGFPLEM_JOMPIFMOPJF_OFFSET UNITYSDK_OFFSET(0xBA22B90)
#define MOBLPGFPLEM_KAALJKBNOGE_OFFSET UNITYSDK_OFFSET(0xBA23660)
#define MOBLPGFPLEM_LEHPNCLCGBJ_OFFSET UNITYSDK_OFFSET(0xBA23720)
#define MOBLPGFPLEM_LMPCDFMFMIE_OFFSET UNITYSDK_OFFSET(0xBA22E20)
#define MOBLPGFPLEM_MHDDEJAJIBG_OFFSET UNITYSDK_OFFSET(0xBA24120)
#define MOBLPGFPLEM_MHEBEFEBNBI_OFFSET UNITYSDK_OFFSET(0xBA23180)
#define MOBLPGFPLEM_PFFGEKOFFHB_OFFSET UNITYSDK_OFFSET(0xBA248A0)
#define MOBLPGFPLEM_PILFIBODMEI_OFFSET UNITYSDK_OFFSET(0xBA23770)
#define MOBLPGFPLEM_PPKCFBBLGCK_OFFSET UNITYSDK_OFFSET(0xBA23920)
#define MOBLPGFPLEM_SET_EQUIPMENTMODIFIERSOURCE_OFFSET UNITYSDK_OFFSET(0xBA24B80)
#define MOBLPGFPLEM_SET_VERSION_OFFSET UNITYSDK_OFFSET(0xBA21E40)

inline static constexpr unsigned int MOBLPGFPLEM_TypeDefinitionIndex = 75246;

	class MOBLPGFPLEM : public ::System::Object
	{
	public:
		::GNKNAOBCBMI* _EquipmentModifierSource_k__BackingField; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityIdleLive::IdleLiveEquipmentData*>* EMCJHKHAJNK; // 0x18
		::System::Collections::Generic::List_1<::INPDCDFPKON*>* MFGEADHPLHO; // 0x20
		::RPG::Client::ActivityIdleLive::SpEquipSlotInfo* KIHNNLDEOOM; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityIdleLive::SpecialEquip*>* OGGJIFMKLIC; // 0x30
		::System::UInt32 _Version_k__BackingField; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOBLPGFPLEM_CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityIdleLive::SpecialEquip*>* ELEFMKJEKLF()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityIdleLive::SpecialEquip*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOBLPGFPLEM_ELEFMKJEKLF_OFFSET))(this);
		}

		::RPG::Client::ActivityIdleLive::SpEquipSlotInfo* FGIKAAACJGL()
		{
			return ((::RPG::Client::ActivityIdleLive::SpEquipSlotInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOBLPGFPLEM_FGIKAAACJGL_OFFSET))(this);
		}

		::System::UInt32 get_Version()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOBLPGFPLEM_GET_VERSION_OFFSET))(this);
		}

		::System::Void set_Version(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOBLPGFPLEM_SET_VERSION_OFFSET))(this, a1);
		}

		::System::Void BJLGBFGFHGC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOBLPGFPLEM_BJLGBFGFHGC_OFFSET))(this);
		}

		::System::Void DNNKJLGGJEM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOBLPGFPLEM_DNNKJLGGJEM_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::IdleLiveAvatarPropertyType, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal>* IIHDLGOAEDL()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::IdleLiveAvatarPropertyType, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOBLPGFPLEM_IIHDLGOAEDL_OFFSET))(this);
		}

		::System::Void HGGABIEGFJB(::RPG::Client::ActivityIdleLive::IdleLiveEquipmentData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveEquipmentData*))((::PBYTE)hIl2Cpp + MOBLPGFPLEM_HGGABIEGFJB_OFFSET))(this, a1);
		}

		::System::Void GJDAJJLPPNC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOBLPGFPLEM_GJDAJJLPPNC_OFFSET))(this);
		}

		::System::Void EHBMGAPHFDE(::CBNNMKNBLDI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CBNNMKNBLDI*))((::PBYTE)hIl2Cpp + MOBLPGFPLEM_EHBMGAPHFDE_OFFSET))(this, a1);
		}

		::System::Void LMPCDFMFMIE(::RPG::Client::ActivityIdleLive::IdleLiveQuestTreeItemData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveQuestTreeItemData*))((::PBYTE)hIl2Cpp + MOBLPGFPLEM_LMPCDFMFMIE_OFFSET))(this, a1);
		}

		::System::Void JOMPIFMOPJF(::RPG::Client::ActivityIdleLive::SpecialEquip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::SpecialEquip*))((::PBYTE)hIl2Cpp + MOBLPGFPLEM_JOMPIFMOPJF_OFFSET))(this, a1);
		}

		::System::Void DGBBAJLMBMK(::RPG::Client::ActivityIdleLive::IdleLiveEquipmentData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveEquipmentData*))((::PBYTE)hIl2Cpp + MOBLPGFPLEM_DGBBAJLMBMK_OFFSET))(this, a1);
		}

		::System::Void EEPCGEMJAFF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOBLPGFPLEM_EEPCGEMJAFF_OFFSET))(this);
		}

		::System::Void HINOIKENADH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOBLPGFPLEM_HINOIKENADH_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveEquipmentData*>* MHEBEFEBNBI()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveEquipmentData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOBLPGFPLEM_MHEBEFEBNBI_OFFSET))(this);
		}

		::RPG::Client::ActivityIdleLive::SpecialEquip* BBCBCKLEKLK(::RPG::Client::ActivityIdleLive::SpecialEquip* a1)
		{
			return ((::RPG::Client::ActivityIdleLive::SpecialEquip*(*)(::PVOID, ::RPG::Client::ActivityIdleLive::SpecialEquip*))((::PBYTE)hIl2Cpp + MOBLPGFPLEM_BBCBCKLEKLK_OFFSET))(this, a1);
		}

		::System::Void HOKFJHCBDOM(::RPG::Client::ActivityIdleLive::SpecialEquip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::SpecialEquip*))((::PBYTE)hIl2Cpp + MOBLPGFPLEM_HOKFJHCBDOM_OFFSET))(this, a1);
		}

		::System::Void KAALJKBNOGE(::RPG::Client::ActivityIdleLive::SpecialEquip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::SpecialEquip*))((::PBYTE)hIl2Cpp + MOBLPGFPLEM_KAALJKBNOGE_OFFSET))(this, a1);
		}

		::System::Void CALLGHLAJPD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOBLPGFPLEM_CALLGHLAJPD_OFFSET))(this);
		}

		::System::Boolean LEHPNCLCGBJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOBLPGFPLEM_LEHPNCLCGBJ_OFFSET))(this);
		}

		::System::Boolean PILFIBODMEI(::RPG::Client::ActivityIdleLive::SpecialEquip* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::SpecialEquip*))((::PBYTE)hIl2Cpp + MOBLPGFPLEM_PILFIBODMEI_OFFSET))(this, a1);
		}

		::System::Void ECBFBCJNANN(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + MOBLPGFPLEM_ECBFBCJNANN_OFFSET))(this, a1, a2);
		}

		::RPG::Client::ActivityIdleLive::IdleLiveEquipmentData* PPKCFBBLGCK(::System::UInt32 a1)
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveEquipmentData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOBLPGFPLEM_PPKCFBBLGCK_OFFSET))(this, a1);
		}

		::RPG::Client::ActivityIdleLive::SlotUiData BLHHBGLHDNA(::System::UInt32 a1)
		{
			return ((::RPG::Client::ActivityIdleLive::SlotUiData(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOBLPGFPLEM_BLHHBGLHDNA_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::SpSlotUiData*>* GHHGAMJDMNF(::RPG::Client::ActivityIdleLive::IdleLiveBaseTeamInfo* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::SpSlotUiData*>*(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveBaseTeamInfo*))((::PBYTE)hIl2Cpp + MOBLPGFPLEM_GHHGAMJDMNF_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::NJHJJCFEHPK*>* EECJBLDIPGA(::RPG::Client::ActivityIdleLive::IdleLiveBaseTeamInfo* a1)
		{
			return ((::System::Collections::Generic::List_1<::NJHJJCFEHPK*>*(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveBaseTeamInfo*))((::PBYTE)hIl2Cpp + MOBLPGFPLEM_EECJBLDIPGA_OFFSET))(this, a1);
		}

		::RPG::Client::ActivityIdleLive::IdleLiveDecimal MHDDEJAJIBG(::RPG::Client::ActivityIdleLive::IdleLiveBaseTeamInfo* a1)
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveDecimal(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveBaseTeamInfo*))((::PBYTE)hIl2Cpp + MOBLPGFPLEM_MHDDEJAJIBG_OFFSET))(this, a1);
		}

		::RPG::Client::ActivityIdleLive::IdleLiveDecimal CCDNEGPPMIG(::RPG::Client::ActivityIdleLive::IdleLiveBaseTeamInfo* a1)
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveDecimal(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveBaseTeamInfo*))((::PBYTE)hIl2Cpp + MOBLPGFPLEM_CCDNEGPPMIG_OFFSET))(this, a1);
		}

		::RPG::Client::ActivityIdleLive::IdleLiveDecimal PFFGEKOFFHB(::RPG::Client::ActivityIdleLive::IdleLiveBaseTeamInfo* a1)
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveDecimal(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveBaseTeamInfo*))((::PBYTE)hIl2Cpp + MOBLPGFPLEM_PFFGEKOFFHB_OFFSET))(this, a1);
		}

		::GNKNAOBCBMI* get_EquipmentModifierSource()
		{
			return ((::GNKNAOBCBMI*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOBLPGFPLEM_GET_EQUIPMENTMODIFIERSOURCE_OFFSET))(this);
		}

		::System::Void set_EquipmentModifierSource(::GNKNAOBCBMI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GNKNAOBCBMI*))((::PBYTE)hIl2Cpp + MOBLPGFPLEM_SET_EQUIPMENTMODIFIERSOURCE_OFFSET))(this, a1);
		}

	};
