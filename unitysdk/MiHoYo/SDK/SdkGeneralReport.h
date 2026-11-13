#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/ReportEnumDefine_ActionIdType.h"
#include "unitysdk/MiHoYo/SDK/ReportEnumDefine_ReportStage.h"
#include "unitysdk/MiHoYo/SDK/ReportEnumDefine_ReportType.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK { class JSONObject; }
namespace MiHoYo::SDK { class SdkGeneralReport; }

#define MIHOYO_SDK_SDKGENERALREPORT_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DD10410)
#define MIHOYO_SDK_SDKGENERALREPORT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DD10400)
#define MIHOYO_SDK_SDKGENERALREPORT_REPORT_OFFSET UNITYSDK_OFFSET(0x1DD10130)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int SdkGeneralReport_TypeDefinitionIndex = 47515;

	class SdkGeneralReport : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::SdkGeneralReport** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::SdkGeneralReport**)UnitySDK::FromName("MiHoYo.SDK", "SdkGeneralReport")->GetStaticField(0x29FE0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKGENERALREPORT_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKGENERALREPORT_CCTOR_OFFSET))();
		}

		::System::Void Report(::MiHoYo::SDK::ReportEnumDefine_ActionIdType a1, ::MiHoYo::SDK::ReportEnumDefine_ReportType a2, ::MiHoYo::SDK::ReportEnumDefine_ReportStage a3, ::MiHoYo::SDK::JSONObject* a4)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::ReportEnumDefine_ActionIdType, ::MiHoYo::SDK::ReportEnumDefine_ReportType, ::MiHoYo::SDK::ReportEnumDefine_ReportStage, ::MiHoYo::SDK::JSONObject*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKGENERALREPORT_REPORT_OFFSET))(this, a1, a2, a3, a4);
		}

	};
}
