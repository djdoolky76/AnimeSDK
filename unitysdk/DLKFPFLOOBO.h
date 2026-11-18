#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KHOODDJHJIL.h"

#define DLKFPFLOOBO_ABNCDAHLPHH_OFFSET UNITYSDK_OFFSET(0x13455170)
#define DLKFPFLOOBO_KMMIPNMJILI_OFFSET UNITYSDK_OFFSET(0x13455180)
#define DLKFPFLOOBO__CTOR_OFFSET UNITYSDK_OFFSET(0x13455440)

inline static constexpr unsigned int DLKFPFLOOBO_TypeDefinitionIndex = 65249;

class DLKFPFLOOBO
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLKFPFLOOBO__CTOR_OFFSET))(this);
	}

	::KHOODDJHJIL ABNCDAHLPHH()
	{
		return ((::KHOODDJHJIL(*)(::PVOID))((::PBYTE)hIl2Cpp + DLKFPFLOOBO_ABNCDAHLPHH_OFFSET))(this);
	}

	::System::Void KMMIPNMJILI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLKFPFLOOBO_KMMIPNMJILI_OFFSET))(this);
	}
};
