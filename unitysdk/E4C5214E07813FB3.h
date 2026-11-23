#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EFC4AEA2121EC272.h"

namespace ABC::UI { class MonoButton; }
namespace ABC::UI { class MonoLocalizedTmp; }
namespace ABC::UI { class MonoUIAutoView; }
namespace UnityEngine { class RectTransform; }

#define E4C5214E07813FB3_A54D936318FAF9E3_OFFSET UNITYSDK_OFFSET(0x1996790)
#define E4C5214E07813FB3_F6A675B119E39F53_OFFSET UNITYSDK_OFFSET(0x1996920)
#define E4C5214E07813FB3__CTOR_OFFSET UNITYSDK_OFFSET(0x16665F0)

inline static constexpr unsigned int E4C5214E07813FB3_TypeDefinitionIndex = 200;

class E4C5214E07813FB3 : public ::EFC4AEA2121EC272
{
public:
	::ABC::UI::MonoButton* F620DCE3F25283C1; // 0x80
	::UnityEngine::RectTransform* B5CDC9832CFB95AA; // 0x88
	::ABC::UI::MonoLocalizedTmp* E2DD755B74A05F57; // 0x90

	::System::Void A54D936318FAF9E3(::ABC::UI::MonoUIAutoView* AE442F7D881522D8)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::UI::MonoUIAutoView*))((::PBYTE)hIl2Cpp + E4C5214E07813FB3_A54D936318FAF9E3_OFFSET))(this, AE442F7D881522D8);
	}

	::System::Void F6A675B119E39F53()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E4C5214E07813FB3_F6A675B119E39F53_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E4C5214E07813FB3__CTOR_OFFSET))(this);
	}
};
