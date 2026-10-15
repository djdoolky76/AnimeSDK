#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CAALFIDBNMJ;
namespace R3 { class Observable; }
namespace R3 { template <typename T> class ReactiveProperty_1; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_UI_SAMPLES_UINAVIGATIONFOCUSSAMPLECONTROL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xE412B20)
#define RPG_CLIENT_UI_SAMPLES_UINAVIGATIONFOCUSSAMPLECONTROL___C_CTOR_OFFSET UNITYSDK_OFFSET(0xE412B60)
#define RPG_CLIENT_UI_SAMPLES_UINAVIGATIONFOCUSSAMPLECONTROL___C___BINDING_B__5_0_OFFSET UNITYSDK_OFFSET(0xE412B70)
#define RPG_CLIENT_UI_SAMPLES_UINAVIGATIONFOCUSSAMPLECONTROL___C___BINDING_B__5_1_OFFSET UNITYSDK_OFFSET(0xE412B90)
#define RPG_CLIENT_UI_SAMPLES_UINAVIGATIONFOCUSSAMPLECONTROL___C___BINDING_B__5_3_OFFSET UNITYSDK_OFFSET(0xE412D80)
#define RPG_CLIENT_UI_SAMPLES_UINAVIGATIONFOCUSSAMPLECONTROL___C___BINDING_B__5_4_OFFSET UNITYSDK_OFFSET(0xE412D40)
#define RPG_CLIENT_UI_SAMPLES_UINAVIGATIONFOCUSSAMPLECONTROL___C___BINDING_B__5_5_OFFSET UNITYSDK_OFFSET(0xE412D60)

namespace RPG::Client::Ui::Samples
{
	inline static constexpr unsigned int UINavigationFocusSampleControl___c_TypeDefinitionIndex = 73472;

	class UINavigationFocusSampleControl___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Boolean, ::System::Single>** StaticGet___9__5_5()
		{
			return (::System::Func_2<::System::Boolean, ::System::Single>**)UnitySDK::FromName("RPG.Client.Ui.Samples", "<>c")->GetStaticField(0x42860);
		}

		static ::System::Func_2<::CAALFIDBNMJ*, ::R3::ReactiveProperty_1<::System::Boolean>*>** StaticGet___9__5_3()
		{
			return (::System::Func_2<::CAALFIDBNMJ*, ::R3::ReactiveProperty_1<::System::Boolean>*>**)UnitySDK::FromName("RPG.Client.Ui.Samples", "<>c")->GetStaticField(0x42868);
		}

		static ::System::Func_2<::System::Boolean, ::System::Single>** StaticGet___9__5_4()
		{
			return (::System::Func_2<::System::Boolean, ::System::Single>**)UnitySDK::FromName("RPG.Client.Ui.Samples", "<>c")->GetStaticField(0x42870);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.Ui.Samples", "<>c")->GetStaticField(0x42878);
		}

		static ::System::Func_2<::CAALFIDBNMJ*, ::R3::ReactiveProperty_1<::System::Boolean>*>** StaticGet___9__5_0()
		{
			return (::System::Func_2<::CAALFIDBNMJ*, ::R3::ReactiveProperty_1<::System::Boolean>*>**)UnitySDK::FromName("RPG.Client.Ui.Samples", "<>c")->GetStaticField(0x42880);
		}

		static ::System::Func_2<::CAALFIDBNMJ*, ::R3::Observable*>** StaticGet___9__5_1()
		{
			return (::System::Func_2<::CAALFIDBNMJ*, ::R3::Observable*>**)UnitySDK::FromName("RPG.Client.Ui.Samples", "<>c")->GetStaticField(0x42888);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_SAMPLES_UINAVIGATIONFOCUSSAMPLECONTROL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_SAMPLES_UINAVIGATIONFOCUSSAMPLECONTROL___C_CTOR_OFFSET))(this);
		}

		::R3::ReactiveProperty_1<::System::Boolean>* __Binding_b__5_0(::CAALFIDBNMJ* a1)
		{
			return ((::R3::ReactiveProperty_1<::System::Boolean>*(*)(::PVOID, ::CAALFIDBNMJ*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_SAMPLES_UINAVIGATIONFOCUSSAMPLECONTROL___C___BINDING_B__5_0_OFFSET))(this, a1);
		}

		::R3::Observable* __Binding_b__5_1(::CAALFIDBNMJ* a1)
		{
			return ((::R3::Observable*(*)(::PVOID, ::CAALFIDBNMJ*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_SAMPLES_UINAVIGATIONFOCUSSAMPLECONTROL___C___BINDING_B__5_1_OFFSET))(this, a1);
		}

		::System::Single __Binding_b__5_4(::System::Boolean a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_SAMPLES_UINAVIGATIONFOCUSSAMPLECONTROL___C___BINDING_B__5_4_OFFSET))(this, a1);
		}

		::System::Single __Binding_b__5_5(::System::Boolean a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_SAMPLES_UINAVIGATIONFOCUSSAMPLECONTROL___C___BINDING_B__5_5_OFFSET))(this, a1);
		}

		::R3::ReactiveProperty_1<::System::Boolean>* __Binding_b__5_3(::CAALFIDBNMJ* a1)
		{
			return ((::R3::ReactiveProperty_1<::System::Boolean>*(*)(::PVOID, ::CAALFIDBNMJ*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_SAMPLES_UINAVIGATIONFOCUSSAMPLECONTROL___C___BINDING_B__5_3_OFFSET))(this, a1);
		}

	};
}
