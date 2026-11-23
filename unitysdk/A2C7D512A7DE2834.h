#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EFC4AEA2121EC272.h"

class B3ECEBAE1065355E;
class E6350CA2988BAC74;
namespace ABC::UI { class MonoButton; }
namespace ABC::UI { class MonoLocalizedTmp; }
namespace ABC::UI { class MonoPrefabLoader; }
namespace ABC::UI { class MonoUIAutoView; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Canvas; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Image; }

#define A2C7D512A7DE2834_A54D936318FAF9E3_OFFSET UNITYSDK_OFFSET(0x1A83E10)
#define A2C7D512A7DE2834_AD8D988771581694_OFFSET UNITYSDK_OFFSET(0x1A84540)
#define A2C7D512A7DE2834_AFF6FCDB9A1621C3_OFFSET UNITYSDK_OFFSET(0x1A842F0)
#define A2C7D512A7DE2834_F5255A3C1BB6E54E_OFFSET UNITYSDK_OFFSET(0x1A84280)
#define A2C7D512A7DE2834_F6A675B119E39F53_OFFSET UNITYSDK_OFFSET(0x1A84220)
#define A2C7D512A7DE2834__CTOR_OFFSET UNITYSDK_OFFSET(0x16665F0)

inline static constexpr unsigned int A2C7D512A7DE2834_TypeDefinitionIndex = 1879;

class A2C7D512A7DE2834 : public ::EFC4AEA2121EC272
{
public:
	::System::Int32 A02AF894637B3DAE; // 0x80
	::System::UInt32 BD6BDD531E70F0BB; // 0x84
	::System::Action_1<::System::UInt32>* FCCD2716B1B4CDF5; // 0x88
	::ABC::UI::MonoButton* AC1AB003D5E92F27; // 0x90
	::E6350CA2988BAC74* FB16980EE0454AC6; // 0x98
	::UnityEngine::RectTransform* E8C37EA823D5D7C8; // 0xA0
	::ABC::UI::MonoPrefabLoader* B89D48E474D8AD4E; // 0xA8
	::UnityEngine::Canvas* A5C3F2CB449C245F; // 0xB0
	::UnityEngine::UI::Image* E0EC5044BAF9AF18; // 0xB8
	::ABC::UI::MonoLocalizedTmp* AFF15E1EE56A895C; // 0xC0
	::ABC::UI::MonoLocalizedTmp* A23C2AAF1AB4268C; // 0xC8
	::ABC::UI::MonoLocalizedTmp* F78E67B4ADF6774A; // 0xD0
	::UnityEngine::RectTransform* F40B22A4CD1C9D35; // 0xD8
	::UnityEngine::RectTransform* F969244AECCED9FF; // 0xE0
	::UnityEngine::RectTransform* B7B4E9314E1DD999; // 0xE8

	::System::Void F5255A3C1BB6E54E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A2C7D512A7DE2834_F5255A3C1BB6E54E_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A2C7D512A7DE2834__CTOR_OFFSET))(this);
	}

	::System::Void AFF6FCDB9A1621C3(::System::Int32 B48C66E5FB2449C6, ::B3ECEBAE1065355E* AFBF8F3E71DD89CC, ::System::Boolean FD96BCA2122A7513, ::System::Action_1<::System::UInt32>* FABBF4F55603A392)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::B3ECEBAE1065355E*, ::System::Boolean, ::System::Action_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + A2C7D512A7DE2834_AFF6FCDB9A1621C3_OFFSET))(this, B48C66E5FB2449C6, AFBF8F3E71DD89CC, FD96BCA2122A7513, FABBF4F55603A392);
	}

	::System::Void AD8D988771581694(::System::Boolean FD96BCA2122A7513)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + A2C7D512A7DE2834_AD8D988771581694_OFFSET))(this, FD96BCA2122A7513);
	}

	::System::Void F6A675B119E39F53()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A2C7D512A7DE2834_F6A675B119E39F53_OFFSET))(this);
	}

	::System::Void A54D936318FAF9E3(::ABC::UI::MonoUIAutoView* AE442F7D881522D8)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::UI::MonoUIAutoView*))((::PBYTE)hIl2Cpp + A2C7D512A7DE2834_A54D936318FAF9E3_OFFSET))(this, AE442F7D881522D8);
	}
};
