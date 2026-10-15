#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HIOEAKHGILF;
class NDHHBHFFIIK;
namespace System { class Object; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace UnityEngine { class Collider; }

#define NDHHBHFFIIK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xBB23B50)
#define NDHHBHFFIIK___C_CTOR_OFFSET UNITYSDK_OFFSET(0xBB23B80)
#define NDHHBHFFIIK___C___DEPLOYDASHORBTRIGGER_B__9_0_OFFSET UNITYSDK_OFFSET(0xBB23B90)
#define NDHHBHFFIIK___C___DEPLOYDASHORBTRIGGER_B__9_1_OFFSET UNITYSDK_OFFSET(0xBB23BC0)

inline static constexpr unsigned int NDHHBHFFIIK___c_TypeDefinitionIndex = 77079;

	class NDHHBHFFIIK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x24D30);
		}

		static ::System::Action_3<::NDHHBHFFIIK*, ::HIOEAKHGILF*, ::UnityEngine::Collider*>** StaticGet___9__9_1()
		{
			return (::System::Action_3<::NDHHBHFFIIK*, ::HIOEAKHGILF*, ::UnityEngine::Collider*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x24D38);
		}

		static ::System::Action_3<::NDHHBHFFIIK*, ::HIOEAKHGILF*, ::UnityEngine::Collider*>** StaticGet___9__9_0()
		{
			return (::System::Action_3<::NDHHBHFFIIK*, ::HIOEAKHGILF*, ::UnityEngine::Collider*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x24D40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NDHHBHFFIIK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDHHBHFFIIK___C_CTOR_OFFSET))(this);
		}

		::System::Void __DeployDashOrbTrigger_b__9_0(::NDHHBHFFIIK* a1, ::HIOEAKHGILF* a2, ::UnityEngine::Collider* a3)
		{
			return ((::System::Void(*)(::PVOID, ::NDHHBHFFIIK*, ::HIOEAKHGILF*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + NDHHBHFFIIK___C___DEPLOYDASHORBTRIGGER_B__9_0_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __DeployDashOrbTrigger_b__9_1(::NDHHBHFFIIK* a1, ::HIOEAKHGILF* a2, ::UnityEngine::Collider* a3)
		{
			return ((::System::Void(*)(::PVOID, ::NDHHBHFFIIK*, ::HIOEAKHGILF*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + NDHHBHFFIIK___C___DEPLOYDASHORBTRIGGER_B__9_1_OFFSET))(this, a1, a2, a3);
		}

	};
