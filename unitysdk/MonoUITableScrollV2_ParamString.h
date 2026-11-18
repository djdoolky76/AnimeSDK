#pragma once
#include "unitysdk/unitysdk.h"

namespace System { class String; }

#define MONOUITABLESCROLLV2_PARAMSTRING_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x10597AC0)
#define MONOUITABLESCROLLV2_PARAMSTRING_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x10597A20)
#define MONOUITABLESCROLLV2_PARAMSTRING__CTOR_OFFSET UNITYSDK_OFFSET(0x10597AA0)

inline static constexpr unsigned int MonoUITableScrollV2_ParamString_TypeDefinitionIndex = 40093;

class MonoUITableScrollV2_ParamString
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_PARAMSTRING__CTOR_OFFSET))(this);
	}

	static ::MonoUITableScrollV2_ParamString* op_Implicit(::System::String* data)
	{
		return ((::MonoUITableScrollV2_ParamString*(*)(::System::String*))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_PARAMSTRING_OP_IMPLICIT_OFFSET))(data);
	}

	static ::System::String* op_Implicit_1(::MonoUITableScrollV2_ParamString* data)
	{
		return ((::System::String*(*)(::MonoUITableScrollV2_ParamString*))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_PARAMSTRING_OP_IMPLICIT_1_OFFSET))(data);
	}
};
