#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK { class TelemetryDelegate_InitDelegate; }
namespace MiHoYo::SDK { class TelemetryDelegate_ReportToDataUploadDelegate; }
namespace MiHoYo::SDK { class TelemetryDelegate_ReportToKibanaDelegate; }
namespace MiHoYo::SDK { class TelemetryDelegate_SetConfigDelegate; }
namespace MiHoYo::SDK { class TelemetryDelegate_StartDataUploadDelegate; }
namespace MiHoYo::SDK { class TelemetryDelegate_StartKibanaDelegate; }
namespace MiHoYo::SDK { class TelemetryDelegate_StopDataUploadDelegate; }
namespace MiHoYo::SDK { class TelemetryDelegate_StopKibanaDelegate; }

#define MIHOYO_SDK_TELEMETRYDELEGATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D169260)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int TelemetryDelegate_TypeDefinitionIndex = 7710;

	class TelemetryDelegate : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::TelemetryDelegate_StopDataUploadDelegate** StaticGet_StopDataUpload()
		{
			return (::MiHoYo::SDK::TelemetryDelegate_StopDataUploadDelegate**)UnitySDK::FromName("MiHoYo.SDK", "TelemetryDelegate")->GetStaticField(0xB860);
		}

		static ::MiHoYo::SDK::TelemetryDelegate_StopKibanaDelegate** StaticGet_StopKibana()
		{
			return (::MiHoYo::SDK::TelemetryDelegate_StopKibanaDelegate**)UnitySDK::FromName("MiHoYo.SDK", "TelemetryDelegate")->GetStaticField(0xB868);
		}

		static ::MiHoYo::SDK::TelemetryDelegate_SetConfigDelegate** StaticGet_SetConfig()
		{
			return (::MiHoYo::SDK::TelemetryDelegate_SetConfigDelegate**)UnitySDK::FromName("MiHoYo.SDK", "TelemetryDelegate")->GetStaticField(0xB870);
		}

		static ::MiHoYo::SDK::TelemetryDelegate_InitDelegate** StaticGet_Init()
		{
			return (::MiHoYo::SDK::TelemetryDelegate_InitDelegate**)UnitySDK::FromName("MiHoYo.SDK", "TelemetryDelegate")->GetStaticField(0xB878);
		}

		static ::MiHoYo::SDK::TelemetryDelegate_StartKibanaDelegate** StaticGet_StartKibana()
		{
			return (::MiHoYo::SDK::TelemetryDelegate_StartKibanaDelegate**)UnitySDK::FromName("MiHoYo.SDK", "TelemetryDelegate")->GetStaticField(0xB880);
		}

		static ::MiHoYo::SDK::TelemetryDelegate_ReportToKibanaDelegate** StaticGet_ReportToKibana()
		{
			return (::MiHoYo::SDK::TelemetryDelegate_ReportToKibanaDelegate**)UnitySDK::FromName("MiHoYo.SDK", "TelemetryDelegate")->GetStaticField(0xB888);
		}

		static ::MiHoYo::SDK::TelemetryDelegate_StartDataUploadDelegate** StaticGet_StartDataUpload()
		{
			return (::MiHoYo::SDK::TelemetryDelegate_StartDataUploadDelegate**)UnitySDK::FromName("MiHoYo.SDK", "TelemetryDelegate")->GetStaticField(0xB890);
		}

		static ::MiHoYo::SDK::TelemetryDelegate_ReportToDataUploadDelegate** StaticGet_ReportToDataUpload()
		{
			return (::MiHoYo::SDK::TelemetryDelegate_ReportToDataUploadDelegate**)UnitySDK::FromName("MiHoYo.SDK", "TelemetryDelegate")->GetStaticField(0xB898);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TELEMETRYDELEGATE_CTOR_OFFSET))(this);
		}

	};
}
