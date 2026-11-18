#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define AEIICODCJNC_FIPNGDCEALH_OFFSET UNITYSDK_OFFSET(0x12CE3890)
#define AEIICODCJNC_HINDHJBMGLE_OFFSET UNITYSDK_OFFSET(0x12CE38D0)
#define AEIICODCJNC__CTOR_OFFSET UNITYSDK_OFFSET(0x12CE3920)

inline static constexpr unsigned int AEIICODCJNC_TypeDefinitionIndex = 45911;

class AEIICODCJNC : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEIICODCJNC__CTOR_OFFSET))(this);
	}

	::System::Void FIPNGDCEALH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEIICODCJNC_FIPNGDCEALH_OFFSET))(this);
	}

	::System::Void HINDHJBMGLE(::System::Boolean EBFCACIEKBC, ::System::Boolean IJFHKDLHBMH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + AEIICODCJNC_HINDHJBMGLE_OFFSET))(this, EBFCACIEKBC, IJFHKDLHBMH);
	}
};
