#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B39AAAD1233537D7/FEDE619E1873776A.h"
#include "unitysdk/EFC4AEA2121EC272.h"

class EBBF88E07D9EE9CB;
namespace ABC::UI { class MonoAvatarIcon; }
namespace ABC::UI { class MonoPrefabLoader; }
namespace ABC::UI { class MonoUIAutoView; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Canvas; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Image; }

#define E3BCAA68C7C183FB_A54D936318FAF9E3_OFFSET UNITYSDK_OFFSET(0x1FCA160)
#define E3BCAA68C7C183FB_E748C0340780C2BF_OFFSET UNITYSDK_OFFSET(0x1FCA640)
#define E3BCAA68C7C183FB_E92D6F4277EA2564_OFFSET UNITYSDK_OFFSET(0x1FCA560)
#define E3BCAA68C7C183FB_EA65C51CA1961183_OFFSET UNITYSDK_OFFSET(0x1FCA5D0)
#define E3BCAA68C7C183FB_EC3033C0485522FB_OFFSET UNITYSDK_OFFSET(0x1FCA6C0)
#define E3BCAA68C7C183FB_F63562D09C0D1A72_OFFSET UNITYSDK_OFFSET(0x1800BA0)
#define E3BCAA68C7C183FB_F6A675B119E39F53_OFFSET UNITYSDK_OFFSET(0x1FCA4A0)
#define E3BCAA68C7C183FB_F7CA0E76159FD36A_OFFSET UNITYSDK_OFFSET(0x1FCA4F0)
#define E3BCAA68C7C183FB__CTOR_OFFSET UNITYSDK_OFFSET(0x16665F0)

inline static constexpr unsigned int E3BCAA68C7C183FB_TypeDefinitionIndex = 8034;

class E3BCAA68C7C183FB : public ::EFC4AEA2121EC272
{
public:
	::System::UInt32 FEA956F40471CA68; // 0x80
	::System::Byte _padding0[0x4];
	::System::Action_1<::System::UInt32>* A651F03521332C06; // 0x88
	::UnityEngine::UI::Image* E80054E98C7F7AB8; // 0x90
	::UnityEngine::UI::Image* BA3F0F7C68B9B815; // 0x98
	::UnityEngine::UI::Image* ABE5582FFD69144C; // 0xA0
	::UnityEngine::Canvas* A5C3F2CB449C245F; // 0xA8
	::UnityEngine::RectTransform* A7D63C446C2EA00E; // 0xB0
	::ABC::UI::MonoPrefabLoader* A83D37ED810667F6; // 0xB8
	::ABC::UI::MonoPrefabLoader* E917C818ABC29236; // 0xC0
	::ABC::UI::MonoPrefabLoader* B34A69C4B1BA1591; // 0xC8
	::UnityEngine::GameObject* E48267CF8FD7DB46; // 0xD0
	::ABC::UI::MonoAvatarIcon* BCE80249A7C990D5; // 0xD8

	::System::Void A54D936318FAF9E3(::ABC::UI::MonoUIAutoView* AE442F7D881522D8)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::UI::MonoUIAutoView*))((::PBYTE)hIl2Cpp + E3BCAA68C7C183FB_A54D936318FAF9E3_OFFSET))(this, AE442F7D881522D8);
	}

	::System::Void EC3033C0485522FB(::EBBF88E07D9EE9CB* E4D7148C011B705E, ::System::Action_1<::System::UInt32>* AF5C1C647D9B8517, ::System::Boolean E9AC3977D356A1A7, ::System::Boolean F6B866DB5436DE63)
	{
		return ((::System::Void(*)(::PVOID, ::EBBF88E07D9EE9CB*, ::System::Action_1<::System::UInt32>*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + E3BCAA68C7C183FB_EC3033C0485522FB_OFFSET))(this, E4D7148C011B705E, AF5C1C647D9B8517, E9AC3977D356A1A7, F6B866DB5436DE63);
	}

	::System::Void F6A675B119E39F53()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E3BCAA68C7C183FB_F6A675B119E39F53_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E3BCAA68C7C183FB__CTOR_OFFSET))(this);
	}

	::System::Void E748C0340780C2BF(::B39AAAD1233537D7::FEDE619E1873776A B0241461F7917A81)
	{
		return ((::System::Void(*)(::PVOID, ::B39AAAD1233537D7::FEDE619E1873776A))((::PBYTE)hIl2Cpp + E3BCAA68C7C183FB_E748C0340780C2BF_OFFSET))(this, B0241461F7917A81);
	}

	::System::Void F7CA0E76159FD36A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E3BCAA68C7C183FB_F7CA0E76159FD36A_OFFSET))(this);
	}

	::System::Void EA65C51CA1961183()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E3BCAA68C7C183FB_EA65C51CA1961183_OFFSET))(this);
	}

	::System::UInt32 F63562D09C0D1A72()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + E3BCAA68C7C183FB_F63562D09C0D1A72_OFFSET))(this);
	}

	::System::Void E92D6F4277EA2564()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E3BCAA68C7C183FB_E92D6F4277EA2564_OFFSET))(this);
	}
};
