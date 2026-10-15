#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BFKICIPPEBD;
class KBKLMAHKJAE;
namespace ObservableCollections { template <typename T> class IObservableCollection_1; }
namespace R3 { template <typename T> class ReactiveProperty_1; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_UI_SAMPLES_TABVIEWSAMPLEREACTIVECONTROL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xE406900)
#define RPG_CLIENT_UI_SAMPLES_TABVIEWSAMPLEREACTIVECONTROL___C_CTOR_OFFSET UNITYSDK_OFFSET(0xE406940)
#define RPG_CLIENT_UI_SAMPLES_TABVIEWSAMPLEREACTIVECONTROL___C___BINDING_B__2_0_OFFSET UNITYSDK_OFFSET(0xE406950)
#define RPG_CLIENT_UI_SAMPLES_TABVIEWSAMPLEREACTIVECONTROL___C___BINDING_B__2_1_OFFSET UNITYSDK_OFFSET(0xE406970)

namespace RPG::Client::Ui::Samples
{
	inline static constexpr unsigned int TabViewSampleReactiveControl___c_TypeDefinitionIndex = 73464;

	class TabViewSampleReactiveControl___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::KBKLMAHKJAE*, ::R3::ReactiveProperty_1<::System::Int32>*>** StaticGet___9__2_0()
		{
			return (::System::Func_2<::KBKLMAHKJAE*, ::R3::ReactiveProperty_1<::System::Int32>*>**)UnitySDK::FromName("RPG.Client.Ui.Samples", "<>c")->GetStaticField(0x37240);
		}

		static ::System::Func_2<::KBKLMAHKJAE*, ::ObservableCollections::IObservableCollection_1<::BFKICIPPEBD*>*>** StaticGet___9__2_1()
		{
			return (::System::Func_2<::KBKLMAHKJAE*, ::ObservableCollections::IObservableCollection_1<::BFKICIPPEBD*>*>**)UnitySDK::FromName("RPG.Client.Ui.Samples", "<>c")->GetStaticField(0x37248);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.Ui.Samples", "<>c")->GetStaticField(0x37250);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_SAMPLES_TABVIEWSAMPLEREACTIVECONTROL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_SAMPLES_TABVIEWSAMPLEREACTIVECONTROL___C_CTOR_OFFSET))(this);
		}

		::R3::ReactiveProperty_1<::System::Int32>* __Binding_b__2_0(::KBKLMAHKJAE* a1)
		{
			return ((::R3::ReactiveProperty_1<::System::Int32>*(*)(::PVOID, ::KBKLMAHKJAE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_SAMPLES_TABVIEWSAMPLEREACTIVECONTROL___C___BINDING_B__2_0_OFFSET))(this, a1);
		}

		::ObservableCollections::IObservableCollection_1<::BFKICIPPEBD*>* __Binding_b__2_1(::KBKLMAHKJAE* a1)
		{
			return ((::ObservableCollections::IObservableCollection_1<::BFKICIPPEBD*>*(*)(::PVOID, ::KBKLMAHKJAE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_SAMPLES_TABVIEWSAMPLEREACTIVECONTROL___C___BINDING_B__2_1_OFFSET))(this, a1);
		}

	};
}
