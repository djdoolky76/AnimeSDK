#pragma once
#include "unitysdk/unitysdk.h"

namespace ABC::UI { class MonoButton; }
namespace ABC::UI { class MonoLocalizedTmp; }
namespace ABC::UI { class MonoPrefabLoader; }
namespace ABC::UI { class MonoUIAutoView; }
namespace UnityEngine { class Canvas; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Image; }

#define AB8EE385C059F9FE_A1B739E4C3B1411A_OFFSET UNITYSDK_OFFSET(0x1779660)
#define AB8EE385C059F9FE_A2DD6D74CF9E01AE_OFFSET UNITYSDK_OFFSET(0x1779210)
#define AB8EE385C059F9FE_A5048F888D4CF0C0_OFFSET UNITYSDK_OFFSET(0x1779560)
#define AB8EE385C059F9FE_A54D936318FAF9E3_OFFSET UNITYSDK_OFFSET(0x1778DB0)
#define AB8EE385C059F9FE_BEACCB0D98B80C21_OFFSET UNITYSDK_OFFSET(0x16C5DE0)
#define AB8EE385C059F9FE_BFCEE111278C4278_OFFSET UNITYSDK_OFFSET(0x1779310)
#define AB8EE385C059F9FE_F6A675B119E39F53_OFFSET UNITYSDK_OFFSET(0x17791C0)
#define AB8EE385C059F9FE__CTOR_OFFSET UNITYSDK_OFFSET(0x1779620)

inline static constexpr unsigned int AB8EE385C059F9FE_TypeDefinitionIndex = 841;

class AB8EE385C059F9FE
{
public:
	::System::UInt32 A6769D92F5350E00; // 0x90
	::System::Byte _padding0[0x4];
	::UnityEngine::GameObject* A4E90EC13B88D4BD; // 0x98
	::UnityEngine::GameObject* BEDC50D30E7602AF; // 0xA0
	::UnityEngine::UI::Image* E80054E98C7F7AB8; // 0xA8
	::UnityEngine::UI::Image* BE8B00C796036193; // 0xB0
	::UnityEngine::UI::Image* ABE5582FFD69144C; // 0xB8
	::UnityEngine::Canvas* A5C3F2CB449C245F; // 0xC0
	::UnityEngine::RectTransform* ABA2709FCC24E8A4; // 0xC8
	::ABC::UI::MonoUIAutoView* EF49044834C67995; // 0xD0
	::ABC::UI::MonoPrefabLoader* A83D37ED810667F6; // 0xD8
	::ABC::UI::MonoPrefabLoader* E917C818ABC29236; // 0xE0
	::UnityEngine::RectTransform* AF078699C78251E9; // 0xE8
	::ABC::UI::MonoLocalizedTmp* AFF15E1EE56A895C; // 0xF0
	::ABC::UI::MonoLocalizedTmp* ED55DDA4ADCD3702; // 0xF8
	::ABC::UI::MonoLocalizedTmp* E2B7E442C152CE2D; // 0x100
	::ABC::UI::MonoButton* B175D8D86F00EE78; // 0x108

	::System::Void F6A675B119E39F53()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AB8EE385C059F9FE_F6A675B119E39F53_OFFSET))(this);
	}

	::System::Void BFCEE111278C4278(::System::UInt32 F22251E7F7C98D31)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AB8EE385C059F9FE_BFCEE111278C4278_OFFSET))(this, F22251E7F7C98D31);
	}

	::System::Void A5048F888D4CF0C0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AB8EE385C059F9FE_A5048F888D4CF0C0_OFFSET))(this);
	}

	::System::Void A54D936318FAF9E3(::ABC::UI::MonoUIAutoView* AE442F7D881522D8)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::UI::MonoUIAutoView*))((::PBYTE)hIl2Cpp + AB8EE385C059F9FE_A54D936318FAF9E3_OFFSET))(this, AE442F7D881522D8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AB8EE385C059F9FE__CTOR_OFFSET))(this);
	}

	::System::Int32 BEACCB0D98B80C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AB8EE385C059F9FE_BEACCB0D98B80C21_OFFSET))(this);
	}

	::System::Void A2DD6D74CF9E01AE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AB8EE385C059F9FE_A2DD6D74CF9E01AE_OFFSET))(this);
	}

	::ABC::UI::MonoButton* A1B739E4C3B1411A()
	{
		return ((::ABC::UI::MonoButton*(*)(::PVOID))((::PBYTE)hIl2Cpp + AB8EE385C059F9FE_A1B739E4C3B1411A_OFFSET))(this);
	}
};
