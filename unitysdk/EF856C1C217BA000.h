#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABEBA93AD61764EF.h"
#include "unitysdk/UnityEngine/E46B881AA2636190.h"

#define EF856C1C217BA000_FC3208D7B8C7EE04_OFFSET UNITYSDK_OFFSET(0x28CDA50)
#define EF856C1C217BA000__CTOR_OFFSET UNITYSDK_OFFSET(0x28CDC60)

inline static constexpr unsigned int EF856C1C217BA000_TypeDefinitionIndex = 16332;

class EF856C1C217BA000 : public ::ABEBA93AD61764EF
{
public:
	::System::Single BEF4FE7C406BA242; // 0x18
	::UnityEngine::E46B881AA2636190 A975A184B5BCF9EF; // 0x1C
	::System::Single BAF9EF7AFE8BB098; // 0x2C
	::System::Single FA39B504042F1112; // 0x30
	::System::Single ECFDB1EC3D70CE48; // 0x34
	::System::Single E2BFDED68266D5EA; // 0x38
	::System::Single BA52B806A5C52119; // 0x3C
	::System::Single FA4C258C965F57E4; // 0x40
	::UnityEngine::E46B881AA2636190 FD435AE028DD9BB2; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EF856C1C217BA000__CTOR_OFFSET))(this);
	}

	::System::Boolean FC3208D7B8C7EE04(::EF856C1C217BA000* BEEE7A5A60941632)
	{
		return ((::System::Boolean(*)(::PVOID, ::EF856C1C217BA000*))((::PBYTE)hIl2Cpp + EF856C1C217BA000_FC3208D7B8C7EE04_OFFSET))(this, BEEE7A5A60941632);
	}
};
