#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EFC4AEA2121EC272.h"

namespace ABC::UI { class MonoButton; }
namespace ABC::UI { class MonoLocalizedTmp; }
namespace ABC::UI { class MonoUIAutoView; }
namespace UnityEngine { class RectTransform; }

#define F0235646BB1B74CA_A54D936318FAF9E3_OFFSET UNITYSDK_OFFSET(0x1778180)
#define F0235646BB1B74CA_F6A675B119E39F53_OFFSET UNITYSDK_OFFSET(0x17783C0)
#define F0235646BB1B74CA__CTOR_OFFSET UNITYSDK_OFFSET(0x16665F0)

inline static constexpr unsigned int F0235646BB1B74CA_TypeDefinitionIndex = 817;

class F0235646BB1B74CA : public ::EFC4AEA2121EC272
{
public:
	::ABC::UI::MonoButton* FF2153BA5CD1460C; // 0x80
	::UnityEngine::RectTransform* B5CDC9832CFB95AA; // 0x88
	::ABC::UI::MonoLocalizedTmp* B9245587747B5E69; // 0x90
	::ABC::UI::MonoLocalizedTmp* A121D40F03CB07A4; // 0x98
	::ABC::UI::MonoLocalizedTmp* A4700D7EBDFF5007; // 0xA0
	::ABC::UI::MonoLocalizedTmp* E2DD755B74A05F57; // 0xA8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F0235646BB1B74CA__CTOR_OFFSET))(this);
	}

	::System::Void A54D936318FAF9E3(::ABC::UI::MonoUIAutoView* AE442F7D881522D8)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::UI::MonoUIAutoView*))((::PBYTE)hIl2Cpp + F0235646BB1B74CA_A54D936318FAF9E3_OFFSET))(this, AE442F7D881522D8);
	}

	::System::Void F6A675B119E39F53()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F0235646BB1B74CA_F6A675B119E39F53_OFFSET))(this);
	}
};
