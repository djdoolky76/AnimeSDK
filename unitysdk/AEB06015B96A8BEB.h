#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EFC4AEA2121EC272.h"

namespace ABC::UI { class MonoLocalizedTmp; }
namespace ABC::UI { class MonoUIAutoView; }
namespace UnityEngine::UI { class Image; }

#define AEB06015B96A8BEB_FFE59D93BEA6E2CA_OFFSET UNITYSDK_OFFSET(0x17D4500)
#define AEB06015B96A8BEB__CTOR_OFFSET UNITYSDK_OFFSET(0x16665F0)

inline static constexpr unsigned int AEB06015B96A8BEB_TypeDefinitionIndex = 985;

class AEB06015B96A8BEB : public ::EFC4AEA2121EC272
{
public:
	::ABC::UI::MonoUIAutoView* AE442F7D881522D8; // 0x80
	::ABC::UI::MonoLocalizedTmp* B70C9BBA716CDE4C; // 0x88
	::ABC::UI::MonoLocalizedTmp* BDB8AAE7C2B9ECDC; // 0x90
	::ABC::UI::MonoLocalizedTmp* B0890F0F7B27784A; // 0x98
	::ABC::UI::MonoLocalizedTmp* E4027FAD31C90664; // 0xA0
	::UnityEngine::UI::Image* B6E3153CB766EF7F; // 0xA8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEB06015B96A8BEB__CTOR_OFFSET))(this);
	}

	::System::Void FFE59D93BEA6E2CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEB06015B96A8BEB_FFE59D93BEA6E2CA_OFFSET))(this);
	}
};
