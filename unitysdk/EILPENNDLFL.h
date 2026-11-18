#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PBHOLIIJDHB.h"
#include "unitysdk/System/ValueType.h"

class HAPOADBOJLK;
namespace System { class String; }

#define EILPENNDLFL_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x77B3E0)
#define EILPENNDLFL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x77B3D0)

inline static constexpr unsigned int EILPENNDLFL_TypeDefinitionIndex = 61242;

struct alignas(8) EILPENNDLFL
{
	::HAPOADBOJLK* LMLICLIGEGB; // 0x10
	::PBHOLIIJDHB DHDFFGJPILF; // 0x18

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EILPENNDLFL_TOSTRING_OFFSET))(this);
	}

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EILPENNDLFL_DPIHOJBBGLA_OFFSET))(this);
	}
};
