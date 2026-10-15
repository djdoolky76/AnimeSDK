#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace HoudiniEngineUnity { class Test_BoxCollider; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Converter_2; }
namespace UnityEngine { class BoxCollider; }

#define HOUDINIENGINEUNITY_TEST_BOXCOLLIDER_EXTENSIONS___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1B98F560)
#define HOUDINIENGINEUNITY_TEST_BOXCOLLIDER_EXTENSIONS___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1B98F5A0)
#define HOUDINIENGINEUNITY_TEST_BOXCOLLIDER_EXTENSIONS___C__TOTESTOBJECT_B__1_0_OFFSET UNITYSDK_OFFSET(0x1B98F5B0)
#define HOUDINIENGINEUNITY_TEST_BOXCOLLIDER_EXTENSIONS___C__TOTESTOBJECT_B__2_0_OFFSET UNITYSDK_OFFSET(0x1B98F5F0)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int Test_BoxCollider_Extensions___c_TypeDefinitionIndex = 40724;

	class Test_BoxCollider_Extensions___c : public ::System::Object
	{
	public:
		static ::System::Converter_2<::UnityEngine::BoxCollider*, ::HoudiniEngineUnity::Test_BoxCollider*>** StaticGet___9__1_0()
		{
			return (::System::Converter_2<::UnityEngine::BoxCollider*, ::HoudiniEngineUnity::Test_BoxCollider*>**)UnitySDK::FromName("HoudiniEngineUnity", "<>c")->GetStaticField(0x640D0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("HoudiniEngineUnity", "<>c")->GetStaticField(0x640D8);
		}

		static ::System::Converter_2<::UnityEngine::BoxCollider*, ::HoudiniEngineUnity::Test_BoxCollider*>** StaticGet___9__2_0()
		{
			return (::System::Converter_2<::UnityEngine::BoxCollider*, ::HoudiniEngineUnity::Test_BoxCollider*>**)UnitySDK::FromName("HoudiniEngineUnity", "<>c")->GetStaticField(0x640E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_BOXCOLLIDER_EXTENSIONS___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_BOXCOLLIDER_EXTENSIONS___C_CTOR_OFFSET))(this);
		}

		::HoudiniEngineUnity::Test_BoxCollider* _ToTestObject_b__1_0(::UnityEngine::BoxCollider* a1)
		{
			return ((::HoudiniEngineUnity::Test_BoxCollider*(*)(::PVOID, ::UnityEngine::BoxCollider*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_BOXCOLLIDER_EXTENSIONS___C__TOTESTOBJECT_B__1_0_OFFSET))(this, a1);
		}

		::HoudiniEngineUnity::Test_BoxCollider* _ToTestObject_b__2_0(::UnityEngine::BoxCollider* a1)
		{
			return ((::HoudiniEngineUnity::Test_BoxCollider*(*)(::PVOID, ::UnityEngine::BoxCollider*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_BOXCOLLIDER_EXTENSIONS___C__TOTESTOBJECT_B__2_0_OFFSET))(this, a1);
		}

	};
}
