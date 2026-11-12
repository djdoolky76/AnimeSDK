#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AOCCEBGNPJA.h"
#include "unitysdk/HHJGMFEALEB.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TutorialGuideShowType.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::Tutorial { class ITutorialGuideCollection; }
namespace RPG::Client::Tutorial { class TutorialGuideCategoryInfo; }
namespace RPG::Client::Tutorial { class TutorialGuideSpecialGotoInfo; }
namespace RPG::Client::Tutorial { class TutorialSingleGuideInfo; }
namespace RPG::GameCore { class TutorialTriggerParam; }
namespace System { class Object; }

#define RPG_CLIENT_TUTORIAL_TUTORIALGUIDEGROUPDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xED9EA80)
#define RPG_CLIENT_TUTORIAL_TUTORIALGUIDEGROUPDATA_GETCATEGORYINFO_OFFSET UNITYSDK_OFFSET(0xED9F0E0)
#define RPG_CLIENT_TUTORIAL_TUTORIALGUIDEGROUPDATA_GETGUIDEINFOBYINDEX_OFFSET UNITYSDK_OFFSET(0xED9EA90)
#define RPG_CLIENT_TUTORIAL_TUTORIALGUIDEGROUPDATA_GETSPECIALGOTOINFO_OFFSET UNITYSDK_OFFSET(0xED9F220)
#define RPG_CLIENT_TUTORIAL_TUTORIALGUIDEGROUPDATA_GET_CANREVIEW_OFFSET UNITYSDK_OFFSET(0xED9F400)
#define RPG_CLIENT_TUTORIAL_TUTORIALGUIDEGROUPDATA_GET_CATEGORY_OFFSET UNITYSDK_OFFSET(0xED9F3E0)
#define RPG_CLIENT_TUTORIAL_TUTORIALGUIDEGROUPDATA_GET_FINISHTRIGGERPARAMS_OFFSET UNITYSDK_OFFSET(0xED9F480)
#define RPG_CLIENT_TUTORIAL_TUTORIALGUIDEGROUPDATA_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0xED9F360)
#define RPG_CLIENT_TUTORIAL_TUTORIALGUIDEGROUPDATA_GET_GROUPTYPEID_OFFSET UNITYSDK_OFFSET(0xED9F380)
#define RPG_CLIENT_TUTORIAL_TUTORIALGUIDEGROUPDATA_GET_GUIDECOUNT_OFFSET UNITYSDK_OFFSET(0xED9F3A0)
#define RPG_CLIENT_TUTORIAL_TUTORIALGUIDEGROUPDATA_GET_GUIDETYPE_OFFSET UNITYSDK_OFFSET(0xED9EDA0)
#define RPG_CLIENT_TUTORIAL_TUTORIALGUIDEGROUPDATA_GET_HASVIDEO_OFFSET UNITYSDK_OFFSET(0xED9F4E0)
#define RPG_CLIENT_TUTORIAL_TUTORIALGUIDEGROUPDATA_GET_MESSAGETEXT_OFFSET UNITYSDK_OFFSET(0xED9F4A0)
#define RPG_CLIENT_TUTORIAL_TUTORIALGUIDEGROUPDATA_GET_ORDER_OFFSET UNITYSDK_OFFSET(0xED9F440)
#define RPG_CLIENT_TUTORIAL_TUTORIALGUIDEGROUPDATA_GET_STATUS_OFFSET UNITYSDK_OFFSET(0xED9F4C0)
#define RPG_CLIENT_TUTORIAL_TUTORIALGUIDEGROUPDATA_GET_TRIGGERPARAMS_OFFSET UNITYSDK_OFFSET(0xED9F460)
#define RPG_CLIENT_TUTORIAL_TUTORIALGUIDEGROUPDATA_GET_TUTORIALGUIDEIDLIST_OFFSET UNITYSDK_OFFSET(0xED9F3C0)
#define RPG_CLIENT_TUTORIAL_TUTORIALGUIDEGROUPDATA_GET_TUTORIALSHOWTYPE_OFFSET UNITYSDK_OFFSET(0xED9F420)
#define RPG_CLIENT_TUTORIAL_TUTORIALGUIDEGROUPDATA_GET_USERDATA_OFFSET UNITYSDK_OFFSET(0xED9F550)
#define RPG_CLIENT_TUTORIAL_TUTORIALGUIDEGROUPDATA_GET_VIDEOID_OFFSET UNITYSDK_OFFSET(0xED9F530)
#define RPG_CLIENT_TUTORIAL_TUTORIALGUIDEGROUPDATA_SETSTATUSBYINT_OFFSET UNITYSDK_OFFSET(0xED9F090)
#define RPG_CLIENT_TUTORIAL_TUTORIALGUIDEGROUPDATA_SET_CANREVIEW_OFFSET UNITYSDK_OFFSET(0xED9F410)
#define RPG_CLIENT_TUTORIAL_TUTORIALGUIDEGROUPDATA_SET_CATEGORY_OFFSET UNITYSDK_OFFSET(0xED9F3F0)
#define RPG_CLIENT_TUTORIAL_TUTORIALGUIDEGROUPDATA_SET_FINISHTRIGGERPARAMS_OFFSET UNITYSDK_OFFSET(0xED9F490)
#define RPG_CLIENT_TUTORIAL_TUTORIALGUIDEGROUPDATA_SET_GROUPID_OFFSET UNITYSDK_OFFSET(0xED9F370)
#define RPG_CLIENT_TUTORIAL_TUTORIALGUIDEGROUPDATA_SET_GROUPTYPEID_OFFSET UNITYSDK_OFFSET(0xED9F390)
#define RPG_CLIENT_TUTORIAL_TUTORIALGUIDEGROUPDATA_SET_GUIDECOUNT_OFFSET UNITYSDK_OFFSET(0xED9F3B0)
#define RPG_CLIENT_TUTORIAL_TUTORIALGUIDEGROUPDATA_SET_MESSAGETEXT_OFFSET UNITYSDK_OFFSET(0xED9F4B0)
#define RPG_CLIENT_TUTORIAL_TUTORIALGUIDEGROUPDATA_SET_ORDER_OFFSET UNITYSDK_OFFSET(0xED9F450)
#define RPG_CLIENT_TUTORIAL_TUTORIALGUIDEGROUPDATA_SET_STATUS_OFFSET UNITYSDK_OFFSET(0xED9F4D0)
#define RPG_CLIENT_TUTORIAL_TUTORIALGUIDEGROUPDATA_SET_TRIGGERPARAMS_OFFSET UNITYSDK_OFFSET(0xED9F470)
#define RPG_CLIENT_TUTORIAL_TUTORIALGUIDEGROUPDATA_SET_TUTORIALGUIDEIDLIST_OFFSET UNITYSDK_OFFSET(0xED9F3D0)
#define RPG_CLIENT_TUTORIAL_TUTORIALGUIDEGROUPDATA_SET_TUTORIALSHOWTYPE_OFFSET UNITYSDK_OFFSET(0xED9F430)
#define RPG_CLIENT_TUTORIAL_TUTORIALGUIDEGROUPDATA_SET_USERDATA_OFFSET UNITYSDK_OFFSET(0xED9F560)
#define RPG_CLIENT_TUTORIAL_TUTORIALGUIDEGROUPDATA_SET_VIDEOID_OFFSET UNITYSDK_OFFSET(0xED9F540)

namespace RPG::Client::Tutorial
{
	inline static constexpr unsigned int TutorialGuideGroupData_TypeDefinitionIndex = 81774;

	class TutorialGuideGroupData : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::TutorialTriggerParam*>* _TriggerParams_k__BackingField; // 0x10
		::System::Object* _UserData_k__BackingField; // 0x18
		::Il2CppArray<::RPG::GameCore::TutorialTriggerParam*>* _FinishTriggerParams_k__BackingField; // 0x20
		::Il2CppArray<::System::UInt32>* _TutorialGuideIDList_k__BackingField; // 0x28
		::RPG::Client::Tutorial::ITutorialGuideCollection* _BelongCollection; // 0x30
		::RPG::Client::TextID _MessageText_k__BackingField; // 0x38
		::System::UInt32 _GroupID_k__BackingField; // 0x48
		::System::UInt32 _Order_k__BackingField; // 0x4C
		::System::Int32 _GuideCount_k__BackingField; // 0x50
		::System::UInt32 _Category_k__BackingField; // 0x54
		::HHJGMFEALEB _Status_k__BackingField; // 0x58
		::System::UInt32 _GroupTypeID_k__BackingField; // 0x5C
		::System::Boolean _CanReview_k__BackingField; // 0x60
		::System::Byte _padding0[0x3];
		::System::UInt32 _VideoID_k__BackingField; // 0x64
		::RPG::GameCore::TutorialGuideShowType _TutorialShowType_k__BackingField; // 0x68
		::System::Void _ctor(::RPG::Client::Tutorial::ITutorialGuideCollection* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Tutorial::ITutorialGuideCollection*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIAL_TUTORIALGUIDEGROUPDATA_CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::Tutorial::TutorialSingleGuideInfo* GetGuideInfoByIndex(::System::Int32 a1)
		{
			return ((::RPG::Client::Tutorial::TutorialSingleGuideInfo*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIAL_TUTORIALGUIDEGROUPDATA_GETGUIDEINFOBYINDEX_OFFSET))(this, a1);
		}

		::System::Void SetStatusByInt(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIAL_TUTORIALGUIDEGROUPDATA_SETSTATUSBYINT_OFFSET))(this, a1);
		}

		::RPG::Client::Tutorial::TutorialGuideCategoryInfo* GetCategoryInfo()
		{
			return ((::RPG::Client::Tutorial::TutorialGuideCategoryInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIAL_TUTORIALGUIDEGROUPDATA_GETCATEGORYINFO_OFFSET))(this);
		}

		::RPG::Client::Tutorial::TutorialGuideSpecialGotoInfo* GetSpecialGotoInfo()
		{
			return ((::RPG::Client::Tutorial::TutorialGuideSpecialGotoInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIAL_TUTORIALGUIDEGROUPDATA_GETSPECIALGOTOINFO_OFFSET))(this);
		}

		::System::UInt32 get_GroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIAL_TUTORIALGUIDEGROUPDATA_GET_GROUPID_OFFSET))(this);
		}

		::System::Void set_GroupID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIAL_TUTORIALGUIDEGROUPDATA_SET_GROUPID_OFFSET))(this, a1);
		}

		::System::UInt32 get_GroupTypeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIAL_TUTORIALGUIDEGROUPDATA_GET_GROUPTYPEID_OFFSET))(this);
		}

		::System::Void set_GroupTypeID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIAL_TUTORIALGUIDEGROUPDATA_SET_GROUPTYPEID_OFFSET))(this, a1);
		}

		::System::Int32 get_GuideCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIAL_TUTORIALGUIDEGROUPDATA_GET_GUIDECOUNT_OFFSET))(this);
		}

		::System::Void set_GuideCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIAL_TUTORIALGUIDEGROUPDATA_SET_GUIDECOUNT_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::UInt32>* get_TutorialGuideIDList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIAL_TUTORIALGUIDEGROUPDATA_GET_TUTORIALGUIDEIDLIST_OFFSET))(this);
		}

		::System::Void set_TutorialGuideIDList(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIAL_TUTORIALGUIDEGROUPDATA_SET_TUTORIALGUIDEIDLIST_OFFSET))(this, a1);
		}

		::System::UInt32 get_Category()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIAL_TUTORIALGUIDEGROUPDATA_GET_CATEGORY_OFFSET))(this);
		}

		::System::Void set_Category(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIAL_TUTORIALGUIDEGROUPDATA_SET_CATEGORY_OFFSET))(this, a1);
		}

		::System::Boolean get_CanReview()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIAL_TUTORIALGUIDEGROUPDATA_GET_CANREVIEW_OFFSET))(this);
		}

		::System::Void set_CanReview(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIAL_TUTORIALGUIDEGROUPDATA_SET_CANREVIEW_OFFSET))(this, a1);
		}

		::RPG::GameCore::TutorialGuideShowType get_TutorialShowType()
		{
			return ((::RPG::GameCore::TutorialGuideShowType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIAL_TUTORIALGUIDEGROUPDATA_GET_TUTORIALSHOWTYPE_OFFSET))(this);
		}

		::System::Void set_TutorialShowType(::RPG::GameCore::TutorialGuideShowType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TutorialGuideShowType))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIAL_TUTORIALGUIDEGROUPDATA_SET_TUTORIALSHOWTYPE_OFFSET))(this, a1);
		}

		::System::UInt32 get_Order()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIAL_TUTORIALGUIDEGROUPDATA_GET_ORDER_OFFSET))(this);
		}

		::System::Void set_Order(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIAL_TUTORIALGUIDEGROUPDATA_SET_ORDER_OFFSET))(this, a1);
		}

		::Il2CppArray<::RPG::GameCore::TutorialTriggerParam*>* get_TriggerParams()
		{
			return ((::Il2CppArray<::RPG::GameCore::TutorialTriggerParam*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIAL_TUTORIALGUIDEGROUPDATA_GET_TRIGGERPARAMS_OFFSET))(this);
		}

		::System::Void set_TriggerParams(::Il2CppArray<::RPG::GameCore::TutorialTriggerParam*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::TutorialTriggerParam*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIAL_TUTORIALGUIDEGROUPDATA_SET_TRIGGERPARAMS_OFFSET))(this, a1);
		}

		::Il2CppArray<::RPG::GameCore::TutorialTriggerParam*>* get_FinishTriggerParams()
		{
			return ((::Il2CppArray<::RPG::GameCore::TutorialTriggerParam*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIAL_TUTORIALGUIDEGROUPDATA_GET_FINISHTRIGGERPARAMS_OFFSET))(this);
		}

		::System::Void set_FinishTriggerParams(::Il2CppArray<::RPG::GameCore::TutorialTriggerParam*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::TutorialTriggerParam*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIAL_TUTORIALGUIDEGROUPDATA_SET_FINISHTRIGGERPARAMS_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_MessageText()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIAL_TUTORIALGUIDEGROUPDATA_GET_MESSAGETEXT_OFFSET))(this);
		}

		::System::Void set_MessageText(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIAL_TUTORIALGUIDEGROUPDATA_SET_MESSAGETEXT_OFFSET))(this, a1);
		}

		::HHJGMFEALEB get_Status()
		{
			return ((::HHJGMFEALEB(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIAL_TUTORIALGUIDEGROUPDATA_GET_STATUS_OFFSET))(this);
		}

		::System::Void set_Status(::HHJGMFEALEB a1)
		{
			return ((::System::Void(*)(::PVOID, ::HHJGMFEALEB))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIAL_TUTORIALGUIDEGROUPDATA_SET_STATUS_OFFSET))(this, a1);
		}

		::System::Boolean get_HasVideo()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIAL_TUTORIALGUIDEGROUPDATA_GET_HASVIDEO_OFFSET))(this);
		}

		::System::UInt32 get_VideoID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIAL_TUTORIALGUIDEGROUPDATA_GET_VIDEOID_OFFSET))(this);
		}

		::System::Void set_VideoID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIAL_TUTORIALGUIDEGROUPDATA_SET_VIDEOID_OFFSET))(this, a1);
		}

		::AOCCEBGNPJA get_GuideType()
		{
			return ((::AOCCEBGNPJA(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIAL_TUTORIALGUIDEGROUPDATA_GET_GUIDETYPE_OFFSET))(this);
		}

		::System::Object* get_UserData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIAL_TUTORIALGUIDEGROUPDATA_GET_USERDATA_OFFSET))(this);
		}

		::System::Void set_UserData(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIAL_TUTORIALGUIDEGROUPDATA_SET_USERDATA_OFFSET))(this, a1);
		}

	};
}
