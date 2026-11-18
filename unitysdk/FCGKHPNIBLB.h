#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BIHPBFHEOOA.h"
#include "unitysdk/OPEGLNLLKBN.h"

#define FCGKHPNIBLB__CTOR_OFFSET UNITYSDK_OFFSET(0x1DAB9D80)

inline static constexpr unsigned int FCGKHPNIBLB_TypeDefinitionIndex = 93954;

class FCGKHPNIBLB : public ::BIHPBFHEOOA
{
public:
	::OPEGLNLLKBN IHOGFODHPFE; // 0x10
	::System::Boolean LGPPHDCJIKM; // 0x14
	::System::Byte _padding0[0x3];
	::System::Int32 NHAHOKAHGDA; // 0x18
	::System::Int32 KADFBBNPHCF; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCGKHPNIBLB__CTOR_OFFSET))(this);
	}
};
