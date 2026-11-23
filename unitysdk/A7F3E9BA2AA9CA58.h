#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EFC4AEA2121EC272.h"

namespace ABC::UI { class MonoLocalizedTmp; }
namespace ABC::UI { class MonoUIAutoView; }

#define A7F3E9BA2AA9CA58_A54D936318FAF9E3_OFFSET UNITYSDK_OFFSET(0x196B7F0)
#define A7F3E9BA2AA9CA58_F6A675B119E39F53_OFFSET UNITYSDK_OFFSET(0x196B930)
#define A7F3E9BA2AA9CA58__CTOR_OFFSET UNITYSDK_OFFSET(0x16665F0)

inline static constexpr unsigned int A7F3E9BA2AA9CA58_TypeDefinitionIndex = 1618;

class A7F3E9BA2AA9CA58 : public ::EFC4AEA2121EC272
{
public:
	::ABC::UI::MonoUIAutoView* F993CEEEBB0D40B7; // 0x80
	::ABC::UI::MonoLocalizedTmp* ED55DDA4ADCD3702; // 0x88

	::System::Void A54D936318FAF9E3(::ABC::UI::MonoUIAutoView* AE442F7D881522D8)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::UI::MonoUIAutoView*))((::PBYTE)hIl2Cpp + A7F3E9BA2AA9CA58_A54D936318FAF9E3_OFFSET))(this, AE442F7D881522D8);
	}

	::System::Void F6A675B119E39F53()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A7F3E9BA2AA9CA58_F6A675B119E39F53_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A7F3E9BA2AA9CA58__CTOR_OFFSET))(this);
	}
};
