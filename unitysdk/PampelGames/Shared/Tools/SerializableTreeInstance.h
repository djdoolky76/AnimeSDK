#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/A32676FCB736C8E8.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/F1B6E53C152C2519.h"

#define PAMPELGAMES_SHARED_TOOLS_SERIALIZABLETREEINSTANCE_TOTREEINSTANCE_OFFSET UNITYSDK_OFFSET(0x3DBF7A0)
#define PAMPELGAMES_SHARED_TOOLS_SERIALIZABLETREEINSTANCE__CTOR_OFFSET UNITYSDK_OFFSET(0x3DBF7E0)

namespace PampelGames::Shared::Tools
{
	inline static constexpr unsigned int SerializableTreeInstance_TypeDefinitionIndex = 21153;

	class SerializableTreeInstance : public ::System::Object
	{
	public:
		::System::Int32 prototypeIndex; // 0x10
		::UnityEngine::Vector3 position; // 0x14
		::System::Single widthScale; // 0x20
		::System::Single heightScale; // 0x24
		::System::Single rotation; // 0x28
		::UnityEngine::A32676FCB736C8E8 color; // 0x2C
		::UnityEngine::A32676FCB736C8E8 lightmapColor; // 0x30

		::UnityEngine::F1B6E53C152C2519 ToTreeInstance()
		{
			return ((::UnityEngine::F1B6E53C152C2519(*)(::PVOID))((::PBYTE)hIl2Cpp + PAMPELGAMES_SHARED_TOOLS_SERIALIZABLETREEINSTANCE_TOTREEINSTANCE_OFFSET))(this);
		}

		::System::Void _ctor(::UnityEngine::F1B6E53C152C2519 A1B3D531AC0148F2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::F1B6E53C152C2519))((::PBYTE)hIl2Cpp + PAMPELGAMES_SHARED_TOOLS_SERIALIZABLETREEINSTANCE__CTOR_OFFSET))(this, A1B3D531AC0148F2);
		}
	};
}
