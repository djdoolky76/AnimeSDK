#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }
namespace UnityEngine { class Object; }

#define RAYFIRE_RAYFIRESNAPSHOT_BC5FC01AE53FF41F_OFFSET UNITYSDK_OFFSET(0x2A161B0)
#define RAYFIRE_RAYFIRESNAPSHOT__CTOR_OFFSET UNITYSDK_OFFSET(0x176D770)

namespace RayFire
{
	inline static constexpr unsigned int RayfireSnapshot_TypeDefinitionIndex = 15866;

	class RayfireSnapshot : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::String* assetName; // 0x20
		::System::Boolean compress; // 0x28
		::System::Byte _padding0[0x7];
		::UnityEngine::Object* snapshotAsset; // 0x30
		::System::Single sizeFilter; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIRESNAPSHOT__CTOR_OFFSET))(this);
		}

		::System::Void BC5FC01AE53FF41F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIRESNAPSHOT_BC5FC01AE53FF41F_OFFSET))(this);
		}
	};
}
