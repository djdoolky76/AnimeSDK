#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_E795D12829A20BD9_B65E57DB0E07D208_OFFSET UNITYSDK_OFFSET(0x3AF9120)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_E795D12829A20BD9__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int MiHoYoSDKDll_E795D12829A20BD9_TypeDefinitionIndex = 12221;

	class MiHoYoSDKDll_E795D12829A20BD9 : public ::System::Object
	{
	public:
		::System::Action_1<::System::String*>* BB83DD88CD827F8B; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_E795D12829A20BD9__CTOR_OFFSET))(this);
		}

		::System::Void B65E57DB0E07D208(::System::String* E41EB813C7FB644A)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_E795D12829A20BD9_B65E57DB0E07D208_OFFSET))(this, E41EB813C7FB644A);
		}
	};
}
