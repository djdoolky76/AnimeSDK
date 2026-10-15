#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HIOEAKHGILF;
class KPAAMDOGJFN;
namespace System { class Object; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace UnityEngine { class Collider; }

#define KPAAMDOGJFN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xB5A7660)
#define KPAAMDOGJFN___C_CTOR_OFFSET UNITYSDK_OFFSET(0xB5A7690)
#define KPAAMDOGJFN___C___INITONESIDEPASSPROP_B__5_0_OFFSET UNITYSDK_OFFSET(0xB5A76A0)
#define KPAAMDOGJFN___C___INITONESIDEPASSPROP_B__5_1_OFFSET UNITYSDK_OFFSET(0xB5A76D0)

inline static constexpr unsigned int KPAAMDOGJFN___c_TypeDefinitionIndex = 77134;

	class KPAAMDOGJFN___c : public ::System::Object
	{
	public:
		static ::System::Action_3<::KPAAMDOGJFN*, ::HIOEAKHGILF*, ::UnityEngine::Collider*>** StaticGet___9__5_1()
		{
			return (::System::Action_3<::KPAAMDOGJFN*, ::HIOEAKHGILF*, ::UnityEngine::Collider*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x64F50);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x64F58);
		}

		static ::System::Action_3<::KPAAMDOGJFN*, ::HIOEAKHGILF*, ::UnityEngine::Collider*>** StaticGet___9__5_0()
		{
			return (::System::Action_3<::KPAAMDOGJFN*, ::HIOEAKHGILF*, ::UnityEngine::Collider*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x64F60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KPAAMDOGJFN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPAAMDOGJFN___C_CTOR_OFFSET))(this);
		}

		::System::Void __InitOneSidePassProp_b__5_0(::KPAAMDOGJFN* a1, ::HIOEAKHGILF* a2, ::UnityEngine::Collider* a3)
		{
			return ((::System::Void(*)(::PVOID, ::KPAAMDOGJFN*, ::HIOEAKHGILF*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + KPAAMDOGJFN___C___INITONESIDEPASSPROP_B__5_0_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __InitOneSidePassProp_b__5_1(::KPAAMDOGJFN* a1, ::HIOEAKHGILF* a2, ::UnityEngine::Collider* a3)
		{
			return ((::System::Void(*)(::PVOID, ::KPAAMDOGJFN*, ::HIOEAKHGILF*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + KPAAMDOGJFN___C___INITONESIDEPASSPROP_B__5_1_OFFSET))(this, a1, a2, a3);
		}

	};
