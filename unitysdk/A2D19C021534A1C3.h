#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EFC4AEA2121EC272.h"

namespace ABC::UI { class MonoPrefabLoader; }

#define A2D19C021534A1C3_FFE59D93BEA6E2CA_OFFSET UNITYSDK_OFFSET(0x22CF8D0)
#define A2D19C021534A1C3__CTOR_OFFSET UNITYSDK_OFFSET(0x22C8360)

inline static constexpr unsigned int A2D19C021534A1C3_TypeDefinitionIndex = 7265;

class A2D19C021534A1C3 : public ::EFC4AEA2121EC272
{
public:
	::ABC::UI::MonoPrefabLoader* F0E65990F8674A7E; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A2D19C021534A1C3__CTOR_OFFSET))(this);
	}

	::System::Void FFE59D93BEA6E2CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A2D19C021534A1C3_FFE59D93BEA6E2CA_OFFSET))(this);
	}
};
