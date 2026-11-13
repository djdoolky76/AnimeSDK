#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightHandBookItemStatus.h"
#include "unitysdk/RPG/GameCore/GridFightHandBookType.h"
#include "unitysdk/System/Object.h"
class AHPHDNBNLPJ;
class FCEILNCDMAH;
class GKNIJKHENBF;
class GNIIDINFPDO;
class LLBMKOILIDN;
class MNJIFHBGMDJ;
class NCHKFJPOHAH;
class NEDHMLJKIOA;
class NMECHIFGKAD;
class ODKODPBCDKD;
namespace RPG::Client { class GridFightAugment; }
namespace RPG::Client { class GridFightConsumableItemConfig; }
namespace RPG::Client { class GridFightEquipItemConfig; }
namespace RPG::Client { class GridFightHandBookPetPal; }
namespace RPG::Client { class GridFightHandBookPetPalCategory; }
namespace RPG::Client { class GridFightHandBookPetPalGroup; }
namespace RPG::Client { class GridFightHandbookRole; }
namespace RPG::Client { class GridFightItemConfig; }
namespace RPG::Client { class GridFightMonsterAffixConfig; }
namespace RPG::Client { class GridFightMonsterCampConfig; }
namespace RPG::Client { class GridFightPortalData; }
namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class GridFightSpotLightConfig; }
namespace RPG::GameCore { class GridFightEquipConfigRow; }
namespace RPG::GameCore { class GridFightRoleConfigRow; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CC286B0)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS_CHECKITEM_10_OFFSET UNITYSDK_OFFSET(0x1CC24E50)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS_CHECKITEM_11_OFFSET UNITYSDK_OFFSET(0x1CC24EB0)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS_CHECKITEM_12_OFFSET UNITYSDK_OFFSET(0x1CC25450)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS_CHECKITEM_13_OFFSET UNITYSDK_OFFSET(0x1CC245B0)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS_CHECKITEM_1_OFFSET UNITYSDK_OFFSET(0x1CC246E0)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS_CHECKITEM_2_OFFSET UNITYSDK_OFFSET(0x1CC249C0)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS_CHECKITEM_3_OFFSET UNITYSDK_OFFSET(0x1CC24A30)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS_CHECKITEM_4_OFFSET UNITYSDK_OFFSET(0x1CC24A90)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS_CHECKITEM_5_OFFSET UNITYSDK_OFFSET(0x1CC24AF0)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS_CHECKITEM_6_OFFSET UNITYSDK_OFFSET(0x1CC24B60)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS_CHECKITEM_7_OFFSET UNITYSDK_OFFSET(0x1CC24BD0)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS_CHECKITEM_8_OFFSET UNITYSDK_OFFSET(0x1CC24CC0)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS_CHECKITEM_9_OFFSET UNITYSDK_OFFSET(0x1CC24D60)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS_CHECKITEM_OFFSET UNITYSDK_OFFSET(0x1CC24500)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS_CTOR_OFFSET UNITYSDK_OFFSET(0x1CC27F90)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS_GETCOLLECTEDPROGRESS_OFFSET UNITYSDK_OFFSET(0x1CC25E00)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS_GETCOMPLETEDITEMCOUNT_OFFSET UNITYSDK_OFFSET(0x1CC254C0)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS_GETSEENITEMCOUNT_OFFSET UNITYSDK_OFFSET(0x1CC25D90)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS_GETTOTALITEMCOUNT_OFFSET UNITYSDK_OFFSET(0x1CC25F50)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS_SHOULDEXCLUDECONSUMABLEFROMHANDBOOK_OFFSET UNITYSDK_OFFSET(0x1CC27CE0)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS_SHOULDEXCLUDEEQUIPFROMHANDBOOK_OFFSET UNITYSDK_OFFSET(0x1CC27C80)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS_SYNC_1_OFFSET UNITYSDK_OFFSET(0x1CC23850)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS_SYNC_OFFSET UNITYSDK_OFFSET(0x1CC23070)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS__COUNTCOMPLETEDHANDBOOKROLES_OFFSET UNITYSDK_OFFSET(0x1CC27290)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS__GETAUGMENTCOUNT_OFFSET UNITYSDK_OFFSET(0x1CC264A0)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS__GETCOMPLETEDITEMCOUNT_OFFSET UNITYSDK_OFFSET(0x1CC25510)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS__GETDERIVEDPETPALSTATUS_OFFSET UNITYSDK_OFFSET(0x1CC24F10)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS__GETEQUIPITEMCOUNT_OFFSET UNITYSDK_OFFSET(0x1CC26BF0)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS__GETMONSTERCOUNT_OFFSET UNITYSDK_OFFSET(0x1CC266E0)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS__GETPETPALGROUPCOUNT_OFFSET UNITYSDK_OFFSET(0x1CC26FD0)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS__GETPETPALGROUPIDS_OFFSET UNITYSDK_OFFSET(0x1CC27950)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS__GETPORTALCOUNT_OFFSET UNITYSDK_OFFSET(0x1CC268A0)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS__GETROLECOUNT_OFFSET UNITYSDK_OFFSET(0x1CC26290)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS__HANDLEAFFIX_OFFSET UNITYSDK_OFFSET(0x1CC23730)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS__HANDLEAUGMENT_OFFSET UNITYSDK_OFFSET(0x1CC235C0)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS__HANDLEEQUIP_OFFSET UNITYSDK_OFFSET(0x1CC23630)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS__HANDLEHANDBOOKDATA_OFFSET UNITYSDK_OFFSET(0x1CC23B50)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS__HANDLEMONSTER_OFFSET UNITYSDK_OFFSET(0x1CC234E0)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS__HANDLEPETPAL_OFFSET UNITYSDK_OFFSET(0x1CC237C0)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS__HANDLEPORTAL_OFFSET UNITYSDK_OFFSET(0x1CC23550)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS__HANDLEROLE_OFFSET UNITYSDK_OFFSET(0x1CC23450)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS__HANDLESPOTLIGHT_OFFSET UNITYSDK_OFFSET(0x1CC236C0)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS__ISEQUIPITEMINHANDBOOK_OFFSET UNITYSDK_OFFSET(0x1CC277D0)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS__ISHANDBOOKVISIBLECONSUMABLE_OFFSET UNITYSDK_OFFSET(0x1CC27BF0)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS__ISHANDBOOKVISIBLEEQUIPROW_OFFSET UNITYSDK_OFFSET(0x1CC27B10)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS__TRYCOUNTHANDBOOKROLEENTRY_OFFSET UNITYSDK_OFFSET(0x1CC27E20)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightHandBookStatus_TypeDefinitionIndex = 66455;

	class GridFightHandBookStatus : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GridFightHandBookType, ::System::Collections::Generic::HashSet_1<::System::UInt32>*>* _CompletedItems; // 0x10
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GridFightHandBookType, ::System::Collections::Generic::HashSet_1<::System::UInt32>*>* _SeenItems; // 0x18
		static ::Il2CppArray<::RPG::GameCore::GridFightHandBookType>** StaticGet__HandBookTypes()
		{
			return (::Il2CppArray<::RPG::GameCore::GridFightHandBookType>**)UnitySDK::FromName("RPG.Client", "GridFightHandBookStatus")->GetStaticField(0x720E0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS_CCTOR_OFFSET))();
		}

		::System::Void Sync(::NMECHIFGKAD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NMECHIFGKAD*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS_SYNC_OFFSET))(this, a1);
		}

		::System::Void Sync_1(::MNJIFHBGMDJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MNJIFHBGMDJ*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS_SYNC_1_OFFSET))(this, a1);
		}

		::System::Void _HandleHandBookData(::RPG::GameCore::GridFightHandBookType a1, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a2, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GridFightHandBookType, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS__HANDLEHANDBOOKDATA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _HandleRole(::NCHKFJPOHAH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NCHKFJPOHAH*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS__HANDLEROLE_OFFSET))(this, a1);
		}

		::System::Void _HandleEquip(::FCEILNCDMAH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FCEILNCDMAH*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS__HANDLEEQUIP_OFFSET))(this, a1);
		}

		::System::Void _HandlePortal(::NEDHMLJKIOA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NEDHMLJKIOA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS__HANDLEPORTAL_OFFSET))(this, a1);
		}

		::System::Void _HandleAugment(::GKNIJKHENBF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GKNIJKHENBF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS__HANDLEAUGMENT_OFFSET))(this, a1);
		}

		::System::Void _HandleMonster(::AHPHDNBNLPJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AHPHDNBNLPJ*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS__HANDLEMONSTER_OFFSET))(this, a1);
		}

		::System::Void _HandleSpotLight(::GNIIDINFPDO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GNIIDINFPDO*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS__HANDLESPOTLIGHT_OFFSET))(this, a1);
		}

		::System::Void _HandleAffix(::LLBMKOILIDN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LLBMKOILIDN*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS__HANDLEAFFIX_OFFSET))(this, a1);
		}

		::System::Void _HandlePetPal(::ODKODPBCDKD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ODKODPBCDKD*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS__HANDLEPETPAL_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightHandBookItemStatus CheckItem(::RPG::Client::GridFightRole* a1)
		{
			return ((::RPG::Client::GridFightHandBookItemStatus(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS_CHECKITEM_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightHandBookItemStatus CheckItem_1(::RPG::Client::GridFightHandbookRole* a1)
		{
			return ((::RPG::Client::GridFightHandBookItemStatus(*)(::PVOID, ::RPG::Client::GridFightHandbookRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS_CHECKITEM_1_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightHandBookItemStatus CheckItem_2(::RPG::Client::GridFightAugment* a1)
		{
			return ((::RPG::Client::GridFightHandBookItemStatus(*)(::PVOID, ::RPG::Client::GridFightAugment*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS_CHECKITEM_2_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightHandBookItemStatus CheckItem_3(::RPG::Client::GridFightMonsterCampConfig* a1)
		{
			return ((::RPG::Client::GridFightHandBookItemStatus(*)(::PVOID, ::RPG::Client::GridFightMonsterCampConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS_CHECKITEM_3_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightHandBookItemStatus CheckItem_4(::RPG::Client::GridFightItemConfig* a1)
		{
			return ((::RPG::Client::GridFightHandBookItemStatus(*)(::PVOID, ::RPG::Client::GridFightItemConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS_CHECKITEM_4_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightHandBookItemStatus CheckItem_5(::RPG::Client::GridFightEquipItemConfig* a1)
		{
			return ((::RPG::Client::GridFightHandBookItemStatus(*)(::PVOID, ::RPG::Client::GridFightEquipItemConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS_CHECKITEM_5_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightHandBookItemStatus CheckItem_6(::RPG::Client::GridFightConsumableItemConfig* a1)
		{
			return ((::RPG::Client::GridFightHandBookItemStatus(*)(::PVOID, ::RPG::Client::GridFightConsumableItemConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS_CHECKITEM_6_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightHandBookItemStatus CheckItem_7(::RPG::Client::GridFightPortalData* a1)
		{
			return ((::RPG::Client::GridFightHandBookItemStatus(*)(::PVOID, ::RPG::Client::GridFightPortalData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS_CHECKITEM_7_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightHandBookItemStatus CheckItem_8(::RPG::Client::GridFightSpotLightConfig* a1)
		{
			return ((::RPG::Client::GridFightHandBookItemStatus(*)(::PVOID, ::RPG::Client::GridFightSpotLightConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS_CHECKITEM_8_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightHandBookItemStatus CheckItem_9(::RPG::Client::GridFightMonsterAffixConfig* a1)
		{
			return ((::RPG::Client::GridFightHandBookItemStatus(*)(::PVOID, ::RPG::Client::GridFightMonsterAffixConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS_CHECKITEM_9_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightHandBookItemStatus CheckItem_10(::RPG::Client::GridFightHandBookPetPalGroup* a1)
		{
			return ((::RPG::Client::GridFightHandBookItemStatus(*)(::PVOID, ::RPG::Client::GridFightHandBookPetPalGroup*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS_CHECKITEM_10_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightHandBookItemStatus CheckItem_11(::RPG::Client::GridFightHandBookPetPalCategory* a1)
		{
			return ((::RPG::Client::GridFightHandBookItemStatus(*)(::PVOID, ::RPG::Client::GridFightHandBookPetPalCategory*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS_CHECKITEM_11_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightHandBookItemStatus CheckItem_12(::RPG::Client::GridFightHandBookPetPal* a1)
		{
			return ((::RPG::Client::GridFightHandBookItemStatus(*)(::PVOID, ::RPG::Client::GridFightHandBookPetPal*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS_CHECKITEM_12_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightHandBookItemStatus CheckItem_13(::System::UInt32 a1, ::RPG::GameCore::GridFightHandBookType a2)
		{
			return ((::RPG::Client::GridFightHandBookItemStatus(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::GridFightHandBookType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS_CHECKITEM_13_OFFSET))(this, a1, a2);
		}

		::System::Int32 GetCompletedItemCount(::RPG::GameCore::GridFightHandBookType a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GridFightHandBookType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS_GETCOMPLETEDITEMCOUNT_OFFSET))(this, a1);
		}

		::System::Int32 GetSeenItemCount(::RPG::GameCore::GridFightHandBookType a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GridFightHandBookType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS_GETSEENITEMCOUNT_OFFSET))(this, a1);
		}

		::System::Int32 GetCollectedProgress()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS_GETCOLLECTEDPROGRESS_OFFSET))(this);
		}

		::System::Int32 GetTotalItemCount(::RPG::GameCore::GridFightHandBookType a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GridFightHandBookType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS_GETTOTALITEMCOUNT_OFFSET))(this, a1);
		}

		::System::Int32 _GetPortalCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS__GETPORTALCOUNT_OFFSET))(this);
		}

		::System::Int32 _GetCompletedItemCount(::RPG::GameCore::GridFightHandBookType a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GridFightHandBookType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS__GETCOMPLETEDITEMCOUNT_OFFSET))(this, a1);
		}

		::System::Int32 _GetAugmentCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS__GETAUGMENTCOUNT_OFFSET))(this);
		}

		::System::Int32 _GetEquipItemCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS__GETEQUIPITEMCOUNT_OFFSET))(this);
		}

		static ::System::Boolean ShouldExcludeEquipFromHandBook(::RPG::GameCore::GridFightEquipConfigRow* a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GridFightEquipConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS_SHOULDEXCLUDEEQUIPFROMHANDBOOK_OFFSET))(a1);
		}

		static ::System::Boolean ShouldExcludeConsumableFromHandBook(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS_SHOULDEXCLUDECONSUMABLEFROMHANDBOOK_OFFSET))(a1);
		}

		static ::System::Boolean _IsHandBookVisibleEquipRow(::RPG::GameCore::GridFightEquipConfigRow* a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GridFightEquipConfigRow*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS__ISHANDBOOKVISIBLEEQUIPROW_OFFSET))(a1, a2);
		}

		static ::System::Boolean _IsHandBookVisibleConsumable(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS__ISHANDBOOKVISIBLECONSUMABLE_OFFSET))(a1, a2);
		}

		::System::Boolean _IsEquipItemInHandBook(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS__ISEQUIPITEMINHANDBOOK_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightHandBookItemStatus _GetDerivedPetPalStatus(::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightHandBookPetPalGroup*>* a1)
		{
			return ((::RPG::Client::GridFightHandBookItemStatus(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightHandBookPetPalGroup*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS__GETDERIVEDPETPALSTATUS_OFFSET))(this, a1);
		}

		static ::System::Int32 _GetPetPalGroupCount()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS__GETPETPALGROUPCOUNT_OFFSET))();
		}

		static ::System::Collections::Generic::HashSet_1<::System::UInt32>* _GetPetPalGroupIDs()
		{
			return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS__GETPETPALGROUPIDS_OFFSET))();
		}

		::System::Int32 _GetMonsterCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS__GETMONSTERCOUNT_OFFSET))(this);
		}

		::System::Int32 _GetRoleCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS__GETROLECOUNT_OFFSET))(this);
		}

		::System::Int32 _CountCompletedHandBookRoles(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS__COUNTCOMPLETEDHANDBOOKROLES_OFFSET))(this, a1);
		}

		static ::System::Boolean _TryCountHandBookRoleEntry(::RPG::GameCore::GridFightRoleConfigRow* a1, ::System::Boolean a2, ::System::Collections::Generic::HashSet_1<::System::UInt32>* a3)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GridFightRoleConfigRow*, ::System::Boolean, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS__TRYCOUNTHANDBOOKROLEENTRY_OFFSET))(a1, a2, a3);
		}

	};
}
