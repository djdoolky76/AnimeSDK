#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PJFIMFJPMCN;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define NHGEOKPFDBE_CTOR_OFFSET UNITYSDK_OFFSET(0xBBC1A50)
#define NHGEOKPFDBE_EALCAMFAGIJ_OFFSET UNITYSDK_OFFSET(0xBBC1640)
#define NHGEOKPFDBE_GET_CAKEID_OFFSET UNITYSDK_OFFSET(0xBBC15B0)
#define NHGEOKPFDBE_GET_FRIENDUIDLIST_OFFSET UNITYSDK_OFFSET(0xBBC15D0)
#define NHGEOKPFDBE_OBDNABFJPBN_OFFSET UNITYSDK_OFFSET(0xBBC15F0)
#define NHGEOKPFDBE_SET_CAKEID_OFFSET UNITYSDK_OFFSET(0xBBC15C0)
#define NHGEOKPFDBE_SET_FRIENDUIDLIST_OFFSET UNITYSDK_OFFSET(0xBBC15E0)

	class NHGEOKPFDBE : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _FriendUIDList_k__BackingField; // 0x10
		::System::UInt32 _CakeID_k__BackingField; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHGEOKPFDBE_CTOR_OFFSET))(this);
		}

		::System::UInt32 get_CakeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NHGEOKPFDBE_GET_CAKEID_OFFSET))(this);
		}

		::System::Void set_CakeID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NHGEOKPFDBE_SET_CAKEID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::HashSet_1<::System::UInt32>* get_FriendUIDList()
		{
			return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NHGEOKPFDBE_GET_FRIENDUIDLIST_OFFSET))(this);
		}

		::System::Void set_FriendUIDList(::System::Collections::Generic::HashSet_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + NHGEOKPFDBE_SET_FRIENDUIDLIST_OFFSET))(this, a1);
		}

		::System::UInt32 OBDNABFJPBN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NHGEOKPFDBE_OBDNABFJPBN_OFFSET))(this);
		}

		::System::Void EALCAMFAGIJ(::PJFIMFJPMCN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PJFIMFJPMCN*))((::PBYTE)hIl2Cpp + NHGEOKPFDBE_EALCAMFAGIJ_OFFSET))(this, a1);
		}

	};
