#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AGPKFBLGDIH;
class AHOMAAHPCIG;
class BDJEGABKNHN;
class KAJLLLAAKOG;
class LMOPAFOIJNF;
class NBBHDPCPHNN;
class OMGHALDIJHL;
class PANAGPMIIIH;
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class FateBuffData; }
namespace RPG::Client { class FateBuffSlotData; }
namespace RPG::Client { class FateTraitData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_FATEBUFFTRAITINFO_CHECKISBUFFSLOTUNLOCKSEEN_OFFSET UNITYSDK_OFFSET(0x1CBB8B80)
#define RPG_CLIENT_FATEBUFFTRAITINFO_CLEARPREFSSEENUNLOCKBUFFSLOT_OFFSET UNITYSDK_OFFSET(0x1CBB8A80)
#define RPG_CLIENT_FATEBUFFTRAITINFO_COUNTUNLOCKEDSLOTS_OFFSET UNITYSDK_OFFSET(0x1CBB8720)
#define RPG_CLIENT_FATEBUFFTRAITINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1CBB5A90)
#define RPG_CLIENT_FATEBUFFTRAITINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1CBB81D0)
#define RPG_CLIENT_FATEBUFFTRAITINFO_GETACTIVETRAITS_OFFSET UNITYSDK_OFFSET(0x1CBB8520)
#define RPG_CLIENT_FATEBUFFTRAITINFO_GETBUFFDATA_OFFSET UNITYSDK_OFFSET(0x1CBB8360)
#define RPG_CLIENT_FATEBUFFTRAITINFO_GETEQUIPPEDBUFFSLOTS_OFFSET UNITYSDK_OFFSET(0x1CBB8880)
#define RPG_CLIENT_FATEBUFFTRAITINFO_GETTRAITDATA_OFFSET UNITYSDK_OFFSET(0x1CBB0EB0)
#define RPG_CLIENT_FATEBUFFTRAITINFO_GET_ACTIVATEDTRAITBUFFIDLIST_OFFSET UNITYSDK_OFFSET(0x1CBB8120)
#define RPG_CLIENT_FATEBUFFTRAITINFO_GET_BUFFAMPLIFICATIONDICT_OFFSET UNITYSDK_OFFSET(0x1CBB2380)
#define RPG_CLIENT_FATEBUFFTRAITINFO_GET_BUFFDATALIST_OFFSET UNITYSDK_OFFSET(0x1CBB3890)
#define RPG_CLIENT_FATEBUFFTRAITINFO_GET_BUFFSLOTDATALIST_OFFSET UNITYSDK_OFFSET(0x1CBB35D0)
#define RPG_CLIENT_FATEBUFFTRAITINFO_GET_DIFFICULTY_OFFSET UNITYSDK_OFFSET(0x1CBB9860)
#define RPG_CLIENT_FATEBUFFTRAITINFO_GET_EXTRABUFFSLOTUNLOCKCOUNT_OFFSET UNITYSDK_OFFSET(0x1CBB9730)
#define RPG_CLIENT_FATEBUFFTRAITINFO_GET_MAXBUFFSLOT_OFFSET UNITYSDK_OFFSET(0x1CBB9750)
#define RPG_CLIENT_FATEBUFFTRAITINFO_GET_MODIFIEDMAINTRAITIDLIST_OFFSET UNITYSDK_OFFSET(0x1CBB1410)
#define RPG_CLIENT_FATEBUFFTRAITINFO_GET_TRAITDATALIST_OFFSET UNITYSDK_OFFSET(0x1CBB8480)
#define RPG_CLIENT_FATEBUFFTRAITINFO_REFRESHBUFFSLOT_OFFSET UNITYSDK_OFFSET(0x1CBB8E40)
#define RPG_CLIENT_FATEBUFFTRAITINFO_SETBUFFSLOTUNLOCKSEEN_OFFSET UNITYSDK_OFFSET(0x1CBB8C90)
#define RPG_CLIENT_FATEBUFFTRAITINFO_SET_DIFFICULTY_OFFSET UNITYSDK_OFFSET(0x1CBB9870)
#define RPG_CLIENT_FATEBUFFTRAITINFO_SET_EXTRABUFFSLOTUNLOCKCOUNT_OFFSET UNITYSDK_OFFSET(0x1CBB9740)
#define RPG_CLIENT_FATEBUFFTRAITINFO_SYNCBUFFAMPLIFICATIONUPDATE_OFFSET UNITYSDK_OFFSET(0x1CBB6D50)
#define RPG_CLIENT_FATEBUFFTRAITINFO_SYNCBUFFSLOT_OFFSET UNITYSDK_OFFSET(0x1CBB67F0)
#define RPG_CLIENT_FATEBUFFTRAITINFO_SYNCBUFFUPDATE_OFFSET UNITYSDK_OFFSET(0x1CBB6840)
#define RPG_CLIENT_FATEBUFFTRAITINFO_SYNCMODIFIEDTRAITLIST_OFFSET UNITYSDK_OFFSET(0x1CBB7510)
#define RPG_CLIENT_FATEBUFFTRAITINFO_SYNCTRAITBUFFUPDATE_OFFSET UNITYSDK_OFFSET(0x1CBB7C60)
#define RPG_CLIENT_FATEBUFFTRAITINFO_SYNCTRAITUPDATE_OFFSET UNITYSDK_OFFSET(0x1CBB76E0)
#define RPG_CLIENT_FATEBUFFTRAITINFO_SYNC_OFFSET UNITYSDK_OFFSET(0x1CBB5AA0)
#define RPG_CLIENT_FATEBUFFTRAITINFO__CLEARALLTRAITSOURCEINFO_OFFSET UNITYSDK_OFFSET(0x1CBB9660)
#define RPG_CLIENT_FATEBUFFTRAITINFO__CLEARBUFFSLOTEQUIP_OFFSET UNITYSDK_OFFSET(0x1CBB9560)
#define RPG_CLIENT_FATEBUFFTRAITINFO__CLEARTRAITSOURCEINFO_OFFSET UNITYSDK_OFFSET(0x1CBB7B80)
#define RPG_CLIENT_FATEBUFFTRAITINFO__GENERATEBUFFSLOT_OFFSET UNITYSDK_OFFSET(0x1CBB8E90)
#define RPG_CLIENT_FATEBUFFTRAITINFO__GENERATETRAITDATALIST_OFFSET UNITYSDK_OFFSET(0x1CBB92F0)
#define RPG_CLIENT_FATEBUFFTRAITINFO__REFRESHACTIVEDTRAITBUFF_OFFSET UNITYSDK_OFFSET(0x1CBB6060)
#define RPG_CLIENT_FATEBUFFTRAITINFO__REFRESHALLBUFF_OFFSET UNITYSDK_OFFSET(0x1CBB5CA0)
#define RPG_CLIENT_FATEBUFFTRAITINFO__REFRESHALLTRAITSOURCELIST_OFFSET UNITYSDK_OFFSET(0x1CBB75E0)
#define RPG_CLIENT_FATEBUFFTRAITINFO__REFRESHALLTRAIT_OFFSET UNITYSDK_OFFSET(0x1CBB5FF0)
#define RPG_CLIENT_FATEBUFFTRAITINFO__REFRESHBUFFAMPLIFICATION_OFFSET UNITYSDK_OFFSET(0x1CBB60F0)
#define RPG_CLIENT_FATEBUFFTRAITINFO__REFRESHBUFFSLOT_OFFSET UNITYSDK_OFFSET(0x1CBB6320)
#define RPG_CLIENT_FATEBUFFTRAITINFO__REFRESHMODIFIEDMAINTRAIT_OFFSET UNITYSDK_OFFSET(0x1CBB5F60)
#define RPG_CLIENT_FATEBUFFTRAITINFO__REFRESHTRAITSOURCEINFO_OFFSET UNITYSDK_OFFSET(0x1CBB7760)
#define RPG_CLIENT_FATEBUFFTRAITINFO__UPDATEBUFFAMPLIFICATION_OFFSET UNITYSDK_OFFSET(0x1CBB6DB0)

namespace RPG::Client
{
	inline static constexpr unsigned int FateBuffTraitInfo_TypeDefinitionIndex = 65444;

	class FateBuffTraitInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::FateTraitData*>* _TraitDataList; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* _ActivatedTraitBuffIDList; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* _ModifiedMainTraitIDList; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::FateBuffSlotData*>* _BuffSlotDataList; // 0x28
		::OMGHALDIJHL* _ParamProxyFactory; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _BuffAmplificationDict; // 0x38
		::System::Collections::Generic::List_1<::RPG::Client::FateBuffData*>* _BuffDataList; // 0x40
		::System::UInt32 _ExtraBuffSlotUnlockCount_k__BackingField; // 0x48
		::System::UInt32 _MaxBuffSlot; // 0x4C
		::System::UInt32 _Difficulty_k__BackingField; // 0x50
		::System::Void _ctor(::OMGHALDIJHL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OMGHALDIJHL*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFTRAITINFO_CTOR_OFFSET))(this, a1);
		}

		::System::Void Sync(::NBBHDPCPHNN* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::NBBHDPCPHNN*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFTRAITINFO_SYNC_OFFSET))(this, a1, a2);
		}

		::System::Void SyncBuffSlot(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFTRAITINFO_SYNCBUFFSLOT_OFFSET))(this, a1);
		}

		::System::Void SyncBuffUpdate(::LMOPAFOIJNF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LMOPAFOIJNF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFTRAITINFO_SYNCBUFFUPDATE_OFFSET))(this, a1);
		}

		::System::Void SyncBuffAmplificationUpdate(::BDJEGABKNHN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BDJEGABKNHN*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFTRAITINFO_SYNCBUFFAMPLIFICATIONUPDATE_OFFSET))(this, a1);
		}

		::System::Void SyncModifiedTraitList(::PANAGPMIIIH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PANAGPMIIIH*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFTRAITINFO_SYNCMODIFIEDTRAITLIST_OFFSET))(this, a1);
		}

		::System::Void SyncTraitUpdate(::KAJLLLAAKOG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KAJLLLAAKOG*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFTRAITINFO_SYNCTRAITUPDATE_OFFSET))(this, a1);
		}

		::System::Void SyncTraitBuffUpdate(::AHOMAAHPCIG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AHOMAAHPCIG*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFTRAITINFO_SYNCTRAITBUFFUPDATE_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFTRAITINFO_DISPOSE_OFFSET))(this);
		}

		::RPG::Client::FateBuffData* GetBuffData(::System::UInt32 a1)
		{
			return ((::RPG::Client::FateBuffData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFTRAITINFO_GETBUFFDATA_OFFSET))(this, a1);
		}

		::RPG::Client::FateTraitData* GetTraitData(::System::UInt32 a1)
		{
			return ((::RPG::Client::FateTraitData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFTRAITINFO_GETTRAITDATA_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::FateTraitData*>* GetActiveTraits()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::FateTraitData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFTRAITINFO_GETACTIVETRAITS_OFFSET))(this);
		}

		::System::UInt32 CountUnlockedSlots()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFTRAITINFO_COUNTUNLOCKEDSLOTS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::FateBuffSlotData*>* GetEquippedBuffSlots()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::FateBuffSlotData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFTRAITINFO_GETEQUIPPEDBUFFSLOTS_OFFSET))(this);
		}

		::System::Void ClearPrefsSeenUnlockBuffSlot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFTRAITINFO_CLEARPREFSSEENUNLOCKBUFFSLOT_OFFSET))(this);
		}

		::System::Boolean CheckIsBuffSlotUnlockSeen(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFTRAITINFO_CHECKISBUFFSLOTUNLOCKSEEN_OFFSET))(this, a1);
		}

		::System::Void SetBuffSlotUnlockSeen(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFTRAITINFO_SETBUFFSLOTUNLOCKSEEN_OFFSET))(this, a1);
		}

		::System::Void RefreshBuffSlot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFTRAITINFO_REFRESHBUFFSLOT_OFFSET))(this);
		}

		::System::Void _GenerateBuffSlot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFTRAITINFO__GENERATEBUFFSLOT_OFFSET))(this);
		}

		::System::Void _GenerateTraitDataList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFTRAITINFO__GENERATETRAITDATALIST_OFFSET))(this);
		}

		::System::Void _RefreshAllBuff(::NBBHDPCPHNN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NBBHDPCPHNN*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFTRAITINFO__REFRESHALLBUFF_OFFSET))(this, a1);
		}

		::System::Void _RefreshBuffSlot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFTRAITINFO__REFRESHBUFFSLOT_OFFSET))(this);
		}

		::System::Void _ClearBuffSlotEquip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFTRAITINFO__CLEARBUFFSLOTEQUIP_OFFSET))(this);
		}

		::System::Void _RefreshAllTrait(::NBBHDPCPHNN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NBBHDPCPHNN*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFTRAITINFO__REFRESHALLTRAIT_OFFSET))(this, a1);
		}

		::System::Void _RefreshTraitSourceInfo(::Google::Protobuf::Collections::RepeatedField_1<::AGPKFBLGDIH*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::AGPKFBLGDIH*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFTRAITINFO__REFRESHTRAITSOURCEINFO_OFFSET))(this, a1);
		}

		::System::Void _ClearAllTraitSourceInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFTRAITINFO__CLEARALLTRAITSOURCEINFO_OFFSET))(this);
		}

		::System::Void _ClearTraitSourceInfo(::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFTRAITINFO__CLEARTRAITSOURCEINFO_OFFSET))(this, a1);
		}

		::System::Void _RefreshAllTraitSourceList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFTRAITINFO__REFRESHALLTRAITSOURCELIST_OFFSET))(this);
		}

		::System::Void _RefreshActivedTraitBuff(::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFTRAITINFO__REFRESHACTIVEDTRAITBUFF_OFFSET))(this, a1);
		}

		::System::Void _RefreshBuffAmplification(::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFTRAITINFO__REFRESHBUFFAMPLIFICATION_OFFSET))(this, a1);
		}

		::System::Void _RefreshModifiedMainTrait(::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFTRAITINFO__REFRESHMODIFIEDMAINTRAIT_OFFSET))(this, a1);
		}

		::System::Void _UpdateBuffAmplification(::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>* a1, ::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>*, ::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFTRAITINFO__UPDATEBUFFAMPLIFICATION_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::RPG::Client::FateBuffData*>* get_BuffDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::FateBuffData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFTRAITINFO_GET_BUFFDATALIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::FateBuffSlotData*>* get_BuffSlotDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::FateBuffSlotData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFTRAITINFO_GET_BUFFSLOTDATALIST_OFFSET))(this);
		}

		::System::UInt32 get_ExtraBuffSlotUnlockCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFTRAITINFO_GET_EXTRABUFFSLOTUNLOCKCOUNT_OFFSET))(this);
		}

		::System::Void set_ExtraBuffSlotUnlockCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFTRAITINFO_SET_EXTRABUFFSLOTUNLOCKCOUNT_OFFSET))(this, a1);
		}

		::System::UInt32 get_MaxBuffSlot()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFTRAITINFO_GET_MAXBUFFSLOT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::FateTraitData*>* get_TraitDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::FateTraitData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFTRAITINFO_GET_TRAITDATALIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_ActivatedTraitBuffIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFTRAITINFO_GET_ACTIVATEDTRAITBUFFIDLIST_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* get_BuffAmplificationDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFTRAITINFO_GET_BUFFAMPLIFICATIONDICT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_ModifiedMainTraitIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFTRAITINFO_GET_MODIFIEDMAINTRAITIDLIST_OFFSET))(this);
		}

		::System::UInt32 get_Difficulty()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFTRAITINFO_GET_DIFFICULTY_OFFSET))(this);
		}

		::System::Void set_Difficulty(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEBUFFTRAITINFO_SET_DIFFICULTY_OFFSET))(this, a1);
		}

	};
}
