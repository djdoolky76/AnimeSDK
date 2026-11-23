#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/BrowserWin32Helper_FD7E04964C77AF25.h"
#include "unitysdk/System/Object.h"

#define MIHOYO_SDK_BROWSERWIN32HELPER_A7B8651FC6E71291__CTOR_OFFSET UNITYSDK_OFFSET(0x29D6180)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int BrowserWin32Helper_A7B8651FC6E71291_TypeDefinitionIndex = 15721;

	class BrowserWin32Helper_A7B8651FC6E71291 : public ::System::Object
	{
	public:
		::System::Int32 B1F2419A701C8F03; // 0x10
		::MiHoYo::SDK::BrowserWin32Helper_FD7E04964C77AF25 A57FAB19A0CBC5B5; // 0x14
		::MiHoYo::SDK::BrowserWin32Helper_FD7E04964C77AF25 B7DF4CB80AB07A48; // 0x24
		::System::Int32 F3E8FC80A470D784; // 0x34
		::Il2CppArray<::System::Char>* B02AB31A8A80DC53; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BROWSERWIN32HELPER_A7B8651FC6E71291__CTOR_OFFSET))(this);
		}
	};
}
