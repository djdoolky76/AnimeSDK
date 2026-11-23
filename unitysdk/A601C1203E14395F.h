#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EFC4AEA2121EC272.h"

namespace ABC::UI { class MonoButton; }
namespace ABC::UI { class MonoLocalizedTmp; }
namespace ABC::UI { class MonoUIAutoView; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Canvas; }
namespace UnityEngine::UI { class Image; }

#define A601C1203E14395F_A54D936318FAF9E3_OFFSET UNITYSDK_OFFSET(0x16C39A0)
#define A601C1203E14395F_B950FF9810FC6646_OFFSET UNITYSDK_OFFSET(0x16C3940)
#define A601C1203E14395F_EC3033C0485522FB_OFFSET UNITYSDK_OFFSET(0x16C3CC0)
#define A601C1203E14395F_F6A675B119E39F53_OFFSET UNITYSDK_OFFSET(0x16C3C70)
#define A601C1203E14395F__CTOR_OFFSET UNITYSDK_OFFSET(0x16665F0)

inline static constexpr unsigned int A601C1203E14395F_TypeDefinitionIndex = 493;

class A601C1203E14395F : public ::EFC4AEA2121EC272
{
public:
	::UnityEngine::UI::Image* BE8B00C796036193; // 0x80
	::UnityEngine::Canvas* A5C3F2CB449C245F; // 0x88
	::ABC::UI::MonoButton* F0889B8BA5C1E1DB; // 0x90
	::UnityEngine::Animator* FFE2492AA29E76AC; // 0x98
	::ABC::UI::MonoLocalizedTmp* AFF15E1EE56A895C; // 0xA0
	::ABC::UI::MonoLocalizedTmp* A923A2EE455304CC; // 0xA8
	::ABC::UI::MonoButton* A1B72872965160CC; // 0xB0
	::UnityEngine::UI::Image* F6D17A3F42E58D72; // 0xB8

	::System::Void A54D936318FAF9E3(::ABC::UI::MonoUIAutoView* AE442F7D881522D8)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::UI::MonoUIAutoView*))((::PBYTE)hIl2Cpp + A601C1203E14395F_A54D936318FAF9E3_OFFSET))(this, AE442F7D881522D8);
	}

	::System::Void F6A675B119E39F53()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A601C1203E14395F_F6A675B119E39F53_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A601C1203E14395F__CTOR_OFFSET))(this);
	}

	::System::Void EC3033C0485522FB(::System::UInt32 EA3C9D11E469EAA2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + A601C1203E14395F_EC3033C0485522FB_OFFSET))(this, EA3C9D11E469EAA2);
	}

	::System::Void B950FF9810FC6646()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A601C1203E14395F_B950FF9810FC6646_OFFSET))(this);
	}
};
