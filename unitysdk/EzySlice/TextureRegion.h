#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define EZYSLICE_TEXTUREREGION_CTOR_OFFSET UNITYSDK_OFFSET(0x7EFA30)
#define EZYSLICE_TEXTUREREGION_GET_ENDX_OFFSET UNITYSDK_OFFSET(0xFDCAE0)
#define EZYSLICE_TEXTUREREGION_GET_ENDY_OFFSET UNITYSDK_OFFSET(0xFDD0D0)
#define EZYSLICE_TEXTUREREGION_GET_END_OFFSET UNITYSDK_OFFSET(0x6C95B0)
#define EZYSLICE_TEXTUREREGION_GET_STARTX_OFFSET UNITYSDK_OFFSET(0x7CEEA0)
#define EZYSLICE_TEXTUREREGION_GET_STARTY_OFFSET UNITYSDK_OFFSET(0x7CEEB0)
#define EZYSLICE_TEXTUREREGION_GET_START_OFFSET UNITYSDK_OFFSET(0x6C8DB0)
#define EZYSLICE_TEXTUREREGION_MAP_1_OFFSET UNITYSDK_OFFSET(0x3E60140)
#define EZYSLICE_TEXTUREREGION_MAP_OFFSET UNITYSDK_OFFSET(0x1A690520)
#define EZYSLICE_TEXTUREREGION_MAP_OFFSET UNITYSDK_OFFSET(0x3E600F0)

namespace EzySlice
{
	inline static constexpr unsigned int TextureRegion_TypeDefinitionIndex = 48027;

	struct alignas(4) TextureRegion
	{
		::System::Single pos_start_x; // 0x10
		::System::Single pos_start_y; // 0x14
		::System::Single pos_end_x; // 0x18
		::System::Single pos_end_y; // 0x1C
		::System::Void _ctor(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EZYSLICE_TEXTUREREGION_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Single get_startX()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + EZYSLICE_TEXTUREREGION_GET_STARTX_OFFSET))(this);
		}

		::System::Single get_startY()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + EZYSLICE_TEXTUREREGION_GET_STARTY_OFFSET))(this);
		}

		::System::Single get_endX()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + EZYSLICE_TEXTUREREGION_GET_ENDX_OFFSET))(this);
		}

		::System::Single get_endY()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + EZYSLICE_TEXTUREREGION_GET_ENDY_OFFSET))(this);
		}

		::UnityEngine::Vector2 get_start()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + EZYSLICE_TEXTUREREGION_GET_START_OFFSET))(this);
		}

		::UnityEngine::Vector2 get_end()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + EZYSLICE_TEXTUREREGION_GET_END_OFFSET))(this);
		}

		::UnityEngine::Vector2 Map(::UnityEngine::Vector2 a1)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + EZYSLICE_TEXTUREREGION_MAP_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 Map_1(::System::Single a1, ::System::Single a2)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EZYSLICE_TEXTUREREGION_MAP_1_OFFSET))(this, a1, a2);
		}

		static ::System::Single MAP(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EZYSLICE_TEXTUREREGION_MAP_OFFSET))(a1, a2, a3, a4, a5);
		}

	};
}
