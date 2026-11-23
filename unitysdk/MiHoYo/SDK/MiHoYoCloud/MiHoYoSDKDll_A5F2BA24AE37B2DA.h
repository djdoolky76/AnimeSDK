#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class InvokeResponseModel; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_MIHOYOCLOUD_MIHOYOSDKDLL_A5F2BA24AE37B2DA_B173E6736F2A195D_OFFSET UNITYSDK_OFFSET(0x3A11DB0)
#define MIHOYO_SDK_MIHOYOCLOUD_MIHOYOSDKDLL_A5F2BA24AE37B2DA__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace MiHoYo::SDK::MiHoYoCloud
{
	inline static constexpr unsigned int MiHoYoSDKDll_A5F2BA24AE37B2DA_TypeDefinitionIndex = 12749;

	class MiHoYoSDKDll_A5F2BA24AE37B2DA : public ::System::Object
	{
	public:
		::MiHoYo::SDK::InvokeResponseModel* A8A64C573D7FC99A; // 0x10
		::System::Action_1<::System::String*>* E04D2BE64FCE9814; // 0x18
		::System::Int32 A6929B038B1FDCB5; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOCLOUD_MIHOYOSDKDLL_A5F2BA24AE37B2DA__CTOR_OFFSET))(this);
		}

		::System::Void B173E6736F2A195D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOCLOUD_MIHOYOSDKDLL_A5F2BA24AE37B2DA_B173E6736F2A195D_OFFSET))(this);
		}
	};
}
