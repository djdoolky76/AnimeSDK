#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace UnityEngine { class Terrain; }

#define UNITYENGINE_EXPERIMENTAL_TERRAINAPI_TERRAINUTILITY___C__DISPLAYCLASS4_1_CTOR_OFFSET UNITYSDK_OFFSET(0x1F49F370)
#define UNITYENGINE_EXPERIMENTAL_TERRAINAPI_TERRAINUTILITY___C__DISPLAYCLASS4_1__COLLECTTERRAINS_B__0_OFFSET UNITYSDK_OFFSET(0x1F49FDC0)

namespace UnityEngine::Experimental::TerrainAPI
{
	template <typename T>
	class TerrainUtility___c__DisplayClass4_1 : public ::System::Object
	{
	public:
		::UnityEngine::Terrain* t; // 0x10
		::System::Object* CS___8__locals1; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_TERRAINAPI_TERRAINUTILITY___C__DISPLAYCLASS4_1_CTOR_OFFSET))(this);
		}

		::System::Boolean _CollectTerrains_b__0(::UnityEngine::Terrain* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Terrain*))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_TERRAINAPI_TERRAINUTILITY___C__DISPLAYCLASS4_1__COLLECTTERRAINS_B__0_OFFSET))(this, a1);
		}

	};
}
