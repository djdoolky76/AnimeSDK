#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_PLAYERMODULE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x19BD3D80)
#define RPG_CLIENT_PLAYERMODULE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x19BD3DC0)
#define RPG_CLIENT_PLAYERMODULE___C___CMDPLAYERGETTOKENSCRSP_B__57_1_OFFSET UNITYSDK_OFFSET(0x19BD3DD0)
#define RPG_CLIENT_PLAYERMODULE___C___CMDPLAYERGETTOKENSCRSP_B__57_2_OFFSET UNITYSDK_OFFSET(0x19BD3E10)
#define RPG_CLIENT_PLAYERMODULE___C___CMDPLAYERGETTOKENSCRSP_B__57_3_OFFSET UNITYSDK_OFFSET(0x19BD3E50)
#define RPG_CLIENT_PLAYERMODULE___C___ONCMDPLAYERLOGINSCRSP_B__58_1_OFFSET UNITYSDK_OFFSET(0x19BD3E90)
#define RPG_CLIENT_PLAYERMODULE___C___ONCMDPLAYERLOGINSCRSP_B__58_2_OFFSET UNITYSDK_OFFSET(0x19BD3EE0)

namespace RPG::Client
{
	inline static constexpr unsigned int PlayerModule___c_TypeDefinitionIndex = 68624;

	class PlayerModule___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::System::Boolean>** StaticGet___9__57_2()
		{
			return (::System::Action_1<::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x4D100);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x4D108);
		}

		static ::System::Action_1<::System::Boolean>** StaticGet___9__57_3()
		{
			return (::System::Action_1<::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x4D110);
		}

		static ::System::Action_1<::System::Boolean>** StaticGet___9__58_1()
		{
			return (::System::Action_1<::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x4D118);
		}

		static ::System::Action_1<::System::Boolean>** StaticGet___9__58_2()
		{
			return (::System::Action_1<::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x4D120);
		}

		static ::System::Action_1<::System::Boolean>** StaticGet___9__57_1()
		{
			return (::System::Action_1<::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x4D128);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE___C_CTOR_OFFSET))(this);
		}

		::System::Void __CmdPlayerGetTokenScRsp_b__57_1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE___C___CMDPLAYERGETTOKENSCRSP_B__57_1_OFFSET))(this, a1);
		}

		::System::Void __CmdPlayerGetTokenScRsp_b__57_2(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE___C___CMDPLAYERGETTOKENSCRSP_B__57_2_OFFSET))(this, a1);
		}

		::System::Void __CmdPlayerGetTokenScRsp_b__57_3(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE___C___CMDPLAYERGETTOKENSCRSP_B__57_3_OFFSET))(this, a1);
		}

		::System::Void __OnCmdPlayerLoginScRsp_b__58_1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE___C___ONCMDPLAYERLOGINSCRSP_B__58_1_OFFSET))(this, a1);
		}

		::System::Void __OnCmdPlayerLoginScRsp_b__58_2(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE___C___ONCMDPLAYERLOGINSCRSP_B__58_2_OFFSET))(this, a1);
		}

	};
}
