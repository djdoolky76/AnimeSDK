#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class BGGMCIMHLDH;
class HIOEAKHGILF;
class NDNNILEFPHG;
namespace Entitas { class IEntity; }
namespace System { class Action; }
namespace System { class Object; }
namespace UnityEngine { class Collider; }

#define BGGMCIMHLDH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xB188A30)
#define BGGMCIMHLDH___C_CTOR_OFFSET UNITYSDK_OFFSET(0xB188A60)
#define BGGMCIMHLDH___C___CREATEINTERACTTRIGGER_B__6_0_OFFSET UNITYSDK_OFFSET(0xB188A70)
#define BGGMCIMHLDH___C___CREATEPROPMOVETRIGGER_B__8_0_OFFSET UNITYSDK_OFFSET(0xB188A90)
#define BGGMCIMHLDH___C___CREATEPROPMOVETRIGGER_B__8_1_OFFSET UNITYSDK_OFFSET(0xB188AE0)
#define BGGMCIMHLDH___C___FIREARROWINTERACTEFFECTDELAYED_B__23_0_OFFSET UNITYSDK_OFFSET(0xB188B30)

inline static constexpr unsigned int BGGMCIMHLDH___c_TypeDefinitionIndex = 77128;

	class BGGMCIMHLDH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6E8C0);
		}

		static ::System::Action** StaticGet___9__8_0()
		{
			return (::System::Action**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6E8C8);
		}

		static ::System::Action** StaticGet___9__6_0()
		{
			return (::System::Action**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6E8D0);
		}

		static ::System::Action** StaticGet___9__23_0()
		{
			return (::System::Action**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6E8D8);
		}

		static ::System::Action** StaticGet___9__8_1()
		{
			return (::System::Action**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6E8E0);
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
