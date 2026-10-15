#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AOCCEBGNPJA.h"
#include "unitysdk/System/Object.h"
class AFBDIFAHNIL;
namespace RPG::Client::Tutorial { class TutorialGuideCategoryInfo; }
namespace RPG::Client::Tutorial { class TutorialGuideGroupData; }
namespace RPG::Client::Tutorial { class TutorialGuideSpecialGotoInfo; }
namespace RPG::Client::Tutorial { class TutorialSubGuideCollectionData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_TUTORIAL_TUTORIALSUBGUIDECOLLECTIONDATA_CREATEGUIDEGROUPDATA_OFFSET UNITYSDK_OFFSET(0xE334D20)
#define RPG_CLIENT_TUTORIAL_TUTORIALSUBGUIDECOLLECTIONDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xE333820)
#define RPG_CLIENT_TUTORIAL_TUTORIALSUBGUIDECOLLECTIONDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xE3348B0)
#define RPG_CLIENT_TUTORIAL_TUTORIALSUBGUIDECOLLECTIONDATA_GETCATEGORYIDLISTBYGROUPTYPEID_OFFSET UNITYSDK_OFFSET(0xE334E80)
#define RPG_CLIENT_TUTORIAL_TUTORIALSUBGUIDECOLLECTIONDATA_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xE334B50)
#define RPG_CLIENT_TUTORIAL_TUTORIALSUBGUIDECOLLECTIONDATA_GETGUIDECATEGORYINFO_OFFSET UNITYSDK_OFFSET(0xE334DB0)
#define RPG_CLIENT_TUTORIAL_TUTORIALSUBGUIDECOLLECTIONDATA_GETGUIDEGROUPDATABYID_OFFSET UNITYSDK_OFFSET(0xE334C90)
#define RPG_CLIENT_TUTORIAL_TUTORIALSUBGUIDECOLLECTIONDATA_GETSPECIALGOTOINFO_OFFSET UNITYSDK_OFFSET(0xE335090)
#define RPG_CLIENT_TUTORIAL_TUTORIALSUBGUIDECOLLECTIONDATA_GET_GUIDETYPE_OFFSET UNITYSDK_OFFSET(0xE3350E0)
#define RPG_CLIENT_TUTORIAL_TUTORIALSUBGUIDECOLLECTIONDATA__CREATEGUIDEGROUPDATA_OFFSET UNITYSDK_OFFSET(0xE334930)

namespace RPG::Client::Tutorial
{
	class TutorialSubGuideCollectionData : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::Tutorial::TutorialGuideGroupData*>* _GuideDataMap; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIAL_TUTORIALSUBGUIDECOLLECTIONDATA_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::Tutorial::TutorialSubGuideCollectionData* Create()
		{
			return ((::RPG::Client::Tutorial::TutorialSubGuideCollectionData*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIAL_TUTORIALSUBGUIDECOLLECTIONDATA_CREATE_OFFSET))();
		}

		::System::Collections::Generic::IEnumerator_1<::RPG::Client::Tutorial::TutorialGuideGroupData*>* GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::RPG::Client::Tutorial::TutorialGuideGroupData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIAL_TUTORIALSUBGUIDECOLLECTIONDATA_GETENUMERATOR_OFFSET))(this);
		}

		::RPG::Client::Tutorial::TutorialGuideGroupData* GetGuideGroupDataByID(::System::UInt32 a1)
		{
			return ((::RPG::Client::Tutorial::TutorialGuideGroupData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIAL_TUTORIALSUBGUIDECOLLECTIONDATA_GETGUIDEGROUPDATABYID_OFFSET))(this, a1);
		}

		::RPG::Client::Tutorial::TutorialGuideGroupData* CreateGuideGroupData(::System::UInt32 a1)
		{
			return ((::RPG::Client::Tutorial::TutorialGuideGroupData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIAL_TUTORIALSUBGUIDECOLLECTIONDATA_CREATEGUIDEGROUPDATA_OFFSET))(this, a1);
		}

		::RPG::Client::Tutorial::TutorialGuideCategoryInfo* GetGuideCategoryInfo(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::Tutorial::TutorialGuideCategoryInfo*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIAL_TUTORIALSUBGUIDECOLLECTIONDATA_GETGUIDECATEGORYINFO_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetCategoryIDListByGroupTypeID(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIAL_TUTORIALSUBGUIDECOLLECTIONDATA_GETCATEGORYIDLISTBYGROUPTYPEID_OFFSET))(this, a1);
		}

		::RPG::Client::Tutorial::TutorialGuideSpecialGotoInfo* GetSpecialGotoInfo(::System::UInt32 a1)
		{
			return ((::RPG::Client::Tutorial::TutorialGuideSpecialGotoInfo*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIAL_TUTORIALSUBGUIDECOLLECTIONDATA_GETSPECIALGOTOINFO_OFFSET))(this, a1);
		}

		static ::RPG::Client::Tutorial::TutorialGuideGroupData* _CreateGuideGroupData(::AFBDIFAHNIL* a1, ::RPG::Client::Tutorial::TutorialSubGuideCollectionData* a2)
		{
			return ((::RPG::Client::Tutorial::TutorialGuideGroupData*(*)(::AFBDIFAHNIL*, ::RPG::Client::Tutorial::TutorialSubGuideCollectionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIAL_TUTORIALSUBGUIDECOLLECTIONDATA__CREATEGUIDEGROUPDATA_OFFSET))(a1, a2);
		}

		::AOCCEBGNPJA get_GuideType()
		{
			return ((::AOCCEBGNPJA(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIAL_TUTORIALSUBGUIDECOLLECTIONDATA_GET_GUIDETYPE_OFFSET))(this);
		}

	};
}
