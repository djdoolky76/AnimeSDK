#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CLFIGBPHLHI.h"

#define LEEEMFAEDLN_CHDAMDCDHOD_OFFSET UNITYSDK_OFFSET(0xB648480)
#define LEEEMFAEDLN_CTOR_OFFSET UNITYSDK_OFFSET(0xB648490)
#define LEEEMFAEDLN_HOKENEHPKKJ_OFFSET UNITYSDK_OFFSET(0xB648470)

inline static constexpr unsigned int LEEEMFAEDLN_TypeDefinitionIndex = 73489;

	class LEEEMFAEDLN : public ::CLFIGBPHLHI
	{
	public:
		::System::Single JDFDHGPENJD; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEEEMFAEDLN_CTOR_OFFSET))(this);
		}

		::System::Single HOKENEHPKKJ()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LEEEMFAEDLN_HOKENEHPKKJ_OFFSET))(this);
		}

		::System::Void CHDAMDCDHOD(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LEEEMFAEDLN_CHDAMDCDHOD_OFFSET))(this, a1);
		}

	};
