#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class A2B6D5EEC81A9621;

#define A67D6F78CC524FFA_B238E87DC8A552A5_OFFSET UNITYSDK_OFFSET(0x3C019F0)
#define A67D6F78CC524FFA__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int A67D6F78CC524FFA_TypeDefinitionIndex = 10384;

class A67D6F78CC524FFA : public ::System::Object
{
public:
	::System::Int32 B1DBC9F351592049; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A67D6F78CC524FFA__CTOR_OFFSET))(this);
	}

	::System::Void B238E87DC8A552A5(::A2B6D5EEC81A9621* AF4717A1A80FD60F)
	{
		return ((::System::Void(*)(::PVOID, ::A2B6D5EEC81A9621*))((::PBYTE)hIl2Cpp + A67D6F78CC524FFA_B238E87DC8A552A5_OFFSET))(this, AF4717A1A80FD60F);
	}
};
