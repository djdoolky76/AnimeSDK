#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_PROPERTY_BHEILHKHAJC_OFFSET UNITYSDK_OFFSET(0xE1902D0)
#define RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_PROPERTY_CTOR_OFFSET UNITYSDK_OFFSET(0xE190340)
#define RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_PROPERTY_GET_PROPERTYID_OFFSET UNITYSDK_OFFSET(0xE18FDB0)
#define RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_PROPERTY_SET_PROPERTYID_OFFSET UNITYSDK_OFFSET(0xE190330)

namespace RPG::Client::TAUtils
{
	class MaterialPropertiesCollection_Property : public ::System::Object
	{
	public:
		::System::String* propertyName; // 0x10
		::System::Int32 _propertyID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_PROPERTY_CTOR_OFFSET))(this);
		}

		::System::Int32 get_propertyID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_PROPERTY_GET_PROPERTYID_OFFSET))(this);
		}

		::System::Void set_propertyID(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_PROPERTY_SET_PROPERTYID_OFFSET))(this, a1);
		}

		::System::Void BHEILHKHAJC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_PROPERTY_BHEILHKHAJC_OFFSET))(this);
		}

	};
}
