#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FB15B066A5E7656D.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define ABC_CONFIG_WWISEEVENT_COMPARETO_OFFSET UNITYSDK_OFFSET(0x2733690)
#define ABC_CONFIG_WWISEEVENT_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x27336F0)
#define ABC_CONFIG_WWISEEVENT_EQUALS_OFFSET UNITYSDK_OFFSET(0x27337A0)
#define ABC_CONFIG_WWISEEVENT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x27337F0)
#define ABC_CONFIG_WWISEEVENT_ISVALID_OFFSET UNITYSDK_OFFSET(0x2733840)

namespace ABC::Config
{
	inline static constexpr unsigned int WwiseEvent_TypeDefinitionIndex = 3024;

	struct alignas(8) WwiseEvent
	{
		static ::ABC::Config::WwiseEvent* StaticGet_Empty()
		{
			return (::ABC::Config::WwiseEvent*)Il2CppClass::FromTypeDefinitionIndex(WwiseEvent_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::System::String* EventName; // 0x10
		::FB15B066A5E7656D EventTag; // 0x18

		/*
		::System::Boolean Equals(::ABC::Config::WwiseEvent BEEE7A5A60941632)
		{
			return ((::System::Boolean(*)(::PVOID, ::ABC::Config::WwiseEvent))((::PBYTE)hIl2Cpp + ABC_CONFIG_WWISEEVENT_EQUALS_OFFSET))(this, BEEE7A5A60941632);
		}
		*/

		::System::Boolean IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CONFIG_WWISEEVENT_ISVALID_OFFSET))(this);
		}

		::System::Boolean Equals_1(::System::Object* A86A90C31A146E9C)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ABC_CONFIG_WWISEEVENT_EQUALS_1_OFFSET))(this, A86A90C31A146E9C);
		}

		/*
		::System::Int32 CompareTo(::ABC::Config::WwiseEvent BEEE7A5A60941632)
		{
			return ((::System::Int32(*)(::PVOID, ::ABC::Config::WwiseEvent))((::PBYTE)hIl2Cpp + ABC_CONFIG_WWISEEVENT_COMPARETO_OFFSET))(this, BEEE7A5A60941632);
		}
		*/

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CONFIG_WWISEEVENT_GETHASHCODE_OFFSET))(this);
		}
	};
}
