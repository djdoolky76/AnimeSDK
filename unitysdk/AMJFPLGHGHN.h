#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class GIGFDLPMNND;
namespace System { class String; }

#define AMJFPLGHGHN_FDGFOHHHNHL_OFFSET UNITYSDK_OFFSET(0x7C95B0)
#define AMJFPLGHGHN__CTOR_OFFSET UNITYSDK_OFFSET(0x3657B0)

inline static constexpr unsigned int AMJFPLGHGHN_TypeDefinitionIndex = 51944;

struct alignas(8) AMJFPLGHGHN
{
	::GIGFDLPMNND* NLNNFINONOI; // 0x10
	::System::String* AELLPLBJELA; // 0x18

	::System::Void _ctor(::GIGFDLPMNND* NLNNFINONOI, ::System::String* AELLPLBJELA)
	{
		return ((::System::Void(*)(::PVOID, ::GIGFDLPMNND*, ::System::String*))((::PBYTE)hIl2Cpp + AMJFPLGHGHN__CTOR_OFFSET))(this, NLNNFINONOI, AELLPLBJELA);
	}

	::System::Void FDGFOHHHNHL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMJFPLGHGHN_FDGFOHHHNHL_OFFSET))(this);
	}
};
