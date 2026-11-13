#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BookletSectionState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/AOBIKHHFNEA.h"
#include "unitysdk/RPG/Client/TextID.h"
namespace RPG::GameCore::Booklet { class BookConfig; }
namespace RPG::GameCore::Booklet { class ChapterConfig; }
namespace RPG::GameCore::Booklet { class SectionConfig; }
namespace RPG::GameCore::Booklet { class SectionSynopsis; }
namespace RPG::GameCore::Booklet { class SpreadConfig; }
namespace System { class String; }

#define RPG_CLIENT_BOOKLET_CHECKSPREADHASREAD_OFFSET UNITYSDK_OFFSET(0x1C578000)
#define RPG_CLIENT_BOOKLET_CTOR_OFFSET UNITYSDK_OFFSET(0x1C577D60)
#define RPG_CLIENT_BOOKLET_GETCHAPTERCONFIG_OFFSET UNITYSDK_OFFSET(0x1C577ED0)
#define RPG_CLIENT_BOOKLET_GETCHAPTERIDBYINDEX_OFFSET UNITYSDK_OFFSET(0x1C578880)
#define RPG_CLIENT_BOOKLET_GETCHAPTERINDEX_OFFSET UNITYSDK_OFFSET(0x1C578970)
#define RPG_CLIENT_BOOKLET_GETCHAPTERTITLE_OFFSET UNITYSDK_OFFSET(0x1C578A10)
#define RPG_CLIENT_BOOKLET_GETFIRSTSECTIONID_OFFSET UNITYSDK_OFFSET(0x1C578750)
#define RPG_CLIENT_BOOKLET_GETNEXTSECTIONID_OFFSET UNITYSDK_OFFSET(0x1C578500)
#define RPG_CLIENT_BOOKLET_GETPREFABPATH_OFFSET UNITYSDK_OFFSET(0x1C578C70)
#define RPG_CLIENT_BOOKLET_GETPRESECTIONID_OFFSET UNITYSDK_OFFSET(0x1C5784A0)
#define RPG_CLIENT_BOOKLET_GETSECTIONCONFIG_OFFSET UNITYSDK_OFFSET(0x1C578560)
#define RPG_CLIENT_BOOKLET_GETSECTIONIDBYINDEX_OFFSET UNITYSDK_OFFSET(0x1C578050)
#define RPG_CLIENT_BOOKLET_GETSECTIONSTATE_OFFSET UNITYSDK_OFFSET(0x1C577FB0)
#define RPG_CLIENT_BOOKLET_GETSECTIONTITLE_OFFSET UNITYSDK_OFFSET(0x1C578140)
#define RPG_CLIENT_BOOKLET_GETSENTENCE_OFFSET UNITYSDK_OFFSET(0x1C578F30)
#define RPG_CLIENT_BOOKLET_GETSPREADCONFIGBYINDEX_OFFSET UNITYSDK_OFFSET(0x1C577500)
#define RPG_CLIENT_BOOKLET_GET_CANTONEXTSPREAD_OFFSET UNITYSDK_OFFSET(0x1C577790)
#define RPG_CLIENT_BOOKLET_GET_CANTOPRESPREAD_OFFSET UNITYSDK_OFFSET(0x1C577740)
#define RPG_CLIENT_BOOKLET_GET_CHAPTERCOUNT_OFFSET UNITYSDK_OFFSET(0x1C5779C0)
#define RPG_CLIENT_BOOKLET_GET_CURRENTCHAPTERID_OFFSET UNITYSDK_OFFSET(0x1C5773A0)
#define RPG_CLIENT_BOOKLET_GET_CURRENTCHAPTER_OFFSET UNITYSDK_OFFSET(0x1C577440)
#define RPG_CLIENT_BOOKLET_GET_CURRENTSECTIONHASREAD_OFFSET UNITYSDK_OFFSET(0x1C577C00)
#define RPG_CLIENT_BOOKLET_GET_CURRENTSECTIONID_OFFSET UNITYSDK_OFFSET(0x1C5773F0)
#define RPG_CLIENT_BOOKLET_GET_CURRENTSECTION_OFFSET UNITYSDK_OFFSET(0x1C577460)
#define RPG_CLIENT_BOOKLET_GET_CURRENTSPREADHASREAD_OFFSET UNITYSDK_OFFSET(0x1C577AE0)
#define RPG_CLIENT_BOOKLET_GET_CURRENTSPREADID_OFFSET UNITYSDK_OFFSET(0x1C5774A0)
#define RPG_CLIENT_BOOKLET_GET_CURRENTSPREADINDEX_OFFSET UNITYSDK_OFFSET(0x1C577480)
#define RPG_CLIENT_BOOKLET_GET_HASNEXTSECTION_OFFSET UNITYSDK_OFFSET(0x1C5778D0)
#define RPG_CLIENT_BOOKLET_GET_HASNEXTSPREAD_OFFSET UNITYSDK_OFFSET(0x1C5776A0)
#define RPG_CLIENT_BOOKLET_GET_HASPRESECTION_OFFSET UNITYSDK_OFFSET(0x1C5777E0)
#define RPG_CLIENT_BOOKLET_GET_HASPRESPREAD_OFFSET UNITYSDK_OFFSET(0x1C577590)
#define RPG_CLIENT_BOOKLET_GET_ISAUTOPLAY_OFFSET UNITYSDK_OFFSET(0x1C577D10)
#define RPG_CLIENT_BOOKLET_GET_ISCANAUTOPLAY_OFFSET UNITYSDK_OFFSET(0x1C577D30)
#define RPG_CLIENT_BOOKLET_GET_ISCANFORCESKIP_OFFSET UNITYSDK_OFFSET(0x1C577D40)
#define RPG_CLIENT_BOOKLET_GET_ISCANREPLAY_OFFSET UNITYSDK_OFFSET(0x1C577D50)
#define RPG_CLIENT_BOOKLET_GET_SECTIONCOUNT_OFFSET UNITYSDK_OFFSET(0x1C577A20)
#define RPG_CLIENT_BOOKLET_GET_SPREADCOUNT_OFFSET UNITYSDK_OFFSET(0x1C577A80)
#define RPG_CLIENT_BOOKLET_INIT_OFFSET UNITYSDK_OFFSET(0x1C577D70)
#define RPG_CLIENT_BOOKLET_MARKSECTIONHASREAD_OFFSET UNITYSDK_OFFSET(0x1C578E80)
#define RPG_CLIENT_BOOKLET_MARKSPREADHASREAD_OFFSET UNITYSDK_OFFSET(0x1C578DD0)
#define RPG_CLIENT_BOOKLET_ONSECTIONHASREAD_OFFSET UNITYSDK_OFFSET(0x1C579010)
#define RPG_CLIENT_BOOKLET_ONSPREADHASREAD_OFFSET UNITYSDK_OFFSET(0x1C578FD0)
#define RPG_CLIENT_BOOKLET_SET_CURRENTCHAPTER_OFFSET UNITYSDK_OFFSET(0x1C577450)
#define RPG_CLIENT_BOOKLET_SET_CURRENTSECTION_OFFSET UNITYSDK_OFFSET(0x1C577470)
#define RPG_CLIENT_BOOKLET_SET_CURRENTSPREADINDEX_OFFSET UNITYSDK_OFFSET(0x1C577490)
#define RPG_CLIENT_BOOKLET_SET_ISAUTOPLAY_OFFSET UNITYSDK_OFFSET(0x1C577D20)
#define RPG_CLIENT_BOOKLET_TRYSWITCHTONEXTSPREAD_OFFSET UNITYSDK_OFFSET(0x1C578BB0)
#define RPG_CLIENT_BOOKLET_TRYSWITCHTOPRESPREAD_OFFSET UNITYSDK_OFFSET(0x1C578AF0)
#define RPG_CLIENT_BOOKLET_TRYSWITCHTOSECTION_OFFSET UNITYSDK_OFFSET(0x1C5782A0)
#define RPG_CLIENT_BOOKLET__CHECKSPREADINDEXISVALID_OFFSET UNITYSDK_OFFSET(0x1C577630)
#define RPG_CLIENT_BOOKLET__FINDSECTIONINDEXIN_OFFSET UNITYSDK_OFFSET(0x1C5781F0)
#define RPG_CLIENT_BOOKLET__GETCHAPTERCONFIGBYINDEX_OFFSET UNITYSDK_OFFSET(0x1C5788E0)
#define RPG_CLIENT_BOOKLET__GETFIRSTSECTIONCONFIG_OFFSET UNITYSDK_OFFSET(0x1C579050)
#define RPG_CLIENT_BOOKLET__GETNEXTSECTIONCONFIG_OFFSET UNITYSDK_OFFSET(0x1C577920)
#define RPG_CLIENT_BOOKLET__GETPRESECTIONCONFIG_OFFSET UNITYSDK_OFFSET(0x1C577830)
#define RPG_CLIENT_BOOKLET__GETSECTIONCONFIGBYINDEX_OFFSET UNITYSDK_OFFSET(0x1C5790A0)
#define RPG_CLIENT_BOOKLET__GETSECTIONCONFIGIN_OFFSET UNITYSDK_OFFSET(0x1C577F40)
#define RPG_CLIENT_BOOKLET__GETSECTIONSYNOPSISBYINDEX_OFFSET UNITYSDK_OFFSET(0x1C5780B0)
#define RPG_CLIENT_BOOKLET__LOADSECTIONCONFIGBY_OFFSET UNITYSDK_OFFSET(0x1C5791B0)

namespace RPG::Client
{
	inline static constexpr unsigned int Booklet_TypeDefinitionIndex = 74460;

	class Booklet : public ::System::Object
	{
	public:
		::RPG::GameCore::Booklet::ChapterConfig* _CurrentChapter_k__BackingField; // 0x10
		::RPG::GameCore::Booklet::BookConfig* _Config; // 0x18
		::RPG::GameCore::Booklet::SectionConfig* _CurrentSection_k__BackingField; // 0x20
		::System::Int32 _CurrentSpreadIndex_k__BackingField; // 0x28
		::System::Boolean _IsCanAutoPlay_k__BackingField; // 0x2C
		::System::Boolean _IsAutoPlay_k__BackingField; // 0x2D
		::System::Boolean _IsCanForceSkip_k__BackingField; // 0x2E
		::System::Boolean _IsCanReplay_k__BackingField; // 0x2F
		::System::Void _ctor(::RPG::GameCore::Booklet::BookConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::Booklet::BookConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET_CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 get_CurrentChapterID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET_GET_CURRENTCHAPTERID_OFFSET))(this);
		}

		::System::UInt32 get_CurrentSectionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET_GET_CURRENTSECTIONID_OFFSET))(this);
		}

		::RPG::GameCore::Booklet::ChapterConfig* get_CurrentChapter()
		{
			return ((::RPG::GameCore::Booklet::ChapterConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET_GET_CURRENTCHAPTER_OFFSET))(this);
		}

		::System::Void set_CurrentChapter(::RPG::GameCore::Booklet::ChapterConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::Booklet::ChapterConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET_SET_CURRENTCHAPTER_OFFSET))(this, a1);
		}

		::RPG::GameCore::Booklet::SectionConfig* get_CurrentSection()
		{
			return ((::RPG::GameCore::Booklet::SectionConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET_GET_CURRENTSECTION_OFFSET))(this);
		}

		::System::Void set_CurrentSection(::RPG::GameCore::Booklet::SectionConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::Booklet::SectionConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET_SET_CURRENTSECTION_OFFSET))(this, a1);
		}

		::System::Int32 get_CurrentSpreadIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET_GET_CURRENTSPREADINDEX_OFFSET))(this);
		}

		::System::Void set_CurrentSpreadIndex(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET_SET_CURRENTSPREADINDEX_OFFSET))(this, a1);
		}

		::System::UInt32 get_CurrentSpreadID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET_GET_CURRENTSPREADID_OFFSET))(this);
		}

		::System::Boolean get_HasPreSpread()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET_GET_HASPRESPREAD_OFFSET))(this);
		}

		::System::Boolean get_HasNextSpread()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET_GET_HASNEXTSPREAD_OFFSET))(this);
		}

		::System::Boolean get_CanToPreSpread()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET_GET_CANTOPRESPREAD_OFFSET))(this);
		}

		::System::Boolean get_CanToNextSpread()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET_GET_CANTONEXTSPREAD_OFFSET))(this);
		}

		::System::Boolean get_HasPreSection()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET_GET_HASPRESECTION_OFFSET))(this);
		}

		::System::Boolean get_HasNextSection()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET_GET_HASNEXTSECTION_OFFSET))(this);
		}

		::System::Int32 get_ChapterCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET_GET_CHAPTERCOUNT_OFFSET))(this);
		}

		::System::Int32 get_SectionCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET_GET_SECTIONCOUNT_OFFSET))(this);
		}

		::System::Int32 get_SpreadCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET_GET_SPREADCOUNT_OFFSET))(this);
		}

		::System::Boolean get_CurrentSpreadHasRead()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET_GET_CURRENTSPREADHASREAD_OFFSET))(this);
		}

		::System::Boolean get_CurrentSectionHasRead()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET_GET_CURRENTSECTIONHASREAD_OFFSET))(this);
		}

		::System::Boolean get_IsAutoPlay()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET_GET_ISAUTOPLAY_OFFSET))(this);
		}

		::System::Void set_IsAutoPlay(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET_SET_ISAUTOPLAY_OFFSET))(this, a1);
		}

		::System::Boolean get_IsCanAutoPlay()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET_GET_ISCANAUTOPLAY_OFFSET))(this);
		}

		::System::Boolean get_IsCanForceSkip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET_GET_ISCANFORCESKIP_OFFSET))(this);
		}

		::System::Boolean get_IsCanReplay()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET_GET_ISCANREPLAY_OFFSET))(this);
		}

		::System::Void Init(::System::UInt32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET_INIT_OFFSET))(this, a1, a2);
		}

		::RPG::Client::BookletSectionState GetSectionState(::System::UInt32 a1)
		{
			return ((::RPG::Client::BookletSectionState(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET_GETSECTIONSTATE_OFFSET))(this, a1);
		}

		::System::Boolean CheckSpreadHasRead(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET_CHECKSPREADHASREAD_OFFSET))(this, a1);
		}

		::System::UInt32 GetSectionIDByIndex(::System::Int32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET_GETSECTIONIDBYINDEX_OFFSET))(this, a1);
		}

		::RPG::Client::TextID GetSectionTitle(::System::UInt32 a1)
		{
			return ((::RPG::Client::TextID(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET_GETSECTIONTITLE_OFFSET))(this, a1);
		}

		::System::Boolean TrySwitchToSection(::System::UInt32 a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET_TRYSWITCHTOSECTION_OFFSET))(this, a1, a2);
		}

		::System::UInt32 GetPreSectionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET_GETPRESECTIONID_OFFSET))(this);
		}

		::System::UInt32 GetNextSectionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET_GETNEXTSECTIONID_OFFSET))(this);
		}

		::RPG::GameCore::Booklet::SectionConfig* GetSectionConfig(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::Booklet::SectionConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET_GETSECTIONCONFIG_OFFSET))(this, a1);
		}

		::System::UInt32 GetFirstSectionID(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET_GETFIRSTSECTIONID_OFFSET))(this, a1);
		}

		::System::UInt32 GetChapterIDByIndex(::System::Int32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET_GETCHAPTERIDBYINDEX_OFFSET))(this, a1);
		}

		::RPG::GameCore::Booklet::ChapterConfig* GetChapterConfig(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::Booklet::ChapterConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET_GETCHAPTERCONFIG_OFFSET))(this, a1);
		}

		::System::Int32 GetChapterIndex(::System::UInt32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET_GETCHAPTERINDEX_OFFSET))(this, a1);
		}

		::RPG::Client::TextID GetChapterTitle(::System::UInt32 a1)
		{
			return ((::RPG::Client::TextID(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET_GETCHAPTERTITLE_OFFSET))(this, a1);
		}

		::System::Boolean TrySwitchToPreSpread()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET_TRYSWITCHTOPRESPREAD_OFFSET))(this);
		}

		::System::Boolean TrySwitchToNextSpread()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET_TRYSWITCHTONEXTSPREAD_OFFSET))(this);
		}

		::RPG::GameCore::Booklet::SpreadConfig* GetSpreadConfigByIndex(::System::Int32 a1)
		{
			return ((::RPG::GameCore::Booklet::SpreadConfig*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET_GETSPREADCONFIGBYINDEX_OFFSET))(this, a1);
		}

		::System::String* GetPrefabPath(::System::UInt32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET_GETPREFABPATH_OFFSET))(this, a1);
		}

		::System::Void MarkSpreadHasRead()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET_MARKSPREADHASREAD_OFFSET))(this);
		}

		::System::Void MarkSectionHasRead()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET_MARKSECTIONHASREAD_OFFSET))(this);
		}

		::AOBIKHHFNEA GetSentence(::System::UInt32 a1)
		{
			return ((::AOBIKHHFNEA(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET_GETSENTENCE_OFFSET))(this, a1);
		}

		::System::Void OnSpreadHasRead()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET_ONSPREADHASREAD_OFFSET))(this);
		}

		::System::Void OnSectionHasRead()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET_ONSECTIONHASREAD_OFFSET))(this);
		}

		::System::Boolean _CheckSpreadIndexIsValid(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET__CHECKSPREADINDEXISVALID_OFFSET))(this, a1);
		}

		::RPG::GameCore::Booklet::SectionConfig* _GetFirstSectionConfig()
		{
			return ((::RPG::GameCore::Booklet::SectionConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET__GETFIRSTSECTIONCONFIG_OFFSET))(this);
		}

		::RPG::GameCore::Booklet::SectionConfig* _GetPreSectionConfig()
		{
			return ((::RPG::GameCore::Booklet::SectionConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET__GETPRESECTIONCONFIG_OFFSET))(this);
		}

		::RPG::GameCore::Booklet::SectionConfig* _GetNextSectionConfig()
		{
			return ((::RPG::GameCore::Booklet::SectionConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET__GETNEXTSECTIONCONFIG_OFFSET))(this);
		}

		::RPG::GameCore::Booklet::SectionConfig* _GetSectionConfigIn(::RPG::GameCore::Booklet::ChapterConfig* a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::Booklet::SectionConfig*(*)(::PVOID, ::RPG::GameCore::Booklet::ChapterConfig*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET__GETSECTIONCONFIGIN_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::Booklet::SectionConfig* _GetSectionConfigByIndex(::RPG::GameCore::Booklet::ChapterConfig* a1, ::System::Int32 a2)
		{
			return ((::RPG::GameCore::Booklet::SectionConfig*(*)(::PVOID, ::RPG::GameCore::Booklet::ChapterConfig*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET__GETSECTIONCONFIGBYINDEX_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::Booklet::SectionSynopsis* _GetSectionSynopsisByIndex(::RPG::GameCore::Booklet::ChapterConfig* a1, ::System::Int32 a2)
		{
			return ((::RPG::GameCore::Booklet::SectionSynopsis*(*)(::PVOID, ::RPG::GameCore::Booklet::ChapterConfig*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET__GETSECTIONSYNOPSISBYINDEX_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::Booklet::SectionConfig* _LoadSectionConfigBy(::RPG::GameCore::Booklet::SectionSynopsis* a1)
		{
			return ((::RPG::GameCore::Booklet::SectionConfig*(*)(::PVOID, ::RPG::GameCore::Booklet::SectionSynopsis*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET__LOADSECTIONCONFIGBY_OFFSET))(this, a1);
		}

		::System::Int32 _FindSectionIndexIn(::RPG::GameCore::Booklet::ChapterConfig* a1, ::System::UInt32 a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::Booklet::ChapterConfig*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET__FINDSECTIONINDEXIN_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::Booklet::ChapterConfig* _GetChapterConfigByIndex(::System::Int32 a1)
		{
			return ((::RPG::GameCore::Booklet::ChapterConfig*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLET__GETCHAPTERCONFIGBYINDEX_OFFSET))(this, a1);
		}

	};
}
