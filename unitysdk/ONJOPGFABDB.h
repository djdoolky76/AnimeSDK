#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define ONJOPGFABDB__CTOR_OFFSET UNITYSDK_OFFSET(0x18457A50)

inline static constexpr unsigned int ONJOPGFABDB_TypeDefinitionIndex = 57749;

class ONJOPGFABDB : public ::System::Object
{
public:
	::System::Int32 HPDKPILNKCH; // 0x10
	::System::Int32 CEKBLDFHFAH; // 0x14
	::System::Int32 POJNDJHFHCM; // 0x18
	::System::Boolean BBELAGJLJBF; // 0x1C
	::System::Boolean CBGAAIOIFAD; // 0x1D

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONJOPGFABDB__CTOR_OFFSET))(this);
	}
};
