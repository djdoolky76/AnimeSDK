#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HIOEAKHGILF;
class KHOHCMDMFBL;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Collider; }

#define KHOHCMDMFBL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xB40D7D0)
#define KHOHCMDMFBL___C_CTOR_OFFSET UNITYSDK_OFFSET(0xB40D800)
#define KHOHCMDMFBL___C__INITIALIZE_B__4_0_OFFSET UNITYSDK_OFFSET(0xB40D810)
#define KHOHCMDMFBL___C___DEPLOYGRAVITYFIELDRINGTRIGGER_B__13_0_OFFSET UNITYSDK_OFFSET(0xB40D830)
#define KHOHCMDMFBL___C___DEPLOYGRAVITYFIELDRINGTRIGGER_B__13_1_OFFSET UNITYSDK_OFFSET(0xB40D860)
#define KHOHCMDMFBL___C___LISTENLEVELVAR_B__25_0_OFFSET UNITYSDK_OFFSET(0xB40D890)

inline static constexpr unsigned int KHOHCMDMFBL___c_TypeDefinitionIndex = 77116;

	class KHOHCMDMFBL___c : public ::System::Object
	{
	public:
		static ::System::Action_3<::KHOHCMDMFBL*, ::HIOEAKHGILF*, ::UnityEngine::Collider*>** StaticGet___9__13_0()
		{
			return (::System::Action_3<::KHOHCMDMFBL*, ::HIOEAKHGILF*, ::UnityEngine::Collider*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4AD60);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4AD68);
		}

		static ::System::Action_1<::KHOHCMDMFBL*>** StaticGet___9__4_0()
		{
			return (::System::Action_1<::KHOHCMDMFBL*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4AD70);
		}

		static ::System::Action_3<::KHOHCMDMFBL*, ::HIOEAKHGILF*, ::UnityEngine::Collider*>** StaticGet___9__13_1()
		{
			return (::System::Action_3<::KHOHCMDMFBL*, ::HIOEAKHGILF*, ::UnityEngine::Collider*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4AD78);
		}

		static ::System::Action_3<::KHOHCMDMFBL*, ::System::Int32, ::System::String*>** StaticGet___9__25_0()
		{
			return (::System::Action_3<::KHOHCMDMFBL*, ::System::Int32, ::System::String*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4AD80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KHOHCMDMFBL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHOHCMDMFBL___C_CTOR_OFFSET))(this);
		}

		::System::Void _Initialize_b__4_0(::KHOHCMDMFBL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KHOHCMDMFBL*))((::PBYTE)hIl2Cpp + KHOHCMDMFBL___C__INITIALIZE_B__4_0_OFFSET))(this, a1);
		}

		::System::Void __DeployGravityFieldRingTrigger_b__13_0(::KHOHCMDMFBL* a1, ::HIOEAKHGILF* a2, ::UnityEngine::Collider* a3)
		{
			return ((::System::Void(*)(::PVOID, ::KHOHCMDMFBL*, ::HIOEAKHGILF*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + KHOHCMDMFBL___C___DEPLOYGRAVITYFIELDRINGTRIGGER_B__13_0_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __DeployGravityFieldRingTrigger_b__13_1(::KHOHCMDMFBL* a1, ::HIOEAKHGILF* a2, ::UnityEngine::Collider* a3)
		{
			return ((::System::Void(*)(::PVOID, ::KHOHCMDMFBL*, ::HIOEAKHGILF*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + KHOHCMDMFBL___C___DEPLOYGRAVITYFIELDRINGTRIGGER_B__13_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __ListenLevelVar_b__25_0(::KHOHCMDMFBL* a1, ::System::Int32 a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::KHOHCMDMFBL*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + KHOHCMDMFBL___C___LISTENLEVELVAR_B__25_0_OFFSET))(this, a1, a2, a3);
		}

	};
