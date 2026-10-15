#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HIOEAKHGILF;
class OPDEHKNDOEG;
namespace System { class Object; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace UnityEngine { class Collider; }

#define OPDEHKNDOEG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xBFA04B0)
#define OPDEHKNDOEG___C_CTOR_OFFSET UNITYSDK_OFFSET(0xBFA04E0)
#define OPDEHKNDOEG___C___DEPLOYBORDERPLAT_B__5_0_OFFSET UNITYSDK_OFFSET(0xBFA04F0)
#define OPDEHKNDOEG___C___DEPLOYBORDERPLAT_B__5_1_OFFSET UNITYSDK_OFFSET(0xBFA0520)

inline static constexpr unsigned int OPDEHKNDOEG___c_TypeDefinitionIndex = 77065;

	class OPDEHKNDOEG___c : public ::System::Object
	{
	public:
		static ::System::Action_3<::OPDEHKNDOEG*, ::HIOEAKHGILF*, ::UnityEngine::Collider*>** StaticGet___9__5_0()
		{
			return (::System::Action_3<::OPDEHKNDOEG*, ::HIOEAKHGILF*, ::UnityEngine::Collider*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x64A60);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x64A68);
		}

		static ::System::Action_3<::OPDEHKNDOEG*, ::HIOEAKHGILF*, ::UnityEngine::Collider*>** StaticGet___9__5_1()
		{
			return (::System::Action_3<::OPDEHKNDOEG*, ::HIOEAKHGILF*, ::UnityEngine::Collider*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x64A70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OPDEHKNDOEG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPDEHKNDOEG___C_CTOR_OFFSET))(this);
		}

		::System::Void __DeployBorderPlat_b__5_0(::OPDEHKNDOEG* a1, ::HIOEAKHGILF* a2, ::UnityEngine::Collider* a3)
		{
			return ((::System::Void(*)(::PVOID, ::OPDEHKNDOEG*, ::HIOEAKHGILF*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + OPDEHKNDOEG___C___DEPLOYBORDERPLAT_B__5_0_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __DeployBorderPlat_b__5_1(::OPDEHKNDOEG* a1, ::HIOEAKHGILF* a2, ::UnityEngine::Collider* a3)
		{
			return ((::System::Void(*)(::PVOID, ::OPDEHKNDOEG*, ::HIOEAKHGILF*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + OPDEHKNDOEG___C___DEPLOYBORDERPLAT_B__5_1_OFFSET))(this, a1, a2, a3);
		}

	};
