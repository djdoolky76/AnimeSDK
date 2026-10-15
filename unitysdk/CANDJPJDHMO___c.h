#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CANDJPJDHMO;
class HIOEAKHGILF;
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Collider; }

#define CANDJPJDHMO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xC492FE0)
#define CANDJPJDHMO___C_CTOR_OFFSET UNITYSDK_OFFSET(0xC493010)
#define CANDJPJDHMO___C__INITIALIZE_B__3_0_OFFSET UNITYSDK_OFFSET(0xC493020)
#define CANDJPJDHMO___C___DEPLOYGRAVITYSWITCHLINETRIGGER_B__12_0_OFFSET UNITYSDK_OFFSET(0xC493040)
#define CANDJPJDHMO___C___DEPLOYGRAVITYSWITCHLINETRIGGER_B__12_1_OFFSET UNITYSDK_OFFSET(0xC493070)
#define CANDJPJDHMO___C___DEPLOYGRAVITYSWITCHMODIFYMAXFALLSPEEDTRIGGER_B__13_0_OFFSET UNITYSDK_OFFSET(0xC4930A0)
#define CANDJPJDHMO___C___DEPLOYGRAVITYSWITCHMODIFYMAXFALLSPEEDTRIGGER_B__13_1_OFFSET UNITYSDK_OFFSET(0xC4930D0)
#define CANDJPJDHMO___C___LISTENLEVELVAR_B__29_0_OFFSET UNITYSDK_OFFSET(0xC493100)

	class CANDJPJDHMO___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__13_0()
		{
			return (::System::Action**)UnitySDK::FromName("", "<>c")->GetStaticField(0x10C50);
		}

		static ::System::Action** StaticGet___9__3_0()
		{
			return (::System::Action**)UnitySDK::FromName("", "<>c")->GetStaticField(0x10C58);
		}

		static ::System::Action** StaticGet___9__12_1()
		{
			return (::System::Action**)UnitySDK::FromName("", "<>c")->GetStaticField(0x10C60);
		}

		static ::System::Action** StaticGet___9__12_0()
		{
			return (::System::Action**)UnitySDK::FromName("", "<>c")->GetStaticField(0x10C68);
		}

		static ::System::Action** StaticGet___9__13_1()
		{
			return (::System::Action**)UnitySDK::FromName("", "<>c")->GetStaticField(0x10C70);
		}

		static ::System::Action** StaticGet___9__29_0()
		{
			return (::System::Action**)UnitySDK::FromName("", "<>c")->GetStaticField(0x10C78);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x10C80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CANDJPJDHMO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CANDJPJDHMO___C_CTOR_OFFSET))(this);
		}

		::System::Void _Initialize_b__3_0(::CANDJPJDHMO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CANDJPJDHMO*))((::PBYTE)hIl2Cpp + CANDJPJDHMO___C__INITIALIZE_B__3_0_OFFSET))(this, a1);
		}

		::System::Void __DeployGravitySwitchLineTrigger_b__12_0(::CANDJPJDHMO* a1, ::HIOEAKHGILF* a2, ::UnityEngine::Collider* a3)
		{
			return ((::System::Void(*)(::PVOID, ::CANDJPJDHMO*, ::HIOEAKHGILF*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CANDJPJDHMO___C___DEPLOYGRAVITYSWITCHLINETRIGGER_B__12_0_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __DeployGravitySwitchLineTrigger_b__12_1(::CANDJPJDHMO* a1, ::HIOEAKHGILF* a2, ::UnityEngine::Collider* a3)
		{
			return ((::System::Void(*)(::PVOID, ::CANDJPJDHMO*, ::HIOEAKHGILF*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CANDJPJDHMO___C___DEPLOYGRAVITYSWITCHLINETRIGGER_B__12_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __DeployGravitySwitchModifyMaxFallSpeedTrigger_b__13_0(::CANDJPJDHMO* a1, ::HIOEAKHGILF* a2, ::UnityEngine::Collider* a3)
		{
			return ((::System::Void(*)(::PVOID, ::CANDJPJDHMO*, ::HIOEAKHGILF*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CANDJPJDHMO___C___DEPLOYGRAVITYSWITCHMODIFYMAXFALLSPEEDTRIGGER_B__13_0_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __DeployGravitySwitchModifyMaxFallSpeedTrigger_b__13_1(::CANDJPJDHMO* a1, ::HIOEAKHGILF* a2, ::UnityEngine::Collider* a3)
		{
			return ((::System::Void(*)(::PVOID, ::CANDJPJDHMO*, ::HIOEAKHGILF*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CANDJPJDHMO___C___DEPLOYGRAVITYSWITCHMODIFYMAXFALLSPEEDTRIGGER_B__13_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __ListenLevelVar_b__29_0(::CANDJPJDHMO* a1, ::System::Int32 a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::CANDJPJDHMO*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CANDJPJDHMO___C___LISTENLEVELVAR_B__29_0_OFFSET))(this, a1, a2, a3);
		}

	};
