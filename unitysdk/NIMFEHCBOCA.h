#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OAOOLPCNHKA.h"

#define NIMFEHCBOCA_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x1AE246B0)
#define NIMFEHCBOCA_INEGOEGIOKM_OFFSET UNITYSDK_OFFSET(0x1AE24740)
#define NIMFEHCBOCA__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE246F0)

inline static constexpr unsigned int NIMFEHCBOCA_TypeDefinitionIndex = 72480;

class NIMFEHCBOCA : public ::OAOOLPCNHKA
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIMFEHCBOCA__CTOR_OFFSET))(this);
	}

	::System::Void FixedUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIMFEHCBOCA_FIXEDUPDATE_OFFSET))(this);
	}

	::System::Void INEGOEGIOKM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIMFEHCBOCA_INEGOEGIOKM_OFFSET))(this);
	}
};
