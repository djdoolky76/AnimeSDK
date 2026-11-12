#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector2.h"
namespace System { class String; }

#define TMPRO_EXTENTS_CCTOR_OFFSET UNITYSDK_OFFSET(0x205963F0)
#define TMPRO_EXTENTS_CTOR_OFFSET UNITYSDK_OFFSET(0x13290)
#define TMPRO_EXTENTS_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3EB6430)

namespace TMPro
{
	inline static constexpr unsigned int Extents_TypeDefinitionIndex = 45761;

	struct alignas(4) Extents
	{
		::UnityEngine::Vector2 min; // 0x10
		::UnityEngine::Vector2 max; // 0x18
		static ::TMPro::Extents* StaticGet_zero()
		{
			return (::TMPro::Extents*)UnitySDK::FromName("TMPro", "Extents")->GetStaticField(0x154A0);
		}

		static ::TMPro::Extents* StaticGet_uninitialized()
		{
			return (::TMPro::Extents*)UnitySDK::FromName("TMPro", "Extents")->GetStaticField(0x154B0);
		}

		::System::Void _ctor(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + TMPRO_EXTENTS_CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + TMPRO_EXTENTS_CCTOR_OFFSET))();
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_EXTENTS_TOSTRING_OFFSET))(this);
		}

	};
}
