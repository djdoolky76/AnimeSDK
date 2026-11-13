#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GNAHJKHFMCA;
namespace R3 { template <typename T> class Observable_1; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_UI_SAMPLES_FRIENDCHATCONTACTCONTROL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DBC55D0)
#define RPG_CLIENT_UI_SAMPLES_FRIENDCHATCONTACTCONTROL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DBC5610)
#define RPG_CLIENT_UI_SAMPLES_FRIENDCHATCONTACTCONTROL___C___BINDING_B__4_0_OFFSET UNITYSDK_OFFSET(0x1DBC5620)
#define RPG_CLIENT_UI_SAMPLES_FRIENDCHATCONTACTCONTROL___C___BINDING_B__4_1_OFFSET UNITYSDK_OFFSET(0x1DBC5640)
#define RPG_CLIENT_UI_SAMPLES_FRIENDCHATCONTACTCONTROL___C___BINDING_B__4_2_OFFSET UNITYSDK_OFFSET(0x1DBC5660)

namespace RPG::Client::Ui::Samples
{
	inline static constexpr unsigned int FriendChatContactControl___c_TypeDefinitionIndex = 75556;

	class FriendChatContactControl___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.Ui.Samples", "<>c")->GetStaticField(0x55250);
		}

		static ::System::Func_2<::GNAHJKHFMCA*, ::R3::Observable_1<::System::String*>*>** StaticGet___9__4_1()
		{
			return (::System::Func_2<::GNAHJKHFMCA*, ::R3::Observable_1<::System::String*>*>**)UnitySDK::FromName("RPG.Client.Ui.Samples", "<>c")->GetStaticField(0x55258);
		}

		static ::System::Func_2<::GNAHJKHFMCA*, ::R3::Observable_1<::System::String*>*>** StaticGet___9__4_0()
		{
			return (::System::Func_2<::GNAHJKHFMCA*, ::R3::Observable_1<::System::String*>*>**)UnitySDK::FromName("RPG.Client.Ui.Samples", "<>c")->GetStaticField(0x55260);
		}

		static ::System::Func_2<::GNAHJKHFMCA*, ::R3::Observable_1<::System::Int32>*>** StaticGet___9__4_2()
		{
			return (::System::Func_2<::GNAHJKHFMCA*, ::R3::Observable_1<::System::Int32>*>**)UnitySDK::FromName("RPG.Client.Ui.Samples", "<>c")->GetStaticField(0x55268);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_SAMPLES_FRIENDCHATCONTACTCONTROL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_SAMPLES_FRIENDCHATCONTACTCONTROL___C_CTOR_OFFSET))(this);
		}

		::R3::Observable_1<::System::String*>* __Binding_b__4_0(::GNAHJKHFMCA* a1)
		{
			return ((::R3::Observable_1<::System::String*>*(*)(::PVOID, ::GNAHJKHFMCA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_SAMPLES_FRIENDCHATCONTACTCONTROL___C___BINDING_B__4_0_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::String*>* __Binding_b__4_1(::GNAHJKHFMCA* a1)
		{
			return ((::R3::Observable_1<::System::String*>*(*)(::PVOID, ::GNAHJKHFMCA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_SAMPLES_FRIENDCHATCONTACTCONTROL___C___BINDING_B__4_1_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::Int32>* __Binding_b__4_2(::GNAHJKHFMCA* a1)
		{
			return ((::R3::Observable_1<::System::Int32>*(*)(::PVOID, ::GNAHJKHFMCA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_SAMPLES_FRIENDCHATCONTACTCONTROL___C___BINDING_B__4_2_OFFSET))(this, a1);
		}

	};
}
