#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_AAE4F8D1C0AE8D5D_F259BE7FB35CE5E0_OFFSET UNITYSDK_OFFSET(0x3AF8140)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL_AAE4F8D1C0AE8D5D__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int MiHoYoSDKDll_AAE4F8D1C0AE8D5D_TypeDefinitionIndex = 12219;

	class MiHoYoSDKDll_AAE4F8D1C0AE8D5D : public ::System::Object
	{
	public:
		::System::Action_1<::System::String*>* E04D2BE64FCE9814; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_AAE4F8D1C0AE8D5D__CTOR_OFFSET))(this);
		}

		::System::Void F259BE7FB35CE5E0(::System::String* A6CAE7339066B0FB)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL_AAE4F8D1C0AE8D5D_F259BE7FB35CE5E0_OFFSET))(this, A6CAE7339066B0FB);
		}
	};
}
