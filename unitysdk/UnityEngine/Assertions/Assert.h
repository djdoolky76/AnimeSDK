#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace UnityEngine { class Object; }

#define UNITYENGINE_ASSERTIONS_ASSERT_AREEQUAL_2_OFFSET UNITYSDK_OFFSET(0x1F3D1D40)
#define UNITYENGINE_ASSERTIONS_ASSERT_AREEQUAL_3_OFFSET UNITYSDK_OFFSET(0x1F3D1FF0)
#define UNITYENGINE_ASSERTIONS_ASSERT_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F3D20B0)
#define UNITYENGINE_ASSERTIONS_ASSERT_FAIL_OFFSET UNITYSDK_OFFSET(0x1F3D1B80)

namespace UnityEngine::Assertions
{
	class Assert : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet_raiseExceptions()
		{
			return (::System::Boolean*)UnitySDK::FromName("UnityEngine.Assertions", "Assert")->GetStaticField(0x3100);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_ASSERTIONS_ASSERT_CCTOR_OFFSET))();
		}

		static ::System::Void Fail(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSERTIONS_ASSERT_FAIL_OFFSET))(a1, a2);
		}

		static ::System::Void AreEqual_2(::UnityEngine::Object* a1, ::UnityEngine::Object* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::UnityEngine::Object*, ::UnityEngine::Object*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSERTIONS_ASSERT_AREEQUAL_2_OFFSET))(a1, a2, a3);
		}

		static ::System::Void AreEqual_3(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSERTIONS_ASSERT_AREEQUAL_3_OFFSET))(a1, a2);
		}

	};
}
