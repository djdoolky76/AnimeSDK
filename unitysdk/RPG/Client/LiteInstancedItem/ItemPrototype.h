#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }

#define RPG_CLIENT_LITEINSTANCEDITEM_ITEMPROTOTYPE_CTOR_OFFSET UNITYSDK_OFFSET(0xD3FEB00)

namespace RPG::Client::LiteInstancedItem
{
	class ItemPrototype : public ::System::Object
	{
	public:
		::UnityEngine::Mesh* Mesh; // 0x10
		::System::Int32 SubMeshIndex; // 0x18
		::System::Byte _padding0[0x4];
		::UnityEngine::Material* Material; // 0x20
		::System::Boolean UseCustomBounds; // 0x28
		::System::Byte _padding1[0x3];
		::UnityEngine::Bounds CustomBounds; // 0x2C
		::System::Void _ctor(::UnityEngine::Mesh* a1, ::System::Int32 a2, ::UnityEngine::Material* a3, ::System::Boolean a4, ::UnityEngine::Bounds a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*, ::System::Int32, ::UnityEngine::Material*, ::System::Boolean, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITEINSTANCEDITEM_ITEMPROTOTYPE_CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

	};
}
