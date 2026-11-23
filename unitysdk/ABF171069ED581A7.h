#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EFC4AEA2121EC272.h"

class E6350CA2988BAC74;
class EC17CB1EA6C5BF8C;
namespace ABC::UI { class MonoButton; }
namespace ABC::UI { class MonoLocalizedTmp; }
namespace ABC::UI { class MonoPrefabLoader; }
namespace ABC::UI { class MonoUIAutoView; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Canvas; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Image; }

#define ABF171069ED581A7_A54D936318FAF9E3_OFFSET UNITYSDK_OFFSET(0x192BA00)
#define ABF171069ED581A7_B950FF9810FC6646_OFFSET UNITYSDK_OFFSET(0x192B930)
#define ABF171069ED581A7_EC22F59F2C588175_OFFSET UNITYSDK_OFFSET(0x192C4A0)
#define ABF171069ED581A7_EC3033C0485522FB_OFFSET UNITYSDK_OFFSET(0x192C160)
#define ABF171069ED581A7_F52E921108621A5A_OFFSET UNITYSDK_OFFSET(0x192BEF0)
#define ABF171069ED581A7_F6A675B119E39F53_OFFSET UNITYSDK_OFFSET(0x192BE90)
#define ABF171069ED581A7_FD92A2189EED75F8_OFFSET UNITYSDK_OFFSET(0x192C0D0)
#define ABF171069ED581A7__CTOR_OFFSET UNITYSDK_OFFSET(0x16665F0)

inline static constexpr unsigned int ABF171069ED581A7_TypeDefinitionIndex = 1548;

class ABF171069ED581A7 : public ::EFC4AEA2121EC272
{
public:
	::EC17CB1EA6C5BF8C* B7CCFD0FA4B777DB; // 0x80
	::System::Single E0223101135EFF19; // 0x88
	::System::Byte _padding0[0x4];
	::ABC::UI::MonoButton* B3D6496CEED47C22; // 0x90
	::ABC::UI::MonoPrefabLoader* FD047A4484A13BDC; // 0x98
	::UnityEngine::UI::Image* A5C8F87EFD65020C; // 0xA0
	::UnityEngine::UI::Image* FC530B7C51D84AB3; // 0xA8
	::UnityEngine::UI::Image* F88A4322C4F6A73D; // 0xB0
	::UnityEngine::Canvas* A5C3F2CB449C245F; // 0xB8
	::UnityEngine::RectTransform* FFF171C3FA0F4239; // 0xC0
	::UnityEngine::Animator* AFE26AB535A18078; // 0xC8
	::UnityEngine::RectTransform* BF6F99ED853E4280; // 0xD0
	::UnityEngine::Animator* FAA5E743352F993B; // 0xD8
	::E6350CA2988BAC74* F557FD00C3FAB872; // 0xE0
	::ABC::UI::MonoLocalizedTmp* A0FB631C9CD77603; // 0xE8
	::ABC::UI::MonoLocalizedTmp* FD8F82464B7408EB; // 0xF0
	::ABC::UI::MonoLocalizedTmp* E2DD755B74A05F57; // 0xF8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABF171069ED581A7__CTOR_OFFSET))(this);
	}

	::System::Void A54D936318FAF9E3(::ABC::UI::MonoUIAutoView* AE442F7D881522D8)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::UI::MonoUIAutoView*))((::PBYTE)hIl2Cpp + ABF171069ED581A7_A54D936318FAF9E3_OFFSET))(this, AE442F7D881522D8);
	}

	::System::Void EC3033C0485522FB(::EC17CB1EA6C5BF8C* A0EB125A66A994BD)
	{
		return ((::System::Void(*)(::PVOID, ::EC17CB1EA6C5BF8C*))((::PBYTE)hIl2Cpp + ABF171069ED581A7_EC3033C0485522FB_OFFSET))(this, A0EB125A66A994BD);
	}

	::System::Void F52E921108621A5A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABF171069ED581A7_F52E921108621A5A_OFFSET))(this);
	}

	::System::Void F6A675B119E39F53()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABF171069ED581A7_F6A675B119E39F53_OFFSET))(this);
	}

	::System::Void B950FF9810FC6646()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABF171069ED581A7_B950FF9810FC6646_OFFSET))(this);
	}

	::System::Void EC22F59F2C588175(::System::Single EB5670302F34D4B7)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ABF171069ED581A7_EC22F59F2C588175_OFFSET))(this, EB5670302F34D4B7);
	}

	::System::Void FD92A2189EED75F8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABF171069ED581A7_FD92A2189EED75F8_OFFSET))(this);
	}
};
