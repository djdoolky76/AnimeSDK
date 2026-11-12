#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IHMJHLGKLHP.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightElationLaughPointEquipComponent; }
namespace RPG::Client { class GridFightEquipItemData; }
namespace RPG::Client { class GridFightEquipQuickCraft; }
namespace RPG::Client { class GridFightEquipTrackData; }
namespace RPG::Client { class GridFightTraitElationLaughPointEffect; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTEQUIPRECOMMEND_ADD_ONCHANGE_OFFSET UNITYSDK_OFFSET(0xDABB8F0)
#define RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTEQUIPRECOMMEND_CANCRAFT_OFFSET UNITYSDK_OFFSET(0xDABD270)
#define RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTEQUIPRECOMMEND_CANDRESS_OFFSET UNITYSDK_OFFSET(0xDABC5F0)
#define RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTEQUIPRECOMMEND_CRAFT_OFFSET UNITYSDK_OFFSET(0xDABD6A0)
#define RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTEQUIPRECOMMEND_CTOR_OFFSET UNITYSDK_OFFSET(0xDAB9DF0)
#define RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTEQUIPRECOMMEND_DRESS_OFFSET UNITYSDK_OFFSET(0xDABD1C0)
#define RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTEQUIPRECOMMEND_GETCRAFTCOSTEQUIPITEMDATAS_OFFSET UNITYSDK_OFFSET(0xDABBDB0)
#define RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTEQUIPRECOMMEND_GETRECOMMENDEQUIPITEMDATA_OFFSET UNITYSDK_OFFSET(0xDABBD20)
#define RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTEQUIPRECOMMEND_GET_CANTRACK_OFFSET UNITYSDK_OFFSET(0xDABB9C0)
#define RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTEQUIPRECOMMEND_GET_ISTRACKED_OFFSET UNITYSDK_OFFSET(0xDABB9D0)
#define RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTEQUIPRECOMMEND_GET_RECOMMENDEQUIPIDS_OFFSET UNITYSDK_OFFSET(0xDABBD00)
#define RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTEQUIPRECOMMEND_GET_RECOMMENDEQUIPITEMDATAS_OFFSET UNITYSDK_OFFSET(0xDABBD10)
#define RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTEQUIPRECOMMEND_GET_RECOMMENDTITLE_OFFSET UNITYSDK_OFFSET(0xDABB9B0)
#define RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTEQUIPRECOMMEND_GET_TRACKSOURCE_OFFSET UNITYSDK_OFFSET(0xDABBBA0)
#define RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTEQUIPRECOMMEND_GET__TRACKDATA_OFFSET UNITYSDK_OFFSET(0xDABBA80)
#define RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTEQUIPRECOMMEND_ISEQUIPPED_OFFSET UNITYSDK_OFFSET(0xDABC490)
#define RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTEQUIPRECOMMEND_ISEQUIPREADYFORQUICKDRESS_OFFSET UNITYSDK_OFFSET(0xDABCA90)
#define RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTEQUIPRECOMMEND_ISSAMETRACKEQUIPLIST_OFFSET UNITYSDK_OFFSET(0xDABCDF0)
#define RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTEQUIPRECOMMEND_REMOVE_ONCHANGE_OFFSET UNITYSDK_OFFSET(0xDABB950)
#define RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTEQUIPRECOMMEND_TRACK_OFFSET UNITYSDK_OFFSET(0xDABD950)
#define RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTEQUIPRECOMMEND_TRYGETNEXTQUICKOPEQUIPID_OFFSET UNITYSDK_OFFSET(0xDABCCC0)
#define RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTEQUIPRECOMMEND_UNTRACK_OFFSET UNITYSDK_OFFSET(0xDABDB90)
#define RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTEQUIPRECOMMEND__CREATERECOMMENDEQUIPITEMDATAS_OFFSET UNITYSDK_OFFSET(0xDABB700)
#define RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTEQUIPRECOMMEND__FINDUNDRESSEDLAUGHPOINTEQUIP_OFFSET UNITYSDK_OFFSET(0xDABC7F0)
#define RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTEQUIPRECOMMEND__ISVALIDRECOMMENDINDEX_OFFSET UNITYSDK_OFFSET(0xDABC770)
#define RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTEQUIPRECOMMEND__TRACK_B__30_0_OFFSET UNITYSDK_OFFSET(0xDABDE40)
#define RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTEQUIPRECOMMEND__TRYGETQUICKCRAFT_OFFSET UNITYSDK_OFFSET(0xDABD350)
#define RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTEQUIPRECOMMEND__UNTRACK_B__31_0_OFFSET UNITYSDK_OFFSET(0xDABDE60)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightElationLaughPointEquipRecommend_TypeDefinitionIndex = 67185;

	class GridFightElationLaughPointEquipRecommend : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _RecommendEquipIDs_k__BackingField; // 0x10
		::System::Action* OnChange; // 0x18
		::RPG::Client::GridFightTraitElationLaughPointEffect* _Effect; // 0x20
		::System::Collections::Generic::List_1<::System::Int32>* _RecommendSlotIndices; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>* _RecommendEquipItemDatas_k__BackingField; // 0x30
		::RPG::Client::GridFightElationLaughPointEquipComponent* _EquipComponent; // 0x38
		::RPG::Client::TextID _RecommendTitle_k__BackingField; // 0x40
		::System::Boolean _CanTrack_k__BackingField; // 0x50
		::System::Void _ctor(::RPG::Client::GridFightTraitElationLaughPointEffect* a1, ::RPG::Client::GridFightElationLaughPointEquipComponent* a2, ::System::Collections::Generic::List_1<::System::UInt32>* a3, ::System::Collections::Generic::List_1<::System::Int32>* a4, ::RPG::Client::TextID a5, ::System::Boolean a6)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightTraitElationLaughPointEffect*, ::RPG::Client::GridFightElationLaughPointEquipComponent*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::Int32>*, ::RPG::Client::TextID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTEQUIPRECOMMEND_CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void add_OnChange(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTEQUIPRECOMMEND_ADD_ONCHANGE_OFFSET))(this, a1);
		}

		::System::Void remove_OnChange(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTEQUIPRECOMMEND_REMOVE_ONCHANGE_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_RecommendTitle()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTEQUIPRECOMMEND_GET_RECOMMENDTITLE_OFFSET))(this);
		}

		::System::Boolean get_CanTrack()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTEQUIPRECOMMEND_GET_CANTRACK_OFFSET))(this);
		}

		::System::Boolean get_IsTracked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTEQUIPRECOMMEND_GET_ISTRACKED_OFFSET))(this);
		}

		::IHMJHLGKLHP get_TrackSource()
		{
			return ((::IHMJHLGKLHP(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTEQUIPRECOMMEND_GET_TRACKSOURCE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_RecommendEquipIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTEQUIPRECOMMEND_GET_RECOMMENDEQUIPIDS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>* get_RecommendEquipItemDatas()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTEQUIPRECOMMEND_GET_RECOMMENDEQUIPITEMDATAS_OFFSET))(this);
		}

		::RPG::Client::GridFightEquipItemData* GetRecommendEquipItemData(::System::Int32 a1)
		{
			return ((::RPG::Client::GridFightEquipItemData*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTEQUIPRECOMMEND_GETRECOMMENDEQUIPITEMDATA_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>* GetCraftCostEquipItemDatas(::System::Int32 a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTEQUIPRECOMMEND_GETCRAFTCOSTEQUIPITEMDATAS_OFFSET))(this, a1);
		}

		::System::Boolean IsEquipped(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTEQUIPRECOMMEND_ISEQUIPPED_OFFSET))(this, a1);
		}

		::System::Boolean CanDress(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTEQUIPRECOMMEND_CANDRESS_OFFSET))(this, a1);
		}

		::System::Boolean IsEquipReadyForQuickDress(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTEQUIPRECOMMEND_ISEQUIPREADYFORQUICKDRESS_OFFSET))(this, a1);
		}

		::System::Boolean TryGetNextQuickOpEquipID(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTEQUIPRECOMMEND_TRYGETNEXTQUICKOPEQUIPID_OFFSET))(this, a1);
		}

		::System::Boolean IsSameTrackEquipList(::System::Collections::Generic::IList_1<::System::UInt32>* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTEQUIPRECOMMEND_ISSAMETRACKEQUIPLIST_OFFSET))(this, a1);
		}

		::System::Void Dress(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTEQUIPRECOMMEND_DRESS_OFFSET))(this, a1);
		}

		::System::Boolean CanCraft(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTEQUIPRECOMMEND_CANCRAFT_OFFSET))(this, a1);
		}

		::System::Void Craft(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTEQUIPRECOMMEND_CRAFT_OFFSET))(this, a1);
		}

		::System::Void Track()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTEQUIPRECOMMEND_TRACK_OFFSET))(this);
		}

		::System::Void UnTrack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTEQUIPRECOMMEND_UNTRACK_OFFSET))(this);
		}

		::System::Boolean _IsValidRecommendIndex(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTEQUIPRECOMMEND__ISVALIDRECOMMENDINDEX_OFFSET))(this, a1);
		}

		::System::Boolean _TryGetQuickCraft(::System::Int32 a1, ::RPG::Client::GridFightEquipQuickCraft* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::RPG::Client::GridFightEquipQuickCraft*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTEQUIPRECOMMEND__TRYGETQUICKCRAFT_OFFSET))(this, a1, a2);
		}

		static ::RPG::Client::GridFightEquipItemData* _FindUndressedLaughPointEquip(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightEquipItemData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTEQUIPRECOMMEND__FINDUNDRESSEDLAUGHPOINTEQUIP_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>* _CreateRecommendEquipItemDatas(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>*(*)(::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTEQUIPRECOMMEND__CREATERECOMMENDEQUIPITEMDATAS_OFFSET))(a1);
		}

		::RPG::Client::GridFightEquipTrackData* get__TrackData()
		{
			return ((::RPG::Client::GridFightEquipTrackData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTEQUIPRECOMMEND_GET__TRACKDATA_OFFSET))(this);
		}

		::System::Void _Track_b__30_0(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTEQUIPRECOMMEND__TRACK_B__30_0_OFFSET))(this, a1);
		}

		::System::Void _UnTrack_b__31_0(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELATIONLAUGHPOINTEQUIPRECOMMEND__UNTRACK_B__31_0_OFFSET))(this, a1);
		}

	};
}
