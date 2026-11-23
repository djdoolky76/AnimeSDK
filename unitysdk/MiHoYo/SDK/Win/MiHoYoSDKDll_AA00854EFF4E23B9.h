#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_AA00854EFF4E23B9_B57805C12B3C5D96_OFFSET UNITYSDK_OFFSET(0x3AF8780)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_AA00854EFF4E23B9__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int MiHoYoSDKDll_AA00854EFF4E23B9_TypeDefinitionIndex = 12220;

	class MiHoYoSDKDll_AA00854EFF4E23B9 : public ::System::Object
	{
	public:
		::System::Action_1<::System::String*>* E04D2BE64FCE9814; // 0x10
		::System::String* F1BF0FE85E9DD584; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_AA00854EFF4E23B9__CTOR_OFFSET))(this);
		}

		::System::Void B57805C12B3C5D96(::System::String* A9B0E744486424C1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_AA00854EFF4E23B9_B57805C12B3C5D96_OFFSET))(this, A9B0E744486424C1);
		}
	};
}
