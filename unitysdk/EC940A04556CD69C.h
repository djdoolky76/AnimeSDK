#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/A7127AC734CB39BB.h"

namespace System { class String; }

#define EC940A04556CD69C_A221732953EC3F4B_OFFSET UNITYSDK_OFFSET(0x1CE2540)
#define EC940A04556CD69C_A4D4626CE4681111_OFFSET UNITYSDK_OFFSET(0x16E1590)
#define EC940A04556CD69C_F179CF8287A0EC92_OFFSET UNITYSDK_OFFSET(0x184C910)
#define EC940A04556CD69C__CTOR_OFFSET UNITYSDK_OFFSET(0x2ABFB00)

inline static constexpr unsigned int EC940A04556CD69C_TypeDefinitionIndex = 19186;

class EC940A04556CD69C : public ::A7127AC734CB39BB
{
public:
	::System::String* F725A674CBCB8D22; // 0x40
	::System::String* A29A21B58E217483; // 0x48
	::System::Single E41A9FD3E80D190F; // 0x50

	::System::Void F179CF8287A0EC92(::System::String* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EC940A04556CD69C_F179CF8287A0EC92_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Void A221732953EC3F4B(::System::Single E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EC940A04556CD69C_A221732953EC3F4B_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Void A4D4626CE4681111(::System::String* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EC940A04556CD69C_A4D4626CE4681111_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EC940A04556CD69C__CTOR_OFFSET))(this);
	}
};
