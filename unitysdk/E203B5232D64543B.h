#pragma once
#include "unitysdk/unitysdk.h"

namespace ABC::UI { class MonoLocalizedTmp; }

#define E203B5232D64543B_AAE4BF4C7EF40227_OFFSET UNITYSDK_OFFSET(0x20A7810)
#define E203B5232D64543B_BD9CD726F874B523_OFFSET UNITYSDK_OFFSET(0x20A7750)
#define E203B5232D64543B__CTOR_OFFSET UNITYSDK_OFFSET(0x20A78C0)

inline static constexpr unsigned int E203B5232D64543B_TypeDefinitionIndex = 8603;

class E203B5232D64543B
{
public:
	::ABC::UI::MonoLocalizedTmp* EA9D0BA28FD9D32E; // 0x18

	::System::Void AAE4BF4C7EF40227()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E203B5232D64543B_AAE4BF4C7EF40227_OFFSET))(this);
	}

	static ::E203B5232D64543B* BD9CD726F874B523(::ABC::UI::MonoLocalizedTmp* FB83E184ACE126BC)
	{
		return ((::E203B5232D64543B*(*)(::ABC::UI::MonoLocalizedTmp*))((::PBYTE)hIl2Cpp + E203B5232D64543B_BD9CD726F874B523_OFFSET))(FB83E184ACE126BC);
	}

	::System::Void _ctor(::ABC::UI::MonoLocalizedTmp* FB83E184ACE126BC)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::UI::MonoLocalizedTmp*))((::PBYTE)hIl2Cpp + E203B5232D64543B__CTOR_OFFSET))(this, FB83E184ACE126BC);
	}
};
