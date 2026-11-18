#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class String; }

#define UNILABS_TIME_UDATETIME_COMPARETO_1_OFFSET UNITYSDK_OFFSET(0x1FFBCF80)
#define UNILABS_TIME_UDATETIME_COMPARETO_OFFSET UNITYSDK_OFFSET(0x1FFBCF50)
#define UNILABS_TIME_UDATETIME_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FFBCFF0)
#define UNILABS_TIME_UDATETIME_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FFBCFC0)
#define UNILABS_TIME_UDATETIME_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FFBD0A0)
#define UNILABS_TIME_UDATETIME_GET_DATETIME_OFFSET UNITYSDK_OFFSET(0x1FFBCEB0)
#define UNILABS_TIME_UDATETIME_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1FFBD140)
#define UNILABS_TIME_UDATETIME_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1FFBD1A0)
#define UNILABS_TIME_UDATETIME_ONDESERIALIZED_OFFSET UNITYSDK_OFFSET(0x1FFBD300)
#define UNILABS_TIME_UDATETIME_ONSERIALIZING_OFFSET UNITYSDK_OFFSET(0x1FFBD250)
#define UNILABS_TIME_UDATETIME_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x1FFBCF10)
#define UNILABS_TIME_UDATETIME_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1FFBCEF0)
#define UNILABS_TIME_UDATETIME_SET_DATETIME_OFFSET UNITYSDK_OFFSET(0x1FFBCEC0)
#define UNILABS_TIME_UDATETIME_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FFBD0C0)
#define UNILABS_TIME_UDATETIME__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FFBCEE0)
#define UNILABS_TIME_UDATETIME__CTOR_OFFSET UNITYSDK_OFFSET(0x1FFBCED0)

namespace UniLabs::Time
{
	inline static constexpr unsigned int UDateTime_TypeDefinitionIndex = 96693;

	class UDateTime : public ::System::Object
	{
	public:
		::System::DateTime _DateTime_k__BackingField; // 0x10
		::System::String* _DateTime; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNILABS_TIME_UDATETIME__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::DateTime dateTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + UNILABS_TIME_UDATETIME__CTOR_1_OFFSET))(this, dateTime);
		}

		::System::DateTime get_DateTime()
		{
			return ((::System::DateTime(*)(::PVOID))((::PBYTE)hIl2Cpp + UNILABS_TIME_UDATETIME_GET_DATETIME_OFFSET))(this);
		}

		::System::Void set_DateTime(::System::DateTime value)
		{
			return ((::System::Void(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + UNILABS_TIME_UDATETIME_SET_DATETIME_OFFSET))(this, value);
		}

		static ::System::DateTime op_Implicit(::UniLabs::Time::UDateTime* udt)
		{
			return ((::System::DateTime(*)(::UniLabs::Time::UDateTime*))((::PBYTE)hIl2Cpp + UNILABS_TIME_UDATETIME_OP_IMPLICIT_OFFSET))(udt);
		}

		static ::UniLabs::Time::UDateTime* op_Implicit_1(::System::DateTime dt)
		{
			return ((::UniLabs::Time::UDateTime*(*)(::System::DateTime))((::PBYTE)hIl2Cpp + UNILABS_TIME_UDATETIME_OP_IMPLICIT_1_OFFSET))(dt);
		}

		::System::Int32 CompareTo(::System::DateTime other)
		{
			return ((::System::Int32(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + UNILABS_TIME_UDATETIME_COMPARETO_OFFSET))(this, other);
		}

		::System::Int32 CompareTo_1(::UniLabs::Time::UDateTime* other)
		{
			return ((::System::Int32(*)(::PVOID, ::UniLabs::Time::UDateTime*))((::PBYTE)hIl2Cpp + UNILABS_TIME_UDATETIME_COMPARETO_1_OFFSET))(this, other);
		}

		::System::Boolean Equals(::UniLabs::Time::UDateTime* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::UniLabs::Time::UDateTime*))((::PBYTE)hIl2Cpp + UNILABS_TIME_UDATETIME_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNILABS_TIME_UDATETIME_EQUALS_1_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNILABS_TIME_UDATETIME_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNILABS_TIME_UDATETIME_TOSTRING_OFFSET))(this);
		}

		::System::Void OnAfterDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNILABS_TIME_UDATETIME_ONAFTERDESERIALIZE_OFFSET))(this);
		}

		::System::Void OnBeforeSerialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNILABS_TIME_UDATETIME_ONBEFORESERIALIZE_OFFSET))(this);
		}

		::System::Void OnSerializing(::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + UNILABS_TIME_UDATETIME_ONSERIALIZING_OFFSET))(this, context);
		}

		::System::Void OnDeserialized(::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + UNILABS_TIME_UDATETIME_ONDESERIALIZED_OFFSET))(this, context);
		}
	};
}
