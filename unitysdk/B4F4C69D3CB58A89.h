#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define B4F4C69D3CB58A89_EE2446CF42E77218_OFFSET UNITYSDK_OFFSET(0x1FB0EE0)
#define B4F4C69D3CB58A89__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int B4F4C69D3CB58A89_TypeDefinitionIndex = 6863;

class B4F4C69D3CB58A89 : public ::System::Object
{
public:
	::System::String* B2E0F0E025D05B2B; // 0x10

	::System::String* EE2446CF42E77218()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + B4F4C69D3CB58A89_EE2446CF42E77218_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B4F4C69D3CB58A89__CTOR_OFFSET))(this);
	}
};
