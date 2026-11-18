#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class NNAMAFIPLGB;

#define FJOKOGDDBIN_CFNDAODIMAC_MIFHFOFJIHN_OFFSET UNITYSDK_OFFSET(0x15E67B30)
#define FJOKOGDDBIN_CFNDAODIMAC__CTOR_OFFSET UNITYSDK_OFFSET(0x15E67B20)

inline static constexpr unsigned int FJOKOGDDBIN_CFNDAODIMAC_TypeDefinitionIndex = 85131;

class FJOKOGDDBIN_CFNDAODIMAC : public ::System::Object
{
public:
	::System::Int32 MDJFJPHNGCK; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJOKOGDDBIN_CFNDAODIMAC__CTOR_OFFSET))(this);
	}

	::System::Boolean MIFHFOFJIHN(::NNAMAFIPLGB* NFFNEFLKPDG)
	{
		return ((::System::Boolean(*)(::PVOID, ::NNAMAFIPLGB*))((::PBYTE)hIl2Cpp + FJOKOGDDBIN_CFNDAODIMAC_MIFHFOFJIHN_OFFSET))(this, NFFNEFLKPDG);
	}
};
