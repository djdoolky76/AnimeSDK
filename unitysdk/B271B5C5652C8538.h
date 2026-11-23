#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E7301F8F1EAF0728.h"

namespace ABC::UI { class MonoUIAutoView; }

#define B271B5C5652C8538_A54D936318FAF9E3_OFFSET UNITYSDK_OFFSET(0x1EC3930)
#define B271B5C5652C8538_EF2F865F26335337_OFFSET UNITYSDK_OFFSET(0x16A4160)
#define B271B5C5652C8538_F6A675B119E39F53_OFFSET UNITYSDK_OFFSET(0x1EC39D0)
#define B271B5C5652C8538__CTOR_OFFSET UNITYSDK_OFFSET(0x16572C0)

inline static constexpr unsigned int B271B5C5652C8538_TypeDefinitionIndex = 6747;

class B271B5C5652C8538 : public ::E7301F8F1EAF0728
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B271B5C5652C8538__CTOR_OFFSET))(this);
	}

	::System::Void F6A675B119E39F53()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B271B5C5652C8538_F6A675B119E39F53_OFFSET))(this);
	}

	::System::Void A54D936318FAF9E3(::ABC::UI::MonoUIAutoView* AE442F7D881522D8)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::UI::MonoUIAutoView*))((::PBYTE)hIl2Cpp + B271B5C5652C8538_A54D936318FAF9E3_OFFSET))(this, AE442F7D881522D8);
	}

	::System::Boolean EF2F865F26335337()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + B271B5C5652C8538_EF2F865F26335337_OFFSET))(this);
	}
};
