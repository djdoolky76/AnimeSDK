#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AE27555029C18F7E.h"

namespace System { class String; }

#define A68FD843E1A2D355__CTOR_OFFSET UNITYSDK_OFFSET(0x261C020)

inline static constexpr unsigned int A68FD843E1A2D355_TypeDefinitionIndex = 5948;

class A68FD843E1A2D355 : public ::AE27555029C18F7E
{
public:
	::System::Void _ctor(::System::String* B4F5ACC1795A1E8D)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + A68FD843E1A2D355__CTOR_OFFSET))(this, B4F5ACC1795A1E8D);
	}
};
