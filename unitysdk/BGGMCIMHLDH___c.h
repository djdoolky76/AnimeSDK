#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class BGGMCIMHLDH;
class HIOEAKHGILF;
class NDNNILEFPHG;
namespace Entitas { class IEntity; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Action_4; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine { class Collider; }

#define BGGMCIMHLDH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x151C5B00)
#define BGGMCIMHLDH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x151C5B30)
#define BGGMCIMHLDH___C___CREATEINTERACTTRIGGER_B__6_0_OFFSET UNITYSDK_OFFSET(0x151C5B40)
#define BGGMCIMHLDH___C___CREATEPROPMOVETRIGGER_B__8_0_OFFSET UNITYSDK_OFFSET(0x151C5B60)
#define BGGMCIMHLDH___C___CREATEPROPMOVETRIGGER_B__8_1_OFFSET UNITYSDK_OFFSET(0x151C5BB0)
#define BGGMCIMHLDH___C___FIREARROWINTERACTEFFECTDELAYED_B__23_0_OFFSET UNITYSDK_OFFSET(0x151C5C00)

inline static constexpr unsigned int BGGMCIMHLDH___c_TypeDefinitionIndex = 79461;

	class BGGMCIMHLDH___c : public ::System::Object
	{
	public:
		static ::System::Action_4<::BGGMCIMHLDH*, ::UnityEngine::Vector3, ::Entitas::IEntity*, ::NDNNILEFPHG*>** StaticGet___9__23_0()
		{
			return (::System::Action_4<::BGGMCIMHLDH*, ::UnityEngine::Vector3, ::Entitas::IEntity*, ::NDNNILEFPHG*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5DB00);
		}

		static ::System::Action_3<::BGGMCIMHLDH*, ::HIOEAKHGILF*, ::UnityEngine::Collider*>** StaticGet___9__8_0()
		{
			return (::System::Action_3<::BGGMCIMHLDH*, ::HIOEAKHGILF*, ::UnityEngine::Collider*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5DB08);
		}

		static ::System::Action_2<::BGGMCIMHLDH*, ::HIOEAKHGILF*>** StaticGet___9__6_0()
		{
			return (::System::Action_2<::BGGMCIMHLDH*, ::HIOEAKHGILF*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5DB10);
		}

		static ::System::Action_3<::BGGMCIMHLDH*, ::HIOEAKHGILF*, ::UnityEngine::Collider*>** StaticGet___9__8_1()
		{
			return (::System::Action_3<::BGGMCIMHLDH*, ::HIOEAKHGILF*, ::UnityEngine::Collider*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5DB18);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5DB20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BGGMCIMHLDH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGGMCIMHLDH___C_CTOR_OFFSET))(this);
		}

		::System::Void __CreateInteractTrigger_b__6_0(::BGGMCIMHLDH* a1, ::HIOEAKHGILF* a2)
		{
			return ((::System::Void(*)(::PVOID, ::BGGMCIMHLDH*, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + BGGMCIMHLDH___C___CREATEINTERACTTRIGGER_B__6_0_OFFSET))(this, a1, a2);
		}

		::System::Void __CreatePropMoveTrigger_b__8_0(::BGGMCIMHLDH* a1, ::HIOEAKHGILF* a2, ::UnityEngine::Collider* a3)
		{
			return ((::System::Void(*)(::PVOID, ::BGGMCIMHLDH*, ::HIOEAKHGILF*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + BGGMCIMHLDH___C___CREATEPROPMOVETRIGGER_B__8_0_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __CreatePropMoveTrigger_b__8_1(::BGGMCIMHLDH* a1, ::HIOEAKHGILF* a2, ::UnityEngine::Collider* a3)
		{
			return ((::System::Void(*)(::PVOID, ::BGGMCIMHLDH*, ::HIOEAKHGILF*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + BGGMCIMHLDH___C___CREATEPROPMOVETRIGGER_B__8_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __FireArrowInteractEffectDelayed_b__23_0(::BGGMCIMHLDH* a1, ::UnityEngine::Vector3 a2, ::Entitas::IEntity* a3, ::NDNNILEFPHG* a4)
		{
			return ((::System::Void(*)(::PVOID, ::BGGMCIMHLDH*, ::UnityEngine::Vector3, ::Entitas::IEntity*, ::NDNNILEFPHG*))((::PBYTE)hIl2Cpp + BGGMCIMHLDH___C___FIREARROWINTERACTEFFECTDELAYED_B__23_0_OFFSET))(this, a1, a2, a3, a4);
		}

	};
