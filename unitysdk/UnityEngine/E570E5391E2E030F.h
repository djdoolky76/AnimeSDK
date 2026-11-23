#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/E570E5391E2E030F_F38C30B4060E9C1C.h"

namespace System { template <typename T> class Func_1; }
namespace UnityEngine { class Camera; }

#define UNITYENGINE_E570E5391E2E030F_A3A28D43169CEE60_OFFSET UNITYSDK_OFFSET(0x41A81F0)
#define UNITYENGINE_E570E5391E2E030F_A9177BE54B6E2510_OFFSET UNITYSDK_OFFSET(0x41A9880)
#define UNITYENGINE_E570E5391E2E030F_F959728E3BEA2F48_OFFSET UNITYSDK_OFFSET(0x41A8DE0)
#define UNITYENGINE_E570E5391E2E030F_FED9755FA474D233_OFFSET UNITYSDK_OFFSET(0x41A9830)
#define UNITYENGINE_E570E5391E2E030F__CCTOR_OFFSET UNITYSDK_OFFSET(0x41A9AD0)

namespace UnityEngine
{
	inline static constexpr unsigned int E570E5391E2E030F_TypeDefinitionIndex = 21331;

	class E570E5391E2E030F : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet_B9BDD3EB439D2DA9()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(E570E5391E2E030F_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::Il2CppArray<::System::Object*>** StaticGet_B9420B16E9402197()
		{
			return (::Il2CppArray<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(E570E5391E2E030F_TypeDefinitionIndex)->GetStaticField(0x8);
		}
		static ::Il2CppArray<::System::Object*>** StaticGet_ED72C942B329DA0F()
		{
			return (::Il2CppArray<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(E570E5391E2E030F_TypeDefinitionIndex)->GetStaticField(0x10);
		}
		static ::Il2CppArray<::System::Object*>** StaticGet_E829D49DEEE673C4()
		{
			return (::Il2CppArray<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(E570E5391E2E030F_TypeDefinitionIndex)->GetStaticField(0x18);
		}
		static ::Il2CppArray<::UnityEngine::Camera*>** StaticGet_A3B2D611D50282B7()
		{
			return (::Il2CppArray<::UnityEngine::Camera*>**)Il2CppClass::FromTypeDefinitionIndex(E570E5391E2E030F_TypeDefinitionIndex)->GetStaticField(0x20);
		}
		static ::System::Func_1<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::UnityEngine::Vector2>>** StaticGet_BCE5389A0A45CE37()
		{
			return (::System::Func_1<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::UnityEngine::Vector2>>**)Il2CppClass::FromTypeDefinitionIndex(E570E5391E2E030F_TypeDefinitionIndex)->GetStaticField(0x28);
		}
		static ::UnityEngine::Vector2* StaticGet_ED72F36C09C0D5F5()
		{
			return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(E570E5391E2E030F_TypeDefinitionIndex)->GetStaticField(0x30);
		}
		static ::System::Boolean* StaticGet_FEFBD6229ABCCF96()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(E570E5391E2E030F_TypeDefinitionIndex)->GetStaticField(0x38);
		}
		static ::System::Boolean* StaticGet_A113A1E41181A2EA()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(E570E5391E2E030F_TypeDefinitionIndex)->GetStaticField(0x39);
		}

		static ::System::Void A3A28D43169CEE60(::System::Int32 BD0CE5D2A2D49496)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_E570E5391E2E030F_A3A28D43169CEE60_OFFSET))(BD0CE5D2A2D49496);
		}

		static ::System::Void A9177BE54B6E2510()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_E570E5391E2E030F_A9177BE54B6E2510_OFFSET))();
		}

		static ::System::Void FED9755FA474D233()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_E570E5391E2E030F_FED9755FA474D233_OFFSET))();
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_E570E5391E2E030F__CCTOR_OFFSET))();
		}

		static ::System::Void F959728E3BEA2F48(::System::Int32 FC300ADBDFF24726, ::UnityEngine::E570E5391E2E030F_F38C30B4060E9C1C FD38A9AB8BEA087C)
		{
			return ((::System::Void(*)(::System::Int32, ::UnityEngine::E570E5391E2E030F_F38C30B4060E9C1C))((::PBYTE)hIl2Cpp + UNITYENGINE_E570E5391E2E030F_F959728E3BEA2F48_OFFSET))(FC300ADBDFF24726, FD38A9AB8BEA087C);
		}
	};
}
