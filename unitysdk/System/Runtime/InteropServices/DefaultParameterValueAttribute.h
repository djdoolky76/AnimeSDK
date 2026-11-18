#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class Object; }

#define SYSTEM_RUNTIME_INTEROPSERVICES_DEFAULTPARAMETERVALUEATTRIBUTE_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1DF3BB90)
#define SYSTEM_RUNTIME_INTEROPSERVICES_DEFAULTPARAMETERVALUEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DF3BB80)

namespace System::Runtime::InteropServices
{
	inline static constexpr unsigned int DefaultParameterValueAttribute_TypeDefinitionIndex = 3122;

	class DefaultParameterValueAttribute : public ::System::Attribute
	{
	public:
		::System::Object* value; // 0x10

		::System::Void _ctor(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_DEFAULTPARAMETERVALUEATTRIBUTE__CTOR_OFFSET))(this, value);
		}

		::System::Object* get_Value()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_DEFAULTPARAMETERVALUEATTRIBUTE_GET_VALUE_OFFSET))(this);
		}
	};
}
