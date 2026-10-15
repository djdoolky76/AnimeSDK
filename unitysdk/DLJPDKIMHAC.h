#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DLJPDKIMHAC_CTOR_OFFSET UNITYSDK_OFFSET(0xF89B8E0)
#define DLJPDKIMHAC_GET_AVAILABLEPARTIDLIST_OFFSET UNITYSDK_OFFSET(0xF89B8C0)
#define DLJPDKIMHAC_GET_CARID_OFFSET UNITYSDK_OFFSET(0xF89B8A0)
#define DLJPDKIMHAC_SET_AVAILABLEPARTIDLIST_OFFSET UNITYSDK_OFFSET(0xF89B8D0)
#define DLJPDKIMHAC_SET_CARID_OFFSET UNITYSDK_OFFSET(0xF89B8B0)

inline static constexpr unsigned int DLJPDKIMHAC_TypeDefinitionIndex = 81701;

	class DLJPDKIMHAC : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _AvailablePartIDList_k__BackingField; // 0x10
		::System::UInt32 _CarID_k__BackingField; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLJPDKIMHAC_CTOR_OFFSET))(this);
		}

		::System::UInt32 get_CarID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DLJPDKIMHAC_GET_CARID_OFFSET))(this);
		}

		::System::Void set_CarID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DLJPDKIMHAC_SET_CARID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_AvailablePartIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DLJPDKIMHAC_GET_AVAILABLEPARTIDLIST_OFFSET))(this);
		}

		::System::Void set_AvailablePartIDList(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + DLJPDKIMHAC_SET_AVAILABLEPARTIDLIST_OFFSET))(this, a1);
		}

	};
