#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_PIXAIR_PIXAIREQUIPCONTROL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xE596590)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPCONTROL___C_CTOR_OFFSET UNITYSDK_OFFSET(0xE5965D0)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPCONTROL___C___ONBINDVIEWMODEL_B__1_10_OFFSET UNITYSDK_OFFSET(0xE5966A0)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPCONTROL___C___ONBINDVIEWMODEL_B__1_4_OFFSET UNITYSDK_OFFSET(0xE5965E0)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPCONTROL___C___ONBINDVIEWMODEL_B__1_7_OFFSET UNITYSDK_OFFSET(0xE596640)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirEquipControl___c_TypeDefinitionIndex = 82020;

	class PixAirEquipControl___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.PixAir", "<>c")->GetStaticField(0x336D0);
		}

		static ::System::Func_2<::System::Int32, ::System::String*>** StaticGet___9__1_10()
		{
			return (::System::Func_2<::System::Int32, ::System::String*>**)UnitySDK::FromName("RPG.Client.PixAir", "<>c")->GetStaticField(0x336D8);
		}

		static ::System::Func_2<::System::Int32, ::System::String*>** StaticGet___9__1_4()
		{
			return (::System::Func_2<::System::Int32, ::System::String*>**)UnitySDK::FromName("RPG.Client.PixAir", "<>c")->GetStaticField(0x336E0);
		}

		static ::System::Func_2<::System::Int32, ::System::String*>** StaticGet___9__1_7()
		{
			return (::System::Func_2<::System::Int32, ::System::String*>**)UnitySDK::FromName("RPG.Client.PixAir", "<>c")->GetStaticField(0x336E8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPCONTROL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPCONTROL___C_CTOR_OFFSET))(this);
		}

		::System::String* __OnBindViewModel_b__1_4(::System::Int32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPCONTROL___C___ONBINDVIEWMODEL_B__1_4_OFFSET))(this, a1);
		}

		::System::String* __OnBindViewModel_b__1_7(::System::Int32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPCONTROL___C___ONBINDVIEWMODEL_B__1_7_OFFSET))(this, a1);
		}

		::System::String* __OnBindViewModel_b__1_10(::System::Int32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPCONTROL___C___ONBINDVIEWMODEL_B__1_10_OFFSET))(this, a1);
		}

	};
}
