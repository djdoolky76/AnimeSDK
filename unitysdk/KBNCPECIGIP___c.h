#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HIOEAKHGILF;
class KBNCPECIGIP;
namespace System { class Object; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace UnityEngine { class Collider; }

#define KBNCPECIGIP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xBBAD020)
#define KBNCPECIGIP___C_CTOR_OFFSET UNITYSDK_OFFSET(0xBBAD050)
#define KBNCPECIGIP___C___INITDESTRUCTIBLEPROP_B__4_0_OFFSET UNITYSDK_OFFSET(0xBBAD060)
#define KBNCPECIGIP___C___INITDESTRUCTIBLEPROP_B__4_1_OFFSET UNITYSDK_OFFSET(0xBBAD090)

inline static constexpr unsigned int KBNCPECIGIP___c_TypeDefinitionIndex = 79417;

	class KBNCPECIGIP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x28FA0);
		}

		static ::System::Action_3<::KBNCPECIGIP*, ::HIOEAKHGILF*, ::UnityEngine::Collider*>** StaticGet___9__4_1()
		{
			return (::System::Action_3<::KBNCPECIGIP*, ::HIOEAKHGILF*, ::UnityEngine::Collider*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x28FA8);
		}

		static ::System::Action_3<::KBNCPECIGIP*, ::HIOEAKHGILF*, ::UnityEngine::Collider*>** StaticGet___9__4_0()
		{
			return (::System::Action_3<::KBNCPECIGIP*, ::HIOEAKHGILF*, ::UnityEngine::Collider*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x28FB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KBNCPECIGIP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBNCPECIGIP___C_CTOR_OFFSET))(this);
		}

		::System::Void __InitDestructibleProp_b__4_0(::KBNCPECIGIP* a1, ::HIOEAKHGILF* a2, ::UnityEngine::Collider* a3)
		{
			return ((::System::Void(*)(::PVOID, ::KBNCPECIGIP*, ::HIOEAKHGILF*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + KBNCPECIGIP___C___INITDESTRUCTIBLEPROP_B__4_0_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __InitDestructibleProp_b__4_1(::KBNCPECIGIP* a1, ::HIOEAKHGILF* a2, ::UnityEngine::Collider* a3)
		{
			return ((::System::Void(*)(::PVOID, ::KBNCPECIGIP*, ::HIOEAKHGILF*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + KBNCPECIGIP___C___INITDESTRUCTIBLEPROP_B__4_1_OFFSET))(this, a1, a2, a3);
		}

	};
