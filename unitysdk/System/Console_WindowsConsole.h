#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Console_WindowsConsole_WindowsCancelHandler; }

#define SYSTEM_CONSOLE_WINDOWSCONSOLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1B938AA0)
#define SYSTEM_CONSOLE_WINDOWSCONSOLE_DOWINDOWSCONSOLECANCELEVENT_OFFSET UNITYSDK_OFFSET(0x1B938A60)
#define SYSTEM_CONSOLE_WINDOWSCONSOLE_GETCONSOLECP_OFFSET UNITYSDK_OFFSET(0x1B938960)
#define SYSTEM_CONSOLE_WINDOWSCONSOLE_GETCONSOLEOUTPUTCP_OFFSET UNITYSDK_OFFSET(0x1B9389E0)
#define SYSTEM_CONSOLE_WINDOWSCONSOLE_GETINPUTCODEPAGE_OFFSET UNITYSDK_OFFSET(0x1B937560)
#define SYSTEM_CONSOLE_WINDOWSCONSOLE_GETOUTPUTCODEPAGE_OFFSET UNITYSDK_OFFSET(0x1B937600)

namespace System
{
	inline static constexpr unsigned int Console_WindowsConsole_TypeDefinitionIndex = 383;

	class Console_WindowsConsole : public ::System::Object
	{
	public:
		static ::System::Console_WindowsConsole_WindowsCancelHandler** StaticGet_cancelHandler()
		{
			return (::System::Console_WindowsConsole_WindowsCancelHandler**)UnitySDK::FromName("System", "WindowsConsole")->GetStaticField(0xD700);
		}

		static ::System::Boolean* StaticGet_ctrlHandlerAdded()
		{
			return (::System::Boolean*)UnitySDK::FromName("System", "WindowsConsole")->GetStaticField(0x2E30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_CONSOLE_WINDOWSCONSOLE_CCTOR_OFFSET))();
		}

		static ::System::Int32 GetConsoleCP()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + SYSTEM_CONSOLE_WINDOWSCONSOLE_GETCONSOLECP_OFFSET))();
		}

		static ::System::Int32 GetConsoleOutputCP()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + SYSTEM_CONSOLE_WINDOWSCONSOLE_GETCONSOLEOUTPUTCP_OFFSET))();
		}

		static ::System::Boolean DoWindowsConsoleCancelEvent(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_CONSOLE_WINDOWSCONSOLE_DOWINDOWSCONSOLECANCELEVENT_OFFSET))(a1);
		}

		static ::System::Int32 GetInputCodePage()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + SYSTEM_CONSOLE_WINDOWSCONSOLE_GETINPUTCODEPAGE_OFFSET))();
		}

		static ::System::Int32 GetOutputCodePage()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + SYSTEM_CONSOLE_WINDOWSCONSOLE_GETOUTPUTCODEPAGE_OFFSET))();
		}

	};
}
