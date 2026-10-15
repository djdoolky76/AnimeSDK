#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace HoudiniEngineUnity { class Test_Mesh; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Converter_2; }
namespace UnityEngine { class Mesh; }

#define HOUDINIENGINEUNITY_TEST_MESH_EXTENSIONS___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1B9B4B80)
#define HOUDINIENGINEUNITY_TEST_MESH_EXTENSIONS___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1B9B4BC0)
#define HOUDINIENGINEUNITY_TEST_MESH_EXTENSIONS___C__TOTESTOBJECT_B__1_0_OFFSET UNITYSDK_OFFSET(0x1B9B4BD0)
#define HOUDINIENGINEUNITY_TEST_MESH_EXTENSIONS___C__TOTESTOBJECT_B__2_0_OFFSET UNITYSDK_OFFSET(0x1B9B4C10)

namespace HoudiniEngineUnity
{
	class Test_Mesh_Extensions___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("HoudiniEngineUnity", "<>c")->GetStaticField(0x57510);
		}

		static ::System::Converter_2<::UnityEngine::Mesh*, ::HoudiniEngineUnity::Test_Mesh*>** StaticGet___9__2_0()
		{
			return (::System::Converter_2<::UnityEngine::Mesh*, ::HoudiniEngineUnity::Test_Mesh*>**)UnitySDK::FromName("HoudiniEngineUnity", "<>c")->GetStaticField(0x57518);
		}

		static ::System::Converter_2<::UnityEngine::Mesh*, ::HoudiniEngineUnity::Test_Mesh*>** StaticGet___9__1_0()
		{
			return (::System::Converter_2<::UnityEngine::Mesh*, ::HoudiniEngineUnity::Test_Mesh*>**)UnitySDK::FromName("HoudiniEngineUnity", "<>c")->GetStaticField(0x57520);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_MESH_EXTENSIONS___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_MESH_EXTENSIONS___C_CTOR_OFFSET))(this);
		}

		::HoudiniEngineUnity::Test_Mesh* _ToTestObject_b__1_0(::UnityEngine::Mesh* a1)
		{
			return ((::HoudiniEngineUnity::Test_Mesh*(*)(::PVOID, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_MESH_EXTENSIONS___C__TOTESTOBJECT_B__1_0_OFFSET))(this, a1);
		}

		::HoudiniEngineUnity::Test_Mesh* _ToTestObject_b__2_0(::UnityEngine::Mesh* a1)
		{
			return ((::HoudiniEngineUnity::Test_Mesh*(*)(::PVOID, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_MESH_EXTENSIONS___C__TOTESTOBJECT_B__2_0_OFFSET))(this, a1);
		}

	};
}
