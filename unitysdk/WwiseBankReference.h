#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/A2F3E384E505AFEB.h"
#include "unitysdk/WwiseObjectReference.h"

#define WWISEBANKREFERENCE_E54861D6C29167A7_OFFSET UNITYSDK_OFFSET(0x22074C0)
#define WWISEBANKREFERENCE__CTOR_OFFSET UNITYSDK_OFFSET(0x29137A0)

inline static constexpr unsigned int WwiseBankReference_TypeDefinitionIndex = 21564;

class WwiseBankReference : public ::WwiseObjectReference
{
public:
	::A2F3E384E505AFEB E54861D6C29167A7()
	{
		return ((::A2F3E384E505AFEB(*)(::PVOID))((::PBYTE)hIl2Cpp + WWISEBANKREFERENCE_E54861D6C29167A7_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WWISEBANKREFERENCE__CTOR_OFFSET))(this);
	}
};
