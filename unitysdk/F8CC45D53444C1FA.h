#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class F7499DF1533C7100;

#define F8CC45D53444C1FA_E923FFF70B6EF9B2_3_OFFSET UNITYSDK_OFFSET(0x38B7FE0)
#define F8CC45D53444C1FA__CTOR_OFFSET UNITYSDK_OFFSET(0x38B8080)

inline static constexpr unsigned int F8CC45D53444C1FA_TypeDefinitionIndex = 20270;

class F8CC45D53444C1FA : public ::System::Object
{
public:
	::F7499DF1533C7100* F3E7993BB0986694; // 0x10
	::System::Int32 F4D0D577D355C2B7; // 0x18
	::System::Byte _padding0[0x4];
	::System::Object* ADA2022EEB67C78A; // 0x20
	::System::Boolean FC3228B7A88C9B22; // 0x28
	::System::Byte _padding1[0x3];
	::System::Int32 A2F5CFF5F6D1CFD1; // 0x2C

	::System::Void _ctor(::F7499DF1533C7100* F3E7993BB0986694, ::System::Int32 F4D0D577D355C2B7, ::System::Object* ADA2022EEB67C78A)
	{
		return ((::System::Void(*)(::PVOID, ::F7499DF1533C7100*, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + F8CC45D53444C1FA__CTOR_OFFSET))(this, F3E7993BB0986694, F4D0D577D355C2B7, ADA2022EEB67C78A);
	}

	::System::Void E923FFF70B6EF9B2_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F8CC45D53444C1FA_E923FFF70B6EF9B2_3_OFFSET))(this);
	}
};
