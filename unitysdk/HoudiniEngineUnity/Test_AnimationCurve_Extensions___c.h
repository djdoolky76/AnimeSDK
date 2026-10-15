#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace HoudiniEngineUnity { class Test_AnimationCurve; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Converter_2; }
namespace UnityEngine { class AnimationCurve; }

#define HOUDINIENGINEUNITY_TEST_ANIMATIONCURVE_EXTENSIONS___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1B9AF3E0)
#define HOUDINIENGINEUNITY_TEST_ANIMATIONCURVE_EXTENSIONS___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1B9AF420)
#define HOUDINIENGINEUNITY_TEST_ANIMATIONCURVE_EXTENSIONS___C__TOTESTOBJECT_B__1_0_OFFSET UNITYSDK_OFFSET(0x1B9AF430)
#define HOUDINIENGINEUNITY_TEST_ANIMATIONCURVE_EXTENSIONS___C__TOTESTOBJECT_B__2_0_OFFSET UNITYSDK_OFFSET(0x1B9AF470)

namespace HoudiniEngineUnity
{
	class Test_AnimationCurve_Extensions___c : public ::System::Object
	{
	public:
		static ::System::Converter_2<::UnityEngine::AnimationCurve*, ::HoudiniEngineUnity::Test_AnimationCurve*>** StaticGet___9__1_0()
		{
			return (::System::Converter_2<::UnityEngine::AnimationCurve*, ::HoudiniEngineUnity::Test_AnimationCurve*>**)UnitySDK::FromName("HoudiniEngineUnity", "<>c")->GetStaticField(0x56EF0);
		}

		static ::System::Converter_2<::UnityEngine::AnimationCurve*, ::HoudiniEngineUnity::Test_AnimationCurve*>** StaticGet___9__2_0()
		{
			return (::System::Converter_2<::UnityEngine::AnimationCurve*, ::HoudiniEngineUnity::Test_AnimationCurve*>**)UnitySDK::FromName("HoudiniEngineUnity", "<>c")->GetStaticField(0x56EF8);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("HoudiniEngineUnity", "<>c")->GetStaticField(0x56F00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_ANIMATIONCURVE_EXTENSIONS___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_ANIMATIONCURVE_EXTENSIONS___C_CTOR_OFFSET))(this);
		}

		::HoudiniEngineUnity::Test_AnimationCurve* _ToTestObject_b__1_0(::UnityEngine::AnimationCurve* a1)
		{
			return ((::HoudiniEngineUnity::Test_AnimationCurve*(*)(::PVOID, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_ANIMATIONCURVE_EXTENSIONS___C__TOTESTOBJECT_B__1_0_OFFSET))(this, a1);
		}

		::HoudiniEngineUnity::Test_AnimationCurve* _ToTestObject_b__2_0(::UnityEngine::AnimationCurve* a1)
		{
			return ((::HoudiniEngineUnity::Test_AnimationCurve*(*)(::PVOID, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_ANIMATIONCURVE_EXTENSIONS___C__TOTESTOBJECT_B__2_0_OFFSET))(this, a1);
		}

	};
}
