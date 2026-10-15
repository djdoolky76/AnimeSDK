#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NFHKMGFPINI_CTOR_OFFSET UNITYSDK_OFFSET(0xBB93F50)
#define NFHKMGFPINI_GET_ACTIVEACTIONIDLIST_OFFSET UNITYSDK_OFFSET(0xBB93F30)
#define NFHKMGFPINI_GET_ACTIVEPARTIDLIST_OFFSET UNITYSDK_OFFSET(0xBB93F10)
#define NFHKMGFPINI_GET_FINISHEDACTIONNUM_OFFSET UNITYSDK_OFFSET(0xBB93EF0)
#define NFHKMGFPINI_SET_ACTIVEACTIONIDLIST_OFFSET UNITYSDK_OFFSET(0xBB93F40)
#define NFHKMGFPINI_SET_ACTIVEPARTIDLIST_OFFSET UNITYSDK_OFFSET(0xBB93F20)
#define NFHKMGFPINI_SET_FINISHEDACTIONNUM_OFFSET UNITYSDK_OFFSET(0xBB93F00)

	class NFHKMGFPINI : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _ActiveActionIDList_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* _ActivePartIDList_k__BackingField; // 0x18
		::System::UInt32 _FinishedActionNum_k__BackingField; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFHKMGFPINI_CTOR_OFFSET))(this);
		}

		::System::UInt32 get_FinishedActionNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NFHKMGFPINI_GET_FINISHEDACTIONNUM_OFFSET))(this);
		}

		::System::Void set_FinishedActionNum(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NFHKMGFPINI_SET_FINISHEDACTIONNUM_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_ActivePartIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NFHKMGFPINI_GET_ACTIVEPARTIDLIST_OFFSET))(this);
		}

		::System::Void set_ActivePartIDList(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + NFHKMGFPINI_SET_ACTIVEPARTIDLIST_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_ActiveActionIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NFHKMGFPINI_GET_ACTIVEACTIONIDLIST_OFFSET))(this);
		}

		::System::Void set_ActiveActionIDList(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + NFHKMGFPINI_SET_ACTIVEACTIONIDLIST_OFFSET))(this, a1);
		}

	};
