#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYSCOREINFOCONTROL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xCAA15B0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYSCOREINFOCONTROL___C_CTOR_OFFSET UNITYSDK_OFFSET(0xCAA15F0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYSCOREINFOCONTROL___C___ONBINDVIEWMODEL_B__3_2_OFFSET UNITYSDK_OFFSET(0xCAA1600)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYSCOREINFOCONTROL___C___ONBINDVIEWMODEL_B__3_5_OFFSET UNITYSDK_OFFSET(0xCAA1660)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYSCOREINFOCONTROL___C___ONBINDVIEWMODEL_B__3_8_OFFSET UNITYSDK_OFFSET(0xCAA16C0)

namespace RPG::Client::ChenLingFes
{
	class ChenLingFesGameplayScoreInfoControl___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Int32, ::System::String*>** StaticGet___9__3_5()
		{
			return (::System::Func_2<::System::Int32, ::System::String*>**)UnitySDK::FromName("RPG.Client.ChenLingFes", "<>c")->GetStaticField(0x6EE00);
		}

		static ::System::Func_2<::System::Int32, ::System::String*>** StaticGet___9__3_2()
		{
			return (::System::Func_2<::System::Int32, ::System::String*>**)UnitySDK::FromName("RPG.Client.ChenLingFes", "<>c")->GetStaticField(0x6EE08);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.ChenLingFes", "<>c")->GetStaticField(0x6EE10);
		}

		static ::System::Func_2<::System::Int32, ::System::String*>** StaticGet___9__3_8()
		{
			return (::System::Func_2<::System::Int32, ::System::String*>**)UnitySDK::FromName("RPG.Client.ChenLingFes", "<>c")->GetStaticField(0x6EE18);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYSCOREINFOCONTROL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYSCOREINFOCONTROL___C_CTOR_OFFSET))(this);
		}

		::System::String* __OnBindViewModel_b__3_2(::System::Int32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYSCOREINFOCONTROL___C___ONBINDVIEWMODEL_B__3_2_OFFSET))(this, a1);
		}

		::System::String* __OnBindViewModel_b__3_5(::System::Int32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYSCOREINFOCONTROL___C___ONBINDVIEWMODEL_B__3_5_OFFSET))(this, a1);
		}

		::System::String* __OnBindViewModel_b__3_8(::System::Int32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYSCOREINFOCONTROL___C___ONBINDVIEWMODEL_B__3_8_OFFSET))(this, a1);
		}

	};
}
