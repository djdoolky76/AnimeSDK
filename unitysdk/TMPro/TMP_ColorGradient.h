#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B311069BAD7789F5/B398DFF195875BE2.h"
#include "unitysdk/UnityEngine/E46B881AA2636190.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

#define TMPRO_TMP_COLORGRADIENT__CCTOR_OFFSET UNITYSDK_OFFSET(0x40BD970)
#define TMPRO_TMP_COLORGRADIENT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x40BD9B0)
#define TMPRO_TMP_COLORGRADIENT__CTOR_2_OFFSET UNITYSDK_OFFSET(0x40BDAB0)
#define TMPRO_TMP_COLORGRADIENT__CTOR_OFFSET UNITYSDK_OFFSET(0x40BDA60)

namespace TMPro
{
	inline static constexpr unsigned int TMP_ColorGradient_TypeDefinitionIndex = 18263;

	class TMP_ColorGradient : public ::UnityEngine::ScriptableObject
	{
	public:
		static ::UnityEngine::E46B881AA2636190* StaticGet_k_DefaultColor()
		{
			return (::UnityEngine::E46B881AA2636190*)Il2CppClass::FromTypeDefinitionIndex(TMP_ColorGradient_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::B311069BAD7789F5::B398DFF195875BE2 colorMode; // 0x18
		::UnityEngine::E46B881AA2636190 topLeft; // 0x1C
		::UnityEngine::E46B881AA2636190 topRight; // 0x2C
		::UnityEngine::E46B881AA2636190 bottomLeft; // 0x3C
		::UnityEngine::E46B881AA2636190 bottomRight; // 0x4C

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + TMPRO_TMP_COLORGRADIENT__CCTOR_OFFSET))();
		}

		::System::Void _ctor(::UnityEngine::E46B881AA2636190 FD6BEC6563AC7110)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::E46B881AA2636190))((::PBYTE)hIl2Cpp + TMPRO_TMP_COLORGRADIENT__CTOR_OFFSET))(this, FD6BEC6563AC7110);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_COLORGRADIENT__CTOR_1_OFFSET))(this);
		}

		::System::Void _ctor_2(::UnityEngine::E46B881AA2636190 A106793D8D60A0D6, ::UnityEngine::E46B881AA2636190 F79B3E3276A56ADA, ::UnityEngine::E46B881AA2636190 AF43A6C0FD7729D5, ::UnityEngine::E46B881AA2636190 FE7839FE56009F81)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::E46B881AA2636190, ::UnityEngine::E46B881AA2636190, ::UnityEngine::E46B881AA2636190, ::UnityEngine::E46B881AA2636190))((::PBYTE)hIl2Cpp + TMPRO_TMP_COLORGRADIENT__CTOR_2_OFFSET))(this, A106793D8D60A0D6, F79B3E3276A56ADA, AF43A6C0FD7729D5, FE7839FE56009F81);
		}
	};
}
