#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class COAKKJJNKCM;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LEKDBJPHNON_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x7CC250)
#define LEKDBJPHNON_TOSTRING_OFFSET UNITYSDK_OFFSET(0x7CC240)

inline static constexpr unsigned int LEKDBJPHNON_TypeDefinitionIndex = 81110;

struct alignas(8) LEKDBJPHNON
{
	::System::Collections::Generic::List_1<::COAKKJJNKCM*>* CAJCCFPEGOP; // 0x10
	::System::Boolean LCGNHLHPDLE; // 0x18
	::System::Byte _padding0[0x3];
	::System::Int32 KGBOKFGPNCD; // 0x1C

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LEKDBJPHNON_TOSTRING_OFFSET))(this);
	}

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LEKDBJPHNON_DPIHOJBBGLA_OFFSET))(this);
	}
};
