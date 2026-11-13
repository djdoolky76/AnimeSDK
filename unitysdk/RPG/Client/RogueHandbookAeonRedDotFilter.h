#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseRedDotFilter.h"
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUEHANDBOOKAEONREDDOTFILTER_CTOR_OFFSET UNITYSDK_OFFSET(0x1CBFB990)
#define RPG_CLIENT_ROGUEHANDBOOKAEONREDDOTFILTER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1CBFB230)
#define RPG_CLIENT_ROGUEHANDBOOKAEONREDDOTFILTER_GET_NEWAEONDOCSUBKEYSAEONID_OFFSET UNITYSDK_OFFSET(0x1CBFB950)
#define RPG_CLIENT_ROGUEHANDBOOKAEONREDDOTFILTER_GET_NEWAEONDOCSUBKEYSAEONSTORYID_OFFSET UNITYSDK_OFFSET(0x1CBFB970)
#define RPG_CLIENT_ROGUEHANDBOOKAEONREDDOTFILTER_GET_NEWAEONDOCSUBKEYSCOUNT_OFFSET UNITYSDK_OFFSET(0x1CBFB900)
#define RPG_CLIENT_ROGUEHANDBOOKAEONREDDOTFILTER_GET_NEWAEONIDS_OFFSET UNITYSDK_OFFSET(0x1CBFB8E0)
#define RPG_CLIENT_ROGUEHANDBOOKAEONREDDOTFILTER_INIT_OFFSET UNITYSDK_OFFSET(0x1CBFB0F0)
#define RPG_CLIENT_ROGUEHANDBOOKAEONREDDOTFILTER_SET_NEWAEONDOCSUBKEYSAEONID_OFFSET UNITYSDK_OFFSET(0x1CBFB960)
#define RPG_CLIENT_ROGUEHANDBOOKAEONREDDOTFILTER_SET_NEWAEONDOCSUBKEYSAEONSTORYID_OFFSET UNITYSDK_OFFSET(0x1CBFB980)
#define RPG_CLIENT_ROGUEHANDBOOKAEONREDDOTFILTER_SET_NEWAEONIDS_OFFSET UNITYSDK_OFFSET(0x1CBFB8F0)
#define RPG_CLIENT_ROGUEHANDBOOKAEONREDDOTFILTER_UPDATEREDDOTS_OFFSET UNITYSDK_OFFSET(0x1CBFB2D0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueHandbookAeonRedDotFilter_TypeDefinitionIndex = 68784;

	class RogueHandbookAeonRedDotFilter : public ::RPG::Client::BaseRedDotFilter
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _NewAeonDocSubKeysAeonStoryID_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* _NewAeonDocSubKeysAeonID_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* _NewAeonIDs_k__BackingField; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKAEONREDDOTFILTER_CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKAEONREDDOTFILTER_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKAEONREDDOTFILTER_DISPOSE_OFFSET))(this);
		}

		::System::Void UpdateRedDots()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKAEONREDDOTFILTER_UPDATEREDDOTS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_NewAeonIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKAEONREDDOTFILTER_GET_NEWAEONIDS_OFFSET))(this);
		}

		::System::Void set_NewAeonIDs(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKAEONREDDOTFILTER_SET_NEWAEONIDS_OFFSET))(this, a1);
		}

		::System::Int32 get_NewAeonDocSubKeysCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKAEONREDDOTFILTER_GET_NEWAEONDOCSUBKEYSCOUNT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_NewAeonDocSubKeysAeonID()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKAEONREDDOTFILTER_GET_NEWAEONDOCSUBKEYSAEONID_OFFSET))(this);
		}

		::System::Void set_NewAeonDocSubKeysAeonID(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKAEONREDDOTFILTER_SET_NEWAEONDOCSUBKEYSAEONID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_NewAeonDocSubKeysAeonStoryID()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKAEONREDDOTFILTER_GET_NEWAEONDOCSUBKEYSAEONSTORYID_OFFSET))(this);
		}

		::System::Void set_NewAeonDocSubKeysAeonStoryID(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKAEONREDDOTFILTER_SET_NEWAEONDOCSUBKEYSAEONSTORYID_OFFSET))(this, a1);
		}

	};
}
