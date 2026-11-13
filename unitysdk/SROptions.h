#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class SROptions;
class SROptionsPropertyChanged;
namespace System { class String; }
namespace System::ComponentModel { class PropertyChangedEventHandler; }

#define SROPTIONS_ADD_INTERFACEPROPERTYCHANGEDEVENTHANDLER_OFFSET UNITYSDK_OFFSET(0x1F0D13C0)
#define SROPTIONS_ADD_PROPERTYCHANGED_OFFSET UNITYSDK_OFFSET(0x1F0D1220)
#define SROPTIONS_CTOR_OFFSET UNITYSDK_OFFSET(0x1F0D1210)
#define SROPTIONS_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1F0D1180)
#define SROPTIONS_ONPROPERTYCHANGED_OFFSET UNITYSDK_OFFSET(0x1F0D1320)
#define SROPTIONS_ONSTARTUP_OFFSET UNITYSDK_OFFSET(0x1F0D1190)
#define SROPTIONS_REMOVE_INTERFACEPROPERTYCHANGEDEVENTHANDLER_OFFSET UNITYSDK_OFFSET(0x1F0D1420)
#define SROPTIONS_REMOVE_PROPERTYCHANGED_OFFSET UNITYSDK_OFFSET(0x1F0D12A0)
#define SROPTIONS_SYSTEM_COMPONENTMODEL_INOTIFYPROPERTYCHANGED_ADD_PROPERTYCHANGED_OFFSET UNITYSDK_OFFSET(0x1F0D1480)
#define SROPTIONS_SYSTEM_COMPONENTMODEL_INOTIFYPROPERTYCHANGED_REMOVE_PROPERTYCHANGED_OFFSET UNITYSDK_OFFSET(0x1F0D14E0)

inline static constexpr unsigned int SROptions_TypeDefinitionIndex = 46951;

	class SROptions : public ::System::Object
	{
	public:
		::System::ComponentModel::PropertyChangedEventHandler* InterfacePropertyChangedEventHandler; // 0x10
		::SROptionsPropertyChanged* PropertyChanged; // 0x18
		static ::SROptions** StaticGet__current()
		{
			return (::SROptions**)UnitySDK::FromName("", "SROptions")->GetStaticField(0x33F00);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SROPTIONS_CTOR_OFFSET))(this);
		}

		static ::SROptions* get_Current()
		{
			return ((::SROptions*(*)())((::PBYTE)hIl2Cpp + SROPTIONS_GET_CURRENT_OFFSET))();
		}

		static ::System::Void OnStartup()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SROPTIONS_ONSTARTUP_OFFSET))();
		}

		::System::Void add_PropertyChanged(::SROptionsPropertyChanged* a1)
		{
			return ((::System::Void(*)(::PVOID, ::SROptionsPropertyChanged*))((::PBYTE)hIl2Cpp + SROPTIONS_ADD_PROPERTYCHANGED_OFFSET))(this, a1);
		}

		::System::Void remove_PropertyChanged(::SROptionsPropertyChanged* a1)
		{
			return ((::System::Void(*)(::PVOID, ::SROptionsPropertyChanged*))((::PBYTE)hIl2Cpp + SROPTIONS_REMOVE_PROPERTYCHANGED_OFFSET))(this, a1);
		}

		::System::Void OnPropertyChanged(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SROPTIONS_ONPROPERTYCHANGED_OFFSET))(this, a1);
		}

		::System::Void add_InterfacePropertyChangedEventHandler(::System::ComponentModel::PropertyChangedEventHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::PropertyChangedEventHandler*))((::PBYTE)hIl2Cpp + SROPTIONS_ADD_INTERFACEPROPERTYCHANGEDEVENTHANDLER_OFFSET))(this, a1);
		}

		::System::Void remove_InterfacePropertyChangedEventHandler(::System::ComponentModel::PropertyChangedEventHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::PropertyChangedEventHandler*))((::PBYTE)hIl2Cpp + SROPTIONS_REMOVE_INTERFACEPROPERTYCHANGEDEVENTHANDLER_OFFSET))(this, a1);
		}

		::System::Void System_ComponentModel_INotifyPropertyChanged_add_PropertyChanged(::System::ComponentModel::PropertyChangedEventHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::PropertyChangedEventHandler*))((::PBYTE)hIl2Cpp + SROPTIONS_SYSTEM_COMPONENTMODEL_INOTIFYPROPERTYCHANGED_ADD_PROPERTYCHANGED_OFFSET))(this, a1);
		}

		::System::Void System_ComponentModel_INotifyPropertyChanged_remove_PropertyChanged(::System::ComponentModel::PropertyChangedEventHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::PropertyChangedEventHandler*))((::PBYTE)hIl2Cpp + SROPTIONS_SYSTEM_COMPONENTMODEL_INOTIFYPROPERTYCHANGED_REMOVE_PROPERTYCHANGED_OFFSET))(this, a1);
		}

	};
