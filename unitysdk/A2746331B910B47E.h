#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define A2746331B910B47E_F11FFC6AA9E22040_OFFSET UNITYSDK_OFFSET(0x17D6400)
#define A2746331B910B47E__CTOR_1_OFFSET UNITYSDK_OFFSET(0x2759260)
#define A2746331B910B47E__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int A2746331B910B47E_TypeDefinitionIndex = 21514;

class A2746331B910B47E : public ::System::Attribute
{
public:
	::System::String* A9DFDE835E8FE4EF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A2746331B910B47E__CTOR_OFFSET))(this);
	}

	::System::Void F11FFC6AA9E22040(::System::String* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + A2746331B910B47E_F11FFC6AA9E22040_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Void _ctor_1(::System::String* F79B4D487F303AB2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + A2746331B910B47E__CTOR_1_OFFSET))(this, F79B4D487F303AB2);
	}
};
