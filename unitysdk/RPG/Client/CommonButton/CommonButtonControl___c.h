#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CEEGMMCFCBG;
class KCFGMKGNMNP;
namespace R3 { class Observable; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_COMMONBUTTON_COMMONBUTTONCONTROL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xCBA60F0)
#define RPG_CLIENT_COMMONBUTTON_COMMONBUTTONCONTROL___C_CTOR_OFFSET UNITYSDK_OFFSET(0xCBA6130)
#define RPG_CLIENT_COMMONBUTTON_COMMONBUTTONCONTROL___C___BINDING_B__6_0_OFFSET UNITYSDK_OFFSET(0xCBA6140)
#define RPG_CLIENT_COMMONBUTTON_COMMONBUTTONCONTROL___C___BINDING_B__6_1_OFFSET UNITYSDK_OFFSET(0xCBA6160)
#define RPG_CLIENT_COMMONBUTTON_COMMONBUTTONCONTROL___C___BINDING_B__6_2_OFFSET UNITYSDK_OFFSET(0xCBA61B0)
#define RPG_CLIENT_COMMONBUTTON_COMMONBUTTONCONTROL___C___BINDING_B__6_3_OFFSET UNITYSDK_OFFSET(0xCBA6200)
#define RPG_CLIENT_COMMONBUTTON_COMMONBUTTONCONTROL___C___BINDING_B__6_4_OFFSET UNITYSDK_OFFSET(0xCBA6250)

namespace RPG::Client::CommonButton
{
	class CommonButtonControl___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::KCFGMKGNMNP*, ::R3::Observable*>** StaticGet___9__6_1()
		{
			return (::System::Func_2<::KCFGMKGNMNP*, ::R3::Observable*>**)UnitySDK::FromName("RPG.Client.CommonButton", "<>c")->GetStaticField(0x1A0A0);
		}

		static ::System::Func_2<::KCFGMKGNMNP*, ::R3::Observable*>** StaticGet___9__6_4()
		{
			return (::System::Func_2<::KCFGMKGNMNP*, ::R3::Observable*>**)UnitySDK::FromName("RPG.Client.CommonButton", "<>c")->GetStaticField(0x1A0A8);
		}

		static ::System::Func_2<::KCFGMKGNMNP*, ::R3::Observable*>** StaticGet___9__6_3()
		{
			return (::System::Func_2<::KCFGMKGNMNP*, ::R3::Observable*>**)UnitySDK::FromName("RPG.Client.CommonButton", "<>c")->GetStaticField(0x1A0B0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.CommonButton", "<>c")->GetStaticField(0x1A0B8);
		}

		static ::System::Func_2<::KCFGMKGNMNP*, ::CEEGMMCFCBG*>** StaticGet___9__6_0()
		{
			return (::System::Func_2<::KCFGMKGNMNP*, ::CEEGMMCFCBG*>**)UnitySDK::FromName("RPG.Client.CommonButton", "<>c")->GetStaticField(0x1A0C0);
		}

		static ::System::Func_2<::KCFGMKGNMNP*, ::R3::Observable*>** StaticGet___9__6_2()
		{
			return (::System::Func_2<::KCFGMKGNMNP*, ::R3::Observable*>**)UnitySDK::FromName("RPG.Client.CommonButton", "<>c")->GetStaticField(0x1A0C8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_COMMONBUTTON_COMMONBUTTONCONTROL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMMONBUTTON_COMMONBUTTONCONTROL___C_CTOR_OFFSET))(this);
		}

		::CEEGMMCFCBG* __Binding_b__6_0(::KCFGMKGNMNP* a1)
		{
			return ((::CEEGMMCFCBG*(*)(::PVOID, ::KCFGMKGNMNP*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMMONBUTTON_COMMONBUTTONCONTROL___C___BINDING_B__6_0_OFFSET))(this, a1);
		}

		::R3::Observable* __Binding_b__6_1(::KCFGMKGNMNP* a1)
		{
			return ((::R3::Observable*(*)(::PVOID, ::KCFGMKGNMNP*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMMONBUTTON_COMMONBUTTONCONTROL___C___BINDING_B__6_1_OFFSET))(this, a1);
		}

		::R3::Observable* __Binding_b__6_2(::KCFGMKGNMNP* a1)
		{
			return ((::R3::Observable*(*)(::PVOID, ::KCFGMKGNMNP*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMMONBUTTON_COMMONBUTTONCONTROL___C___BINDING_B__6_2_OFFSET))(this, a1);
		}

		::R3::Observable* __Binding_b__6_3(::KCFGMKGNMNP* a1)
		{
			return ((::R3::Observable*(*)(::PVOID, ::KCFGMKGNMNP*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMMONBUTTON_COMMONBUTTONCONTROL___C___BINDING_B__6_3_OFFSET))(this, a1);
		}

		::R3::Observable* __Binding_b__6_4(::KCFGMKGNMNP* a1)
		{
			return ((::R3::Observable*(*)(::PVOID, ::KCFGMKGNMNP*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMMONBUTTON_COMMONBUTTONCONTROL___C___BINDING_B__6_4_OFFSET))(this, a1);
		}

	};
}
