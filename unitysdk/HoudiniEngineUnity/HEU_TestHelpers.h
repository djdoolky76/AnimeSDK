#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define HOUDINIENGINEUNITY_HEU_TESTHELPERS_ASSERTTRUELOGEQUIVALENT_10_OFFSET UNITYSDK_OFFSET(0x1B990A30)
#define HOUDINIENGINEUNITY_HEU_TESTHELPERS_ASSERTTRUELOGEQUIVALENT_1_OFFSET UNITYSDK_OFFSET(0x1B98F900)
#define HOUDINIENGINEUNITY_HEU_TESTHELPERS_ASSERTTRUELOGEQUIVALENT_4_OFFSET UNITYSDK_OFFSET(0x1B990820)
#define HOUDINIENGINEUNITY_HEU_TESTHELPERS_CTOR_OFFSET UNITYSDK_OFFSET(0x1B990C70)
#define HOUDINIENGINEUNITY_HEU_TESTHELPERS_PRINTTESTLOGANDSETRESULT_OFFSET UNITYSDK_OFFSET(0x1B9906D0)
#define HOUDINIENGINEUNITY_HEU_TESTHELPERS_SHOULDBETESTED_1_OFFSET UNITYSDK_OFFSET(0x1B98F9B0)
#define HOUDINIENGINEUNITY_HEU_TESTHELPERS_SHOULDBETESTED_6_OFFSET UNITYSDK_OFFSET(0x1B990960)
#define HOUDINIENGINEUNITY_HEU_TESTHELPERS_TESTOUTPUTOBJECTEQUIVALENCE_OFFSET UNITYSDK_OFFSET(0x1B98FB30)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_TestHelpers_TypeDefinitionIndex = 40691;

	class HEU_TestHelpers : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_TESTHELPERS_CTOR_OFFSET))(this);
		}

		static ::System::Boolean AssertTrueLogEquivalent_1(::UnityEngine::GameObject* a1, ::UnityEngine::GameObject* a2, ::System::Boolean a3, ::System::String* a4, ::System::String* a5, ::System::String* a6, ::System::String* a7, ::System::String* a8)
		{
			return ((::System::Boolean(*)(::UnityEngine::GameObject*, ::UnityEngine::GameObject*, ::System::Boolean, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_TESTHELPERS_ASSERTTRUELOGEQUIVALENT_1_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
		}

		static ::System::Boolean AssertTrueLogEquivalent_4(::System::String* a1, ::System::String* a2, ::System::Boolean a3, ::System::String* a4, ::System::String* a5, ::System::String* a6, ::System::String* a7, ::System::String* a8)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*, ::System::Boolean, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_TESTHELPERS_ASSERTTRUELOGEQUIVALENT_4_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
		}

		static ::System::Boolean AssertTrueLogEquivalent_10(::Il2CppArray<::System::String*>* a1, ::Il2CppArray<::System::String*>* a2, ::System::Boolean a3, ::System::String* a4, ::System::String* a5, ::System::String* a6, ::System::String* a7, ::System::String* a8)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::String*>*, ::Il2CppArray<::System::String*>*, ::System::Boolean, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_TESTHELPERS_ASSERTTRUELOGEQUIVALENT_10_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
		}

		static ::System::Void PrintTestLogAndSetResult(::System::Boolean a1, ::System::Boolean a2, ::System::String* a3, ::System::String* a4, ::System::String* a5, ::System::String* a6, ::System::String* a7)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::Boolean, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_TESTHELPERS_PRINTTESTLOGANDSETRESULT_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		static ::System::Boolean ShouldBeTested_1(::UnityEngine::GameObject* a1, ::UnityEngine::GameObject* a2, ::System::Boolean a3, ::System::String* a4, ::System::String* a5)
		{
			return ((::System::Boolean(*)(::UnityEngine::GameObject*, ::UnityEngine::GameObject*, ::System::Boolean, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_TESTHELPERS_SHOULDBETESTED_1_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Boolean ShouldBeTested_6(::System::String* a1, ::System::String* a2, ::System::Boolean a3, ::System::String* a4, ::System::String* a5)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*, ::System::Boolean, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_TESTHELPERS_SHOULDBETESTED_6_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Boolean TestOutputObjectEquivalence(::UnityEngine::GameObject* a1, ::UnityEngine::GameObject* a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::GameObject*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_TESTHELPERS_TESTOUTPUTOBJECTEQUIVALENCE_OFFSET))(a1, a2);
		}

	};
}
