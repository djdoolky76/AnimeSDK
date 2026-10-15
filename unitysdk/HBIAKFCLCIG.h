#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/CAHKKMIFGGB.h"
class BOIKIMJHDHK;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HBIAKFCLCIG_CJDNCBHLOGD_OFFSET UNITYSDK_OFFSET(0x15C046C0)
#define HBIAKFCLCIG_CTOR_OFFSET UNITYSDK_OFFSET(0x15C04910)
#define HBIAKFCLCIG_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x15C046A0)
#define HBIAKFCLCIG_GET__SORTITEMS_OFFSET UNITYSDK_OFFSET(0x15C04900)
#define HBIAKFCLCIG_SET_INDEX_OFFSET UNITYSDK_OFFSET(0x15C046B0)

	class HBIAKFCLCIG : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::BOIKIMJHDHK*>* __SortItems_k__BackingField; // 0x10
		::System::UInt32 _Index_k__BackingField; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBIAKFCLCIG_CTOR_OFFSET))(this);
		}

		::System::UInt32 get_Index()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HBIAKFCLCIG_GET_INDEX_OFFSET))(this);
		}

		::System::Void set_Index(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HBIAKFCLCIG_SET_INDEX_OFFSET))(this, a1);
		}

		::System::Int32 CJDNCBHLOGD(::System::UInt32 a1, ::System::UInt32 a2, ::CAHKKMIFGGB a3)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::CAHKKMIFGGB))((::PBYTE)hIl2Cpp + HBIAKFCLCIG_CJDNCBHLOGD_OFFSET))(this, a1, a2, a3);
		}

		::System::Collections::Generic::List_1<::BOIKIMJHDHK*>* get__SortItems()
		{
			return ((::System::Collections::Generic::List_1<::BOIKIMJHDHK*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBIAKFCLCIG_GET__SORTITEMS_OFFSET))(this);
		}

	};
