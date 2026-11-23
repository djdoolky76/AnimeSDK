#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define ABC_CONFIG_WWISEBANK_COMPARETO_OFFSET UNITYSDK_OFFSET(0x240A8E0)
#define ABC_CONFIG_WWISEBANK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x240A900)
#define ABC_CONFIG_WWISEBANK_EQUALS_OFFSET UNITYSDK_OFFSET(0x240A910)
#define ABC_CONFIG_WWISEBANK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x240A9A0)

namespace ABC::Config
{
	inline static constexpr unsigned int WwiseBank_TypeDefinitionIndex = 4002;

	struct alignas(8) WwiseBank
	{
		::System::String* BankName; // 0x10

		::System::Boolean Equals(::System::Object* A86A90C31A146E9C)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ABC_CONFIG_WWISEBANK_EQUALS_OFFSET))(this, A86A90C31A146E9C);
		}

		/*
		::System::Int32 CompareTo(::ABC::Config::WwiseBank BEEE7A5A60941632)
		{
			return ((::System::Int32(*)(::PVOID, ::ABC::Config::WwiseBank))((::PBYTE)hIl2Cpp + ABC_CONFIG_WWISEBANK_COMPARETO_OFFSET))(this, BEEE7A5A60941632);
		}
		*/

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CONFIG_WWISEBANK_GETHASHCODE_OFFSET))(this);
		}

		/*
		::System::Boolean Equals_1(::ABC::Config::WwiseBank BEEE7A5A60941632)
		{
			return ((::System::Boolean(*)(::PVOID, ::ABC::Config::WwiseBank))((::PBYTE)hIl2Cpp + ABC_CONFIG_WWISEBANK_EQUALS_1_OFFSET))(this, BEEE7A5A60941632);
		}
		*/
	};
}
