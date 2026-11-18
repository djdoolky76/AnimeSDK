#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HNPJNICKLOJ;

#define ODAEDPKLBPE_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0xE0E9670)
#define ODAEDPKLBPE_BJANDJKKNCD_OFFSET UNITYSDK_OFFSET(0xE0E9700)
#define ODAEDPKLBPE__CTOR_OFFSET UNITYSDK_OFFSET(0xE0E9750)

inline static constexpr unsigned int ODAEDPKLBPE_TypeDefinitionIndex = 38455;

class ODAEDPKLBPE : public ::System::Object
{
public:
	::HNPJNICKLOJ* AMNIHACKELI; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODAEDPKLBPE__CTOR_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::HNPJNICKLOJ* IPMMCGDMODG)
	{
		return ((::System::Void(*)(::PVOID, ::HNPJNICKLOJ*))((::PBYTE)hIl2Cpp + ODAEDPKLBPE_BBOMJDBNHIC_OFFSET))(this, IPMMCGDMODG);
	}

	::System::Void BJANDJKKNCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODAEDPKLBPE_BJANDJKKNCD_OFFSET))(this);
	}
};
