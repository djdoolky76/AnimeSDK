#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AFPAAGFDMMK;
class HIOEAKHGILF;
namespace System { class Action; }
namespace System { class Object; }
namespace UnityEngine { class Collider; }

#define AFPAAGFDMMK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xCF20620)
#define AFPAAGFDMMK___C_CTOR_OFFSET UNITYSDK_OFFSET(0xCF20650)
#define AFPAAGFDMMK___C___CREATEHINTTRIGGER_B__8_0_OFFSET UNITYSDK_OFFSET(0xCF206A0)
#define AFPAAGFDMMK___C___CREATEHINTTRIGGER_B__8_1_OFFSET UNITYSDK_OFFSET(0xCF206C0)
#define AFPAAGFDMMK___C___CREATEINTERACTTRIGGER_B__7_0_OFFSET UNITYSDK_OFFSET(0xCF20660)
#define AFPAAGFDMMK___C___CREATEINTERACTTRIGGER_B__7_1_OFFSET UNITYSDK_OFFSET(0xCF20680)

	class AFPAAGFDMMK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x52AB0);
		}

		static ::System::Action** StaticGet___9__7_0()
		{
			return (::System::Action**)UnitySDK::FromName("", "<>c")->GetStaticField(0x52AB8);
		}

		static ::System::Action** StaticGet___9__8_1()
		{
			return (::System::Action**)UnitySDK::FromName("", "<>c")->GetStaticField(0x52AC0);
		}

		static ::System::Action** StaticGet___9__7_1()
		{
			return (::System::Action**)UnitySDK::FromName("", "<>c")->GetStaticField(0x52AC8);
		}

		static ::System::Action** StaticGet___9__8_0()
		{
			return (::System::Action**)UnitySDK::FromName("", "<>c")->GetStaticField(0x52AD0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AFPAAGFDMMK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFPAAGFDMMK___C_CTOR_OFFSET))(this);
		}

		::System::Void __CreateInteractTrigger_b__7_0(::AFPAAGFDMMK* a1, ::HIOEAKHGILF* a2, ::UnityEngine::Collider* a3)
		{
			return ((::System::Void(*)(::PVOID, ::AFPAAGFDMMK*, ::HIOEAKHGILF*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + AFPAAGFDMMK___C___CREATEINTERACTTRIGGER_B__7_0_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __CreateInteractTrigger_b__7_1(::AFPAAGFDMMK* a1, ::HIOEAKHGILF* a2, ::UnityEngine::Collider* a3)
		{
			return ((::System::Void(*)(::PVOID, ::AFPAAGFDMMK*, ::HIOEAKHGILF*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + AFPAAGFDMMK___C___CREATEINTERACTTRIGGER_B__7_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __CreateHintTrigger_b__8_0(::AFPAAGFDMMK* a1, ::HIOEAKHGILF* a2, ::UnityEngine::Collider* a3)
		{
			return ((::System::Void(*)(::PVOID, ::AFPAAGFDMMK*, ::HIOEAKHGILF*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + AFPAAGFDMMK___C___CREATEHINTTRIGGER_B__8_0_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __CreateHintTrigger_b__8_1(::AFPAAGFDMMK* a1, ::HIOEAKHGILF* a2, ::UnityEngine::Collider* a3)
		{
			return ((::System::Void(*)(::PVOID, ::AFPAAGFDMMK*, ::HIOEAKHGILF*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + AFPAAGFDMMK___C___CREATEHINTTRIGGER_B__8_1_OFFSET))(this, a1, a2, a3);
		}

	};
