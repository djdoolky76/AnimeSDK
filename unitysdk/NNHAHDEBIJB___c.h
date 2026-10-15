#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HIOEAKHGILF;
class NNHAHDEBIJB;
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Collider; }

#define NNHAHDEBIJB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xBCAE970)
#define NNHAHDEBIJB___C_CTOR_OFFSET UNITYSDK_OFFSET(0xBCAE9A0)
#define NNHAHDEBIJB___C___DEPLOYSPIKETRAPTRIGGER_B__9_0_OFFSET UNITYSDK_OFFSET(0xBCAE9B0)
#define NNHAHDEBIJB___C___DEPLOYSPIKETRAPTRIGGER_B__9_1_OFFSET UNITYSDK_OFFSET(0xBCAE9E0)
#define NNHAHDEBIJB___C___LISTENLEVELVAR_B__23_0_OFFSET UNITYSDK_OFFSET(0xBCAEA10)

	class NNHAHDEBIJB___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__23_0()
		{
			return (::System::Action**)UnitySDK::FromName("", "<>c")->GetStaticField(0x539F0);
		}

		static ::System::Action** StaticGet___9__9_1()
		{
			return (::System::Action**)UnitySDK::FromName("", "<>c")->GetStaticField(0x539F8);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x53A00);
		}

		static ::System::Action** StaticGet___9__9_0()
		{
			return (::System::Action**)UnitySDK::FromName("", "<>c")->GetStaticField(0x53A08);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NNHAHDEBIJB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNHAHDEBIJB___C_CTOR_OFFSET))(this);
		}

		::System::Void __DeploySpikeTrapTrigger_b__9_0(::NNHAHDEBIJB* a1, ::HIOEAKHGILF* a2, ::UnityEngine::Collider* a3)
		{
			return ((::System::Void(*)(::PVOID, ::NNHAHDEBIJB*, ::HIOEAKHGILF*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + NNHAHDEBIJB___C___DEPLOYSPIKETRAPTRIGGER_B__9_0_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __DeploySpikeTrapTrigger_b__9_1(::NNHAHDEBIJB* a1, ::HIOEAKHGILF* a2, ::UnityEngine::Collider* a3)
		{
			return ((::System::Void(*)(::PVOID, ::NNHAHDEBIJB*, ::HIOEAKHGILF*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + NNHAHDEBIJB___C___DEPLOYSPIKETRAPTRIGGER_B__9_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __ListenLevelVar_b__23_0(::NNHAHDEBIJB* a1, ::System::Int32 a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::NNHAHDEBIJB*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + NNHAHDEBIJB___C___LISTENLEVELVAR_B__23_0_OFFSET))(this, a1, a2, a3);
		}

	};
