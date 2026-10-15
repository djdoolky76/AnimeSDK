#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace HoudiniEngineUnity { class Test_Terrain; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Converter_2; }
namespace UnityEngine { class Terrain; }

#define HOUDINIENGINEUNITY_TEST_TERRAIN_EXTENSIONS___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1B9B6B70)
#define HOUDINIENGINEUNITY_TEST_TERRAIN_EXTENSIONS___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1B9B6BB0)
#define HOUDINIENGINEUNITY_TEST_TERRAIN_EXTENSIONS___C__TOTESTOBJECT_B__1_0_OFFSET UNITYSDK_OFFSET(0x1B9B6BC0)
#define HOUDINIENGINEUNITY_TEST_TERRAIN_EXTENSIONS___C__TOTESTOBJECT_B__2_0_OFFSET UNITYSDK_OFFSET(0x1B9B6C00)

namespace HoudiniEngineUnity
{
	class Test_Terrain_Extensions___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("HoudiniEngineUnity", "<>c")->GetStaticField(0x57700);
		}

		static ::System::Converter_2<::UnityEngine::Terrain*, ::HoudiniEngineUnity::Test_Terrain*>** StaticGet___9__1_0()
		{
			return (::System::Converter_2<::UnityEngine::Terrain*, ::HoudiniEngineUnity::Test_Terrain*>**)UnitySDK::FromName("HoudiniEngineUnity", "<>c")->GetStaticField(0x57708);
		}

		static ::System::Converter_2<::UnityEngine::Terrain*, ::HoudiniEngineUnity::Test_Terrain*>** StaticGet___9__2_0()
		{
			return (::System::Converter_2<::UnityEngine::Terrain*, ::HoudiniEngineUnity::Test_Terrain*>**)UnitySDK::FromName("HoudiniEngineUnity", "<>c")->GetStaticField(0x57710);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_TERRAIN_EXTENSIONS___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_TERRAIN_EXTENSIONS___C_CTOR_OFFSET))(this);
		}

		::HoudiniEngineUnity::Test_Terrain* _ToTestObject_b__1_0(::UnityEngine::Terrain* a1)
		{
			return ((::HoudiniEngineUnity::Test_Terrain*(*)(::PVOID, ::UnityEngine::Terrain*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_TERRAIN_EXTENSIONS___C__TOTESTOBJECT_B__1_0_OFFSET))(this, a1);
		}

		::HoudiniEngineUnity::Test_Terrain* _ToTestObject_b__2_0(::UnityEngine::Terrain* a1)
		{
			return ((::HoudiniEngineUnity::Test_Terrain*(*)(::PVOID, ::UnityEngine::Terrain*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_TERRAIN_EXTENSIONS___C__TOTESTOBJECT_B__2_0_OFFSET))(this, a1);
		}

	};
}
