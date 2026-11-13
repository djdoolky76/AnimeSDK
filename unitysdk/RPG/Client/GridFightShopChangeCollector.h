#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Specialized { class NotifyCollectionChangedEventArgs; }
namespace System::ComponentModel { class PropertyChangedEventArgs; }

#define RPG_CLIENT_GRIDFIGHTSHOPCHANGECOLLECTOR_CTOR_OFFSET UNITYSDK_OFFSET(0x1E158B70)
#define RPG_CLIENT_GRIDFIGHTSHOPCHANGECOLLECTOR_ISGOODCHANGED_OFFSET UNITYSDK_OFFSET(0x1E1588E0)
#define RPG_CLIENT_GRIDFIGHTSHOPCHANGECOLLECTOR_ONCOLLECTIONCHANGEDEVENTHANDLER_OFFSET UNITYSDK_OFFSET(0x1E158B20)
#define RPG_CLIENT_GRIDFIGHTSHOPCHANGECOLLECTOR_ONPROPERTYCHANGEDEVENTHANDLER_OFFSET UNITYSDK_OFFSET(0x1E158940)
#define RPG_CLIENT_GRIDFIGHTSHOPCHANGECOLLECTOR_RESET_OFFSET UNITYSDK_OFFSET(0x1E158840)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightShopChangeCollector_TypeDefinitionIndex = 66096;

	class GridFightShopChangeCollector : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::Int32>* _ChangedGoodIndices; // 0x10
		::System::Boolean IsDirty; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPCHANGECOLLECTOR_CTOR_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPCHANGECOLLECTOR_RESET_OFFSET))(this);
		}

		::System::Boolean IsGoodChanged(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPCHANGECOLLECTOR_ISGOODCHANGED_OFFSET))(this, a1);
		}

		::System::Void OnPropertyChangedEventHandler(::System::Object* a1, ::System::ComponentModel::PropertyChangedEventArgs* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::ComponentModel::PropertyChangedEventArgs*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPCHANGECOLLECTOR_ONPROPERTYCHANGEDEVENTHANDLER_OFFSET))(this, a1, a2);
		}

		::System::Void OnCollectionChangedEventHandler(::System::Object* a1, ::System::Collections::Specialized::NotifyCollectionChangedEventArgs* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Collections::Specialized::NotifyCollectionChangedEventArgs*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPCHANGECOLLECTOR_ONCOLLECTIONCHANGEDEVENTHANDLER_OFFSET))(this, a1, a2);
		}

	};
}
