#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E68AA4EB51923C98/A4CB57356F052D51.h"
#include "unitysdk/EFC4AEA2121EC272.h"

namespace ABC::UI { class MonoButton; }
namespace ABC::UI { class MonoLocalizedTmp; }
namespace ABC::UI { class MonoPrefabLoader; }
namespace ABC::UI { class MonoUIAutoView; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Canvas; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Image; }

#define A3B752C8B59F3FC8_A54D936318FAF9E3_OFFSET UNITYSDK_OFFSET(0x1BFB180)
#define A3B752C8B59F3FC8_B950FF9810FC6646_OFFSET UNITYSDK_OFFSET(0x1BFB120)
#define A3B752C8B59F3FC8_F0EFCE24625FD197_OFFSET UNITYSDK_OFFSET(0x1BFB510)
#define A3B752C8B59F3FC8_F6A675B119E39F53_OFFSET UNITYSDK_OFFSET(0x1BFB4C0)
#define A3B752C8B59F3FC8__CTOR_OFFSET UNITYSDK_OFFSET(0x16665F0)

inline static constexpr unsigned int A3B752C8B59F3FC8_TypeDefinitionIndex = 338;

class A3B752C8B59F3FC8 : public ::EFC4AEA2121EC272
{
public:
	::ABC::UI::MonoButton* FB2DA534FD00EA52; // 0x80
	::UnityEngine::UI::Image* BE8B00C796036193; // 0x88
	::UnityEngine::UI::Image* ABE5582FFD69144C; // 0x90
	::UnityEngine::Canvas* A5C3F2CB449C245F; // 0x98
	::UnityEngine::RectTransform* F9B20C1EBDC9E441; // 0xA0
	::ABC::UI::MonoPrefabLoader* E917C818ABC29236; // 0xA8
	::ABC::UI::MonoLocalizedTmp* BA0665F7914B9387; // 0xB0
	::ABC::UI::MonoLocalizedTmp* BD0E786114A8C00E; // 0xB8
	::E68AA4EB51923C98::A4CB57356F052D51 B3C45686B92853E4; // 0xC0
	::System::Byte _padding0[0x4];
	::System::Action_1<::E68AA4EB51923C98::A4CB57356F052D51>* AF78267A417879B5; // 0xC8

	::System::Void B950FF9810FC6646()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A3B752C8B59F3FC8_B950FF9810FC6646_OFFSET))(this);
	}

	::System::Void A54D936318FAF9E3(::ABC::UI::MonoUIAutoView* AE442F7D881522D8)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::UI::MonoUIAutoView*))((::PBYTE)hIl2Cpp + A3B752C8B59F3FC8_A54D936318FAF9E3_OFFSET))(this, AE442F7D881522D8);
	}

	::System::Void F6A675B119E39F53()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A3B752C8B59F3FC8_F6A675B119E39F53_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A3B752C8B59F3FC8__CTOR_OFFSET))(this);
	}

	::System::Void F0EFCE24625FD197()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A3B752C8B59F3FC8_F0EFCE24625FD197_OFFSET))(this);
	}
};
