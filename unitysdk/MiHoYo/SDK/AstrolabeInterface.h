#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define MIHOYO_SDK_ASTROLABEINTERFACE_ASTROLABE_BLOCKREPORT_OFFSET UNITYSDK_OFFSET(0xB5BBDA0)
#define MIHOYO_SDK_ASTROLABEINTERFACE_ASTROLABE_CRASHREPORTDELETEUNSENT_OFFSET UNITYSDK_OFFSET(0xB5BB4E0)
#define MIHOYO_SDK_ASTROLABEINTERFACE_ASTROLABE_CRASHREPORTSETCUSTOMDATA_OFFSET UNITYSDK_OFFSET(0xB5BB6B0)
#define MIHOYO_SDK_ASTROLABEINTERFACE_ASTROLABE_CRASHREPORT_OFFSET UNITYSDK_OFFSET(0xB5BB8C0)
#define MIHOYO_SDK_ASTROLABEINTERFACE_ASTROLABE_GAMELOGREPORT_OFFSET UNITYSDK_OFFSET(0xB5BADB0)
#define MIHOYO_SDK_ASTROLABEINTERFACE_ASTROLABE_INITCONFIG_OFFSET UNITYSDK_OFFSET(0xB5B80F0)
#define MIHOYO_SDK_ASTROLABEINTERFACE_ASTROLABE_NATIVE_CRASHREPORTDELETEUNSENT_OFFSET UNITYSDK_OFFSET(0xB5BB630)
#define MIHOYO_SDK_ASTROLABEINTERFACE_ASTROLABE_NATIVE_CRASHREPORTSETCUSTOMDATA_OFFSET UNITYSDK_OFFSET(0xB5BB820)
#define MIHOYO_SDK_ASTROLABEINTERFACE_ASTROLABE_NATIVE_CRASHREPORT_OFFSET UNITYSDK_OFFSET(0xB5BBD00)
#define MIHOYO_SDK_ASTROLABEINTERFACE_ASTROLABE_NATIVE_GAMELOGREPORT_OFFSET UNITYSDK_OFFSET(0xB5BB3D0)
#define MIHOYO_SDK_ASTROLABEINTERFACE_ASTROLABE_NATIVE_INIT_OFFSET UNITYSDK_OFFSET(0xB5B92A0)
#define MIHOYO_SDK_ASTROLABEINTERFACE_ASTROLABE_NATIVE_INSTALLCRASHREPORT_OFFSET UNITYSDK_OFFSET(0xB5BA970)
#define MIHOYO_SDK_ASTROLABEINTERFACE_ASTROLABE_NATIVE_INSTALLGAMELOG_OFFSET UNITYSDK_OFFSET(0xB5BA860)
#define MIHOYO_SDK_ASTROLABEINTERFACE_ASTROLABE_NATIVE_INSTALLHANG_OFFSET UNITYSDK_OFFSET(0xB5BAA10)
#define MIHOYO_SDK_ASTROLABEINTERFACE_ASTROLABE_NATIVE_INSTALLLOGPLUGIN_OFFSET UNITYSDK_OFFSET(0xB5BAAB0)
#define MIHOYO_SDK_ASTROLABEINTERFACE_ASTROLABE_NATIVE_INSTALLREPLAY_OFFSET UNITYSDK_OFFSET(0xB5BA8F0)
#define MIHOYO_SDK_ASTROLABEINTERFACE_ASTROLABE_NATIVE_ONHANG_OFFSET UNITYSDK_OFFSET(0xB5BC6A0)
#define MIHOYO_SDK_ASTROLABEINTERFACE_ASTROLABE_NATIVE_SETCONFIG_OFFSET UNITYSDK_OFFSET(0xB5B9350)
#define MIHOYO_SDK_ASTROLABEINTERFACE_ASTROLABE_NATIVE_SETCUSTOMDATA_OFFSET UNITYSDK_OFFSET(0xB5BAD10)
#define MIHOYO_SDK_ASTROLABEINTERFACE_ASTROLABE_NATIVE_SETFTCSWITCH_OFFSET UNITYSDK_OFFSET(0xB5BCAD0)
#define MIHOYO_SDK_ASTROLABEINTERFACE_ASTROLABE_NATIVE_SETLRSAG_OFFSET UNITYSDK_OFFSET(0xB5BC900)
#define MIHOYO_SDK_ASTROLABEINTERFACE_ASTROLABE_NATIVE_START_OFFSET UNITYSDK_OFFSET(0xB5BAB50)
#define MIHOYO_SDK_ASTROLABEINTERFACE_ASTROLABE_SETCONFIG_OFFSET UNITYSDK_OFFSET(0xB5B93F0)
#define MIHOYO_SDK_ASTROLABEINTERFACE_ASTROLABE_SETCUSTOMDATA_OFFSET UNITYSDK_OFFSET(0xB5BABD0)
#define MIHOYO_SDK_ASTROLABEINTERFACE_ASTROLABE_SETFTCSWITCH_OFFSET UNITYSDK_OFFSET(0xB5BC980)
#define MIHOYO_SDK_ASTROLABEINTERFACE_ASTROLABE_SETLRSAG_OFFSET UNITYSDK_OFFSET(0xB5BC7B0)
#define MIHOYO_SDK_ASTROLABEINTERFACE_ASTROLABE_START_OFFSET UNITYSDK_OFFSET(0xB5B9530)
#define MIHOYO_SDK_ASTROLABEINTERFACE_CCTOR_OFFSET UNITYSDK_OFFSET(0xB5BCB60)
#define MIHOYO_SDK_ASTROLABEINTERFACE_CTOR_OFFSET UNITYSDK_OFFSET(0xB5BCB50)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int AstrolabeInterface_TypeDefinitionIndex = 47534;

	class AstrolabeInterface : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_crashCustomData()
		{
			return (::System::String**)UnitySDK::FromName("MiHoYo.SDK", "AstrolabeInterface")->GetStaticField(0x17E80);
		}

		static ::System::String** StaticGet_crashDumpPath()
		{
			return (::System::String**)UnitySDK::FromName("MiHoYo.SDK", "AstrolabeInterface")->GetStaticField(0x17E88);
		}

		static ::System::String** StaticGet_sensitiveKeys()
		{
			return (::System::String**)UnitySDK::FromName("MiHoYo.SDK", "AstrolabeInterface")->GetStaticField(0x17E90);
		}

		static ::System::Boolean* StaticGet_isSensitiveEnabled()
		{
			return (::System::Boolean*)UnitySDK::FromName("MiHoYo.SDK", "AstrolabeInterface")->GetStaticField(0x5000);
		}

		static ::System::Int32* StaticGet_maxStackDepth()
		{
			return (::System::Int32*)UnitySDK::FromName("MiHoYo.SDK", "AstrolabeInterface")->GetStaticField(0x5004);
		}

		// static const ::System::String* MODULE_NAME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ASTROLABEINTERFACE_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_ASTROLABEINTERFACE_CCTOR_OFFSET))();
		}

		static ::System::Void Astrolabe_InitConfig(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ASTROLABEINTERFACE_ASTROLABE_INITCONFIG_OFFSET))(a1, a2);
		}

		static ::System::Void Astrolabe_SetConfig(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ASTROLABEINTERFACE_ASTROLABE_SETCONFIG_OFFSET))(a1);
		}

		static ::System::Void Astrolabe_Start(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ASTROLABEINTERFACE_ASTROLABE_START_OFFSET))(a1);
		}

		static ::System::Void Astrolabe_SetCustomData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ASTROLABEINTERFACE_ASTROLABE_SETCUSTOMDATA_OFFSET))(a1);
		}

		static ::System::Void Astrolabe_GameLogReport(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ASTROLABEINTERFACE_ASTROLABE_GAMELOGREPORT_OFFSET))(a1);
		}

		static ::System::Void Astrolabe_CrashReportDeleteUnSent()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_ASTROLABEINTERFACE_ASTROLABE_CRASHREPORTDELETEUNSENT_OFFSET))();
		}

		static ::System::Void Astrolabe_CrashReportSetCustomData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ASTROLABEINTERFACE_ASTROLABE_CRASHREPORTSETCUSTOMDATA_OFFSET))(a1);
		}

		static ::System::Void Astrolabe_CrashReport(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ASTROLABEINTERFACE_ASTROLABE_CRASHREPORT_OFFSET))(a1);
		}

		static ::System::Void Astrolabe_BlockReport(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ASTROLABEINTERFACE_ASTROLABE_BLOCKREPORT_OFFSET))(a1);
		}

		static ::System::Void Astrolabe_SetLrsag(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ASTROLABEINTERFACE_ASTROLABE_SETLRSAG_OFFSET))(a1);
		}

		static ::System::Void Astrolabe_SetFtcSwitch(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ASTROLABEINTERFACE_ASTROLABE_SETFTCSWITCH_OFFSET))(a1);
		}

		static ::System::Void Astrolabe_Native_Init(::System::String* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::System::String*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ASTROLABEINTERFACE_ASTROLABE_NATIVE_INIT_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void Astrolabe_Native_SetConfig(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ASTROLABEINTERFACE_ASTROLABE_NATIVE_SETCONFIG_OFFSET))(a1);
		}

		static ::System::Void Astrolabe_Native_Start()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_ASTROLABEINTERFACE_ASTROLABE_NATIVE_START_OFFSET))();
		}

		static ::System::Void Astrolabe_Native_SetCustomData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ASTROLABEINTERFACE_ASTROLABE_NATIVE_SETCUSTOMDATA_OFFSET))(a1);
		}

		static ::System::Void Astrolabe_Native_InstallGameLog(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ASTROLABEINTERFACE_ASTROLABE_NATIVE_INSTALLGAMELOG_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void Astrolabe_Native_GameLogReport(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ASTROLABEINTERFACE_ASTROLABE_NATIVE_GAMELOGREPORT_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void Astrolabe_Native_InstallCrashReport(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ASTROLABEINTERFACE_ASTROLABE_NATIVE_INSTALLCRASHREPORT_OFFSET))(a1);
		}

		static ::System::Void Astrolabe_Native_CrashReportDeleteUnSent()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_ASTROLABEINTERFACE_ASTROLABE_NATIVE_CRASHREPORTDELETEUNSENT_OFFSET))();
		}

		static ::System::Void Astrolabe_Native_CrashReportSetCustomData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ASTROLABEINTERFACE_ASTROLABE_NATIVE_CRASHREPORTSETCUSTOMDATA_OFFSET))(a1);
		}

		static ::System::Void Astrolabe_Native_CrashReport(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ASTROLABEINTERFACE_ASTROLABE_NATIVE_CRASHREPORT_OFFSET))(a1, a2);
		}

		static ::System::Void Astrolabe_Native_InstallHang(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ASTROLABEINTERFACE_ASTROLABE_NATIVE_INSTALLHANG_OFFSET))(a1);
		}

		static ::System::Void Astrolabe_Native_OnHang(::System::UInt64 a1, ::System::UInt64 a2, ::System::UInt32 a3, ::System::String* a4, ::System::UInt32 a5, ::System::Int32 a6, ::System::Int32 a7, ::System::String* a8)
		{
			return ((::System::Void(*)(::System::UInt64, ::System::UInt64, ::System::UInt32, ::System::String*, ::System::UInt32, ::System::Int32, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ASTROLABEINTERFACE_ASTROLABE_NATIVE_ONHANG_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
		}

		static ::System::Void Astrolabe_Native_InstallLogPlugin(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ASTROLABEINTERFACE_ASTROLABE_NATIVE_INSTALLLOGPLUGIN_OFFSET))(a1);
		}

		static ::System::Void Astrolabe_Native_InstallReplay()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_ASTROLABEINTERFACE_ASTROLABE_NATIVE_INSTALLREPLAY_OFFSET))();
		}

		static ::System::Void Astrolabe_Native_SetLrsag(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ASTROLABEINTERFACE_ASTROLABE_NATIVE_SETLRSAG_OFFSET))(a1);
		}

		static ::System::Void Astrolabe_Native_SetFtcSwitch(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ASTROLABEINTERFACE_ASTROLABE_NATIVE_SETFTCSWITCH_OFFSET))(a1);
		}

	};
}
