#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AOFOEOIJEHF;
class CONONEALNOF;
class FBFODNFGMKG;
namespace RPG::Client { class GridFightConsumableInfo; }
namespace RPG::Client { class GridFightConsumableItemData; }
namespace RPG::Client { class GridFightEquipInfo; }
namespace RPG::Client { class GridFightEquipItemData; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Specialized { class NotifyCollectionChangedEventArgs; }

#define RPG_CLIENT_GRIDFIGHTITEMINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1CC2A950)
#define RPG_CLIENT_GRIDFIGHTITEMINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1CC2AA00)
#define RPG_CLIENT_GRIDFIGHTITEMINFO_GETCONSUMABLEBYID_OFFSET UNITYSDK_OFFSET(0x1CC2AB50)
#define RPG_CLIENT_GRIDFIGHTITEMINFO_GETEQUIPBYUID_OFFSET UNITYSDK_OFFSET(0x1CC2AA70)
#define RPG_CLIENT_GRIDFIGHTITEMINFO_GETEQUIPSBYID_OFFSET UNITYSDK_OFFSET(0x1CC2AAF0)
#define RPG_CLIENT_GRIDFIGHTITEMINFO_GET_ALLCONSUMABLES_OFFSET UNITYSDK_OFFSET(0x1CC2AD20)
#define RPG_CLIENT_GRIDFIGHTITEMINFO_GET_ALLEQUIPS_OFFSET UNITYSDK_OFFSET(0x1CC2AC90)
#define RPG_CLIENT_GRIDFIGHTITEMINFO_GET_CONSUMABLEINFO_OFFSET UNITYSDK_OFFSET(0x1CC2B580)
#define RPG_CLIENT_GRIDFIGHTITEMINFO_GET_EQUIPINFO_OFFSET UNITYSDK_OFFSET(0x1CC2B560)
#define RPG_CLIENT_GRIDFIGHTITEMINFO_GET_HASIDLEITEM_OFFSET UNITYSDK_OFFSET(0x1CC2ABD0)
#define RPG_CLIENT_GRIDFIGHTITEMINFO_INIT_OFFSET UNITYSDK_OFFSET(0x1CC2A960)
#define RPG_CLIENT_GRIDFIGHTITEMINFO_ONMEMBERSCHANGEDEVENTHANDLER_OFFSET UNITYSDK_OFFSET(0x1CC2AE30)
#define RPG_CLIENT_GRIDFIGHTITEMINFO_SETCOLLECTOR_OFFSET UNITYSDK_OFFSET(0x1CC2ADB0)
#define RPG_CLIENT_GRIDFIGHTITEMINFO_SET_CONSUMABLEINFO_OFFSET UNITYSDK_OFFSET(0x1CC2B590)
#define RPG_CLIENT_GRIDFIGHTITEMINFO_SET_EQUIPINFO_OFFSET UNITYSDK_OFFSET(0x1CC2B570)
#define RPG_CLIENT_GRIDFIGHTITEMINFO_SYNCREMOVE_OFFSET UNITYSDK_OFFSET(0x1CC2B490)
#define RPG_CLIENT_GRIDFIGHTITEMINFO_SYNCUPDATE_OFFSET UNITYSDK_OFFSET(0x1CC2B410)
#define RPG_CLIENT_GRIDFIGHTITEMINFO_SYNC_OFFSET UNITYSDK_OFFSET(0x1CC2B390)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightItemInfo_TypeDefinitionIndex = 66591;

	class GridFightItemInfo : public ::System::Object
	{
	public:
		::RPG::Client::GridFightEquipInfo* _EquipInfo_k__BackingField; // 0x10
		::RPG::Client::GridFightConsumableInfo* _ConsumableInfo_k__BackingField; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTITEMINFO_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTITEMINFO_DISPOSE_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTITEMINFO_INIT_OFFSET))(this);
		}

		::RPG::Client::GridFightEquipItemData* GetEquipByUID(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightEquipItemData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTITEMINFO_GETEQUIPBYUID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightEquipItemData*>* GetEquipsByID(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightEquipItemData*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTITEMINFO_GETEQUIPSBYID_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightConsumableItemData* GetConsumableByID(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightConsumableItemData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTITEMINFO_GETCONSUMABLEBYID_OFFSET))(this, a1);
		}

		::System::Boolean get_HasIdleItem()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTITEMINFO_GET_HASIDLEITEM_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightEquipItemData*>* get_AllEquips()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightEquipItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTITEMINFO_GET_ALLEQUIPS_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightConsumableItemData*>* get_AllConsumables()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightConsumableItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTITEMINFO_GET_ALLCONSUMABLES_OFFSET))(this);
		}

		::System::Void SetCollector(::FBFODNFGMKG* a1, ::FBFODNFGMKG* a2)
		{
			return ((::System::Void(*)(::PVOID, ::FBFODNFGMKG*, ::FBFODNFGMKG*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTITEMINFO_SETCOLLECTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnMembersChangedEventHandler(::System::Object* a1, ::System::Collections::Specialized::NotifyCollectionChangedEventArgs* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Collections::Specialized::NotifyCollectionChangedEventArgs*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTITEMINFO_ONMEMBERSCHANGEDEVENTHANDLER_OFFSET))(this, a1, a2);
		}

		::System::Void Sync(::CONONEALNOF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CONONEALNOF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTITEMINFO_SYNC_OFFSET))(this, a1);
		}

		::System::Void SyncUpdate(::AOFOEOIJEHF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AOFOEOIJEHF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTITEMINFO_SYNCUPDATE_OFFSET))(this, a1);
		}

		::System::Void SyncRemove(::AOFOEOIJEHF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AOFOEOIJEHF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTITEMINFO_SYNCREMOVE_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightEquipInfo* get_EquipInfo()
		{
			return ((::RPG::Client::GridFightEquipInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTITEMINFO_GET_EQUIPINFO_OFFSET))(this);
		}

		::System::Void set_EquipInfo(::RPG::Client::GridFightEquipInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightEquipInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTITEMINFO_SET_EQUIPINFO_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightConsumableInfo* get_ConsumableInfo()
		{
			return ((::RPG::Client::GridFightConsumableInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTITEMINFO_GET_CONSUMABLEINFO_OFFSET))(this);
		}

		::System::Void set_ConsumableInfo(::RPG::Client::GridFightConsumableInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightConsumableInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTITEMINFO_SET_CONSUMABLEINFO_OFFSET))(this, a1);
		}

	};
}
