#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class FateHandbookMasterItem; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_FATEHANDBOOKMASTERCOLLECTION_CTOR_OFFSET UNITYSDK_OFFSET(0xD867FD0)
#define RPG_CLIENT_FATEHANDBOOKMASTERCOLLECTION_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD867CA0)
#define RPG_CLIENT_FATEHANDBOOKMASTERCOLLECTION_GET_MASTERITEMLIST_OFFSET UNITYSDK_OFFSET(0xD868340)
#define RPG_CLIENT_FATEHANDBOOKMASTERCOLLECTION__GENERATEMASTERHANDBOOKLIST_OFFSET UNITYSDK_OFFSET(0xD867FE0)

namespace RPG::Client
{
	inline static constexpr unsigned int FateHandbookMasterCollection_TypeDefinitionIndex = 65518;

	class FateHandbookMasterCollection : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::FateHandbookMasterItem*>* _MasterItemList; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHANDBOOKMASTERCOLLECTION_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHANDBOOKMASTERCOLLECTION_DISPOSE_OFFSET))(this);
		}

		::System::Void _GenerateMasterHandbookList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHANDBOOKMASTERCOLLECTION__GENERATEMASTERHANDBOOKLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::FateHandbookMasterItem*>* get_MasterItemList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::FateHandbookMasterItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEHANDBOOKMASTERCOLLECTION_GET_MASTERITEMLIST_OFFSET))(this);
		}

	};
}
