#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_PIXAIR_PIXAIREQUIPCONTROL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xDB353B0)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPCONTROL___C_CTOR_OFFSET UNITYSDK_OFFSET(0xDB353F0)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPCONTROL___C___ONBINDVIEWMODEL_B__1_10_OFFSET UNITYSDK_OFFSET(0xDB354C0)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPCONTROL___C___ONBINDVIEWMODEL_B__1_4_OFFSET UNITYSDK_OFFSET(0xDB35400)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPCONTROL___C___ONBINDVIEWMODEL_B__1_7_OFFSET UNITYSDK_OFFSET(0xDB35460)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirEquipControl___c_TypeDefinitionIndex = 79242;

	class PixAirEquipControl___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Int32, ::System::String*>** StaticGet___9__1_7()
		{
			return (::System::Func_2<::System::Int32, ::System::String*>**)UnitySDK::FromName("RPG.Client.PixAir", "<>c")->GetStaticField(0x1D370);
		}

		static ::System::Func_2<::System::Int32, ::System::String*>** StaticGet___9__1_10()
		{
			return (::System::Func_2<::System::Int32, ::System::String*>**)UnitySDK::FromName("RPG.Client.PixAir", "<>c")->GetStaticField(0x1D378);
		}

		static ::System::Func_2<::System::Int32, ::System::String*>** StaticGet___9__1_4()
		{
			return (::System::Func_2<::System::Int32, ::System::String*>**)UnitySDK::FromName("RPG.Client.PixAir", "<>c")->GetStaticField(0x1D380);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.PixAir", "<>c")->GetStaticField(0x1D388);
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
