#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CBIKOBOECJA__CTOR_OFFSET UNITYSDK_OFFSET(0x1693F880)

inline static constexpr unsigned int CBIKOBOECJA_TypeDefinitionIndex = 84309;

class CBIKOBOECJA : public ::System::Object
{
public:
	::System::String* HIAIKHDFCLN; // 0x10
	::System::String* MGMDLMBEDJF; // 0x18

	::System::Void _ctor(::System::String* MGMDLMBEDJF, ::System::String* HIAIKHDFCLN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CBIKOBOECJA__CTOR_OFFSET))(this, MGMDLMBEDJF, HIAIKHDFCLN);
	}
};
