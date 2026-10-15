#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CKKGECOHPMO;
namespace R3 { template <typename T> class Observable_1; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_UI_SAMPLES_BAGITEMCONTROL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xE402C10)
#define RPG_CLIENT_UI_SAMPLES_BAGITEMCONTROL___C_CTOR_OFFSET UNITYSDK_OFFSET(0xE402C50)
#define RPG_CLIENT_UI_SAMPLES_BAGITEMCONTROL___C___BINDING_B__3_0_OFFSET UNITYSDK_OFFSET(0xE402C60)
#define RPG_CLIENT_UI_SAMPLES_BAGITEMCONTROL___C___BINDING_B__3_1_OFFSET UNITYSDK_OFFSET(0xE402C80)
#define RPG_CLIENT_UI_SAMPLES_BAGITEMCONTROL___C___BINDING_B__3_2_OFFSET UNITYSDK_OFFSET(0xE402CA0)

namespace RPG::Client::Ui::Samples
{
	inline static constexpr unsigned int BagItemControl___c_TypeDefinitionIndex = 73426;

	class BagItemControl___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::CKKGECOHPMO*, ::R3::Observable_1<::System::String*>*>** StaticGet___9__3_0()
		{
			return (::System::Func_2<::CKKGECOHPMO*, ::R3::Observable_1<::System::String*>*>**)UnitySDK::FromName("RPG.Client.Ui.Samples", "<>c")->GetStaticField(0x36C60);
		}

		static ::System::Func_2<::CKKGECOHPMO*, ::R3::Observable_1<::System::String*>*>** StaticGet___9__3_1()
		{
			return (::System::Func_2<::CKKGECOHPMO*, ::R3::Observable_1<::System::String*>*>**)UnitySDK::FromName("RPG.Client.Ui.Samples", "<>c")->GetStaticField(0x36C68);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.Ui.Samples", "<>c")->GetStaticField(0x36C70);
		}

		static ::System::Func_2<::CKKGECOHPMO*, ::R3::Observable_1<::System::Int32>*>** StaticGet___9__3_2()
		{
			return (::System::Func_2<::CKKGECOHPMO*, ::R3::Observable_1<::System::Int32>*>**)UnitySDK::FromName("RPG.Client.Ui.Samples", "<>c")->GetStaticField(0x36C78);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_SAMPLES_BAGITEMCONTROL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_SAMPLES_BAGITEMCONTROL___C_CTOR_OFFSET))(this);
		}

		::R3::Observable_1<::System::String*>* __Binding_b__3_0(::CKKGECOHPMO* a1)
		{
			return ((::R3::Observable_1<::System::String*>*(*)(::PVOID, ::CKKGECOHPMO*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_SAMPLES_BAGITEMCONTROL___C___BINDING_B__3_0_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::String*>* __Binding_b__3_1(::CKKGECOHPMO* a1)
		{
			return ((::R3::Observable_1<::System::String*>*(*)(::PVOID, ::CKKGECOHPMO*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_SAMPLES_BAGITEMCONTROL___C___BINDING_B__3_1_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::Int32>* __Binding_b__3_2(::CKKGECOHPMO* a1)
		{
			return ((::R3::Observable_1<::System::Int32>*(*)(::PVOID, ::CKKGECOHPMO*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_SAMPLES_BAGITEMCONTROL___C___BINDING_B__3_2_OFFSET))(this, a1);
		}

	};
}
