#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define A375536B9B082594_A4CFF253D56ECB2D_OFFSET UNITYSDK_OFFSET(0x1C0E830)
#define A375536B9B082594__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1666CA0)
#define A375536B9B082594__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int A375536B9B082594_TypeDefinitionIndex = 354;

class A375536B9B082594 : public ::System::Object
{
public:
	::A375536B9B082594* A4CFF253D56ECB2D()
	{
		return ((::A375536B9B082594*(*)(::PVOID))((::PBYTE)hIl2Cpp + A375536B9B082594_A4CFF253D56ECB2D_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A375536B9B082594__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::A375536B9B082594* BEEE7A5A60941632)
	{
		return ((::System::Void(*)(::PVOID, ::A375536B9B082594*))((::PBYTE)hIl2Cpp + A375536B9B082594__CTOR_1_OFFSET))(this, BEEE7A5A60941632);
	}
};
