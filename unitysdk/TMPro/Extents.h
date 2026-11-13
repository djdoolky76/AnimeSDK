#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector2.h"
namespace System { class String; }

#define TMPRO_EXTENTS_CCTOR_OFFSET UNITYSDK_OFFSET(0x19B8AA90)
#define TMPRO_EXTENTS_CTOR_OFFSET UNITYSDK_OFFSET(0x6516D0)
#define TMPRO_EXTENTS_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3E422A0)

namespace TMPro
{
	inline static constexpr unsigned int Extents_TypeDefinitionIndex = 45761;

	struct alignas(4) Extents
	{
		::UnityEngine::Vector2 min; // 0x10
		::UnityEngine::Vector2 max; // 0x18
		static ::TMPro::Extents* StaticGet_zero()
		{
			return (::TMPro::Extents*)UnitySDK::FromName("TMPro", "Extents")->GetStaticField(0x14C80);
		}

		static ::TMPro::Extents* StaticGet_uninitialized()
		{
			return (::TMPro::Extents*)UnitySDK::FromName("TMPro", "Extents")->GetStaticField(0x14C90);
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
