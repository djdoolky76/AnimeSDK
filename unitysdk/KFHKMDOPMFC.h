#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KFHKMDOPMFC_CTOR_OFFSET UNITYSDK_OFFSET(0x176E2F40)
#define KFHKMDOPMFC_GET_CARIDLIST_OFFSET UNITYSDK_OFFSET(0x176E2EC0)
#define KFHKMDOPMFC_GET_CYCLEID_OFFSET UNITYSDK_OFFSET(0x176E2E60)
#define KFHKMDOPMFC_GET_DRIVERIDLIST_OFFSET UNITYSDK_OFFSET(0x176E2EA0)
#define KFHKMDOPMFC_GET_NAME_OFFSET UNITYSDK_OFFSET(0x176E2E80)
#define KFHKMDOPMFC_GET_PAINTIDLIST_OFFSET UNITYSDK_OFFSET(0x176E2EE0)
#define KFHKMDOPMFC_GET_PARTIDLIST_OFFSET UNITYSDK_OFFSET(0x176E2F00)
#define KFHKMDOPMFC_GET_TEAMIDLIST_OFFSET UNITYSDK_OFFSET(0x176E2F20)
#define KFHKMDOPMFC_SET_CARIDLIST_OFFSET UNITYSDK_OFFSET(0x176E2ED0)
#define KFHKMDOPMFC_SET_CYCLEID_OFFSET UNITYSDK_OFFSET(0x176E2E70)
#define KFHKMDOPMFC_SET_DRIVERIDLIST_OFFSET UNITYSDK_OFFSET(0x176E2EB0)
#define KFHKMDOPMFC_SET_NAME_OFFSET UNITYSDK_OFFSET(0x176E2E90)
#define KFHKMDOPMFC_SET_PAINTIDLIST_OFFSET UNITYSDK_OFFSET(0x176E2EF0)
#define KFHKMDOPMFC_SET_PARTIDLIST_OFFSET UNITYSDK_OFFSET(0x176E2F10)
#define KFHKMDOPMFC_SET_TEAMIDLIST_OFFSET UNITYSDK_OFFSET(0x176E2F30)

inline static constexpr unsigned int KFHKMDOPMFC_TypeDefinitionIndex = 84487;

	class KFHKMDOPMFC : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _PaintIDList_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* _DriverIDList_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* _PartIDList_k__BackingField; // 0x20
		::System::Collections::Generic::List_1<::System::UInt32>* _TeamIDList_k__BackingField; // 0x28
		::System::Collections::Generic::List_1<::System::UInt32>* _CarIDList_k__BackingField; // 0x30
		::System::UInt32 _CycleID_k__BackingField; // 0x38
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID _Name_k__BackingField; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFHKMDOPMFC_CTOR_OFFSET))(this);
		}

		::System::UInt32 get_CycleID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KFHKMDOPMFC_GET_CYCLEID_OFFSET))(this);
		}

		::System::Void set_CycleID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KFHKMDOPMFC_SET_CYCLEID_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + KFHKMDOPMFC_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + KFHKMDOPMFC_SET_NAME_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_DriverIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFHKMDOPMFC_GET_DRIVERIDLIST_OFFSET))(this);
		}

		::System::Void set_DriverIDList(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + KFHKMDOPMFC_SET_DRIVERIDLIST_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_CarIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFHKMDOPMFC_GET_CARIDLIST_OFFSET))(this);
		}

		::System::Void set_CarIDList(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + KFHKMDOPMFC_SET_CARIDLIST_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_PaintIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFHKMDOPMFC_GET_PAINTIDLIST_OFFSET))(this);
		}

		::System::Void set_PaintIDList(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + KFHKMDOPMFC_SET_PAINTIDLIST_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_PartIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFHKMDOPMFC_GET_PARTIDLIST_OFFSET))(this);
		}

		::System::Void set_PartIDList(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + KFHKMDOPMFC_SET_PARTIDLIST_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_TeamIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFHKMDOPMFC_GET_TEAMIDLIST_OFFSET))(this);
		}

		::System::Void set_TeamIDList(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + KFHKMDOPMFC_SET_TEAMIDLIST_OFFSET))(this, a1);
		}

	};
