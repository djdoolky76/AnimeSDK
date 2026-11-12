#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BHBHHBIDBIB;
class HIOEAKHGILF;
namespace System { class Object; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace UnityEngine { class Collider; }

#define BHBHHBIDBIB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xBB28110)
#define BHBHHBIDBIB___C_CTOR_OFFSET UNITYSDK_OFFSET(0xBB28140)
#define BHBHHBIDBIB___C__GET__TRIGGERFILTER_B__8_0_OFFSET UNITYSDK_OFFSET(0xBB281A0)
#define BHBHHBIDBIB___C___CREATETRIGGER_B__6_0_OFFSET UNITYSDK_OFFSET(0xBB28150)
#define BHBHHBIDBIB___C___CREATETRIGGER_B__6_1_OFFSET UNITYSDK_OFFSET(0xBB28180)

inline static constexpr unsigned int BHBHHBIDBIB___c_TypeDefinitionIndex = 79481;

	class BHBHHBIDBIB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6B170);
		}

		static ::System::Func_3<::BHBHHBIDBIB*, ::UnityEngine::Collider*, ::System::Boolean>** StaticGet___9__8_0()
		{
			return (::System::Func_3<::BHBHHBIDBIB*, ::UnityEngine::Collider*, ::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6B178);
		}

		static ::System::Action_3<::BHBHHBIDBIB*, ::HIOEAKHGILF*, ::UnityEngine::Collider*>** StaticGet___9__6_0()
		{
			return (::System::Action_3<::BHBHHBIDBIB*, ::HIOEAKHGILF*, ::UnityEngine::Collider*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6B180);
		}

		static ::System::Action_3<::BHBHHBIDBIB*, ::HIOEAKHGILF*, ::UnityEngine::Collider*>** StaticGet___9__6_1()
		{
			return (::System::Action_3<::BHBHHBIDBIB*, ::HIOEAKHGILF*, ::UnityEngine::Collider*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6B188);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BHBHHBIDBIB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHBHHBIDBIB___C_CTOR_OFFSET))(this);
		}

		::System::Void __CreateTrigger_b__6_0(::BHBHHBIDBIB* a1, ::HIOEAKHGILF* a2, ::UnityEngine::Collider* a3)
		{
			return ((::System::Void(*)(::PVOID, ::BHBHHBIDBIB*, ::HIOEAKHGILF*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + BHBHHBIDBIB___C___CREATETRIGGER_B__6_0_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __CreateTrigger_b__6_1(::BHBHHBIDBIB* a1, ::HIOEAKHGILF* a2, ::UnityEngine::Collider* a3)
		{
			return ((::System::Void(*)(::PVOID, ::BHBHHBIDBIB*, ::HIOEAKHGILF*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + BHBHHBIDBIB___C___CREATETRIGGER_B__6_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean _get__TriggerFilter_b__8_0(::BHBHHBIDBIB* a1, ::UnityEngine::Collider* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::BHBHHBIDBIB*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + BHBHHBIDBIB___C__GET__TRIGGERFILTER_B__8_0_OFFSET))(this, a1, a2);
		}

	};
