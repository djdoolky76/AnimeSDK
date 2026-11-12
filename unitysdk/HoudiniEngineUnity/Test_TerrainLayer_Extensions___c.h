#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace HoudiniEngineUnity { class Test_TerrainLayer; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Converter_2; }
namespace UnityEngine { class TerrainLayer; }

#define HOUDINIENGINEUNITY_TEST_TERRAINLAYER_EXTENSIONS___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CB3F740)
#define HOUDINIENGINEUNITY_TEST_TERRAINLAYER_EXTENSIONS___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1CB3F780)
#define HOUDINIENGINEUNITY_TEST_TERRAINLAYER_EXTENSIONS___C__TOTESTOBJECT_B__1_0_OFFSET UNITYSDK_OFFSET(0x1CB3F790)
#define HOUDINIENGINEUNITY_TEST_TERRAINLAYER_EXTENSIONS___C__TOTESTOBJECT_B__2_0_OFFSET UNITYSDK_OFFSET(0x1CB3F7D0)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int Test_TerrainLayer_Extensions___c_TypeDefinitionIndex = 41728;

	class Test_TerrainLayer_Extensions___c : public ::System::Object
	{
	public:
		static ::System::Converter_2<::UnityEngine::TerrainLayer*, ::HoudiniEngineUnity::Test_TerrainLayer*>** StaticGet___9__1_0()
		{
			return (::System::Converter_2<::UnityEngine::TerrainLayer*, ::HoudiniEngineUnity::Test_TerrainLayer*>**)UnitySDK::FromName("HoudiniEngineUnity", "<>c")->GetStaticField(0x68E80);
		}

		static ::System::Converter_2<::UnityEngine::TerrainLayer*, ::HoudiniEngineUnity::Test_TerrainLayer*>** StaticGet___9__2_0()
		{
			return (::System::Converter_2<::UnityEngine::TerrainLayer*, ::HoudiniEngineUnity::Test_TerrainLayer*>**)UnitySDK::FromName("HoudiniEngineUnity", "<>c")->GetStaticField(0x68E88);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("HoudiniEngineUnity", "<>c")->GetStaticField(0x68E90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_TERRAINLAYER_EXTENSIONS___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_TERRAINLAYER_EXTENSIONS___C_CTOR_OFFSET))(this);
		}

		::HoudiniEngineUnity::Test_TerrainLayer* _ToTestObject_b__1_0(::UnityEngine::TerrainLayer* a1)
		{
			return ((::HoudiniEngineUnity::Test_TerrainLayer*(*)(::PVOID, ::UnityEngine::TerrainLayer*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_TERRAINLAYER_EXTENSIONS___C__TOTESTOBJECT_B__1_0_OFFSET))(this, a1);
		}

		::HoudiniEngineUnity::Test_TerrainLayer* _ToTestObject_b__2_0(::UnityEngine::TerrainLayer* a1)
		{
			return ((::HoudiniEngineUnity::Test_TerrainLayer*(*)(::PVOID, ::UnityEngine::TerrainLayer*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_TERRAINLAYER_EXTENSIONS___C__TOTESTOBJECT_B__2_0_OFFSET))(this, a1);
		}

	};
}
