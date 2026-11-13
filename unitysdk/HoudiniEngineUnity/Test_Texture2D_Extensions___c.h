#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace HoudiniEngineUnity { class Test_Texture2D; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Converter_2; }
namespace UnityEngine { class Texture2D; }

#define HOUDINIENGINEUNITY_TEST_TEXTURE2D_EXTENSIONS___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x20880E90)
#define HOUDINIENGINEUNITY_TEST_TEXTURE2D_EXTENSIONS___C_CTOR_OFFSET UNITYSDK_OFFSET(0x20880ED0)
#define HOUDINIENGINEUNITY_TEST_TEXTURE2D_EXTENSIONS___C__TOTESTOBJECT_B__1_0_OFFSET UNITYSDK_OFFSET(0x20880EE0)
#define HOUDINIENGINEUNITY_TEST_TEXTURE2D_EXTENSIONS___C__TOTESTOBJECT_B__2_0_OFFSET UNITYSDK_OFFSET(0x20880F20)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int Test_Texture2D_Extensions___c_TypeDefinitionIndex = 41731;

	class Test_Texture2D_Extensions___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("HoudiniEngineUnity", "<>c")->GetStaticField(0x695C0);
		}

		static ::System::Converter_2<::UnityEngine::Texture2D*, ::HoudiniEngineUnity::Test_Texture2D*>** StaticGet___9__1_0()
		{
			return (::System::Converter_2<::UnityEngine::Texture2D*, ::HoudiniEngineUnity::Test_Texture2D*>**)UnitySDK::FromName("HoudiniEngineUnity", "<>c")->GetStaticField(0x695C8);
		}

		static ::System::Converter_2<::UnityEngine::Texture2D*, ::HoudiniEngineUnity::Test_Texture2D*>** StaticGet___9__2_0()
		{
			return (::System::Converter_2<::UnityEngine::Texture2D*, ::HoudiniEngineUnity::Test_Texture2D*>**)UnitySDK::FromName("HoudiniEngineUnity", "<>c")->GetStaticField(0x695D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_TEXTURE2D_EXTENSIONS___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_TEXTURE2D_EXTENSIONS___C_CTOR_OFFSET))(this);
		}

		::HoudiniEngineUnity::Test_Texture2D* _ToTestObject_b__1_0(::UnityEngine::Texture2D* a1)
		{
			return ((::HoudiniEngineUnity::Test_Texture2D*(*)(::PVOID, ::UnityEngine::Texture2D*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_TEXTURE2D_EXTENSIONS___C__TOTESTOBJECT_B__1_0_OFFSET))(this, a1);
		}

		::HoudiniEngineUnity::Test_Texture2D* _ToTestObject_b__2_0(::UnityEngine::Texture2D* a1)
		{
			return ((::HoudiniEngineUnity::Test_Texture2D*(*)(::PVOID, ::UnityEngine::Texture2D*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_TEXTURE2D_EXTENSIONS___C__TOTESTOBJECT_B__2_0_OFFSET))(this, a1);
		}

	};
}
