#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MiHoYo/SDK/SecurityTunnel_ServerAddress.h"

namespace MiHoYo::SDK { class JSONNode; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define MIHOYO_SDK_MIHOYOSDKSERVER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F970800)
#define MIHOYO_SDK_MIHOYOSDKSERVER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1F970840)
#define MIHOYO_SDK_MIHOYOSDKSERVER___C__GETGATEADDRESS_B__83_1_OFFSET UNITYSDK_OFFSET(0x1F970860)
#define MIHOYO_SDK_MIHOYOSDKSERVER___C__GET_INSTANCE_B__5_0_OFFSET UNITYSDK_OFFSET(0x1F970850)
#define MIHOYO_SDK_MIHOYOSDKSERVER___C__ONGETGATEADDRESSFAILED_B__86_0_OFFSET UNITYSDK_OFFSET(0x1F970910)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDKServer___c_TypeDefinitionIndex = 35345;

	class MiHoYoSDKServer___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::String*, ::System::Object*>** StaticGet___9__86_0()
		{
			return (::System::Func_2<::System::String*, ::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKServer___c_TypeDefinitionIndex)->GetStaticField(0x2B0F0);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKServer___c_TypeDefinitionIndex)->GetStaticField(0x2B0F8);
		}
		static ::System::Action** StaticGet___9__5_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKServer___c_TypeDefinitionIndex)->GetStaticField(0x2B100);
		}
		static ::System::Func_2<::MiHoYo::SDK::JSONNode*, ::System::Object*>** StaticGet___9__83_1()
		{
			return (::System::Func_2<::MiHoYo::SDK::JSONNode*, ::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKServer___c_TypeDefinitionIndex)->GetStaticField(0x2B108);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER___C__CTOR_OFFSET))(this);
		}

		::System::Void _get_Instance_b__5_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER___C__GET_INSTANCE_B__5_0_OFFSET))(this);
		}

		::MiHoYo::SDK::SecurityTunnel_ServerAddress _GetGateAddress_b__83_1(::MiHoYo::SDK::JSONNode* address)
		{
			return ((::MiHoYo::SDK::SecurityTunnel_ServerAddress(*)(::PVOID, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER___C__GETGATEADDRESS_B__83_1_OFFSET))(this, address);
		}

		::MiHoYo::SDK::SecurityTunnel_ServerAddress _OnGetGateAddressFailed_b__86_0(::System::String* ip)
		{
			return ((::MiHoYo::SDK::SecurityTunnel_ServerAddress(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER___C__ONGETGATEADDRESSFAILED_B__86_0_OFFSET))(this, ip);
		}
	};
}
