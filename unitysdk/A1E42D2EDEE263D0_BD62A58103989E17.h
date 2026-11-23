#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class A1E42D2EDEE263D0;
namespace System { class String; }

#define A1E42D2EDEE263D0_BD62A58103989E17_AD22862159CCD5D2_OFFSET UNITYSDK_OFFSET(0x3A110F0)
#define A1E42D2EDEE263D0_BD62A58103989E17__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int A1E42D2EDEE263D0_BD62A58103989E17_TypeDefinitionIndex = 12751;

class A1E42D2EDEE263D0_BD62A58103989E17 : public ::System::Object
{
public:
	::A1E42D2EDEE263D0* A544919C800E2923; // 0x10
	::System::String* A659FB88768169A1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A1E42D2EDEE263D0_BD62A58103989E17__CTOR_OFFSET))(this);
	}

	::System::Void AD22862159CCD5D2(::System::String* BD2C65BCCC92F212)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + A1E42D2EDEE263D0_BD62A58103989E17_AD22862159CCD5D2_OFFSET))(this, BD2C65BCCC92F212);
	}
};
