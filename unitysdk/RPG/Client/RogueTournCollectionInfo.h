#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/EPAHNPPLIAJ.h"
class JMJEIBGACMD;
class NPAJHGDEIDJ;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class RogueTournCollectionBoothData; }
namespace RPG::Client { class RogueTournCollectionData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUETOURNCOLLECTIONINFO_BEGINEDIT_OFFSET UNITYSDK_OFFSET(0x1C880490)
#define RPG_CLIENT_ROGUETOURNCOLLECTIONINFO_CLEARPREVIEW_OFFSET UNITYSDK_OFFSET(0x1C8803A0)
#define RPG_CLIENT_ROGUETOURNCOLLECTIONINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1C87E9C0)
#define RPG_CLIENT_ROGUETOURNCOLLECTIONINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C87F010)
#define RPG_CLIENT_ROGUETOURNCOLLECTIONINFO_EDITBOOTHCOLLECTION_OFFSET UNITYSDK_OFFSET(0x1C880530)
#define RPG_CLIENT_ROGUETOURNCOLLECTIONINFO_ENDEDIT_OFFSET UNITYSDK_OFFSET(0x1C880E40)
#define RPG_CLIENT_ROGUETOURNCOLLECTIONINFO_FINDDISPLAYEDBOOTHEDITED_OFFSET UNITYSDK_OFFSET(0x1C880C50)
#define RPG_CLIENT_ROGUETOURNCOLLECTIONINFO_GETDISPLAYEDCOLLECTIONEDITED_OFFSET UNITYSDK_OFFSET(0x1C880950)
#define RPG_CLIENT_ROGUETOURNCOLLECTIONINFO_GETNOTDISPLAYINGCOLLECTIONBOOTHIDSEDITED_OFFSET UNITYSDK_OFFSET(0x1C882270)
#define RPG_CLIENT_ROGUETOURNCOLLECTIONINFO_GETUNSEENCOLLECTIONIDS_OFFSET UNITYSDK_OFFSET(0x1C8813C0)
#define RPG_CLIENT_ROGUETOURNCOLLECTIONINFO_GET_BOOTHS_OFFSET UNITYSDK_OFFSET(0x1C882790)
#define RPG_CLIENT_ROGUETOURNCOLLECTIONINFO_GET_COLLECTIONCOUNT_OFFSET UNITYSDK_OFFSET(0x1C8827D0)
#define RPG_CLIENT_ROGUETOURNCOLLECTIONINFO_GET_COLLECTIONS_OFFSET UNITYSDK_OFFSET(0x1C882750)
#define RPG_CLIENT_ROGUETOURNCOLLECTIONINFO_GET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0x1C882660)
#define RPG_CLIENT_ROGUETOURNCOLLECTIONINFO_GET_UNLOCKEDCOLLECTIONCOUNT_OFFSET UNITYSDK_OFFSET(0x1C882820)
#define RPG_CLIENT_ROGUETOURNCOLLECTIONINFO_INIT_OFFSET UNITYSDK_OFFSET(0x1C87EBE0)
#define RPG_CLIENT_ROGUETOURNCOLLECTIONINFO_ISANYCOLLECTIONNOTDISPLAYEDEDITED_OFFSET UNITYSDK_OFFSET(0x1C881CB0)
#define RPG_CLIENT_ROGUETOURNCOLLECTIONINFO_SETALLUNLOCKEDCOLLECTIONSSEEN_OFFSET UNITYSDK_OFFSET(0x1C881970)
#define RPG_CLIENT_ROGUETOURNCOLLECTIONINFO_SETCOLLECTIONSEEN_OFFSET UNITYSDK_OFFSET(0x1C8817B0)
#define RPG_CLIENT_ROGUETOURNCOLLECTIONINFO_SETPREVIEWBOOTHCOLLECTION_OFFSET UNITYSDK_OFFSET(0x1C880080)
#define RPG_CLIENT_ROGUETOURNCOLLECTIONINFO_SYNCBOOTHS_OFFSET UNITYSDK_OFFSET(0x1C87F6B0)
#define RPG_CLIENT_ROGUETOURNCOLLECTIONINFO_SYNCCOLLECTIONS_OFFSET UNITYSDK_OFFSET(0x1C87F160)
#define RPG_CLIENT_ROGUETOURNCOLLECTIONINFO_TRYGETPREVIEWCOLLECTION_OFFSET UNITYSDK_OFFSET(0x1C880260)
#define RPG_CLIENT_ROGUETOURNCOLLECTIONINFO__GETCOLLECTION_OFFSET UNITYSDK_OFFSET(0x1C880BA0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournCollectionInfo_TypeDefinitionIndex = 69515;

	class RogueTournCollectionInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueTournCollectionData*>* _Collections; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _EditedBooth2Collection; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueTournCollectionBoothData*>* _Booths; // 0x20
		::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::RPG::Client::RogueTournCollectionBoothData*>* _Booths_ReadOnly; // 0x28
		::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::RPG::Client::RogueTournCollectionData*>* _Collections_ReadOnly; // 0x30
		::System::UInt32 _PreviewBoothID; // 0x38
		::System::Boolean _IsEditing; // 0x3C
		::System::Boolean _IsInPreview; // 0x3D
		::System::Byte _padding0[0x2];
		::System::UInt32 _PreviewCollectionID; // 0x40
		// static const ::System::Object EmptyCollectionID; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCOLLECTIONINFO_CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCOLLECTIONINFO_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCOLLECTIONINFO_DISPOSE_OFFSET))(this);
		}

		::System::Void SyncCollections(::Google::Protobuf::Collections::RepeatedField_1<::NPAJHGDEIDJ*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::NPAJHGDEIDJ*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCOLLECTIONINFO_SYNCCOLLECTIONS_OFFSET))(this, a1);
		}

		::System::Void SyncBooths(::Google::Protobuf::Collections::RepeatedField_1<::JMJEIBGACMD*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::JMJEIBGACMD*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCOLLECTIONINFO_SYNCBOOTHS_OFFSET))(this, a1);
		}

		::System::Void SetPreviewBoothCollection(::RPG::Client::RogueTournCollectionBoothData* a1, ::RPG::Client::RogueTournCollectionData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueTournCollectionBoothData*, ::RPG::Client::RogueTournCollectionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCOLLECTIONINFO_SETPREVIEWBOOTHCOLLECTION_OFFSET))(this, a1, a2);
		}

		::System::Boolean TryGetPreviewCollection(::RPG::Client::RogueTournCollectionBoothData* a1, ::RPG::Client::RogueTournCollectionData* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RogueTournCollectionBoothData*, ::RPG::Client::RogueTournCollectionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCOLLECTIONINFO_TRYGETPREVIEWCOLLECTION_OFFSET))(this, a1, a2);
		}

		::System::Void ClearPreview()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCOLLECTIONINFO_CLEARPREVIEW_OFFSET))(this);
		}

		::System::Void BeginEdit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCOLLECTIONINFO_BEGINEDIT_OFFSET))(this);
		}

		::System::Void EditBoothCollection(::RPG::Client::RogueTournCollectionBoothData* a1, ::RPG::Client::RogueTournCollectionData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueTournCollectionBoothData*, ::RPG::Client::RogueTournCollectionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCOLLECTIONINFO_EDITBOOTHCOLLECTION_OFFSET))(this, a1, a2);
		}

		::RPG::Client::RogueTournCollectionData* GetDisplayedCollectionEdited(::RPG::Client::RogueTournCollectionBoothData* a1)
		{
			return ((::RPG::Client::RogueTournCollectionData*(*)(::PVOID, ::RPG::Client::RogueTournCollectionBoothData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCOLLECTIONINFO_GETDISPLAYEDCOLLECTIONEDITED_OFFSET))(this, a1);
		}

		::RPG::Client::RogueTournCollectionBoothData* FindDisplayedBoothEdited(::RPG::Client::RogueTournCollectionData* a1)
		{
			return ((::RPG::Client::RogueTournCollectionBoothData*(*)(::PVOID, ::RPG::Client::RogueTournCollectionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCOLLECTIONINFO_FINDDISPLAYEDBOOTHEDITED_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::EPAHNPPLIAJ>* EndEdit()
		{
			return ((::System::Collections::Generic::List_1<::EPAHNPPLIAJ>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCOLLECTIONINFO_ENDEDIT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetUnseenCollectionIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCOLLECTIONINFO_GETUNSEENCOLLECTIONIDS_OFFSET))(this);
		}

		::System::Void SetCollectionSeen(::RPG::Client::RogueTournCollectionData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueTournCollectionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCOLLECTIONINFO_SETCOLLECTIONSEEN_OFFSET))(this, a1);
		}

		::System::Void SetAllUnlockedCollectionsSeen()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCOLLECTIONINFO_SETALLUNLOCKEDCOLLECTIONSSEEN_OFFSET))(this);
		}

		::System::Boolean IsAnyCollectionNotDisplayedEdited()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCOLLECTIONINFO_ISANYCOLLECTIONNOTDISPLAYEDEDITED_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetNotDisplayingCollectionBoothIDsEdited()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCOLLECTIONINFO_GETNOTDISPLAYINGCOLLECTIONBOOTHIDSEDITED_OFFSET))(this);
		}

		::RPG::Client::RogueTournCollectionData* _GetCollection(::System::UInt32 a1)
		{
			return ((::RPG::Client::RogueTournCollectionData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCOLLECTIONINFO__GETCOLLECTION_OFFSET))(this, a1);
		}

		::System::Boolean get_IsUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCOLLECTIONINFO_GET_ISUNLOCKED_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::RPG::Client::RogueTournCollectionData*>* get_Collections()
		{
			return ((::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::RPG::Client::RogueTournCollectionData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCOLLECTIONINFO_GET_COLLECTIONS_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::RPG::Client::RogueTournCollectionBoothData*>* get_Booths()
		{
			return ((::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::RPG::Client::RogueTournCollectionBoothData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCOLLECTIONINFO_GET_BOOTHS_OFFSET))(this);
		}

		::System::UInt32 get_CollectionCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCOLLECTIONINFO_GET_COLLECTIONCOUNT_OFFSET))(this);
		}

		::System::UInt32 get_UnlockedCollectionCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCOLLECTIONINFO_GET_UNLOCKEDCOLLECTIONCOUNT_OFFSET))(this);
		}

	};
}
