#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABEBA93AD61764EF.h"
#include "unitysdk/UnityEngine/E46B881AA2636190.h"
#include "unitysdk/UnityEngine/E8984F4E44AE20E5.h"

#define E89B2DC2D1C24791_FC3208D7B8C7EE04_OFFSET UNITYSDK_OFFSET(0x28AA160)
#define E89B2DC2D1C24791__CTOR_OFFSET UNITYSDK_OFFSET(0x28AA2B0)

inline static constexpr unsigned int E89B2DC2D1C24791_TypeDefinitionIndex = 16240;

class E89B2DC2D1C24791 : public ::ABEBA93AD61764EF
{
public:
	::UnityEngine::E46B881AA2636190 AD59589595755D08; // 0x18
	::UnityEngine::E8984F4E44AE20E5 B853C352F3164F38; // 0x28

	::System::Boolean FC3208D7B8C7EE04(::E89B2DC2D1C24791* BEEE7A5A60941632)
	{
		return ((::System::Boolean(*)(::PVOID, ::E89B2DC2D1C24791*))((::PBYTE)hIl2Cpp + E89B2DC2D1C24791_FC3208D7B8C7EE04_OFFSET))(this, BEEE7A5A60941632);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E89B2DC2D1C24791__CTOR_OFFSET))(this);
	}
};
