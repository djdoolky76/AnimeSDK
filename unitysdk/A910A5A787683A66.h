#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABEBA93AD61764EF.h"
#include "unitysdk/UnityEngine/E46B881AA2636190.h"

#define A910A5A787683A66_FC3208D7B8C7EE04_OFFSET UNITYSDK_OFFSET(0x2860A50)
#define A910A5A787683A66__CTOR_OFFSET UNITYSDK_OFFSET(0x2860BA0)

inline static constexpr unsigned int A910A5A787683A66_TypeDefinitionIndex = 16027;

class A910A5A787683A66 : public ::ABEBA93AD61764EF
{
public:
	::System::Single E07280D7B6D509F0; // 0x18
	::System::Single ED3852679D19A0D1; // 0x1C
	::System::Single F5151114093B76B5; // 0x20
	::UnityEngine::E46B881AA2636190 B43D1924646C4B26; // 0x24

	::System::Boolean FC3208D7B8C7EE04(::A910A5A787683A66* BEEE7A5A60941632)
	{
		return ((::System::Boolean(*)(::PVOID, ::A910A5A787683A66*))((::PBYTE)hIl2Cpp + A910A5A787683A66_FC3208D7B8C7EE04_OFFSET))(this, BEEE7A5A60941632);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A910A5A787683A66__CTOR_OFFSET))(this);
	}
};
