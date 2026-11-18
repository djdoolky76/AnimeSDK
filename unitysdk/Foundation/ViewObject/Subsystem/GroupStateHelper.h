#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/Subsystem/GroupStateChangeListenEntry.h"
#include "unitysdk/Foundation/Tuple_2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Foundation/ViewObject/Subsystem/GroupStateChangeData.h"

namespace Foundation::ViewObject::Subsystem { class IGroupStateChangeListener; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T1, typename T2> class CNKGGMABMGE_2;

#define FOUNDATION_VIEWOBJECT_SUBSYSTEM_GROUPSTATEHELPER_ADDGLOBALLISTENER_OFFSET UNITYSDK_OFFSET(0x179C49F0)
#define FOUNDATION_VIEWOBJECT_SUBSYSTEM_GROUPSTATEHELPER_ADDLISTENER_OFFSET UNITYSDK_OFFSET(0x179C4B40)
#define FOUNDATION_VIEWOBJECT_SUBSYSTEM_GROUPSTATEHELPER_CACHESTATE_OFFSET UNITYSDK_OFFSET(0x179C51A0)
#define FOUNDATION_VIEWOBJECT_SUBSYSTEM_GROUPSTATEHELPER_CLEAR_OFFSET UNITYSDK_OFFSET(0x179C48B0)
#define FOUNDATION_VIEWOBJECT_SUBSYSTEM_GROUPSTATEHELPER_GET_INS_OFFSET UNITYSDK_OFFSET(0x179C47B0)
#define FOUNDATION_VIEWOBJECT_SUBSYSTEM_GROUPSTATEHELPER_NOTIFYGLOBALLISTENERS_OFFSET UNITYSDK_OFFSET(0x179C5280)
#define FOUNDATION_VIEWOBJECT_SUBSYSTEM_GROUPSTATEHELPER_NOTIFYGROUPSTATECHANGE_OFFSET UNITYSDK_OFFSET(0x179C5470)
#define FOUNDATION_VIEWOBJECT_SUBSYSTEM_GROUPSTATEHELPER_ONGETALLGROUPSTATE_OFFSET UNITYSDK_OFFSET(0x179C4E00)
#define FOUNDATION_VIEWOBJECT_SUBSYSTEM_GROUPSTATEHELPER_REMOVEGLOBALLISTENER_OFFSET UNITYSDK_OFFSET(0x179C4AB0)
#define FOUNDATION_VIEWOBJECT_SUBSYSTEM_GROUPSTATEHELPER_REMOVELISTENER_OFFSET UNITYSDK_OFFSET(0x179C4CD0)
#define FOUNDATION_VIEWOBJECT_SUBSYSTEM_GROUPSTATEHELPER_TRYGETSTATEVALUE_OFFSET UNITYSDK_OFFSET(0x179C59A0)
#define FOUNDATION_VIEWOBJECT_SUBSYSTEM_GROUPSTATEHELPER__CTOR_OFFSET UNITYSDK_OFFSET(0x179C5AD0)

namespace Foundation::ViewObject::Subsystem
{
	inline static constexpr unsigned int GroupStateHelper_TypeDefinitionIndex = 92176;

	class GroupStateHelper : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::Foundation::Tuple_2<::System::UInt32, ::System::String*>, ::System::Int32>* GroupStateValueCache; // 0x10
		::CNKGGMABMGE_2<::Foundation::Tuple_2<::System::UInt32, ::System::String*>, ::Foundation::ViewObject::Subsystem::GroupStateChangeListenEntry>* _groupStateChangeListenEntries; // 0x18
		::System::Collections::Generic::List_1<::Foundation::ViewObject::Subsystem::IGroupStateChangeListener*>* _globalListeners; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_SUBSYSTEM_GROUPSTATEHELPER__CTOR_OFFSET))(this);
		}

		static ::Foundation::ViewObject::Subsystem::GroupStateHelper* get_Ins()
		{
			return ((::Foundation::ViewObject::Subsystem::GroupStateHelper*(*)())((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_SUBSYSTEM_GROUPSTATEHELPER_GET_INS_OFFSET))();
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_SUBSYSTEM_GROUPSTATEHELPER_CLEAR_OFFSET))(this);
		}

		::System::Void AddGlobalListener(::Foundation::ViewObject::Subsystem::IGroupStateChangeListener* listener)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::Subsystem::IGroupStateChangeListener*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_SUBSYSTEM_GROUPSTATEHELPER_ADDGLOBALLISTENER_OFFSET))(this, listener);
		}

		::System::Void RemoveGlobalListener(::Foundation::ViewObject::Subsystem::IGroupStateChangeListener* listener)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::Subsystem::IGroupStateChangeListener*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_SUBSYSTEM_GROUPSTATEHELPER_REMOVEGLOBALLISTENER_OFFSET))(this, listener);
		}

		::System::Void AddListener(::Foundation::ViewObject::Subsystem::GroupStateChangeListenEntry entry)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::Subsystem::GroupStateChangeListenEntry))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_SUBSYSTEM_GROUPSTATEHELPER_ADDLISTENER_OFFSET))(this, entry);
		}

		::System::Void RemoveListener(::Foundation::ViewObject::Subsystem::GroupStateChangeListenEntry entry)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::Subsystem::GroupStateChangeListenEntry))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_SUBSYSTEM_GROUPSTATEHELPER_REMOVELISTENER_OFFSET))(this, entry);
		}

		::System::Void OnGetAllGroupState(::System::UInt32 groupId, ::System::Collections::Generic::IReadOnlyDictionary_2<::System::String*, ::System::Int32>* stateMap)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::IReadOnlyDictionary_2<::System::String*, ::System::Int32>*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_SUBSYSTEM_GROUPSTATEHELPER_ONGETALLGROUPSTATE_OFFSET))(this, groupId, stateMap);
		}

		::System::Void NotifyGroupStateChange(::Foundation::ViewObject::Subsystem::GroupStateChangeData data)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::Subsystem::GroupStateChangeData))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_SUBSYSTEM_GROUPSTATEHELPER_NOTIFYGROUPSTATECHANGE_OFFSET))(this, data);
		}

		::System::Void NotifyGlobalListeners(::Foundation::ViewObject::Subsystem::GroupStateChangeData data)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::Subsystem::GroupStateChangeData))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_SUBSYSTEM_GROUPSTATEHELPER_NOTIFYGLOBALLISTENERS_OFFSET))(this, data);
		}

		::System::Void CacheState(::Foundation::Tuple_2<::System::UInt32, ::System::String*> key, ::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::Tuple_2<::System::UInt32, ::System::String*>, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_SUBSYSTEM_GROUPSTATEHELPER_CACHESTATE_OFFSET))(this, key, value);
		}

		::System::Boolean TryGetStateValue(::Foundation::Tuple_2<::System::UInt32, ::System::String*> key, ::System::Int32& value)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::Tuple_2<::System::UInt32, ::System::String*>, ::System::Int32&))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_SUBSYSTEM_GROUPSTATEHELPER_TRYGETSTATEVALUE_OFFSET))(this, key, value);
		}
	};
}
