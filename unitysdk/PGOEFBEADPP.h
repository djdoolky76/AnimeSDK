#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MACLIDNIBBE.h"

namespace System { class String; }

#define PGOEFBEADPP__CTOR_OFFSET UNITYSDK_OFFSET(0x1F7DA390)

inline static constexpr unsigned int PGOEFBEADPP_TypeDefinitionIndex = 8219;

class PGOEFBEADPP : public ::MACLIDNIBBE
{
public:
	::System::Void _ctor(::System::String* PPKJBDEOJGB)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PGOEFBEADPP__CTOR_OFFSET))(this, PPKJBDEOJGB);
	}
};
