#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OCIKBEJKPCB.h"

class HBNLOOGLJKH;

#define KCAKIIHIBDB_KJHFBOCBADC_OFFSET UNITYSDK_OFFSET(0x17B672A0)
#define KCAKIIHIBDB_MCFILHLNBPK_OFFSET UNITYSDK_OFFSET(0x17B67330)
#define KCAKIIHIBDB__CTOR_OFFSET UNITYSDK_OFFSET(0x17B67320)

inline static constexpr unsigned int KCAKIIHIBDB_TypeDefinitionIndex = 60062;

class KCAKIIHIBDB : public ::OCIKBEJKPCB
{
public:
	::HBNLOOGLJKH* FGMKOKHBKND; // 0x90

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCAKIIHIBDB__CTOR_OFFSET))(this);
	}

	::System::Void KJHFBOCBADC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCAKIIHIBDB_KJHFBOCBADC_OFFSET))(this);
	}

	::System::Void MCFILHLNBPK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCAKIIHIBDB_MCFILHLNBPK_OFFSET))(this);
	}
};
