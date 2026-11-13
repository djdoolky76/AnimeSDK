#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System::Collections::Specialized { class NotifyCollectionChangedEventArgs; }
namespace System::ComponentModel { class PropertyChangedEventArgs; }

#define RPG_CLIENT_GRIDFIGHTCONSUMABLECHANGECOLLECTOR_CTOR_OFFSET UNITYSDK_OFFSET(0x1D596A40)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLECHANGECOLLECTOR_GET_ISCONSUMABLEDATAUPDATE_OFFSET UNITYSDK_OFFSET(0x1D596A20)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLECHANGECOLLECTOR_ONCOLLECTIONCHANGEDEVENTHANDLER_OFFSET UNITYSDK_OFFSET(0x1D5969C0)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLECHANGECOLLECTOR_ONPROPERTYCHANGEDEVENTHANDLER_OFFSET UNITYSDK_OFFSET(0x1D596960)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLECHANGECOLLECTOR_RESET_OFFSET UNITYSDK_OFFSET(0x1D596920)
#define RPG_CLIENT_GRIDFIGHTCONSUMABLECHANGECOLLECTOR_SET_ISCONSUMABLEDATAUPDATE_OFFSET UNITYSDK_OFFSET(0x1D596A30)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightConsumableChangeCollector_TypeDefinitionIndex = 66083;

	class GridFightConsumableChangeCollector : public ::System::Object
	{
	public:
		::System::Boolean _IsConsumableDataUpdate_k__BackingField; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSUMABLECHANGECOLLECTOR_CTOR_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSUMABLECHANGECOLLECTOR_RESET_OFFSET))(this);
		}

		::System::Void OnPropertyChangedEventHandler(::System::Object* a1, ::System::ComponentModel::PropertyChangedEventArgs* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::ComponentModel::PropertyChangedEventArgs*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSUMABLECHANGECOLLECTOR_ONPROPERTYCHANGEDEVENTHANDLER_OFFSET))(this, a1, a2);
		}

		::System::Void OnCollectionChangedEventHandler(::System::Object* a1, ::System::Collections::Specialized::NotifyCollectionChangedEventArgs* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Collections::Specialized::NotifyCollectionChangedEventArgs*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSUMABLECHANGECOLLECTOR_ONCOLLECTIONCHANGEDEVENTHANDLER_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_IsConsumableDataUpdate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSUMABLECHANGECOLLECTOR_GET_ISCONSUMABLEDATAUPDATE_OFFSET))(this);
		}

		::System::Void set_IsConsumableDataUpdate(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCONSUMABLECHANGECOLLECTOR_SET_ISCONSUMABLEDATAUPDATE_OFFSET))(this, a1);
		}

	};
}
