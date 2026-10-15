#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CAALFIDBNMJ;
namespace R3 { template <typename T> class Observable_1; }
namespace R3 { template <typename T> class ReactiveProperty_1; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_UI_SAMPLES_UINAVIGATIONFOCUSSAMPLECONTROL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xE407DD0)
#define RPG_CLIENT_UI_SAMPLES_UINAVIGATIONFOCUSSAMPLECONTROL___C_CTOR_OFFSET UNITYSDK_OFFSET(0xE407E10)
#define RPG_CLIENT_UI_SAMPLES_UINAVIGATIONFOCUSSAMPLECONTROL___C___BINDING_B__5_0_OFFSET UNITYSDK_OFFSET(0xE407E20)
#define RPG_CLIENT_UI_SAMPLES_UINAVIGATIONFOCUSSAMPLECONTROL___C___BINDING_B__5_1_OFFSET UNITYSDK_OFFSET(0xE407E40)
#define RPG_CLIENT_UI_SAMPLES_UINAVIGATIONFOCUSSAMPLECONTROL___C___BINDING_B__5_3_OFFSET UNITYSDK_OFFSET(0xE408030)
#define RPG_CLIENT_UI_SAMPLES_UINAVIGATIONFOCUSSAMPLECONTROL___C___BINDING_B__5_4_OFFSET UNITYSDK_OFFSET(0xE407FF0)
#define RPG_CLIENT_UI_SAMPLES_UINAVIGATIONFOCUSSAMPLECONTROL___C___BINDING_B__5_5_OFFSET UNITYSDK_OFFSET(0xE408010)

namespace RPG::Client::Ui::Samples
{
	inline static constexpr unsigned int UINavigationFocusSampleControl___c_TypeDefinitionIndex = 73471;

	class UINavigationFocusSampleControl___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::CAALFIDBNMJ*, ::R3::ReactiveProperty_1<::System::Boolean>*>** StaticGet___9__5_0()
		{
			return (::System::Func_2<::CAALFIDBNMJ*, ::R3::ReactiveProperty_1<::System::Boolean>*>**)UnitySDK::FromName("RPG.Client.Ui.Samples", "<>c")->GetStaticField(0x37370);
		}

		static ::System::Func_2<::CAALFIDBNMJ*, ::R3::Observable_1<::System::Single>*>** StaticGet___9__5_1()
		{
			return (::System::Func_2<::CAALFIDBNMJ*, ::R3::Observable_1<::System::Single>*>**)UnitySDK::FromName("RPG.Client.Ui.Samples", "<>c")->GetStaticField(0x37378);
		}

		static ::System::Func_2<::CAALFIDBNMJ*, ::R3::ReactiveProperty_1<::System::Boolean>*>** StaticGet___9__5_3()
		{
			return (::System::Func_2<::CAALFIDBNMJ*, ::R3::ReactiveProperty_1<::System::Boolean>*>**)UnitySDK::FromName("RPG.Client.Ui.Samples", "<>c")->GetStaticField(0x37380);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.Ui.Samples", "<>c")->GetStaticField(0x37388);
		}

		static ::System::Func_2<::System::Boolean, ::System::Single>** StaticGet___9__5_4()
		{
			return (::System::Func_2<::System::Boolean, ::System::Single>**)UnitySDK::FromName("RPG.Client.Ui.Samples", "<>c")->GetStaticField(0x37390);
		}

		static ::System::Func_2<::System::Boolean, ::System::Single>** StaticGet___9__5_5()
		{
			return (::System::Func_2<::System::Boolean, ::System::Single>**)UnitySDK::FromName("RPG.Client.Ui.Samples", "<>c")->GetStaticField(0x37398);
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

		::R3::Observable_1<::System::Single>* __Binding_b__5_1(::CAALFIDBNMJ* a1)
		{
			return ((::R3::Observable_1<::System::Single>*(*)(::PVOID, ::CAALFIDBNMJ*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_SAMPLES_UINAVIGATIONFOCUSSAMPLECONTROL___C___BINDING_B__5_1_OFFSET))(this, a1);
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
