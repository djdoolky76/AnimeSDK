#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EFB18EF76726FCAE.h"

namespace ABC::UI { class MonoLocalizedTmp; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Image; }

#define AB6D7C65F4304CD8_A0046E30F870AE4D_OFFSET UNITYSDK_OFFSET(0x17F7020)
#define AB6D7C65F4304CD8_BCC30386F5FA9341_OFFSET UNITYSDK_OFFSET(0x17F7030)
#define AB6D7C65F4304CD8_BF47044E6CF3B34E_OFFSET UNITYSDK_OFFSET(0x206C0B0)
#define AB6D7C65F4304CD8_ED55F0074C338ACB_OFFSET UNITYSDK_OFFSET(0x206C2C0)
#define AB6D7C65F4304CD8_F8C487CDAE26FC4B_OFFSET UNITYSDK_OFFSET(0x206BD00)
#define AB6D7C65F4304CD8_FCB761C928A6B564_OFFSET UNITYSDK_OFFSET(0x18C00E0)
#define AB6D7C65F4304CD8__CTOR_OFFSET UNITYSDK_OFFSET(0x16572C0)

inline static constexpr unsigned int AB6D7C65F4304CD8_TypeDefinitionIndex = 8489;

class AB6D7C65F4304CD8 : public ::EFB18EF76726FCAE
{
public:
	::UnityEngine::RectTransform* BFE9C1FD4A41E097; // 0xA8
	::UnityEngine::UI::Image* B096D6BF16883816; // 0xB0
	::ABC::UI::MonoLocalizedTmp* A4ECE0887175F341; // 0xB8

	::System::Void BF47044E6CF3B34E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AB6D7C65F4304CD8_BF47044E6CF3B34E_OFFSET))(this);
	}

	::System::Void F8C487CDAE26FC4B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AB6D7C65F4304CD8_F8C487CDAE26FC4B_OFFSET))(this);
	}

	::UnityEngine::RectTransform* A0046E30F870AE4D()
	{
		return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + AB6D7C65F4304CD8_A0046E30F870AE4D_OFFSET))(this);
	}

	::System::Void ED55F0074C338ACB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AB6D7C65F4304CD8_ED55F0074C338ACB_OFFSET))(this);
	}

	::UnityEngine::UI::Image* BCC30386F5FA9341()
	{
		return ((::UnityEngine::UI::Image*(*)(::PVOID))((::PBYTE)hIl2Cpp + AB6D7C65F4304CD8_BCC30386F5FA9341_OFFSET))(this);
	}

	::ABC::UI::MonoLocalizedTmp* FCB761C928A6B564()
	{
		return ((::ABC::UI::MonoLocalizedTmp*(*)(::PVOID))((::PBYTE)hIl2Cpp + AB6D7C65F4304CD8_FCB761C928A6B564_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AB6D7C65F4304CD8__CTOR_OFFSET))(this);
	}
};
