#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Specialized { class NotifyCollectionChangedEventHandler; }
namespace System::ComponentModel { class PropertyChangedEventArgs; }
namespace System::ComponentModel { class PropertyChangedEventHandler; }

namespace Sofa::Core
{
	inline static constexpr unsigned int ObservableDictionary_2_TypeDefinitionIndex = 44105;

	template <typename T1, typename T2>
	class ObservableDictionary_2 : public ::System::Object
	{
	public:
		::System::Object* propertyChangedLock; // 0x0
		::System::Object* collectionChangedLock; // 0x0
		::System::ComponentModel::PropertyChangedEventHandler* propertyChanged; // 0x0
		::System::Collections::Specialized::NotifyCollectionChangedEventHandler* collectionChanged; // 0x0
		::System::Collections::Generic::Dictionary_2<T1, T2>* dictionary; // 0x0
		static ::System::ComponentModel::PropertyChangedEventArgs** StaticGet_CountEventArgs()
		{
			return (::System::ComponentModel::PropertyChangedEventArgs**)UnitySDK::FromName("Sofa.Core", "ObservableDictionary`2")->GetStaticField(0x0);
		}

		static ::System::ComponentModel::PropertyChangedEventArgs** StaticGet_IndexerEventArgs()
		{
			return (::System::ComponentModel::PropertyChangedEventArgs**)UnitySDK::FromName("Sofa.Core", "ObservableDictionary`2")->GetStaticField(0x0);
		}

		static ::System::ComponentModel::PropertyChangedEventArgs** StaticGet_KeysEventArgs()
		{
			return (::System::ComponentModel::PropertyChangedEventArgs**)UnitySDK::FromName("Sofa.Core", "ObservableDictionary`2")->GetStaticField(0x0);
		}

		static ::System::ComponentModel::PropertyChangedEventArgs** StaticGet_ValuesEventArgs()
		{
			return (::System::ComponentModel::PropertyChangedEventArgs**)UnitySDK::FromName("Sofa.Core", "ObservableDictionary`2")->GetStaticField(0x0);
		}

	};
}
