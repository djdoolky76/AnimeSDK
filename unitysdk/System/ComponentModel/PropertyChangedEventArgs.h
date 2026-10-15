#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/EventArgs.h"
namespace System { class String; }

#define SYSTEM_COMPONENTMODEL_PROPERTYCHANGEDEVENTARGS_CTOR_OFFSET UNITYSDK_OFFSET(0x1EFEEA50)
#define SYSTEM_COMPONENTMODEL_PROPERTYCHANGEDEVENTARGS_GET_PROPERTYNAME_OFFSET UNITYSDK_OFFSET(0x1EFEEA80)

namespace System::ComponentModel
{
	class PropertyChangedEventArgs : public ::System::EventArgs
	{
	public:
		::System::String* propertyName; // 0x10
		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROPERTYCHANGEDEVENTARGS_CTOR_OFFSET))(this, a1);
		}

		::System::String* get_PropertyName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROPERTYCHANGEDEVENTARGS_GET_PROPERTYNAME_OFFSET))(this);
		}

	};
}
