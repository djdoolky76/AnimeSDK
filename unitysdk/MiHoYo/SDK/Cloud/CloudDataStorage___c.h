#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }

#define MIHOYO_SDK_CLOUD_CLOUDDATASTORAGE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1B45C920)
#define MIHOYO_SDK_CLOUD_CLOUDDATASTORAGE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1B45C960)
#define MIHOYO_SDK_CLOUD_CLOUDDATASTORAGE___C__STARTLOADINGCOROUTINEIFNEED_B__21_0_OFFSET UNITYSDK_OFFSET(0x1B45C970)

namespace MiHoYo::SDK::Cloud
{
	inline static constexpr unsigned int CloudDataStorage___c_TypeDefinitionIndex = 8891;

	class CloudDataStorage___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__21_0()
		{
			return (::System::Action**)UnitySDK::FromName("MiHoYo.SDK.Cloud", "<>c")->GetStaticField(0x39DA0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("MiHoYo.SDK.Cloud", "<>c")->GetStaticField(0x39DA8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_CLOUDDATASTORAGE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_CLOUDDATASTORAGE___C_CTOR_OFFSET))(this);
		}

		::System::Void _StartLoadingCoroutineIfNeed_b__21_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLOUD_CLOUDDATASTORAGE___C__STARTLOADINGCOROUTINEIFNEED_B__21_0_OFFSET))(this);
		}

	};
}
