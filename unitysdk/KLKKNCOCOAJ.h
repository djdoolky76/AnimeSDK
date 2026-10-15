#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KLKKNCOCOAJ;
namespace System { class Object; }
namespace System::Collections::Specialized { class NotifyCollectionChangedEventArgs; }
namespace System::ComponentModel { class PropertyChangedEventArgs; }

#define KLKKNCOCOAJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB52C350)
#define KLKKNCOCOAJ_GGBLHEHJBDO_OFFSET UNITYSDK_OFFSET(0xB52C2C0)
#define KLKKNCOCOAJ_ONCOLLECTIONCHANGEDEVENTHANDLER_OFFSET UNITYSDK_OFFSET(0xB52C3B0)
#define KLKKNCOCOAJ_ONPROPERTYCHANGEDEVENTHANDLER_OFFSET UNITYSDK_OFFSET(0xB52C360)

	class KLKKNCOCOAJ : public ::System::Object
	{
	public:
		static ::KLKKNCOCOAJ** StaticGet_FLMODBLFAGD()
		{
			return (::KLKKNCOCOAJ**)UnitySDK::FromName("", "KLKKNCOCOAJ")->GetStaticField(0x5E960);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLKKNCOCOAJ_CTOR_OFFSET))(this);
		}

		static ::KLKKNCOCOAJ* GGBLHEHJBDO()
		{
			return ((::KLKKNCOCOAJ*(*)())((::PBYTE)hIl2Cpp + KLKKNCOCOAJ_GGBLHEHJBDO_OFFSET))();
		}

		::System::Void OnPropertyChangedEventHandler(::System::Object* a1, ::System::ComponentModel::PropertyChangedEventArgs* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::ComponentModel::PropertyChangedEventArgs*))((::PBYTE)hIl2Cpp + KLKKNCOCOAJ_ONPROPERTYCHANGEDEVENTHANDLER_OFFSET))(this, a1, a2);
		}

		::System::Void OnCollectionChangedEventHandler(::System::Object* a1, ::System::Collections::Specialized::NotifyCollectionChangedEventArgs* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Collections::Specialized::NotifyCollectionChangedEventArgs*))((::PBYTE)hIl2Cpp + KLKKNCOCOAJ_ONCOLLECTIONCHANGEDEVENTHANDLER_OFFSET))(this, a1, a2);
		}

	};
