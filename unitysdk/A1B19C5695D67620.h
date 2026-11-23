#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EFC4AEA2121EC272.h"

namespace ABC::UI { class MonoAvatarIcon; }
namespace ABC::UI { class MonoLocalizedTmp; }
namespace ABC::UI { class MonoUIAutoView; }
namespace UnityEngine { class GameObject; }

#define A1B19C5695D67620_A54D936318FAF9E3_OFFSET UNITYSDK_OFFSET(0x1CB9DC0)
#define A1B19C5695D67620_F6A675B119E39F53_OFFSET UNITYSDK_OFFSET(0x1CB9FC0)
#define A1B19C5695D67620__CTOR_OFFSET UNITYSDK_OFFSET(0x16665F0)

inline static constexpr unsigned int A1B19C5695D67620_TypeDefinitionIndex = 9732;

class A1B19C5695D67620 : public ::EFC4AEA2121EC272
{
public:
	::ABC::UI::MonoUIAutoView* E1868080A66DEEC0; // 0x80
	::ABC::UI::MonoLocalizedTmp* BE1F082C7D7556A9; // 0x88
	::ABC::UI::MonoLocalizedTmp* BD7A2B80F1636F94; // 0x90
	::UnityEngine::GameObject* EDBC58B3FBEA44ED; // 0x98
	::ABC::UI::MonoAvatarIcon* BE8B00C796036193; // 0xA0

	::System::Void F6A675B119E39F53()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A1B19C5695D67620_F6A675B119E39F53_OFFSET))(this);
	}

	::System::Void A54D936318FAF9E3(::ABC::UI::MonoUIAutoView* AE442F7D881522D8)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::UI::MonoUIAutoView*))((::PBYTE)hIl2Cpp + A1B19C5695D67620_A54D936318FAF9E3_OFFSET))(this, AE442F7D881522D8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A1B19C5695D67620__CTOR_OFFSET))(this);
	}
};
