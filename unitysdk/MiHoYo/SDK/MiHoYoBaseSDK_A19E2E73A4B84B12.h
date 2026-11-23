#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class AssetBundle; }

#define MIHOYO_SDK_MIHOYOBASESDK_A19E2E73A4B84B12_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CF4AC0)
#define MIHOYO_SDK_MIHOYOBASESDK_A19E2E73A4B84B12__CTOR_OFFSET UNITYSDK_OFFSET(0x2911C70)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoBaseSDK_A19E2E73A4B84B12_TypeDefinitionIndex = 15801;

	class MiHoYoBaseSDK_A19E2E73A4B84B12 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOBASESDK_A19E2E73A4B84B12__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}

		::UnityEngine::AssetBundle* Invoke(::System::String* EFF983A80A48BB2A)
		{
			return ((::UnityEngine::AssetBundle*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOBASESDK_A19E2E73A4B84B12_INVOKE_OFFSET))(this, EFF983A80A48BB2A);
		}
	};
}
