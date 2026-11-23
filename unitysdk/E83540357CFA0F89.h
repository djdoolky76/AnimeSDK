#pragma once
#include "unitysdk/unitysdk.h"

#define E83540357CFA0F89_A2E32EEE42BFFD94_OFFSET UNITYSDK_OFFSET(0x23A1D40)
#define E83540357CFA0F89_F3A8A98F932574AB_OFFSET UNITYSDK_OFFSET(0x23A1C40)
#define E83540357CFA0F89__CTOR_OFFSET UNITYSDK_OFFSET(0x23A1E60)

inline static constexpr unsigned int E83540357CFA0F89_TypeDefinitionIndex = 3529;

class E83540357CFA0F89
{
public:
	::System::Void A2E32EEE42BFFD94()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E83540357CFA0F89_A2E32EEE42BFFD94_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E83540357CFA0F89__CTOR_OFFSET))(this);
	}

	::System::Void F3A8A98F932574AB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E83540357CFA0F89_F3A8A98F932574AB_OFFSET))(this);
	}
};
