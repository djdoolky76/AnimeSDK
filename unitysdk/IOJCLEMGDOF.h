#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define IOJCLEMGDOF_DISPOSE_OFFSET UNITYSDK_OFFSET(0x791180)
#define IOJCLEMGDOF__CTOR_OFFSET UNITYSDK_OFFSET(0x358B00)

inline static constexpr unsigned int IOJCLEMGDOF_TypeDefinitionIndex = 57134;

struct alignas(8) IOJCLEMGDOF
{
	::System::String* HFEIPMCNCNI; // 0x10

	::System::Void _ctor(::System::String* AELLPLBJELA)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + IOJCLEMGDOF__CTOR_OFFSET))(this, AELLPLBJELA);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOJCLEMGDOF_DISPOSE_OFFSET))(this);
	}
};
