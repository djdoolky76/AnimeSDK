#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MongoObjectId.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/RogueTournBuildRefUnionIndex.h"
class FFDPILCDNLE_FFFFHODFBFK;
class PHODDAGHLFG;
namespace RPG::Client { class RogueFormulaData; }
namespace RPG::Client { class RogueTournBuildRefTeamData; }
namespace RPG::Client { class RogueTournHexData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define RPG_CLIENT_ROGUETOURNBUILDREFHTTPDATAITEM_CLEAR_OFFSET UNITYSDK_OFFSET(0xEA31ED0)
#define RPG_CLIENT_ROGUETOURNBUILDREFHTTPDATAITEM_CTOR_OFFSET UNITYSDK_OFFSET(0xEA31C20)
#define RPG_CLIENT_ROGUETOURNBUILDREFHTTPDATAITEM_DISPOSE_OFFSET UNITYSDK_OFFSET(0xEA32020)
#define RPG_CLIENT_ROGUETOURNBUILDREFHTTPDATAITEM_GET_APPLIEDCOUNTFORSORT_OFFSET UNITYSDK_OFFSET(0xEA326E0)
#define RPG_CLIENT_ROGUETOURNBUILDREFHTTPDATAITEM_GET_AUTHOR_OFFSET UNITYSDK_OFFSET(0xEA32430)
#define RPG_CLIENT_ROGUETOURNBUILDREFHTTPDATAITEM_GET_BUILDREFID_OFFSET UNITYSDK_OFFSET(0xEA32240)
#define RPG_CLIENT_ROGUETOURNBUILDREFHTTPDATAITEM_GET_ESSENTIALFORMULAS_OFFSET UNITYSDK_OFFSET(0xEA324E0)
#define RPG_CLIENT_ROGUETOURNBUILDREFHTTPDATAITEM_GET_ESSENTIALHEXMIRACLES_OFFSET UNITYSDK_OFFSET(0xEA325C0)
#define RPG_CLIENT_ROGUETOURNBUILDREFHTTPDATAITEM_GET_FAVORITECOUNTFORSORT_OFFSET UNITYSDK_OFFSET(0xEA32700)
#define RPG_CLIENT_ROGUETOURNBUILDREFHTTPDATAITEM_GET_GAMEMAJORVERSIONFORSORT_OFFSET UNITYSDK_OFFSET(0xEA32760)
#define RPG_CLIENT_ROGUETOURNBUILDREFHTTPDATAITEM_GET_GAMEMINORVERSIONFORSORT_OFFSET UNITYSDK_OFFSET(0xEA32780)
#define RPG_CLIENT_ROGUETOURNBUILDREFHTTPDATAITEM_GET_ISLIKE_OFFSET UNITYSDK_OFFSET(0xEA326A0)
#define RPG_CLIENT_ROGUETOURNBUILDREFHTTPDATAITEM_GET_LANGUAGE_OFFSET UNITYSDK_OFFSET(0xEA32450)
#define RPG_CLIENT_ROGUETOURNBUILDREFHTTPDATAITEM_GET_LIKECOUNTFORSORT_OFFSET UNITYSDK_OFFSET(0xEA32720)
#define RPG_CLIENT_ROGUETOURNBUILDREFHTTPDATAITEM_GET_LIKECOUNT_OFFSET UNITYSDK_OFFSET(0xEA326C0)
#define RPG_CLIENT_ROGUETOURNBUILDREFHTTPDATAITEM_GET_OPTIONALFORMULAS_OFFSET UNITYSDK_OFFSET(0xEA32550)
#define RPG_CLIENT_ROGUETOURNBUILDREFHTTPDATAITEM_GET_OPTIONALHEXMIRACLES_OFFSET UNITYSDK_OFFSET(0xEA32630)
#define RPG_CLIENT_ROGUETOURNBUILDREFHTTPDATAITEM_GET_TEAMS_OFFSET UNITYSDK_OFFSET(0xEA32470)
#define RPG_CLIENT_ROGUETOURNBUILDREFHTTPDATAITEM_GET_TITLE_OFFSET UNITYSDK_OFFSET(0xEA32410)
#define RPG_CLIENT_ROGUETOURNBUILDREFHTTPDATAITEM_GET_UNIONINDEX_OFFSET UNITYSDK_OFFSET(0xEA32270)
#define RPG_CLIENT_ROGUETOURNBUILDREFHTTPDATAITEM_GET_WEIGHTFORSORT_OFFSET UNITYSDK_OFFSET(0xEA32740)
#define RPG_CLIENT_ROGUETOURNBUILDREFHTTPDATAITEM_SETCONTENT_OFFSET UNITYSDK_OFFSET(0xEA32090)
#define RPG_CLIENT_ROGUETOURNBUILDREFHTTPDATAITEM_SET_APPLIEDCOUNTFORSORT_OFFSET UNITYSDK_OFFSET(0xEA326F0)
#define RPG_CLIENT_ROGUETOURNBUILDREFHTTPDATAITEM_SET_AUTHOR_OFFSET UNITYSDK_OFFSET(0xEA32440)
#define RPG_CLIENT_ROGUETOURNBUILDREFHTTPDATAITEM_SET_BUILDREFID_OFFSET UNITYSDK_OFFSET(0xEA32260)
#define RPG_CLIENT_ROGUETOURNBUILDREFHTTPDATAITEM_SET_FAVORITECOUNTFORSORT_OFFSET UNITYSDK_OFFSET(0xEA32710)
#define RPG_CLIENT_ROGUETOURNBUILDREFHTTPDATAITEM_SET_GAMEMAJORVERSIONFORSORT_OFFSET UNITYSDK_OFFSET(0xEA32770)
#define RPG_CLIENT_ROGUETOURNBUILDREFHTTPDATAITEM_SET_GAMEMINORVERSIONFORSORT_OFFSET UNITYSDK_OFFSET(0xEA32790)
#define RPG_CLIENT_ROGUETOURNBUILDREFHTTPDATAITEM_SET_ISLIKE_OFFSET UNITYSDK_OFFSET(0xEA326B0)
#define RPG_CLIENT_ROGUETOURNBUILDREFHTTPDATAITEM_SET_LANGUAGE_OFFSET UNITYSDK_OFFSET(0xEA32460)
#define RPG_CLIENT_ROGUETOURNBUILDREFHTTPDATAITEM_SET_LIKECOUNTFORSORT_OFFSET UNITYSDK_OFFSET(0xEA32730)
#define RPG_CLIENT_ROGUETOURNBUILDREFHTTPDATAITEM_SET_LIKECOUNT_OFFSET UNITYSDK_OFFSET(0xEA326D0)
#define RPG_CLIENT_ROGUETOURNBUILDREFHTTPDATAITEM_SET_TITLE_OFFSET UNITYSDK_OFFSET(0xEA32420)
#define RPG_CLIENT_ROGUETOURNBUILDREFHTTPDATAITEM_SET_WEIGHTFORSORT_OFFSET UNITYSDK_OFFSET(0xEA32750)
#define RPG_CLIENT_ROGUETOURNBUILDREFHTTPDATAITEM_SYNCINTERACTDATA_OFFSET UNITYSDK_OFFSET(0xEA320E0)
#define RPG_CLIENT_ROGUETOURNBUILDREFHTTPDATAITEM_SYNCISLIKE_OFFSET UNITYSDK_OFFSET(0xEA32140)
#define RPG_CLIENT_ROGUETOURNBUILDREFHTTPDATAITEM_TOSTRING_OFFSET UNITYSDK_OFFSET(0xEA31C30)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournBuildRefHttpDataItem_TypeDefinitionIndex = 69455;

	class RogueTournBuildRefHttpDataItem : public ::System::Object
	{
	public:
		::System::String* _Title_k__BackingField; // 0x10
		::PHODDAGHLFG* _BuildRefContent; // 0x18
		::System::String* _Author_k__BackingField; // 0x20
		::System::String* _Language_k__BackingField; // 0x28
		::System::UInt64 _AppliedCountForSort_k__BackingField; // 0x30
		::System::Double _WeightForSort_k__BackingField; // 0x38
		::RPG::Client::MongoObjectId _BuildRefID_k__BackingField; // 0x40
		::System::UInt32 _GameMajorVersionForSort_k__BackingField; // 0x4C
		::System::UInt64 _FavoriteCountForSort_k__BackingField; // 0x50
		::System::UInt64 _LikeCount_k__BackingField; // 0x58
		::System::Boolean _IsLike_k__BackingField; // 0x60
		::System::Byte _padding0[0x3];
		::System::UInt32 _GameMinorVersionForSort_k__BackingField; // 0x64
		::System::UInt64 _LikeCountForSort_k__BackingField; // 0x68
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFHTTPDATAITEM_CTOR_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFHTTPDATAITEM_TOSTRING_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFHTTPDATAITEM_CLEAR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFHTTPDATAITEM_DISPOSE_OFFSET))(this);
		}

		::System::Void SetContent(::PHODDAGHLFG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PHODDAGHLFG*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFHTTPDATAITEM_SETCONTENT_OFFSET))(this, a1);
		}

		::System::Void SyncInteractData(::FFDPILCDNLE_FFFFHODFBFK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FFDPILCDNLE_FFFFHODFBFK*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFHTTPDATAITEM_SYNCINTERACTDATA_OFFSET))(this, a1);
		}

		::System::Void SyncIsLike(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFHTTPDATAITEM_SYNCISLIKE_OFFSET))(this, a1);
		}

		::RPG::Client::MongoObjectId get_BuildRefID()
		{
			return ((::RPG::Client::MongoObjectId(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFHTTPDATAITEM_GET_BUILDREFID_OFFSET))(this);
		}

		::System::Void set_BuildRefID(::RPG::Client::MongoObjectId a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MongoObjectId))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFHTTPDATAITEM_SET_BUILDREFID_OFFSET))(this, a1);
		}

		::RPG::Client::RogueTournBuildRefUnionIndex get_UnionIndex()
		{
			return ((::RPG::Client::RogueTournBuildRefUnionIndex(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFHTTPDATAITEM_GET_UNIONINDEX_OFFSET))(this);
		}

		::System::String* get_Title()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFHTTPDATAITEM_GET_TITLE_OFFSET))(this);
		}

		::System::Void set_Title(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFHTTPDATAITEM_SET_TITLE_OFFSET))(this, a1);
		}

		::System::String* get_Author()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFHTTPDATAITEM_GET_AUTHOR_OFFSET))(this);
		}

		::System::Void set_Author(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFHTTPDATAITEM_SET_AUTHOR_OFFSET))(this, a1);
		}

		::System::String* get_Language()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFHTTPDATAITEM_GET_LANGUAGE_OFFSET))(this);
		}

		::System::Void set_Language(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFHTTPDATAITEM_SET_LANGUAGE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IList_1<::RPG::Client::RogueTournBuildRefTeamData*>* get_Teams()
		{
			return ((::System::Collections::Generic::IList_1<::RPG::Client::RogueTournBuildRefTeamData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFHTTPDATAITEM_GET_TEAMS_OFFSET))(this);
		}

		::System::Collections::Generic::IList_1<::RPG::Client::RogueFormulaData*>* get_EssentialFormulas()
		{
			return ((::System::Collections::Generic::IList_1<::RPG::Client::RogueFormulaData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFHTTPDATAITEM_GET_ESSENTIALFORMULAS_OFFSET))(this);
		}

		::System::Collections::Generic::IList_1<::RPG::Client::RogueFormulaData*>* get_OptionalFormulas()
		{
			return ((::System::Collections::Generic::IList_1<::RPG::Client::RogueFormulaData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFHTTPDATAITEM_GET_OPTIONALFORMULAS_OFFSET))(this);
		}

		::System::Collections::Generic::IList_1<::RPG::Client::RogueTournHexData*>* get_EssentialHexMiracles()
		{
			return ((::System::Collections::Generic::IList_1<::RPG::Client::RogueTournHexData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFHTTPDATAITEM_GET_ESSENTIALHEXMIRACLES_OFFSET))(this);
		}

		::System::Collections::Generic::IList_1<::RPG::Client::RogueTournHexData*>* get_OptionalHexMiracles()
		{
			return ((::System::Collections::Generic::IList_1<::RPG::Client::RogueTournHexData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFHTTPDATAITEM_GET_OPTIONALHEXMIRACLES_OFFSET))(this);
		}

		::System::Boolean get_IsLike()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFHTTPDATAITEM_GET_ISLIKE_OFFSET))(this);
		}

		::System::Void set_IsLike(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFHTTPDATAITEM_SET_ISLIKE_OFFSET))(this, a1);
		}

		::System::UInt64 get_LikeCount()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFHTTPDATAITEM_GET_LIKECOUNT_OFFSET))(this);
		}

		::System::Void set_LikeCount(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFHTTPDATAITEM_SET_LIKECOUNT_OFFSET))(this, a1);
		}

		::System::UInt64 get_AppliedCountForSort()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFHTTPDATAITEM_GET_APPLIEDCOUNTFORSORT_OFFSET))(this);
		}

		::System::Void set_AppliedCountForSort(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFHTTPDATAITEM_SET_APPLIEDCOUNTFORSORT_OFFSET))(this, a1);
		}

		::System::UInt64 get_FavoriteCountForSort()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFHTTPDATAITEM_GET_FAVORITECOUNTFORSORT_OFFSET))(this);
		}

		::System::Void set_FavoriteCountForSort(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFHTTPDATAITEM_SET_FAVORITECOUNTFORSORT_OFFSET))(this, a1);
		}

		::System::UInt64 get_LikeCountForSort()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFHTTPDATAITEM_GET_LIKECOUNTFORSORT_OFFSET))(this);
		}

		::System::Void set_LikeCountForSort(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFHTTPDATAITEM_SET_LIKECOUNTFORSORT_OFFSET))(this, a1);
		}

		::System::Double get_WeightForSort()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFHTTPDATAITEM_GET_WEIGHTFORSORT_OFFSET))(this);
		}

		::System::Void set_WeightForSort(::System::Double a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFHTTPDATAITEM_SET_WEIGHTFORSORT_OFFSET))(this, a1);
		}

		::System::UInt32 get_GameMajorVersionForSort()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFHTTPDATAITEM_GET_GAMEMAJORVERSIONFORSORT_OFFSET))(this);
		}

		::System::Void set_GameMajorVersionForSort(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFHTTPDATAITEM_SET_GAMEMAJORVERSIONFORSORT_OFFSET))(this, a1);
		}

		::System::UInt32 get_GameMinorVersionForSort()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFHTTPDATAITEM_GET_GAMEMINORVERSIONFORSORT_OFFSET))(this);
		}

		::System::Void set_GameMinorVersionForSort(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFHTTPDATAITEM_SET_GAMEMINORVERSIONFORSORT_OFFSET))(this, a1);
		}

	};
}
