#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DLCNDCKCIPC;
class MOIOKCDLNHE;
class NLMIDIGAMEL;
class NNAGIDCACGI;
class OGHPKFMNNHL;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHESSROGUEINGAMESTORYINFO_CTOR_OFFSET UNITYSDK_OFFSET(0xD453900)
#define RPG_CLIENT_CHESSROGUEINGAMESTORYINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD453E00)
#define RPG_CLIENT_CHESSROGUEINGAMESTORYINFO_GETRECOMMENDEDSUBSTORYID_OFFSET UNITYSDK_OFFSET(0xD45C170)
#define RPG_CLIENT_CHESSROGUEINGAMESTORYINFO_GETTRIGGEREDSUBSTORYID_OFFSET UNITYSDK_OFFSET(0xD45C0F0)
#define RPG_CLIENT_CHESSROGUEINGAMESTORYINFO_GET_CURMAINSTORYID_OFFSET UNITYSDK_OFFSET(0xD45C4A0)
#define RPG_CLIENT_CHESSROGUEINGAMESTORYINFO_GET_CURSUBSTORYID_OFFSET UNITYSDK_OFFSET(0xD45C4C0)
#define RPG_CLIENT_CHESSROGUEINGAMESTORYINFO_GET_HASUNFINISHEDSUBSTORY_OFFSET UNITYSDK_OFFSET(0xD45C4E0)
#define RPG_CLIENT_CHESSROGUEINGAMESTORYINFO_GET_RECOMMENDEDSUBSTORYIDS_OFFSET UNITYSDK_OFFSET(0xD45C5F0)
#define RPG_CLIENT_CHESSROGUEINGAMESTORYINFO_GET_SUBSTORYSELECTEDOPTIONDIALOGUEEVENTIDS_OFFSET UNITYSDK_OFFSET(0xD45C5D0)
#define RPG_CLIENT_CHESSROGUEINGAMESTORYINFO_GET_WAITINGSUBSTORYFINISHLAYERINDEX_OFFSET UNITYSDK_OFFSET(0xD45C540)
#define RPG_CLIENT_CHESSROGUEINGAMESTORYINFO_INIT_OFFSET UNITYSDK_OFFSET(0xD453AD0)
#define RPG_CLIENT_CHESSROGUEINGAMESTORYINFO_SET_CURMAINSTORYID_OFFSET UNITYSDK_OFFSET(0xD45C4B0)
#define RPG_CLIENT_CHESSROGUEINGAMESTORYINFO_SET_CURSUBSTORYID_OFFSET UNITYSDK_OFFSET(0xD45C4D0)
#define RPG_CLIENT_CHESSROGUEINGAMESTORYINFO_SET_SUBSTORYSELECTEDOPTIONDIALOGUEEVENTIDS_OFFSET UNITYSDK_OFFSET(0xD45C5E0)
#define RPG_CLIENT_CHESSROGUEINGAMESTORYINFO_SYNC_1_OFFSET UNITYSDK_OFFSET(0xD4562B0)
#define RPG_CLIENT_CHESSROGUEINGAMESTORYINFO_SYNC_2_OFFSET UNITYSDK_OFFSET(0xD45C1F0)
#define RPG_CLIENT_CHESSROGUEINGAMESTORYINFO_SYNC_3_OFFSET UNITYSDK_OFFSET(0xD45C260)
#define RPG_CLIENT_CHESSROGUEINGAMESTORYINFO_SYNC_4_OFFSET UNITYSDK_OFFSET(0xD45C410)
#define RPG_CLIENT_CHESSROGUEINGAMESTORYINFO_SYNC_OFFSET UNITYSDK_OFFSET(0xD4560F0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChessRogueInGameStoryInfo_TypeDefinitionIndex = 68918;

	class ChessRogueInGameStoryInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _RecommendedSubStoryIDs; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* _TriggeredSubStoryIDs; // 0x18
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _SubStorySelectedOptionDialogueEventIDs_k__BackingField; // 0x20
		::System::UInt32 _CurMainStoryID_k__BackingField; // 0x28
		::System::UInt32 _WaitingSubStoryFinishLayerIndex; // 0x2C
		::System::UInt32 _CurSubStoryID_k__BackingField; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEINGAMESTORYINFO_CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEINGAMESTORYINFO_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEINGAMESTORYINFO_DISPOSE_OFFSET))(this);
		}

		::System::UInt32 GetTriggeredSubStoryID(::System::Int32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEINGAMESTORYINFO_GETTRIGGEREDSUBSTORYID_OFFSET))(this, a1);
		}

		::System::UInt32 GetRecommendedSubStoryID(::System::Int32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEINGAMESTORYINFO_GETRECOMMENDEDSUBSTORYID_OFFSET))(this, a1);
		}

		::System::Void Sync(::DLCNDCKCIPC* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::DLCNDCKCIPC*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEINGAMESTORYINFO_SYNC_OFFSET))(this, a1, a2);
		}

		::System::Void Sync_1(::MOIOKCDLNHE* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::MOIOKCDLNHE*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEINGAMESTORYINFO_SYNC_1_OFFSET))(this, a1, a2);
		}

		::System::Void Sync_2(::NLMIDIGAMEL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NLMIDIGAMEL*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEINGAMESTORYINFO_SYNC_2_OFFSET))(this, a1);
		}

		::System::Void Sync_3(::NNAGIDCACGI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NNAGIDCACGI*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEINGAMESTORYINFO_SYNC_3_OFFSET))(this, a1);
		}

		::System::Void Sync_4(::OGHPKFMNNHL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OGHPKFMNNHL*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEINGAMESTORYINFO_SYNC_4_OFFSET))(this, a1);
		}

		::System::UInt32 get_CurMainStoryID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEINGAMESTORYINFO_GET_CURMAINSTORYID_OFFSET))(this);
		}

		::System::Void set_CurMainStoryID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEINGAMESTORYINFO_SET_CURMAINSTORYID_OFFSET))(this, a1);
		}

		::System::UInt32 get_CurSubStoryID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEINGAMESTORYINFO_GET_CURSUBSTORYID_OFFSET))(this);
		}

		::System::Void set_CurSubStoryID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEINGAMESTORYINFO_SET_CURSUBSTORYID_OFFSET))(this, a1);
		}

		::System::Boolean get_HasUnfinishedSubStory()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEINGAMESTORYINFO_GET_HASUNFINISHEDSUBSTORY_OFFSET))(this);
		}

		::System::UInt32 get_WaitingSubStoryFinishLayerIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEINGAMESTORYINFO_GET_WAITINGSUBSTORYFINISHLAYERINDEX_OFFSET))(this);
		}

		::System::Collections::Generic::HashSet_1<::System::UInt32>* get_SubStorySelectedOptionDialogueEventIDs()
		{
			return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEINGAMESTORYINFO_GET_SUBSTORYSELECTEDOPTIONDIALOGUEEVENTIDS_OFFSET))(this);
		}

		::System::Void set_SubStorySelectedOptionDialogueEventIDs(::System::Collections::Generic::HashSet_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEINGAMESTORYINFO_SET_SUBSTORYSELECTEDOPTIONDIALOGUEEVENTIDS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_RecommendedSubStoryIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEINGAMESTORYINFO_GET_RECOMMENDEDSUBSTORYIDS_OFFSET))(this);
		}

	};
}
