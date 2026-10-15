#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }
namespace System { template <typename T> class Func_1; }

#define RPG_CLIENT_PIXAIR_PIXAIRQUITCONFIRMDIALOGVIEWMODEL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xDB5F450)
#define RPG_CLIENT_PIXAIR_PIXAIRQUITCONFIRMDIALOGVIEWMODEL___C_CTOR_OFFSET UNITYSDK_OFFSET(0xDB5F490)
#define RPG_CLIENT_PIXAIR_PIXAIRQUITCONFIRMDIALOGVIEWMODEL___C__CREATE_B__28_1_OFFSET UNITYSDK_OFFSET(0xDB5F6D0)
#define RPG_CLIENT_PIXAIR_PIXAIRQUITCONFIRMDIALOGVIEWMODEL___C__CREATE_B__28_2_OFFSET UNITYSDK_OFFSET(0xDB5F900)
#define RPG_CLIENT_PIXAIR_PIXAIRQUITCONFIRMDIALOGVIEWMODEL___C__CREATE_B__28_3_OFFSET UNITYSDK_OFFSET(0xDB5FB30)
#define RPG_CLIENT_PIXAIR_PIXAIRQUITCONFIRMDIALOGVIEWMODEL___C__CREATE_B__28_4_OFFSET UNITYSDK_OFFSET(0xDB5F4A0)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirQuitConfirmDialogViewModel___c_TypeDefinitionIndex = 79384;

	class PixAirQuitConfirmDialogViewModel___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__28_4()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.Client.PixAir", "<>c")->GetStaticField(0x21CC0);
		}

		static ::System::Func_1<::System::Boolean>** StaticGet___9__28_2()
		{
			return (::System::Func_1<::System::Boolean>**)UnitySDK::FromName("RPG.Client.PixAir", "<>c")->GetStaticField(0x21CC8);
		}

		static ::System::Func_1<::System::Boolean>** StaticGet___9__28_1()
		{
			return (::System::Func_1<::System::Boolean>**)UnitySDK::FromName("RPG.Client.PixAir", "<>c")->GetStaticField(0x21CD0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.PixAir", "<>c")->GetStaticField(0x21CD8);
		}

		static ::System::Func_1<::System::Boolean>** StaticGet___9__28_3()
		{
			return (::System::Func_1<::System::Boolean>**)UnitySDK::FromName("RPG.Client.PixAir", "<>c")->GetStaticField(0x21CE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRQUITCONFIRMDIALOGVIEWMODEL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRQUITCONFIRMDIALOGVIEWMODEL___C_CTOR_OFFSET))(this);
		}

		::System::Void _Create_b__28_4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRQUITCONFIRMDIALOGVIEWMODEL___C__CREATE_B__28_4_OFFSET))(this);
		}

		::System::Boolean _Create_b__28_1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRQUITCONFIRMDIALOGVIEWMODEL___C__CREATE_B__28_1_OFFSET))(this);
		}

		::System::Boolean _Create_b__28_2()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRQUITCONFIRMDIALOGVIEWMODEL___C__CREATE_B__28_2_OFFSET))(this);
		}

		::System::Boolean _Create_b__28_3()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRQUITCONFIRMDIALOGVIEWMODEL___C__CREATE_B__28_3_OFFSET))(this);
		}

	};
}
