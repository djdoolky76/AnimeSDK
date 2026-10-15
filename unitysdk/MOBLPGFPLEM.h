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

#define MOBLPGFPLEM_BBCBCKLEKLK_OFFSET UNITYSDK_OFFSET(0xBA1DDA0)
#define MOBLPGFPLEM_BJLGBFGFHGC_OFFSET UNITYSDK_OFFSET(0xBA1C900)
#define MOBLPGFPLEM_BLHHBGLHDNA_OFFSET UNITYSDK_OFFSET(0xBA1E340)
#define MOBLPGFPLEM_CALLGHLAJPD_OFFSET UNITYSDK_OFFSET(0xBA1DFC0)
#define MOBLPGFPLEM_CCDNEGPPMIG_OFFSET UNITYSDK_OFFSET(0xBA1EBA0)
#define MOBLPGFPLEM_CTOR_OFFSET UNITYSDK_OFFSET(0xBA1C740)
#define MOBLPGFPLEM_DGBBAJLMBMK_OFFSET UNITYSDK_OFFSET(0xBA1D4E0)
#define MOBLPGFPLEM_DNNKJLGGJEM_OFFSET UNITYSDK_OFFSET(0xBA1CC30)
#define MOBLPGFPLEM_ECBFBCJNANN_OFFSET UNITYSDK_OFFSET(0xBA1E130)
#define MOBLPGFPLEM_EECJBLDIPGA_OFFSET UNITYSDK_OFFSET(0xBA1E460)
#define MOBLPGFPLEM_EEPCGEMJAFF_OFFSET UNITYSDK_OFFSET(0xBA1D7C0)
#define MOBLPGFPLEM_EHBMGAPHFDE_OFFSET UNITYSDK_OFFSET(0xBA1D390)
#define MOBLPGFPLEM_ELEFMKJEKLF_OFFSET UNITYSDK_OFFSET(0xBA1C6A0)
#define MOBLPGFPLEM_FGIKAAACJGL_OFFSET UNITYSDK_OFFSET(0xBA1C6E0)
#define MOBLPGFPLEM_GET_EQUIPMENTMODIFIERSOURCE_OFFSET UNITYSDK_OFFSET(0xBA1F460)
#define MOBLPGFPLEM_GET_VERSION_OFFSET UNITYSDK_OFFSET(0xBA1C720)
#define MOBLPGFPLEM_GHHGAMJDMNF_OFFSET UNITYSDK_OFFSET(0xBA1E400)
#define MOBLPGFPLEM_GJDAJJLPPNC_OFFSET UNITYSDK_OFFSET(0xBA1D350)
#define MOBLPGFPLEM_HGGABIEGFJB_OFFSET UNITYSDK_OFFSET(0xBA1D210)
#define MOBLPGFPLEM_HINOIKENADH_OFFSET UNITYSDK_OFFSET(0xBA1D820)
#define MOBLPGFPLEM_HOKFJHCBDOM_OFFSET UNITYSDK_OFFSET(0xBA1DE40)
#define MOBLPGFPLEM_IIHDLGOAEDL_OFFSET UNITYSDK_OFFSET(0xBA1D050)
#define MOBLPGFPLEM_JOMPIFMOPJF_OFFSET UNITYSDK_OFFSET(0xBA1D480)
#define MOBLPGFPLEM_KAALJKBNOGE_OFFSET UNITYSDK_OFFSET(0xBA1DF50)
#define MOBLPGFPLEM_LEHPNCLCGBJ_OFFSET UNITYSDK_OFFSET(0xBA1E010)
#define MOBLPGFPLEM_LMPCDFMFMIE_OFFSET UNITYSDK_OFFSET(0xBA1D710)
#define MOBLPGFPLEM_MHDDEJAJIBG_OFFSET UNITYSDK_OFFSET(0xBA1EA10)
#define MOBLPGFPLEM_MHEBEFEBNBI_OFFSET UNITYSDK_OFFSET(0xBA1DA70)
#define MOBLPGFPLEM_PFFGEKOFFHB_OFFSET UNITYSDK_OFFSET(0xBA1F190)
#define MOBLPGFPLEM_PILFIBODMEI_OFFSET UNITYSDK_OFFSET(0xBA1E060)
#define MOBLPGFPLEM_PPKCFBBLGCK_OFFSET UNITYSDK_OFFSET(0xBA1E210)
#define MOBLPGFPLEM_SET_EQUIPMENTMODIFIERSOURCE_OFFSET UNITYSDK_OFFSET(0xBA1F470)
#define MOBLPGFPLEM_SET_VERSION_OFFSET UNITYSDK_OFFSET(0xBA1C730)

inline static constexpr unsigned int MOBLPGFPLEM_TypeDefinitionIndex = 75245;

	class MOBLPGFPLEM : public ::System::Object
	{
	public:
		::RPG::Client::ActivityIdleLive::SpEquipSlotInfo* KIHNNLDEOOM; // 0x10
		::GNKNAOBCBMI* _EquipmentModifierSource_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::INPDCDFPKON*>* MFGEADHPLHO; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityIdleLive::SpecialEquip*>* OGGJIFMKLIC; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityIdleLive::IdleLiveEquipmentData*>* EMCJHKHAJNK; // 0x30
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
