#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/A8FA77E95A5D1550.h"

#define F4117DFA09537BC7_BC8FCB218D25F8E8_OFFSET UNITYSDK_OFFSET(0x19CD3B0)
#define F4117DFA09537BC7__CTOR_OFFSET UNITYSDK_OFFSET(0x1701570)

inline static constexpr unsigned int F4117DFA09537BC7_TypeDefinitionIndex = 1681;

class F4117DFA09537BC7 : public ::A8FA77E95A5D1550
{
public:
	::System::Boolean BC8FCB218D25F8E8(::System::Single EB5670302F34D4B7)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + F4117DFA09537BC7_BC8FCB218D25F8E8_OFFSET))(this, EB5670302F34D4B7);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F4117DFA09537BC7__CTOR_OFFSET))(this);
	}
};
