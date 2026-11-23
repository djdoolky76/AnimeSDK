#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define ABC_CONFIG_WWISESWITCH_COMPARETO_OFFSET UNITYSDK_OFFSET(0x235C810)
#define ABC_CONFIG_WWISESWITCH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x235C910)
#define ABC_CONFIG_WWISESWITCH_EQUALS_OFFSET UNITYSDK_OFFSET(0x235C860)
#define ABC_CONFIG_WWISESWITCH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x235C960)
#define ABC_CONFIG_WWISESWITCH_ISVALID_OFFSET UNITYSDK_OFFSET(0x235C9D0)

namespace ABC::Config
{
	inline static constexpr unsigned int WwiseSwitch_TypeDefinitionIndex = 3177;

	struct alignas(8) WwiseSwitch
	{
		::System::String* GroupName; // 0x10
		::System::String* SwitchName; // 0x18

		::System::Boolean IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CONFIG_WWISESWITCH_ISVALID_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* A86A90C31A146E9C)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ABC_CONFIG_WWISESWITCH_EQUALS_OFFSET))(this, A86A90C31A146E9C);
		}

		/*
		::System::Boolean Equals_1(::ABC::Config::WwiseSwitch BEEE7A5A60941632)
		{
			return ((::System::Boolean(*)(::PVOID, ::ABC::Config::WwiseSwitch))((::PBYTE)hIl2Cpp + ABC_CONFIG_WWISESWITCH_EQUALS_1_OFFSET))(this, BEEE7A5A60941632);
		}
		*/

		/*
		::System::Int32 CompareTo(::ABC::Config::WwiseSwitch BEEE7A5A60941632)
		{
			return ((::System::Int32(*)(::PVOID, ::ABC::Config::WwiseSwitch))((::PBYTE)hIl2Cpp + ABC_CONFIG_WWISESWITCH_COMPARETO_OFFSET))(this, BEEE7A5A60941632);
		}
		*/

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CONFIG_WWISESWITCH_GETHASHCODE_OFFSET))(this);
		}
	};
}
