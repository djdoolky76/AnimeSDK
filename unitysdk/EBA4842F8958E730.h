#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABEBA93AD61764EF.h"
#include "unitysdk/UnityEngine/E46B881AA2636190.h"
#include "unitysdk/UnityEngine/E8984F4E44AE20E5.h"

#define EBA4842F8958E730_FC3208D7B8C7EE04_OFFSET UNITYSDK_OFFSET(0x28EE0D0)
#define EBA4842F8958E730__CTOR_OFFSET UNITYSDK_OFFSET(0x28AA2B0)

inline static constexpr unsigned int EBA4842F8958E730_TypeDefinitionIndex = 16453;

class EBA4842F8958E730 : public ::ABEBA93AD61764EF
{
public:
	::UnityEngine::E46B881AA2636190 A21666A37FE4F84E; // 0x18
	::UnityEngine::E8984F4E44AE20E5 E7C5B6ED7E7895AD; // 0x28

	::System::Boolean FC3208D7B8C7EE04(::EBA4842F8958E730* BEEE7A5A60941632)
	{
		return ((::System::Boolean(*)(::PVOID, ::EBA4842F8958E730*))((::PBYTE)hIl2Cpp + EBA4842F8958E730_FC3208D7B8C7EE04_OFFSET))(this, BEEE7A5A60941632);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBA4842F8958E730__CTOR_OFFSET))(this);
	}
};
