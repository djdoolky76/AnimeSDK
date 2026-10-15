#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/BindingSourceRejectionType.h"
#include "unitysdk/System/Object.h"
namespace InControl { class BindingSource; }
namespace InControl { class PlayerAction; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }

#define AJHBPFJAJAC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x12CBCF40)
#define AJHBPFJAJAC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x12CBCF70)
#define AJHBPFJAJAC___C__INIT_B__1_0_OFFSET UNITYSDK_OFFSET(0x12CBCF80)
#define AJHBPFJAJAC___C__INIT_B__1_1_OFFSET UNITYSDK_OFFSET(0x12CBD130)
#define AJHBPFJAJAC___C__INIT_B__1_2_OFFSET UNITYSDK_OFFSET(0x12CBD140)

	class AJHBPFJAJAC___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__1_2()
		{
			return (::System::Action**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5AF50);
		}

		static ::System::Action** StaticGet___9__1_1()
		{
			return (::System::Action**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5AF58);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5AF60);
		}

		static ::System::Func_3<::InControl::PlayerAction*, ::InControl::BindingSource*, ::System::Boolean>** StaticGet___9__1_0()
		{
			return (::System::Func_3<::InControl::PlayerAction*, ::InControl::BindingSource*, ::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5AF68);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AJHBPFJAJAC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJHBPFJAJAC___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _Init_b__1_0(::InControl::PlayerAction* a1, ::InControl::BindingSource* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::InControl::PlayerAction*, ::InControl::BindingSource*))((::PBYTE)hIl2Cpp + AJHBPFJAJAC___C__INIT_B__1_0_OFFSET))(this, a1, a2);
		}

		::System::Void _Init_b__1_1(::InControl::PlayerAction* a1, ::InControl::BindingSource* a2)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::PlayerAction*, ::InControl::BindingSource*))((::PBYTE)hIl2Cpp + AJHBPFJAJAC___C__INIT_B__1_1_OFFSET))(this, a1, a2);
		}

		::System::Void _Init_b__1_2(::InControl::PlayerAction* a1, ::InControl::BindingSource* a2, ::InControl::BindingSourceRejectionType a3)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::PlayerAction*, ::InControl::BindingSource*, ::InControl::BindingSourceRejectionType))((::PBYTE)hIl2Cpp + AJHBPFJAJAC___C__INIT_B__1_2_OFFSET))(this, a1, a2, a3);
		}

	};
