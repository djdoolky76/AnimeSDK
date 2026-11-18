#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define ALMOBPHAHJJ_DCDCDDLLBJC_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define ALMOBPHAHJJ_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x730D20)
#define ALMOBPHAHJJ_IAELJBOKIGL_OFFSET UNITYSDK_OFFSET(0x359320)
#define ALMOBPHAHJJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x730D10)
#define ALMOBPHAHJJ__CTOR_OFFSET UNITYSDK_OFFSET(0x3F28E0)

inline static constexpr unsigned int ALMOBPHAHJJ_TypeDefinitionIndex = 63547;

struct alignas(8) ALMOBPHAHJJ
{
	::System::Int32 _NBCJFMHFKKE_k__BackingField; // 0x10
	::System::Byte _padding0[0x4];
	::System::String* _MFBEEBOOKOB_k__BackingField; // 0x18

	::System::Void _ctor(::System::Int32 COMDNFILAIC, ::System::String* INHDAAAMAAL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + ALMOBPHAHJJ__CTOR_OFFSET))(this, COMDNFILAIC, INHDAAAMAAL);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALMOBPHAHJJ_TOSTRING_OFFSET))(this);
	}

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALMOBPHAHJJ_DPIHOJBBGLA_OFFSET))(this);
	}

	::System::String* DCDCDDLLBJC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALMOBPHAHJJ_DCDCDDLLBJC_OFFSET))(this);
	}

	::System::Int32 IAELJBOKIGL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ALMOBPHAHJJ_IAELJBOKIGL_OFFSET))(this);
	}
};
