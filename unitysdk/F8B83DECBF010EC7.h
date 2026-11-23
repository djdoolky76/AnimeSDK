#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define F8B83DECBF010EC7_EE8C76B731BE55CE_OFFSET UNITYSDK_OFFSET(0x21067D0)
#define F8B83DECBF010EC7__CTOR_OFFSET UNITYSDK_OFFSET(0x16DBF60)

inline static constexpr unsigned int F8B83DECBF010EC7_TypeDefinitionIndex = 8675;

struct alignas(4) F8B83DECBF010EC7
{
	::System::Int32 E06AA17D8785F0F3; // 0x10
	::System::Byte _padding0[0x4];
	::System::Int64 BD6BDD531E70F0BB; // 0x18

	/*
	::System::Int32 EE8C76B731BE55CE(::F8B83DECBF010EC7 BEEE7A5A60941632)
	{
		return ((::System::Int32(*)(::PVOID, ::F8B83DECBF010EC7))((::PBYTE)hIl2Cpp + F8B83DECBF010EC7_EE8C76B731BE55CE_OFFSET))(this, BEEE7A5A60941632);
	}
	*/

	::System::Void _ctor(::System::Int32 E7B2D56979C20620, ::System::Int64 EAE5C1E2483CA606)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int64))((::PBYTE)hIl2Cpp + F8B83DECBF010EC7__CTOR_OFFSET))(this, E7B2D56979C20620, EAE5C1E2483CA606);
	}
};
