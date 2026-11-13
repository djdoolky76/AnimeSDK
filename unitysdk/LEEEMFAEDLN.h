#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CLFIGBPHLHI.h"

#define LEEEMFAEDLN_CHDAMDCDHOD_OFFSET UNITYSDK_OFFSET(0x18C2E940)
#define LEEEMFAEDLN_CTOR_OFFSET UNITYSDK_OFFSET(0x18C2E950)
#define LEEEMFAEDLN_HOKENEHPKKJ_OFFSET UNITYSDK_OFFSET(0x18C2E930)

inline static constexpr unsigned int LEEEMFAEDLN_TypeDefinitionIndex = 75612;

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
