#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Console_WindowsConsole_WindowsCancelHandler; }

#define SYSTEM_CONSOLE_WINDOWSCONSOLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D31CE90)
#define SYSTEM_CONSOLE_WINDOWSCONSOLE_DOWINDOWSCONSOLECANCELEVENT_OFFSET UNITYSDK_OFFSET(0x1D31CE50)
#define SYSTEM_CONSOLE_WINDOWSCONSOLE_GETCONSOLECP_OFFSET UNITYSDK_OFFSET(0x1D31CD50)
#define SYSTEM_CONSOLE_WINDOWSCONSOLE_GETCONSOLEOUTPUTCP_OFFSET UNITYSDK_OFFSET(0x1D31CDD0)
#define SYSTEM_CONSOLE_WINDOWSCONSOLE_GETINPUTCODEPAGE_OFFSET UNITYSDK_OFFSET(0x1D31B950)
#define SYSTEM_CONSOLE_WINDOWSCONSOLE_GETOUTPUTCODEPAGE_OFFSET UNITYSDK_OFFSET(0x1D31B9F0)

namespace System
{
	inline static constexpr unsigned int Console_WindowsConsole_TypeDefinitionIndex = 383;

	class Console_WindowsConsole : public ::System::Object
	{
	public:
		static ::System::Console_WindowsConsole_WindowsCancelHandler** StaticGet_cancelHandler()
		{
			return (::System::Console_WindowsConsole_WindowsCancelHandler**)UnitySDK::FromName("System", "WindowsConsole")->GetStaticField(0xF0B0);
		}

		static ::System::Boolean* StaticGet_ctrlHandlerAdded()
		{
			return (::System::Boolean*)UnitySDK::FromName("System", "WindowsConsole")->GetStaticField(0x3180);
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
