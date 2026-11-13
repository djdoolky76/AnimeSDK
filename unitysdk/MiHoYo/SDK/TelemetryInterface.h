#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_TELEMETRYINTERFACE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DD2BF80)
#define MIHOYO_SDK_TELEMETRYINTERFACE_CHECKINIT_OFFSET UNITYSDK_OFFSET(0x1DD2A460)
#define MIHOYO_SDK_TELEMETRYINTERFACE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DD2BF70)
#define MIHOYO_SDK_TELEMETRYINTERFACE_DESTORY_OFFSET UNITYSDK_OFFSET(0x1DD2A540)
#define MIHOYO_SDK_TELEMETRYINTERFACE_INITCUSTOM_OFFSET UNITYSDK_OFFSET(0x1DD2A310)
#define MIHOYO_SDK_TELEMETRYINTERFACE_INIT_OFFSET UNITYSDK_OFFSET(0x1DD29CC0)
#define MIHOYO_SDK_TELEMETRYINTERFACE_REPORTTOCUSTOMDATAUPLOAD_OFFSET UNITYSDK_OFFSET(0x1DD2B160)
#define MIHOYO_SDK_TELEMETRYINTERFACE_REPORTTOCUSTOMKIBANA_OFFSET UNITYSDK_OFFSET(0x1DD2BBF0)
#define MIHOYO_SDK_TELEMETRYINTERFACE_REPORTTODATAUPLOAD_OFFSET UNITYSDK_OFFSET(0x1DD2ADE0)
#define MIHOYO_SDK_TELEMETRYINTERFACE_REPORTTOKIBANA_OFFSET UNITYSDK_OFFSET(0x1DD2B870)
#define MIHOYO_SDK_TELEMETRYINTERFACE_SETCONFIG_OFFSET UNITYSDK_OFFSET(0x1DD2A610)
#define MIHOYO_SDK_TELEMETRYINTERFACE_SETCUSTOMCONFIG_OFFSET UNITYSDK_OFFSET(0x1DD2A170)
#define MIHOYO_SDK_TELEMETRYINTERFACE_STARTDATAUPLOAD_OFFSET UNITYSDK_OFFSET(0x1DD2AA00)
#define MIHOYO_SDK_TELEMETRYINTERFACE_STARTKIBANA_OFFSET UNITYSDK_OFFSET(0x1DD2B460)
#define MIHOYO_SDK_TELEMETRYINTERFACE_STOPDATAUPLOAD_OFFSET UNITYSDK_OFFSET(0x1DD2AC00)
#define MIHOYO_SDK_TELEMETRYINTERFACE_STOPKIBANA_OFFSET UNITYSDK_OFFSET(0x1DD2B660)
#define MIHOYO_SDK_TELEMETRYINTERFACE_TELEMETRY_NATIVE_INITENV_OFFSET UNITYSDK_OFFSET(0x1DD2A0D0)
#define MIHOYO_SDK_TELEMETRYINTERFACE_TELEMETRY_NATIVE_REPORTTOKIBANA_OFFSET UNITYSDK_OFFSET(0x1DD2BB20)
#define MIHOYO_SDK_TELEMETRYINTERFACE_TELEMETRY_NATIVE_REPORTTOLOGUPLOAD_OFFSET UNITYSDK_OFFSET(0x1DD2B090)
#define MIHOYO_SDK_TELEMETRYINTERFACE_TELEMETRY_NATIVE_SETCONFIG_OFFSET UNITYSDK_OFFSET(0x1DD2A960)
#define MIHOYO_SDK_TELEMETRYINTERFACE_TELEMETRY_NATIVE_STARTKIBANASERVICE_OFFSET UNITYSDK_OFFSET(0x1DD2B5C0)
#define MIHOYO_SDK_TELEMETRYINTERFACE_TELEMETRY_NATIVE_STARTLOGUPLOADSERVICE_OFFSET UNITYSDK_OFFSET(0x1DD2AB60)
#define MIHOYO_SDK_TELEMETRYINTERFACE_TELEMETRY_NATIVE_STOPKIBANASERVICE_OFFSET UNITYSDK_OFFSET(0x1DD2B7D0)
#define MIHOYO_SDK_TELEMETRYINTERFACE_TELEMETRY_NATIVE_STOPLOGUPLOADSERVICE_OFFSET UNITYSDK_OFFSET(0x1DD2AD40)
#define MIHOYO_SDK_TELEMETRYINTERFACE_TELEMETRY_NATIVE_UNINITENV_OFFSET UNITYSDK_OFFSET(0x1DD2BEF0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int TelemetryInterface_TypeDefinitionIndex = 47600;

	class TelemetryInterface : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_dataUploadUrl()
		{
			return (::System::String**)UnitySDK::FromName("MiHoYo.SDK", "TelemetryInterface")->GetStaticField(0x2B180);
		}

		static ::System::String** StaticGet_kibanaUrl()
		{
			return (::System::String**)UnitySDK::FromName("MiHoYo.SDK", "TelemetryInterface")->GetStaticField(0x2B188);
		}

		static ::System::Boolean* StaticGet_isInited()
		{
			return (::System::Boolean*)UnitySDK::FromName("MiHoYo.SDK", "TelemetryInterface")->GetStaticField(0x8B80);
		}

		// static const ::System::String* MODULE_NAME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TELEMETRYINTERFACE_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_TELEMETRYINTERFACE_CCTOR_OFFSET))();
		}

		static ::System::Void Init()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_TELEMETRYINTERFACE_INIT_OFFSET))();
		}

		static ::System::Void InitCustom(::System::String* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TELEMETRYINTERFACE_INITCUSTOM_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean CheckInit()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_TELEMETRYINTERFACE_CHECKINIT_OFFSET))();
		}

		static ::System::Void Destory(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TELEMETRYINTERFACE_DESTORY_OFFSET))(a1);
		}

		static ::System::Void SetConfig(::System::Boolean a1, ::System::String* a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TELEMETRYINTERFACE_SETCONFIG_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void SetCustomConfig(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TELEMETRYINTERFACE_SETCUSTOMCONFIG_OFFSET))(a1);
		}

		static ::System::Void StartDataUpload(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TELEMETRYINTERFACE_STARTDATAUPLOAD_OFFSET))(a1);
		}

		static ::System::Void StopDataUpload(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TELEMETRYINTERFACE_STOPDATAUPLOAD_OFFSET))(a1);
		}

		static ::System::Void ReportToDataUpload(::System::String* a1, ::System::Int32 a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TELEMETRYINTERFACE_REPORTTODATAUPLOAD_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ReportToCustomDataUpload(::System::String* a1, ::System::Int32 a2, ::System::String* a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::System::String*, ::System::Int32, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TELEMETRYINTERFACE_REPORTTOCUSTOMDATAUPLOAD_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void StartKibana(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TELEMETRYINTERFACE_STARTKIBANA_OFFSET))(a1);
		}

		static ::System::Void StopKibana(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TELEMETRYINTERFACE_STOPKIBANA_OFFSET))(a1);
		}

		static ::System::Void ReportToKibana(::System::String* a1, ::System::Int32 a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TELEMETRYINTERFACE_REPORTTOKIBANA_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ReportToCustomKibana(::System::String* a1, ::System::Int32 a2, ::System::String* a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::System::String*, ::System::Int32, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TELEMETRYINTERFACE_REPORTTOCUSTOMKIBANA_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void Telemetry_Native_InitEnv(::System::String* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TELEMETRYINTERFACE_TELEMETRY_NATIVE_INITENV_OFFSET))(a1, a2, a3);
		}

		static ::System::Void Telemetry_Native_SetConfig(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TELEMETRYINTERFACE_TELEMETRY_NATIVE_SETCONFIG_OFFSET))(a1);
		}

		static ::System::Void Telemetry_Native_ReportToLogUpload(::System::String* a1, ::System::String* a2, ::System::Int32 a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TELEMETRYINTERFACE_TELEMETRY_NATIVE_REPORTTOLOGUPLOAD_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void Telemetry_Native_StartLogUploadService(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TELEMETRYINTERFACE_TELEMETRY_NATIVE_STARTLOGUPLOADSERVICE_OFFSET))(a1);
		}

		static ::System::Void Telemetry_Native_StopLogUploadService(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TELEMETRYINTERFACE_TELEMETRY_NATIVE_STOPLOGUPLOADSERVICE_OFFSET))(a1);
		}

		static ::System::Void Telemetry_Native_ReportToKibana(::System::String* a1, ::System::String* a2, ::System::Int32 a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TELEMETRYINTERFACE_TELEMETRY_NATIVE_REPORTTOKIBANA_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void Telemetry_Native_StartKibanaService(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TELEMETRYINTERFACE_TELEMETRY_NATIVE_STARTKIBANASERVICE_OFFSET))(a1);
		}

		static ::System::Void Telemetry_Native_StopKibanaService(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TELEMETRYINTERFACE_TELEMETRY_NATIVE_STOPKIBANASERVICE_OFFSET))(a1);
		}

		static ::System::Void Telemetry_Native_UnInitEnv()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_TELEMETRYINTERFACE_TELEMETRY_NATIVE_UNINITENV_OFFSET))();
		}

	};
}
