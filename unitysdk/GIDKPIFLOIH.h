#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class PFEOJDIJIBM;
namespace System { class String; }

#define GIDKPIFLOIH_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x772CC0)
#define GIDKPIFLOIH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x772CB0)

inline static constexpr unsigned int GIDKPIFLOIH_TypeDefinitionIndex = 47703;

struct alignas(8) GIDKPIFLOIH
{
	::System::String* MIIANIHOFLD; // 0x10
	::PFEOJDIJIBM* JPAGJLFOIDJ; // 0x18
	::System::Int32 MMMHLENHKLN; // 0x20
	::System::Int32 GKAHHHOPDCL; // 0x24
	::System::Int32 HBIHLKHJKGF; // 0x28

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GIDKPIFLOIH_TOSTRING_OFFSET))(this);
	}

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GIDKPIFLOIH_DPIHOJBBGLA_OFFSET))(this);
	}
};
