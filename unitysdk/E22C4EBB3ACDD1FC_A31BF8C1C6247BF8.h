#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class E22C4EBB3ACDD1FC;
namespace System { class String; }

#define E22C4EBB3ACDD1FC_A31BF8C1C6247BF8_FF62B056F719D925_OFFSET UNITYSDK_OFFSET(0x3A432A0)
#define E22C4EBB3ACDD1FC_A31BF8C1C6247BF8__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int E22C4EBB3ACDD1FC_A31BF8C1C6247BF8_TypeDefinitionIndex = 12965;

class E22C4EBB3ACDD1FC_A31BF8C1C6247BF8 : public ::System::Object
{
public:
	::E22C4EBB3ACDD1FC* A544919C800E2923; // 0x10
	::System::String* E12C54348FF6AA6D; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E22C4EBB3ACDD1FC_A31BF8C1C6247BF8__CTOR_OFFSET))(this);
	}

	::System::Void FF62B056F719D925(::System::String* E82293C0814051A5)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + E22C4EBB3ACDD1FC_A31BF8C1C6247BF8_FF62B056F719D925_OFFSET))(this, E82293C0814051A5);
	}
};
