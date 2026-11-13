#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_MIHOYOCLOUD_CLOUDPIPE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C329F30)
#define MIHOYO_SDK_MIHOYOCLOUD_CLOUDPIPE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1C329F70)
#define MIHOYO_SDK_MIHOYOCLOUD_CLOUDPIPE___C__CONNECT_B__9_0_OFFSET UNITYSDK_OFFSET(0x1C329F80)

namespace MiHoYo::SDK::MiHoYoCloud
{
	inline static constexpr unsigned int CloudPipe___c_TypeDefinitionIndex = 9147;

	class CloudPipe___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::Il2CppArray<::System::Byte>*>** StaticGet___9__9_0()
		{
			return (::System::Action_1<::Il2CppArray<::System::Byte>*>**)UnitySDK::FromName("MiHoYo.SDK.MiHoYoCloud", "<>c")->GetStaticField(0x9F60);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("MiHoYo.SDK.MiHoYoCloud", "<>c")->GetStaticField(0x9F68);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOCLOUD_CLOUDPIPE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOCLOUD_CLOUDPIPE___C_CTOR_OFFSET))(this);
		}

		::System::Void _Connect_b__9_0(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOCLOUD_CLOUDPIPE___C__CONNECT_B__9_0_OFFSET))(this, a1);
		}

	};
}
