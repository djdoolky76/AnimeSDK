#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightEquipItemData; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTMERGEEQUIPEVENT_CTOR_OFFSET UNITYSDK_OFFSET(0xD19F7C0)

namespace RPG::Client
{
	class GridFightMergeEquipEvent : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* RemoveEquips; // 0x10
		::RPG::Client::GridFightEquipItemData* RemovedItemData; // 0x18
		::System::UInt32 AddEquipUID; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMERGEEQUIPEVENT_CTOR_OFFSET))(this);
		}

	};
}
