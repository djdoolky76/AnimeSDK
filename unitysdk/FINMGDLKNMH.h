#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FINMGDLKNMH_CTOR_OFFSET UNITYSDK_OFFSET(0x166D01E0)
#define FINMGDLKNMH_GET_ISTUTORIAL_OFFSET UNITYSDK_OFFSET(0x166D0180)
#define FINMGDLKNMH_GET_LOCKDRIVERID_OFFSET UNITYSDK_OFFSET(0x166D01A0)
#define FINMGDLKNMH_GET_MATCHID_OFFSET UNITYSDK_OFFSET(0x166D0120)
#define FINMGDLKNMH_GET_NAME_OFFSET UNITYSDK_OFFSET(0x166D0160)
#define FINMGDLKNMH_GET_TEAMRANKLIST_OFFSET UNITYSDK_OFFSET(0x166D01C0)
#define FINMGDLKNMH_GET_TRACKIDLIST_OFFSET UNITYSDK_OFFSET(0x166D0140)
#define FINMGDLKNMH_SET_ISTUTORIAL_OFFSET UNITYSDK_OFFSET(0x166D0190)
#define FINMGDLKNMH_SET_LOCKDRIVERID_OFFSET UNITYSDK_OFFSET(0x166D01B0)
#define FINMGDLKNMH_SET_MATCHID_OFFSET UNITYSDK_OFFSET(0x166D0130)
#define FINMGDLKNMH_SET_NAME_OFFSET UNITYSDK_OFFSET(0x166D0170)
#define FINMGDLKNMH_SET_TEAMRANKLIST_OFFSET UNITYSDK_OFFSET(0x166D01D0)
#define FINMGDLKNMH_SET_TRACKIDLIST_OFFSET UNITYSDK_OFFSET(0x166D0150)

inline static constexpr unsigned int FINMGDLKNMH_TypeDefinitionIndex = 84451;

	class FINMGDLKNMH : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _TrackIDList_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* _TeamRankList_k__BackingField; // 0x18
		::System::UInt32 _MatchID_k__BackingField; // 0x20
		::System::Boolean _IsTutorial_k__BackingField; // 0x24
		::System::Byte _padding0[0x3];
		::RPG::Client::TextID _Name_k__BackingField; // 0x28
		::System::UInt32 _LockDriverID_k__BackingField; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FINMGDLKNMH_CTOR_OFFSET))(this);
		}

		::System::UInt32 get_MatchID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FINMGDLKNMH_GET_MATCHID_OFFSET))(this);
		}

		::System::Void set_MatchID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FINMGDLKNMH_SET_MATCHID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_TrackIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FINMGDLKNMH_GET_TRACKIDLIST_OFFSET))(this);
		}

		::System::Void set_TrackIDList(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + FINMGDLKNMH_SET_TRACKIDLIST_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + FINMGDLKNMH_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + FINMGDLKNMH_SET_NAME_OFFSET))(this, a1);
		}

		::System::Boolean get_IsTutorial()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FINMGDLKNMH_GET_ISTUTORIAL_OFFSET))(this);
		}

		::System::Void set_IsTutorial(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FINMGDLKNMH_SET_ISTUTORIAL_OFFSET))(this, a1);
		}

		::System::UInt32 get_LockDriverID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FINMGDLKNMH_GET_LOCKDRIVERID_OFFSET))(this);
		}

		::System::Void set_LockDriverID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FINMGDLKNMH_SET_LOCKDRIVERID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_TeamRankList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FINMGDLKNMH_GET_TEAMRANKLIST_OFFSET))(this);
		}

		::System::Void set_TeamRankList(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + FINMGDLKNMH_SET_TEAMRANKLIST_OFFSET))(this, a1);
		}

	};
