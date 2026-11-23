#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EFC4AEA2121EC272.h"

class BE1AEB7A9809AFCF;
class E6350CA2988BAC74;
namespace ABC::UI { class MonoButton; }
namespace ABC::UI { class MonoItemIcon; }
namespace ABC::UI { class MonoLocalizedTmp; }
namespace ABC::UI { class MonoPrefabLoader; }
namespace ABC::UI { class MonoUIAutoView; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Canvas; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Image; }

#define A892DCBFCCA4DABB_A54D936318FAF9E3_OFFSET UNITYSDK_OFFSET(0x1B97E20)
#define A892DCBFCCA4DABB_ACCB9ACD386C3034_OFFSET UNITYSDK_OFFSET(0x1B98360)
#define A892DCBFCCA4DABB_AD8D988771581694_OFFSET UNITYSDK_OFFSET(0x1B988F0)
#define A892DCBFCCA4DABB_AFF6FCDB9A1621C3_OFFSET UNITYSDK_OFFSET(0x1B983F0)
#define A892DCBFCCA4DABB_F6A675B119E39F53_OFFSET UNITYSDK_OFFSET(0x1B98300)
#define A892DCBFCCA4DABB__CTOR_OFFSET UNITYSDK_OFFSET(0x16665F0)

inline static constexpr unsigned int A892DCBFCCA4DABB_TypeDefinitionIndex = 2283;

class A892DCBFCCA4DABB : public ::EFC4AEA2121EC272
{
public:
	::System::Int32 A02AF894637B3DAE; // 0x80
	::System::Byte _padding0[0x4];
	::BE1AEB7A9809AFCF* BDBE4626A423877C; // 0x88
	::System::Action_1<::System::Int32>* FCCD2716B1B4CDF5; // 0x90
	::ABC::UI::MonoButton* FA17DE0AB9FE5408; // 0x98
	::E6350CA2988BAC74* FB16980EE0454AC6; // 0xA0
	::ABC::UI::MonoPrefabLoader* A0E8C944DEA69E2E; // 0xA8
	::ABC::UI::MonoPrefabLoader* B89D48E474D8AD4E; // 0xB0
	::ABC::UI::MonoUIAutoView* F686975210889F9E; // 0xB8
	::UnityEngine::Canvas* A5C3F2CB449C245F; // 0xC0
	::UnityEngine::UI::Image* AB06C003D8A32EDF; // 0xC8
	::UnityEngine::RectTransform* A5AD41082043A59A; // 0xD0
	::ABC::UI::MonoLocalizedTmp* F34B11906DB761E3; // 0xD8
	::ABC::UI::MonoLocalizedTmp* B222AAAFAE9E15C6; // 0xE0
	::ABC::UI::MonoLocalizedTmp* A0686B468264C6CC; // 0xE8
	::UnityEngine::RectTransform* B7B4E9314E1DD999; // 0xF0
	::UnityEngine::RectTransform* F0BCAA954A6F0FEA; // 0xF8
	::ABC::UI::MonoItemIcon* BEA79EB5CDE70E9C; // 0x100
	::UnityEngine::RectTransform* E4EEB0655B7FBC88; // 0x108

	::System::Void ACCB9ACD386C3034()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A892DCBFCCA4DABB_ACCB9ACD386C3034_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A892DCBFCCA4DABB__CTOR_OFFSET))(this);
	}

	::System::Void F6A675B119E39F53()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A892DCBFCCA4DABB_F6A675B119E39F53_OFFSET))(this);
	}

	::System::Void AFF6FCDB9A1621C3(::BE1AEB7A9809AFCF* EAE533E9B4BAEB61, ::System::Int32 B48C66E5FB2449C6, ::System::Boolean FD96BCA2122A7513, ::System::Action_1<::System::Int32>* FABBF4F55603A392)
	{
		return ((::System::Void(*)(::PVOID, ::BE1AEB7A9809AFCF*, ::System::Int32, ::System::Boolean, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + A892DCBFCCA4DABB_AFF6FCDB9A1621C3_OFFSET))(this, EAE533E9B4BAEB61, B48C66E5FB2449C6, FD96BCA2122A7513, FABBF4F55603A392);
	}

	::System::Void AD8D988771581694(::System::Boolean FD96BCA2122A7513)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + A892DCBFCCA4DABB_AD8D988771581694_OFFSET))(this, FD96BCA2122A7513);
	}

	::System::Void A54D936318FAF9E3(::ABC::UI::MonoUIAutoView* AE442F7D881522D8)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::UI::MonoUIAutoView*))((::PBYTE)hIl2Cpp + A892DCBFCCA4DABB_A54D936318FAF9E3_OFFSET))(this, AE442F7D881522D8);
	}
};
