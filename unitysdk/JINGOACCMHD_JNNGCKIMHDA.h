#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define JINGOACCMHD_JNNGCKIMHDA_MCELEIDFOOG_OFFSET UNITYSDK_OFFSET(0x18A1F290)
#define JINGOACCMHD_JNNGCKIMHDA__CTOR_OFFSET UNITYSDK_OFFSET(0x18A1F280)

inline static constexpr unsigned int JINGOACCMHD_JNNGCKIMHDA_TypeDefinitionIndex = 54569;

class JINGOACCMHD_JNNGCKIMHDA : public ::System::Object
{
public:
	::System::Int32 MOGCGNJCNBM; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JINGOACCMHD_JNNGCKIMHDA__CTOR_OFFSET))(this);
	}

	::System::Void MCELEIDFOOG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JINGOACCMHD_JNNGCKIMHDA_MCELEIDFOOG_OFFSET))(this);
	}
};
