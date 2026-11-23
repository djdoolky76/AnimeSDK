#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define ABC_CONFIG_WWISESTATE_COMPARETO_OFFSET UNITYSDK_OFFSET(0x235C810)
#define ABC_CONFIG_WWISESTATE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x24D4170)
#define ABC_CONFIG_WWISESTATE_EQUALS_OFFSET UNITYSDK_OFFSET(0x235C910)
#define ABC_CONFIG_WWISESTATE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x235C960)
#define ABC_CONFIG_WWISESTATE_ISVALID_OFFSET UNITYSDK_OFFSET(0x235C9D0)

namespace ABC::Config
{
	inline static constexpr unsigned int WwiseState_TypeDefinitionIndex = 4902;

	struct alignas(8) WwiseState
	{
		::System::String* StateGroup; // 0x10
		::System::String* StateName; // 0x18

		/*
		::System::Boolean Equals(::ABC::Config::WwiseState BEEE7A5A60941632)
		{
			return ((::System::Boolean(*)(::PVOID, ::ABC::Config::WwiseState))((::PBYTE)hIl2Cpp + ABC_CONFIG_WWISESTATE_EQUALS_OFFSET))(this, BEEE7A5A60941632);
		}
		*/

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CONFIG_WWISESTATE_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CONFIG_WWISESTATE_ISVALID_OFFSET))(this);
		}

		::System::Boolean Equals_1(::System::Object* A86A90C31A146E9C)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ABC_CONFIG_WWISESTATE_EQUALS_1_OFFSET))(this, A86A90C31A146E9C);
		}

		/*
		::System::Int32 CompareTo(::ABC::Config::WwiseState BEEE7A5A60941632)
		{
			return ((::System::Int32(*)(::PVOID, ::ABC::Config::WwiseState))((::PBYTE)hIl2Cpp + ABC_CONFIG_WWISESTATE_COMPARETO_OFFSET))(this, BEEE7A5A60941632);
		}
		*/
	};
}
