#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DHCNDENHLGO;
class POCJJHEDFOD;
namespace RPG::GameCore { class ItemConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define EAODNLIPMEO_CTOR_OFFSET UNITYSDK_OFFSET(0x12CE4330)
#define EAODNLIPMEO_GET_BADGEICONPATH_OFFSET UNITYSDK_OFFSET(0x12CE42D0)
#define EAODNLIPMEO_GET_DISPLAYITEMLIST_OFFSET UNITYSDK_OFFSET(0x12CE42F0)
#define EAODNLIPMEO_GET_GROUP_OFFSET UNITYSDK_OFFSET(0x12CE42B0)
#define EAODNLIPMEO_GET_HANDBOOKDISPLAYITEMLIST_OFFSET UNITYSDK_OFFSET(0x12CE4310)
#define EAODNLIPMEO_GET_ID_OFFSET UNITYSDK_OFFSET(0x12CE41D0)
#define EAODNLIPMEO_GET_NORMALTARGETIDS_OFFSET UNITYSDK_OFFSET(0x12CE4230)
#define EAODNLIPMEO_GET_RELATEDCHALLENGEID_OFFSET UNITYSDK_OFFSET(0x12CE41F0)
#define EAODNLIPMEO_GET_REWARDID_OFFSET UNITYSDK_OFFSET(0x12CE4270)
#define EAODNLIPMEO_GET_SPECIALTARGETID_OFFSET UNITYSDK_OFFSET(0x12CE4250)
#define EAODNLIPMEO_GET_SPECIALTARGETREWARDID_OFFSET UNITYSDK_OFFSET(0x12CE4290)
#define EAODNLIPMEO_GET_STAGES_OFFSET UNITYSDK_OFFSET(0x12CE4210)
#define EAODNLIPMEO_SET_BADGEICONPATH_OFFSET UNITYSDK_OFFSET(0x12CE42E0)
#define EAODNLIPMEO_SET_DISPLAYITEMLIST_OFFSET UNITYSDK_OFFSET(0x12CE4300)
#define EAODNLIPMEO_SET_GROUP_OFFSET UNITYSDK_OFFSET(0x12CE42C0)
#define EAODNLIPMEO_SET_HANDBOOKDISPLAYITEMLIST_OFFSET UNITYSDK_OFFSET(0x12CE4320)
#define EAODNLIPMEO_SET_ID_OFFSET UNITYSDK_OFFSET(0x12CE41E0)
#define EAODNLIPMEO_SET_NORMALTARGETIDS_OFFSET UNITYSDK_OFFSET(0x12CE4240)
#define EAODNLIPMEO_SET_RELATEDCHALLENGEID_OFFSET UNITYSDK_OFFSET(0x12CE4200)
#define EAODNLIPMEO_SET_REWARDID_OFFSET UNITYSDK_OFFSET(0x12CE4280)
#define EAODNLIPMEO_SET_SPECIALTARGETID_OFFSET UNITYSDK_OFFSET(0x12CE4260)
#define EAODNLIPMEO_SET_SPECIALTARGETREWARDID_OFFSET UNITYSDK_OFFSET(0x12CE42A0)
#define EAODNLIPMEO_SET_STAGES_OFFSET UNITYSDK_OFFSET(0x12CE4220)

	class EAODNLIPMEO : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::ItemConfig*>* _DisplayItemList_k__BackingField; // 0x10
		::System::String* _BadgeIconPath_k__BackingField; // 0x18
		::System::Collections::Generic::IReadOnlyList_1<::POCJJHEDFOD*>* _Stages_k__BackingField; // 0x20
		::Il2CppArray<::RPG::GameCore::ItemConfig*>* _HandBookDisplayItemList_k__BackingField; // 0x28
		::DHCNDENHLGO* _Group_k__BackingField; // 0x30
		::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* _NormalTargetIDs_k__BackingField; // 0x38
		::System::UInt32 _SpecialTargetID_k__BackingField; // 0x40
		::System::UInt32 _ID_k__BackingField; // 0x44
		::System::UInt32 _RewardID_k__BackingField; // 0x48
		::System::UInt32 _SpecialTargetRewardID_k__BackingField; // 0x4C
		::System::UInt32 _RelatedChallengeID_k__BackingField; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAODNLIPMEO_CTOR_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EAODNLIPMEO_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EAODNLIPMEO_SET_ID_OFFSET))(this, a1);
		}

		::System::UInt32 get_RelatedChallengeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EAODNLIPMEO_GET_RELATEDCHALLENGEID_OFFSET))(this);
		}

		::System::Void set_RelatedChallengeID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EAODNLIPMEO_SET_RELATEDCHALLENGEID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::POCJJHEDFOD*>* get_Stages()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::POCJJHEDFOD*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EAODNLIPMEO_GET_STAGES_OFFSET))(this);
		}

		::System::Void set_Stages(::System::Collections::Generic::IReadOnlyList_1<::POCJJHEDFOD*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::POCJJHEDFOD*>*))((::PBYTE)hIl2Cpp + EAODNLIPMEO_SET_STAGES_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* get_NormalTargetIDs()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EAODNLIPMEO_GET_NORMALTARGETIDS_OFFSET))(this);
		}

		::System::Void set_NormalTargetIDs(::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + EAODNLIPMEO_SET_NORMALTARGETIDS_OFFSET))(this, a1);
		}

		::System::UInt32 get_SpecialTargetID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EAODNLIPMEO_GET_SPECIALTARGETID_OFFSET))(this);
		}

		::System::Void set_SpecialTargetID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EAODNLIPMEO_SET_SPECIALTARGETID_OFFSET))(this, a1);
		}

		::System::UInt32 get_RewardID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EAODNLIPMEO_GET_REWARDID_OFFSET))(this);
		}

		::System::Void set_RewardID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EAODNLIPMEO_SET_REWARDID_OFFSET))(this, a1);
		}

		::System::UInt32 get_SpecialTargetRewardID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EAODNLIPMEO_GET_SPECIALTARGETREWARDID_OFFSET))(this);
		}

		::System::Void set_SpecialTargetRewardID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EAODNLIPMEO_SET_SPECIALTARGETREWARDID_OFFSET))(this, a1);
		}

		::DHCNDENHLGO* get_Group()
		{
			return ((::DHCNDENHLGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + EAODNLIPMEO_GET_GROUP_OFFSET))(this);
		}

		::System::Void set_Group(::DHCNDENHLGO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DHCNDENHLGO*))((::PBYTE)hIl2Cpp + EAODNLIPMEO_SET_GROUP_OFFSET))(this, a1);
		}

		::System::String* get_BadgeIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EAODNLIPMEO_GET_BADGEICONPATH_OFFSET))(this);
		}

		::System::Void set_BadgeIconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EAODNLIPMEO_SET_BADGEICONPATH_OFFSET))(this, a1);
		}

		::Il2CppArray<::RPG::GameCore::ItemConfig*>* get_DisplayItemList()
		{
			return ((::Il2CppArray<::RPG::GameCore::ItemConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EAODNLIPMEO_GET_DISPLAYITEMLIST_OFFSET))(this);
		}

		::System::Void set_DisplayItemList(::Il2CppArray<::RPG::GameCore::ItemConfig*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::ItemConfig*>*))((::PBYTE)hIl2Cpp + EAODNLIPMEO_SET_DISPLAYITEMLIST_OFFSET))(this, a1);
		}

		::Il2CppArray<::RPG::GameCore::ItemConfig*>* get_HandBookDisplayItemList()
		{
			return ((::Il2CppArray<::RPG::GameCore::ItemConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EAODNLIPMEO_GET_HANDBOOKDISPLAYITEMLIST_OFFSET))(this);
		}

		::System::Void set_HandBookDisplayItemList(::Il2CppArray<::RPG::GameCore::ItemConfig*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::ItemConfig*>*))((::PBYTE)hIl2Cpp + EAODNLIPMEO_SET_HANDBOOKDISPLAYITEMLIST_OFFSET))(this, a1);
		}

	};
