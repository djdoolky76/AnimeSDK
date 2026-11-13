#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK { class DataUploadReport; }
namespace System { class String; }

#define MIHOYO_SDK_DATAUPLOADREPORT_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DD6A340)
#define MIHOYO_SDK_DATAUPLOADREPORT_CHECKTELEMETRYENABLE_OFFSET UNITYSDK_OFFSET(0x1DD69CA0)
#define MIHOYO_SDK_DATAUPLOADREPORT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DD6A330)
#define MIHOYO_SDK_DATAUPLOADREPORT_REPORT_OFFSET UNITYSDK_OFFSET(0x1DD69D60)
#define MIHOYO_SDK_DATAUPLOADREPORT_TELEMETRYSTART_OFFSET UNITYSDK_OFFSET(0x1DD69EC0)
#define MIHOYO_SDK_DATAUPLOADREPORT_TELEMETRYSTOP_OFFSET UNITYSDK_OFFSET(0x1DD6A1A0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int DataUploadReport_TypeDefinitionIndex = 7982;

	class DataUploadReport : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::DataUploadReport** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::DataUploadReport**)UnitySDK::FromName("MiHoYo.SDK", "DataUploadReport")->GetStaticField(0x1AFC0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DATAUPLOADREPORT_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_DATAUPLOADREPORT_CCTOR_OFFSET))();
		}

		::System::Boolean CheckTelemetryEnable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DATAUPLOADREPORT_CHECKTELEMETRYENABLE_OFFSET))(this);
		}

		::System::Void Report(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DATAUPLOADREPORT_REPORT_OFFSET))(this, a1, a2);
		}

		::System::Void TelemetryStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DATAUPLOADREPORT_TELEMETRYSTART_OFFSET))(this);
		}

		::System::Void TelemetryStop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DATAUPLOADREPORT_TELEMETRYSTOP_OFFSET))(this);
		}

	};
}
