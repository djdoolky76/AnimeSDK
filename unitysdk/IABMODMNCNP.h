#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define IABMODMNCNP__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6A0D40)

inline static constexpr unsigned int IABMODMNCNP_TypeDefinitionIndex = 94033;

class IABMODMNCNP : public ::System::Object
{
public:
	::System::Single JMLCPADPPNM; // 0x10
	::System::Int32 GBANKBFFEOD; // 0x14
	::System::Int32 ALHCANENFDN; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IABMODMNCNP__CTOR_OFFSET))(this);
	}
};
