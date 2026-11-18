#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BPHFOAJNBOP;

#define OAILBBCFAAL_CREATEEFFECTEXPRESSIONCONFIG_OFFSET UNITYSDK_OFFSET(0xF16DE50)
#define OAILBBCFAAL__CTOR_OFFSET UNITYSDK_OFFSET(0xF16DEC0)

inline static constexpr unsigned int OAILBBCFAAL_TypeDefinitionIndex = 57838;

class OAILBBCFAAL : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAILBBCFAAL__CTOR_OFFSET))(this);
	}

	::BPHFOAJNBOP* CreateEffectExpressionConfig()
	{
		return ((::BPHFOAJNBOP*(*)(::PVOID))((::PBYTE)hIl2Cpp + OAILBBCFAAL_CREATEEFFECTEXPRESSIONCONFIG_OFFSET))(this);
	}
};
