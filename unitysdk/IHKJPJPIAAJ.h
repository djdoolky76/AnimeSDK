#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define IHKJPJPIAAJ_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x7E7C30)
#define IHKJPJPIAAJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x7E7C20)

inline static constexpr unsigned int IHKJPJPIAAJ_TypeDefinitionIndex = 67546;

struct alignas(4) IHKJPJPIAAJ
{
	::System::Int32 ICDNAALAKNA; // 0x10
	::System::Int32 NPMHIJLDGEI; // 0x14
	::System::Int32 NJOCAOGGHBP; // 0x18
	::System::Int32 DHGMBOGDNNC; // 0x1C
	::System::Int32 GEIILEPGIOH; // 0x20
	::System::Int32 OGAEFBOEBFN; // 0x24
	::System::Int32 ENACMOBAMKK; // 0x28

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IHKJPJPIAAJ_TOSTRING_OFFSET))(this);
	}

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IHKJPJPIAAJ_DPIHOJBBGLA_OFFSET))(this);
	}
};
