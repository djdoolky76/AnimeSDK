#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace UnityEngine { class Texture2D; }

#define MIHOYO_SDK_MIHOYOSDK___C__DISPLAYCLASS27_0_CTOR_OFFSET UNITYSDK_OFFSET(0xAFC73C0)
#define MIHOYO_SDK_MIHOYOSDK___C__DISPLAYCLASS27_0__FETCHDIRECTWATERMARKIMAGEBYTES_B__0_OFFSET UNITYSDK_OFFSET(0xAFC7970)

namespace MiHoYo::SDK
{
	class MiHoYoSDK___c__DisplayClass27_0 : public ::System::Object
	{
	public:
		::System::Action* callback; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDK___C__DISPLAYCLASS27_0_CTOR_OFFSET))(this);
		}

		::System::Void _FetchDirectWatermarkImageBytes_b__0(::System::Int32 a1, ::UnityEngine::Texture2D* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Texture2D*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDK___C__DISPLAYCLASS27_0__FETCHDIRECTWATERMARKIMAGEBYTES_B__0_OFFSET))(this, a1, a2);
		}

	};
}
