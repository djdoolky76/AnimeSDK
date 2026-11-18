#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define AILFEFJKNOA_CEKCHEAHGDL_OFFSET UNITYSDK_OFFSET(0x14214B90)
#define AILFEFJKNOA__CTOR_OFFSET UNITYSDK_OFFSET(0x14214B80)

inline static constexpr unsigned int AILFEFJKNOA_TypeDefinitionIndex = 70539;

class AILFEFJKNOA : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AILFEFJKNOA__CTOR_OFFSET))(this);
	}

	static ::System::String* CEKCHEAHGDL(::System::Int32 CGHDEGAAOOF)
	{
		return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + AILFEFJKNOA_CEKCHEAHGDL_OFFSET))(CGHDEGAAOOF);
	}
};
