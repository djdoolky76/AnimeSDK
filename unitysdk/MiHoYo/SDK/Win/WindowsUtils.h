#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MIHOYO_SDK_WIN_WINDOWSUTILS_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CF90060)
#define MIHOYO_SDK_WIN_WINDOWSUTILS_CTOR_OFFSET UNITYSDK_OFFSET(0x1CF90050)
#define MIHOYO_SDK_WIN_WINDOWSUTILS_GETAUTHTICKETFROMCOMMANDLINE_OFFSET UNITYSDK_OFFSET(0x1CF8F170)
#define MIHOYO_SDK_WIN_WINDOWSUTILS_GETCMDLINEMAP_OFFSET UNITYSDK_OFFSET(0x1CF8F3B0)
#define MIHOYO_SDK_WIN_WINDOWSUTILS_GETCOMMANDLINE_OFFSET UNITYSDK_OFFSET(0x1CF8FFA0)
#define MIHOYO_SDK_WIN_WINDOWSUTILS_GETDEEPLINKFROMCOMMANDLINE_OFFSET UNITYSDK_OFFSET(0x1CF8FDF0)
#define MIHOYO_SDK_WIN_WINDOWSUTILS_GETSTORAGETYPEFROMCOMMANDLINE_OFFSET UNITYSDK_OFFSET(0x1CF8FC40)
#define MIHOYO_SDK_WIN_WINDOWSUTILS_GETTHIRDPARTYFROMCOMMANDLINE_OFFSET UNITYSDK_OFFSET(0x1CF8FA00)
#define MIHOYO_SDK_WIN_WINDOWSUTILS_GETTRACEIDFROMCOMMANDLINE_OFFSET UNITYSDK_OFFSET(0x1CF8F7C0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int WindowsUtils_TypeDefinitionIndex = 9495;

	class WindowsUtils : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_LOGIN_STORAGE_SESSION_TYPE()
		{
			return (::System::String**)UnitySDK::FromName("MiHoYo.SDK.Win", "WindowsUtils")->GetStaticField(0x29D60);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_commandLineArgs()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("MiHoYo.SDK.Win", "WindowsUtils")->GetStaticField(0x29D68);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>** StaticGet_cmdLineMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>**)UnitySDK::FromName("MiHoYo.SDK.Win", "WindowsUtils")->GetStaticField(0x29D70);
		}

		static ::System::String** StaticGet_LOGIN_STORAGE_LOCAL_TYPE()
		{
			return (::System::String**)UnitySDK::FromName("MiHoYo.SDK.Win", "WindowsUtils")->GetStaticField(0x29D78);
		}

		// static const ::System::String* LOGIN_AUTH_TICKET_KEY; // 0x0
		// static const ::System::String* LOGIN_TRACE_ID; // 0x0
		// static const ::System::String* LOGIN_THIRD_PARTY; // 0x0
		// static const ::System::String* LOGIN_STORAGE_TYPE; // 0x0
		// static const ::System::String* HYP_DEEPLINK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_WINDOWSUTILS_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_WINDOWSUTILS_CCTOR_OFFSET))();
		}

		static ::System::String* GetAuthTicketFromCommandLine()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_WINDOWSUTILS_GETAUTHTICKETFROMCOMMANDLINE_OFFSET))();
		}

		static ::System::String* GetTraceIdFromCommandLine()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_WINDOWSUTILS_GETTRACEIDFROMCOMMANDLINE_OFFSET))();
		}

		static ::System::String* GetThirdPartyFromCommandLine()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_WINDOWSUTILS_GETTHIRDPARTYFROMCOMMANDLINE_OFFSET))();
		}

		static ::System::String* GetStorageTypeFromCommandLine()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_WINDOWSUTILS_GETSTORAGETYPEFROMCOMMANDLINE_OFFSET))();
		}

		static ::System::String* GetDeeplinkFromCommandLine()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_WINDOWSUTILS_GETDEEPLINKFROMCOMMANDLINE_OFFSET))();
		}

		static ::System::Void GetCmdLineMap()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_WINDOWSUTILS_GETCMDLINEMAP_OFFSET))();
		}

		static ::Il2CppArray<::System::String*>* GetCommandLine()
		{
			return ((::Il2CppArray<::System::String*>*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_WINDOWSUTILS_GETCOMMANDLINE_OFFSET))();
		}

	};
}
