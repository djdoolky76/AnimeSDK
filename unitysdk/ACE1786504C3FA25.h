#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B39AAAD1233537D7/F3E61D3D9727F15D.h"
#include "unitysdk/EFC4AEA2121EC272.h"

class A04FB906869DCF3A;
namespace ABC::UI { class MonoButton; }
namespace ABC::UI { class MonoLocalizedTmp; }
namespace ABC::UI { class MonoPrefabLoader; }
namespace ABC::UI { class MonoUIAutoView; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Canvas; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Image; }

#define ACE1786504C3FA25_A54D936318FAF9E3_OFFSET UNITYSDK_OFFSET(0x1C14580)
#define ACE1786504C3FA25_AAC154B872F38B40_OFFSET UNITYSDK_OFFSET(0x1C14870)
#define ACE1786504C3FA25_AED422A1CF4A57DB_OFFSET UNITYSDK_OFFSET(0x1C14B60)
#define ACE1786504C3FA25_B950FF9810FC6646_OFFSET UNITYSDK_OFFSET(0x1C14480)
#define ACE1786504C3FA25_EC3033C0485522FB_OFFSET UNITYSDK_OFFSET(0x1C14980)
#define ACE1786504C3FA25_F5A43A740A85420B_OFFSET UNITYSDK_OFFSET(0x1800BA0)
#define ACE1786504C3FA25_F6A675B119E39F53_OFFSET UNITYSDK_OFFSET(0x1C14820)
#define ACE1786504C3FA25__CTOR_OFFSET UNITYSDK_OFFSET(0x16665F0)

inline static constexpr unsigned int ACE1786504C3FA25_TypeDefinitionIndex = 375;

class ACE1786504C3FA25 : public ::EFC4AEA2121EC272
{
public:
	::System::UInt32 B424ECCB5F808A98; // 0x80
	::System::Byte _padding0[0x4];
	::ABC::UI::MonoButton* A534F54BBE4358D8; // 0x88
	::B39AAAD1233537D7::F3E61D3D9727F15D F3E04BB19F04FC60; // 0x90
	::System::Byte _padding1[0x4];
	::ABC::UI::MonoButton* EB24E74BE37FA90D; // 0x98
	::UnityEngine::UI::Image* BE8B00C796036193; // 0xA0
	::UnityEngine::Canvas* A5C3F2CB449C245F; // 0xA8
	::UnityEngine::RectTransform* ABA2709FCC24E8A4; // 0xB0
	::ABC::UI::MonoPrefabLoader* E917C818ABC29236; // 0xB8
	::ABC::UI::MonoLocalizedTmp* AFF15E1EE56A895C; // 0xC0
	::ABC::UI::MonoLocalizedTmp* ED55DDA4ADCD3702; // 0xC8

	::System::UInt32 F5A43A740A85420B()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ACE1786504C3FA25_F5A43A740A85420B_OFFSET))(this);
	}

	::System::Void EC3033C0485522FB(::B39AAAD1233537D7::F3E61D3D9727F15D E3F8E4C2C3AF75BE, ::System::UInt32 EA3C9D11E469EAA2, ::System::Collections::Generic::List_1<::System::UInt32>* A1F0B1774766C5FF, ::System::Int32 AC603015F629EC55)
	{
		return ((::System::Void(*)(::PVOID, ::B39AAAD1233537D7::F3E61D3D9727F15D, ::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Int32))((::PBYTE)hIl2Cpp + ACE1786504C3FA25_EC3033C0485522FB_OFFSET))(this, E3F8E4C2C3AF75BE, EA3C9D11E469EAA2, A1F0B1774766C5FF, AC603015F629EC55);
	}

	::System::Void F6A675B119E39F53()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACE1786504C3FA25_F6A675B119E39F53_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACE1786504C3FA25__CTOR_OFFSET))(this);
	}

	::System::Void B950FF9810FC6646()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACE1786504C3FA25_B950FF9810FC6646_OFFSET))(this);
	}

	::System::Void A54D936318FAF9E3(::ABC::UI::MonoUIAutoView* AE442F7D881522D8)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::UI::MonoUIAutoView*))((::PBYTE)hIl2Cpp + ACE1786504C3FA25_A54D936318FAF9E3_OFFSET))(this, AE442F7D881522D8);
	}

	::System::Void AED422A1CF4A57DB(::A04FB906869DCF3A* EFC4AA7B99320D01)
	{
		return ((::System::Void(*)(::PVOID, ::A04FB906869DCF3A*))((::PBYTE)hIl2Cpp + ACE1786504C3FA25_AED422A1CF4A57DB_OFFSET))(this, EFC4AA7B99320D01);
	}

	::System::Void AAC154B872F38B40()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACE1786504C3FA25_AAC154B872F38B40_OFFSET))(this);
	}
};
