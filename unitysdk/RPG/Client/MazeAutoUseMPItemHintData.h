#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MAZEAUTOUSEMPITEMHINTDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xD5E0530)
#define RPG_CLIENT_MAZEAUTOUSEMPITEMHINTDATA_GETITEMCOUNT_OFFSET UNITYSDK_OFFSET(0xD5E04E0)
#define RPG_CLIENT_MAZEAUTOUSEMPITEMHINTDATA_GET_ITEMS_OFFSET UNITYSDK_OFFSET(0xD5E04D0)

namespace RPG::Client
{
	class MazeAutoUseMPItemHintData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* _Items_k__BackingField; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZEAUTOUSEMPITEMHINTDATA_CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Object*>* get_Items()
		{
			return ((::System::Collections::Generic::List_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZEAUTOUSEMPITEMHINTDATA_GET_ITEMS_OFFSET))(this);
		}

		::System::Int32 GetItemCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZEAUTOUSEMPITEMHINTDATA_GETITEMCOUNT_OFFSET))(this);
		}

	};
}
