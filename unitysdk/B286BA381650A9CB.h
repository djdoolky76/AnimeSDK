#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EFC4AEA2121EC272.h"

class BA6134D72C6C0EAB;
namespace ABC::UI { class MonoButton; }
namespace ABC::UI { class MonoLocalizedTmp; }
namespace ABC::UI { class MonoPrefabLoader; }
namespace ABC::UI { class MonoUIAutoView; }
namespace System { class Action; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Image; }

#define B286BA381650A9CB_A54D936318FAF9E3_OFFSET UNITYSDK_OFFSET(0x203BD90)
#define B286BA381650A9CB_B6939FDA256E14C4_OFFSET UNITYSDK_OFFSET(0x203C070)
#define B286BA381650A9CB_B950FF9810FC6646_OFFSET UNITYSDK_OFFSET(0x203BC70)
#define B286BA381650A9CB_F6A675B119E39F53_OFFSET UNITYSDK_OFFSET(0x203C020)
#define B286BA381650A9CB__CTOR_OFFSET UNITYSDK_OFFSET(0x16665F0)

inline static constexpr unsigned int B286BA381650A9CB_TypeDefinitionIndex = 8336;

class B286BA381650A9CB : public ::EFC4AEA2121EC272
{
public:
	::BA6134D72C6C0EAB* BCB02EDFBFF8A637; // 0x80
	::System::Action* AD192E1D07EF11EE; // 0x88
	::ABC::UI::MonoButton* A31112E5A9B38461; // 0x90
	::ABC::UI::MonoPrefabLoader* F02447203AB9266F; // 0x98
	::UnityEngine::UI::Image* E1CB51BBB04C555C; // 0xA0
	::UnityEngine::RectTransform* EC1054281DF17EAF; // 0xA8
	::UnityEngine::RectTransform* E11BB2551C6C226C; // 0xB0
	::ABC::UI::MonoLocalizedTmp* BF1114CC592A9EF1; // 0xB8
	::ABC::UI::MonoLocalizedTmp* B944C0E106DAE9D9; // 0xC0

	::System::Void F6A675B119E39F53()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B286BA381650A9CB_F6A675B119E39F53_OFFSET))(this);
	}

	::System::Void B6939FDA256E14C4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B286BA381650A9CB_B6939FDA256E14C4_OFFSET))(this);
	}

	::System::Void A54D936318FAF9E3(::ABC::UI::MonoUIAutoView* AE442F7D881522D8)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::UI::MonoUIAutoView*))((::PBYTE)hIl2Cpp + B286BA381650A9CB_A54D936318FAF9E3_OFFSET))(this, AE442F7D881522D8);
	}

	::System::Void B950FF9810FC6646()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B286BA381650A9CB_B950FF9810FC6646_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B286BA381650A9CB__CTOR_OFFSET))(this);
	}
};
