#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AFPAAGFDMMK;
class HIOEAKHGILF;
namespace System { class Object; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace UnityEngine { class Collider; }

#define AFPAAGFDMMK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xCF19200)
#define AFPAAGFDMMK___C_CTOR_OFFSET UNITYSDK_OFFSET(0xCF19230)
#define AFPAAGFDMMK___C___CREATEHINTTRIGGER_B__8_0_OFFSET UNITYSDK_OFFSET(0xCF19280)
#define AFPAAGFDMMK___C___CREATEHINTTRIGGER_B__8_1_OFFSET UNITYSDK_OFFSET(0xCF192A0)
#define AFPAAGFDMMK___C___CREATEINTERACTTRIGGER_B__7_0_OFFSET UNITYSDK_OFFSET(0xCF19240)
#define AFPAAGFDMMK___C___CREATEINTERACTTRIGGER_B__7_1_OFFSET UNITYSDK_OFFSET(0xCF19260)

inline static constexpr unsigned int AFPAAGFDMMK___c_TypeDefinitionIndex = 77135;

	class AFPAAGFDMMK___c : public ::System::Object
	{
	public:
		static ::System::Action_3<::AFPAAGFDMMK*, ::HIOEAKHGILF*, ::UnityEngine::Collider*>** StaticGet___9__7_0()
		{
			return (::System::Action_3<::AFPAAGFDMMK*, ::HIOEAKHGILF*, ::UnityEngine::Collider*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4A610);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4A618);
		}

		static ::System::Action_3<::AFPAAGFDMMK*, ::HIOEAKHGILF*, ::UnityEngine::Collider*>** StaticGet___9__8_0()
		{
			return (::System::Action_3<::AFPAAGFDMMK*, ::HIOEAKHGILF*, ::UnityEngine::Collider*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4A620);
		}

		static ::System::Action_3<::AFPAAGFDMMK*, ::HIOEAKHGILF*, ::UnityEngine::Collider*>** StaticGet___9__8_1()
		{
			return (::System::Action_3<::AFPAAGFDMMK*, ::HIOEAKHGILF*, ::UnityEngine::Collider*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4A628);
		}

		static ::System::Action_3<::AFPAAGFDMMK*, ::HIOEAKHGILF*, ::UnityEngine::Collider*>** StaticGet___9__7_1()
		{
			return (::System::Action_3<::AFPAAGFDMMK*, ::HIOEAKHGILF*, ::UnityEngine::Collider*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4A630);
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
