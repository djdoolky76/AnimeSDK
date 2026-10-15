#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define RPG_CLIENT_TILEMASKZONE_CTOR_OFFSET UNITYSDK_OFFSET(0xE226C10)
#define RPG_CLIENT_TILEMASKZONE_EALJIEBLCHO_OFFSET UNITYSDK_OFFSET(0xE226B10)

namespace RPG::Client
{
	inline static constexpr unsigned int TileMaskZone_TypeDefinitionIndex = 70927;

	class TileMaskZone : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 center; // 0x10
		::UnityEngine::Vector3 size; // 0x1C
		::System::Single rotationY; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TILEMASKZONE_CTOR_OFFSET))(this);
		}

		::System::Boolean EALJIEBLCHO(::UnityEngine::Vector3 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_TILEMASKZONE_EALJIEBLCHO_OFFSET))(this, a1);
		}

	};
}
