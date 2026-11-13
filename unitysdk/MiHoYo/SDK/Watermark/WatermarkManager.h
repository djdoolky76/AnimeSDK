#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK::Watermark { class WatermarkManager; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine { class Texture2D; }

#define MIHOYO_SDK_WATERMARK_WATERMARKMANAGER_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4E1C40)
#define MIHOYO_SDK_WATERMARK_WATERMARKMANAGER_CHECKSCREENSHOTWATERMARKCONFIG_OFFSET UNITYSDK_OFFSET(0x1E4E1970)
#define MIHOYO_SDK_WATERMARK_WATERMARKMANAGER_CHECKWATERMARKCONFIG_OFFSET UNITYSDK_OFFSET(0x1E4E15E0)
#define MIHOYO_SDK_WATERMARK_WATERMARKMANAGER_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4E1C30)
#define MIHOYO_SDK_WATERMARK_WATERMARKMANAGER_GETSCREENSHOTWATERMARKIMAGEDIRECT_OFFSET UNITYSDK_OFFSET(0x1E4E17B0)
#define MIHOYO_SDK_WATERMARK_WATERMARKMANAGER_GETSCREENSHOTWATERMARKIMAGE_OFFSET UNITYSDK_OFFSET(0x1E4E15F0)
#define MIHOYO_SDK_WATERMARK_WATERMARKMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0x1E4E1360)
#define MIHOYO_SDK_WATERMARK_WATERMARKMANAGER_SETWATERMARKCONFIG_OFFSET UNITYSDK_OFFSET(0x1E4E0700)
#define MIHOYO_SDK_WATERMARK_WATERMARKMANAGER_SETWATERMARKENABLE_OFFSET UNITYSDK_OFFSET(0x1E4E0520)

namespace MiHoYo::SDK::Watermark
{
	inline static constexpr unsigned int WatermarkManager_TypeDefinitionIndex = 8882;

	class WatermarkManager : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Watermark::WatermarkManager** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::Watermark::WatermarkManager**)UnitySDK::FromName("MiHoYo.SDK.Watermark", "WatermarkManager")->GetStaticField(0xA5B0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WATERMARK_WATERMARKMANAGER_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WATERMARK_WATERMARKMANAGER_CCTOR_OFFSET))();
		}

		::System::Void SetWatermarkEnable(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WATERMARK_WATERMARKMANAGER_SETWATERMARKENABLE_OFFSET))(this, a1);
		}

		::System::Void SetWatermarkConfig(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WATERMARK_WATERMARKMANAGER_SETWATERMARKCONFIG_OFFSET))(this, a1);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WATERMARK_WATERMARKMANAGER_INIT_OFFSET))(this);
		}

		::System::Void GetScreenShotWatermarkImage(::System::Int32 a1, ::System::Int32 a2, ::System::Action_2<::System::Int32, ::UnityEngine::Texture2D*>* a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Action_2<::System::Int32, ::UnityEngine::Texture2D*>*, ::System::Single))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WATERMARK_WATERMARKMANAGER_GETSCREENSHOTWATERMARKIMAGE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void GetScreenShotWatermarkImageDirect(::System::Int32 a1, ::System::Int32 a2, ::System::Action_2<::System::Int32, ::UnityEngine::Texture2D*>* a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Action_2<::System::Int32, ::UnityEngine::Texture2D*>*, ::System::Single))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WATERMARK_WATERMARKMANAGER_GETSCREENSHOTWATERMARKIMAGEDIRECT_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean CheckWatermarkConfig()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WATERMARK_WATERMARKMANAGER_CHECKWATERMARKCONFIG_OFFSET))(this);
		}

		::System::Boolean CheckScreenshotWatermarkConfig(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WATERMARK_WATERMARKMANAGER_CHECKSCREENSHOTWATERMARKCONFIG_OFFSET))(this, a1);
		}

	};
}
