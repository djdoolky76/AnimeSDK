#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Microsoft/Win32/SafeHandles/SafeHandleZeroOrMinusOneIsInvalid.h"
namespace Microsoft::Win32::SafeHandles { class SafeProcessHandle; }

#define MICROSOFT_WIN32_SAFEHANDLES_SAFEPROCESSHANDLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x20269AC0)
#define MICROSOFT_WIN32_SAFEHANDLES_SAFEPROCESSHANDLE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x202698C0)
#define MICROSOFT_WIN32_SAFEHANDLES_SAFEPROCESSHANDLE_CTOR_OFFSET UNITYSDK_OFFSET(0x20269A80)
#define MICROSOFT_WIN32_SAFEHANDLES_SAFEPROCESSHANDLE_RELEASEHANDLE_OFFSET UNITYSDK_OFFSET(0x20269AA0)

namespace Microsoft::Win32::SafeHandles
{
	inline static constexpr unsigned int SafeProcessHandle_TypeDefinitionIndex = 2456;

	class SafeProcessHandle : public ::Microsoft::Win32::SafeHandles::SafeHandleZeroOrMinusOneIsInvalid
	{
	public:
		static ::Microsoft::Win32::SafeHandles::SafeProcessHandle** StaticGet_InvalidHandle()
		{
			return (::Microsoft::Win32::SafeHandles::SafeProcessHandle**)UnitySDK::FromName("Microsoft.Win32.SafeHandles", "SafeProcessHandle")->GetStaticField(0x27D60);
		}

		::System::Void _ctor(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_SAFEHANDLES_SAFEPROCESSHANDLE_CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::System::IntPtr a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_SAFEHANDLES_SAFEPROCESSHANDLE_CTOR_1_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_SAFEHANDLES_SAFEPROCESSHANDLE_CCTOR_OFFSET))();
		}

		::System::Boolean ReleaseHandle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_SAFEHANDLES_SAFEPROCESSHANDLE_RELEASEHANDLE_OFFSET))(this);
		}

	};
}
