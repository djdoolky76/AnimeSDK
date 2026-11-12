#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DDAMEHEPOBD;
class FBFODNFGMKG;
namespace RPG::Client { class GridFightForgeItemData; }
namespace Sofa::Core { template <typename T1, typename T2> class ObservableDictionary_2; }

#define RPG_CLIENT_GRIDFIGHTFORGEINFO_CLEAR_OFFSET UNITYSDK_OFFSET(0xDAF7D50)
#define RPG_CLIENT_GRIDFIGHTFORGEINFO_CTOR_OFFSET UNITYSDK_OFFSET(0xDAF8FC0)
#define RPG_CLIENT_GRIDFIGHTFORGEINFO_GET_FORGEITEMDATADICT_OFFSET UNITYSDK_OFFSET(0xDAF8FA0)
#define RPG_CLIENT_GRIDFIGHTFORGEINFO_SETCOLLECTOR_OFFSET UNITYSDK_OFFSET(0xDAF7E70)
#define RPG_CLIENT_GRIDFIGHTFORGEINFO_SET_FORGEITEMDATADICT_OFFSET UNITYSDK_OFFSET(0xDAF8FB0)
#define RPG_CLIENT_GRIDFIGHTFORGEINFO_SYNCADD_OFFSET UNITYSDK_OFFSET(0xDAF8190)
#define RPG_CLIENT_GRIDFIGHTFORGEINFO_SYNCREMOVE_OFFSET UNITYSDK_OFFSET(0xDAF8E40)
#define RPG_CLIENT_GRIDFIGHTFORGEINFO_SYNCUPDATE_OFFSET UNITYSDK_OFFSET(0xDAF8650)
#define RPG_CLIENT_GRIDFIGHTFORGEINFO__ADDITEM_OFFSET UNITYSDK_OFFSET(0xDAF82A0)
#define RPG_CLIENT_GRIDFIGHTFORGEINFO__CLEARITEMS_OFFSET UNITYSDK_OFFSET(0xDAF7DF0)
#define RPG_CLIENT_GRIDFIGHTFORGEINFO__GETITEM_OFFSET UNITYSDK_OFFSET(0xDAF86D0)
#define RPG_CLIENT_GRIDFIGHTFORGEINFO__REMOVEITEM_OFFSET UNITYSDK_OFFSET(0xDAF8F10)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightForgeInfo_TypeDefinitionIndex = 66588;

	class GridFightForgeInfo : public ::System::Object
	{
	public:
		::FBFODNFGMKG* _Collector; // 0x10
		::Sofa::Core::ObservableDictionary_2<::System::UInt32, ::RPG::Client::GridFightForgeItemData*>* _ForgeItemDataDict_k__BackingField; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGEINFO_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGEINFO_CLEAR_OFFSET))(this);
		}

		::System::Void SetCollector(::FBFODNFGMKG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FBFODNFGMKG*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGEINFO_SETCOLLECTOR_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightForgeItemData* SyncAdd(::DDAMEHEPOBD* a1)
		{
			return ((::RPG::Client::GridFightForgeItemData*(*)(::PVOID, ::DDAMEHEPOBD*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGEINFO_SYNCADD_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightForgeItemData* SyncUpdate(::DDAMEHEPOBD* a1)
		{
			return ((::RPG::Client::GridFightForgeItemData*(*)(::PVOID, ::DDAMEHEPOBD*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGEINFO_SYNCUPDATE_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightForgeItemData* SyncRemove(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightForgeItemData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGEINFO_SYNCREMOVE_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightForgeItemData* _GetItem(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightForgeItemData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGEINFO__GETITEM_OFFSET))(this, a1);
		}

		::System::Void _AddItem(::RPG::Client::GridFightForgeItemData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightForgeItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGEINFO__ADDITEM_OFFSET))(this, a1);
		}

		::System::Void _RemoveItem(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGEINFO__REMOVEITEM_OFFSET))(this, a1);
		}

		::System::Void _ClearItems()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGEINFO__CLEARITEMS_OFFSET))(this);
		}

		::Sofa::Core::ObservableDictionary_2<::System::UInt32, ::RPG::Client::GridFightForgeItemData*>* get_ForgeItemDataDict()
		{
			return ((::Sofa::Core::ObservableDictionary_2<::System::UInt32, ::RPG::Client::GridFightForgeItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGEINFO_GET_FORGEITEMDATADICT_OFFSET))(this);
		}

		::System::Void set_ForgeItemDataDict(::Sofa::Core::ObservableDictionary_2<::System::UInt32, ::RPG::Client::GridFightForgeItemData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Sofa::Core::ObservableDictionary_2<::System::UInt32, ::RPG::Client::GridFightForgeItemData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGEINFO_SET_FORGEITEMDATADICT_OFFSET))(this, a1);
		}

	};
}
