#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class Object; }

#define UNITYENGINE_ASSERTIONS_ASSERT_AREEQUAL_3_OFFSET UNITYSDK_OFFSET(0x1EC8DBA0)
#define UNITYENGINE_ASSERTIONS_ASSERT_AREEQUAL_4_OFFSET UNITYSDK_OFFSET(0x1EC8E090)
#define UNITYENGINE_ASSERTIONS_ASSERT_FAIL_OFFSET UNITYSDK_OFFSET(0x1EC8D610)
#define UNITYENGINE_ASSERTIONS_ASSERT_ISFALSE_1_OFFSET UNITYSDK_OFFSET(0x1EC8DA90)
#define UNITYENGINE_ASSERTIONS_ASSERT_ISFALSE_OFFSET UNITYSDK_OFFSET(0x1EC8D930)
#define UNITYENGINE_ASSERTIONS_ASSERT_ISNOTNULL_2_OFFSET UNITYSDK_OFFSET(0x1EC8DE30)
#define UNITYENGINE_ASSERTIONS_ASSERT_ISTRUE_1_OFFSET UNITYSDK_OFFSET(0x1EC8D840)
#define UNITYENGINE_ASSERTIONS_ASSERT_ISTRUE_OFFSET UNITYSDK_OFFSET(0x1EC8D6F0)
#define UNITYENGINE_ASSERTIONS_ASSERT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EC8E0F0)

namespace UnityEngine::Assertions
{
	inline static constexpr unsigned int Assert_TypeDefinitionIndex = 6360;

	class Assert : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet_raiseExceptions()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Assert_TypeDefinitionIndex)->GetStaticField(0x2E20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_ASSERTIONS_ASSERT__CCTOR_OFFSET))();
		}

		static ::System::Void Fail(::System::String* message, ::System::String* userMessage)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSERTIONS_ASSERT_FAIL_OFFSET))(message, userMessage);
		}

		static ::System::Void IsTrue(::System::Boolean condition)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSERTIONS_ASSERT_ISTRUE_OFFSET))(condition);
		}

		static ::System::Void IsTrue_1(::System::Boolean condition, ::System::String* message)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSERTIONS_ASSERT_ISTRUE_1_OFFSET))(condition, message);
		}

		static ::System::Void IsFalse(::System::Boolean condition)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSERTIONS_ASSERT_ISFALSE_OFFSET))(condition);
		}

		static ::System::Void IsFalse_1(::System::Boolean condition, ::System::String* message)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSERTIONS_ASSERT_ISFALSE_1_OFFSET))(condition, message);
		}

		static ::System::Void AreEqual_3(::UnityEngine::Object* expected, ::UnityEngine::Object* actual, ::System::String* message)
		{
			return ((::System::Void(*)(::UnityEngine::Object*, ::UnityEngine::Object*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSERTIONS_ASSERT_AREEQUAL_3_OFFSET))(expected, actual, message);
		}

		static ::System::Void IsNotNull_2(::UnityEngine::Object* value, ::System::String* message)
		{
			return ((::System::Void(*)(::UnityEngine::Object*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSERTIONS_ASSERT_ISNOTNULL_2_OFFSET))(value, message);
		}

		static ::System::Void AreEqual_4(::System::Int32 expected, ::System::Int32 actual)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSERTIONS_ASSERT_AREEQUAL_4_OFFSET))(expected, actual);
		}
	};
}
