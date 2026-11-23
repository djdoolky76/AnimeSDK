#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/A7C4D8DC50C86DC6/AF6E0EE88042EEDC.h"
#include "unitysdk/UnityEngine/E46B881AA2636190.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

#define UNITYENGINE_TEXTCORE_TEXT_TEXTCOLORGRADIENT__CCTOR_OFFSET UNITYSDK_OFFSET(0x41FB290)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTCOLORGRADIENT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x40BDA60)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTCOLORGRADIENT__CTOR_2_OFFSET UNITYSDK_OFFSET(0x40BDAB0)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTCOLORGRADIENT__CTOR_OFFSET UNITYSDK_OFFSET(0x41FB2D0)

namespace UnityEngine::TextCore::Text
{
	inline static constexpr unsigned int TextColorGradient_TypeDefinitionIndex = 18708;

	class TextColorGradient : public ::UnityEngine::ScriptableObject
	{
	public:
		static ::UnityEngine::E46B881AA2636190* StaticGet_k_DefaultColor()
		{
			return (::UnityEngine::E46B881AA2636190*)Il2CppClass::FromTypeDefinitionIndex(TextColorGradient_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::A7C4D8DC50C86DC6::AF6E0EE88042EEDC colorMode; // 0x18
		::UnityEngine::E46B881AA2636190 topLeft; // 0x1C
		::UnityEngine::E46B881AA2636190 topRight; // 0x2C
		::UnityEngine::E46B881AA2636190 bottomLeft; // 0x3C
		::UnityEngine::E46B881AA2636190 bottomRight; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTCOLORGRADIENT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTCOLORGRADIENT__CCTOR_OFFSET))();
		}

		::System::Void _ctor_1(::UnityEngine::E46B881AA2636190 FD6BEC6563AC7110)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::E46B881AA2636190))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTCOLORGRADIENT__CTOR_1_OFFSET))(this, FD6BEC6563AC7110);
		}

		::System::Void _ctor_2(::UnityEngine::E46B881AA2636190 A106793D8D60A0D6, ::UnityEngine::E46B881AA2636190 F79B3E3276A56ADA, ::UnityEngine::E46B881AA2636190 AF43A6C0FD7729D5, ::UnityEngine::E46B881AA2636190 FE7839FE56009F81)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::E46B881AA2636190, ::UnityEngine::E46B881AA2636190, ::UnityEngine::E46B881AA2636190, ::UnityEngine::E46B881AA2636190))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTCOLORGRADIENT__CTOR_2_OFFSET))(this, A106793D8D60A0D6, F79B3E3276A56ADA, AF43A6C0FD7729D5, FE7839FE56009F81);
		}
	};
}
