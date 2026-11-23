#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B271B5C5652C8538.h"

namespace ABC::UI { class MonoUIAutoView; }

#define BB5AD16ABA76602B_A54D936318FAF9E3_OFFSET UNITYSDK_OFFSET(0x1EAB160)
#define BB5AD16ABA76602B_F6A675B119E39F53_OFFSET UNITYSDK_OFFSET(0x1EAB200)
#define BB5AD16ABA76602B__CTOR_OFFSET UNITYSDK_OFFSET(0x1A75DA0)

inline static constexpr unsigned int BB5AD16ABA76602B_TypeDefinitionIndex = 6683;

class BB5AD16ABA76602B : public ::B271B5C5652C8538
{
public:
	::System::Void A54D936318FAF9E3(::ABC::UI::MonoUIAutoView* AE442F7D881522D8)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::UI::MonoUIAutoView*))((::PBYTE)hIl2Cpp + BB5AD16ABA76602B_A54D936318FAF9E3_OFFSET))(this, AE442F7D881522D8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BB5AD16ABA76602B__CTOR_OFFSET))(this);
	}

	::System::Void F6A675B119E39F53()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BB5AD16ABA76602B_F6A675B119E39F53_OFFSET))(this);
	}
};
