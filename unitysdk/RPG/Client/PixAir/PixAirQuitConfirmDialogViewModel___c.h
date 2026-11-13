#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }
namespace System { template <typename T> class Func_1; }

#define RPG_CLIENT_PIXAIR_PIXAIRQUITCONFIRMDIALOGVIEWMODEL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D829650)
#define RPG_CLIENT_PIXAIR_PIXAIRQUITCONFIRMDIALOGVIEWMODEL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1D829690)
#define RPG_CLIENT_PIXAIR_PIXAIRQUITCONFIRMDIALOGVIEWMODEL___C__CREATE_B__28_1_OFFSET UNITYSDK_OFFSET(0x1D8298D0)
#define RPG_CLIENT_PIXAIR_PIXAIRQUITCONFIRMDIALOGVIEWMODEL___C__CREATE_B__28_2_OFFSET UNITYSDK_OFFSET(0x1D829B00)
#define RPG_CLIENT_PIXAIR_PIXAIRQUITCONFIRMDIALOGVIEWMODEL___C__CREATE_B__28_3_OFFSET UNITYSDK_OFFSET(0x1D829D30)
#define RPG_CLIENT_PIXAIR_PIXAIRQUITCONFIRMDIALOGVIEWMODEL___C__CREATE_B__28_4_OFFSET UNITYSDK_OFFSET(0x1D8296A0)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirQuitConfirmDialogViewModel___c_TypeDefinitionIndex = 82161;

	class PixAirQuitConfirmDialogViewModel___c : public ::System::Object
	{
	public:
		static ::System::Func_1<::System::Boolean>** StaticGet___9__28_2()
		{
			return (::System::Func_1<::System::Boolean>**)UnitySDK::FromName("RPG.Client.PixAir", "<>c")->GetStaticField(0x3B3B0);
		}

		static ::System::Func_1<::System::Boolean>** StaticGet___9__28_1()
		{
			return (::System::Func_1<::System::Boolean>**)UnitySDK::FromName("RPG.Client.PixAir", "<>c")->GetStaticField(0x3B3B8);
		}

		static ::System::Func_1<::System::Boolean>** StaticGet___9__28_3()
		{
			return (::System::Func_1<::System::Boolean>**)UnitySDK::FromName("RPG.Client.PixAir", "<>c")->GetStaticField(0x3B3C0);
		}

		static ::System::Action** StaticGet___9__28_4()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.Client.PixAir", "<>c")->GetStaticField(0x3B3C8);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.PixAir", "<>c")->GetStaticField(0x3B3D0);
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
