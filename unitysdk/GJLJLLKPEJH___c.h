#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GJLJLLKPEJH;
class HIOEAKHGILF;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace UnityEngine { class Collider; }

#define GJLJLLKPEJH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x15A63820)
#define GJLJLLKPEJH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x15A63850)
#define GJLJLLKPEJH___C___DEPLOYSWITCHPLATFORMTRIGGER_B__8_0_OFFSET UNITYSDK_OFFSET(0x15A63860)
#define GJLJLLKPEJH___C___DEPLOYSWITCHPLATFORMTRIGGER_B__8_1_OFFSET UNITYSDK_OFFSET(0x15A638E0)
#define GJLJLLKPEJH___C___LISTENLEVELVAR_B__20_0_OFFSET UNITYSDK_OFFSET(0x15A63900)

inline static constexpr unsigned int GJLJLLKPEJH___c_TypeDefinitionIndex = 77156;

	class GJLJLLKPEJH___c : public ::System::Object
	{
	public:
		static ::System::Action_3<::GJLJLLKPEJH*, ::HIOEAKHGILF*, ::UnityEngine::Collider*>** StaticGet___9__8_0()
		{
			return (::System::Action_3<::GJLJLLKPEJH*, ::HIOEAKHGILF*, ::UnityEngine::Collider*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x69080);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x69088);
		}

		static ::System::Action_3<::GJLJLLKPEJH*, ::HIOEAKHGILF*, ::UnityEngine::Collider*>** StaticGet___9__8_1()
		{
			return (::System::Action_3<::GJLJLLKPEJH*, ::HIOEAKHGILF*, ::UnityEngine::Collider*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x69090);
		}

		static ::System::Action_3<::GJLJLLKPEJH*, ::System::Int32, ::System::String*>** StaticGet___9__20_0()
		{
			return (::System::Action_3<::GJLJLLKPEJH*, ::System::Int32, ::System::String*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x69098);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GJLJLLKPEJH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJLJLLKPEJH___C_CTOR_OFFSET))(this);
		}

		::System::Void __DeploySwitchPlatformTrigger_b__8_0(::GJLJLLKPEJH* a1, ::HIOEAKHGILF* a2, ::UnityEngine::Collider* a3)
		{
			return ((::System::Void(*)(::PVOID, ::GJLJLLKPEJH*, ::HIOEAKHGILF*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + GJLJLLKPEJH___C___DEPLOYSWITCHPLATFORMTRIGGER_B__8_0_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __DeploySwitchPlatformTrigger_b__8_1(::GJLJLLKPEJH* a1, ::HIOEAKHGILF* a2, ::UnityEngine::Collider* a3)
		{
			return ((::System::Void(*)(::PVOID, ::GJLJLLKPEJH*, ::HIOEAKHGILF*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + GJLJLLKPEJH___C___DEPLOYSWITCHPLATFORMTRIGGER_B__8_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __ListenLevelVar_b__20_0(::GJLJLLKPEJH* a1, ::System::Int32 a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::GJLJLLKPEJH*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + GJLJLLKPEJH___C___LISTENLEVELVAR_B__20_0_OFFSET))(this, a1, a2, a3);
		}

	};
