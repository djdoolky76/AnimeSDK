#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define GBBHKCJGMNL_LGOENCKAGOH_OFFSET UNITYSDK_OFFSET(0x10EE06B0)
#define GBBHKCJGMNL_NCNBEKLHBDI_OFFSET UNITYSDK_OFFSET(0x10EE06A0)
#define GBBHKCJGMNL__CTOR_OFFSET UNITYSDK_OFFSET(0x10EE0880)

inline static constexpr unsigned int GBBHKCJGMNL_TypeDefinitionIndex = 74230;

class GBBHKCJGMNL : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBBHKCJGMNL__CTOR_OFFSET))(this);
	}

	::System::Boolean NCNBEKLHBDI()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GBBHKCJGMNL_NCNBEKLHBDI_OFFSET))(this);
	}

	::System::Boolean LGOENCKAGOH(::System::Int32 OMOLJBGIBAC)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GBBHKCJGMNL_LGOENCKAGOH_OFFSET))(this, OMOLJBGIBAC);
	}
};
