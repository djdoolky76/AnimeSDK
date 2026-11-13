#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Microsoft/Win32/RegistryHive.h"
#include "unitysdk/System/MarshalByRefObject.h"
namespace Microsoft::Win32 { class IRegistryApi; }
namespace Microsoft::Win32 { class RegistryKey; }
namespace Microsoft::Win32::SafeHandles { class SafeRegistryHandle; }
namespace System { class Object; }
namespace System { class String; }
namespace System::IO { class IOException; }

#define MICROSOFT_WIN32_REGISTRYKEY_ASSERTKEYNAMELENGTH_OFFSET UNITYSDK_OFFSET(0x17ABAAC0)
#define MICROSOFT_WIN32_REGISTRYKEY_ASSERTKEYSTILLVALID_OFFSET UNITYSDK_OFFSET(0x17ABA7F0)
#define MICROSOFT_WIN32_REGISTRYKEY_CCTOR_OFFSET UNITYSDK_OFFSET(0x17ABA0C0)
#define MICROSOFT_WIN32_REGISTRYKEY_CLOSE_OFFSET UNITYSDK_OFFSET(0x17ABA380)
#define MICROSOFT_WIN32_REGISTRYKEY_CREATEMARKEDFORDELETIONEXCEPTION_OFFSET UNITYSDK_OFFSET(0x17ABB0C0)
#define MICROSOFT_WIN32_REGISTRYKEY_CTOR_1_OFFSET UNITYSDK_OFFSET(0x17ABA130)
#define MICROSOFT_WIN32_REGISTRYKEY_CTOR_2_OFFSET UNITYSDK_OFFSET(0x17AB5740)
#define MICROSOFT_WIN32_REGISTRYKEY_CTOR_OFFSET UNITYSDK_OFFSET(0x17ABA040)
#define MICROSOFT_WIN32_REGISTRYKEY_DECODESTRING_OFFSET UNITYSDK_OFFSET(0x17ABAFB0)
#define MICROSOFT_WIN32_REGISTRYKEY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17ABA2E0)
#define MICROSOFT_WIN32_REGISTRYKEY_FLUSH_OFFSET UNITYSDK_OFFSET(0x17ABA4E0)
#define MICROSOFT_WIN32_REGISTRYKEY_GETHIVENAME_OFFSET UNITYSDK_OFFSET(0x17ABA1B0)
#define MICROSOFT_WIN32_REGISTRYKEY_GETSUBKEYNAMES_OFFSET UNITYSDK_OFFSET(0x17ABACC0)
#define MICROSOFT_WIN32_REGISTRYKEY_GETVALUE_1_OFFSET UNITYSDK_OFFSET(0x17ABAB20)
#define MICROSOFT_WIN32_REGISTRYKEY_GETVALUE_OFFSET UNITYSDK_OFFSET(0x17ABAB10)
#define MICROSOFT_WIN32_REGISTRYKEY_GET_HANDLE_OFFSET UNITYSDK_OFFSET(0x17ABA620)
#define MICROSOFT_WIN32_REGISTRYKEY_GET_HIVE_OFFSET UNITYSDK_OFFSET(0x17AB7630)
#define MICROSOFT_WIN32_REGISTRYKEY_GET_INTERNALHANDLE_OFFSET UNITYSDK_OFFSET(0x17ABAFA0)
#define MICROSOFT_WIN32_REGISTRYKEY_GET_ISROOT_OFFSET UNITYSDK_OFFSET(0x17AB7620)
#define MICROSOFT_WIN32_REGISTRYKEY_GET_NAME_OFFSET UNITYSDK_OFFSET(0x17ABA4D0)
#define MICROSOFT_WIN32_REGISTRYKEY_ISEQUALS_OFFSET UNITYSDK_OFFSET(0x17ABA260)
#define MICROSOFT_WIN32_REGISTRYKEY_OPENSUBKEY_1_OFFSET UNITYSDK_OFFSET(0x17ABA8D0)
#define MICROSOFT_WIN32_REGISTRYKEY_OPENSUBKEY_OFFSET UNITYSDK_OFFSET(0x17ABA8C0)
#define MICROSOFT_WIN32_REGISTRYKEY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17ABAE30)

namespace Microsoft::Win32
{
	inline static constexpr unsigned int RegistryKey_TypeDefinitionIndex = 104;

	class RegistryKey : public ::System::MarshalByRefObject
	{
	public:
		::System::Object* handle; // 0x18
		::Microsoft::Win32::SafeHandles::SafeRegistryHandle* safe_handle; // 0x20
		::System::String* qname; // 0x28
		::System::Object* hive; // 0x30
		::System::Boolean isRemoteRoot; // 0x38
		::System::Boolean isWritable; // 0x39
		static ::Microsoft::Win32::IRegistryApi** StaticGet_RegistryApi()
		{
			return (::Microsoft::Win32::IRegistryApi**)UnitySDK::FromName("Microsoft.Win32", "RegistryKey")->GetStaticField(0x94F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_REGISTRYKEY_CCTOR_OFFSET))();
		}

		::System::Void _ctor(::Microsoft::Win32::RegistryHive a1)
		{
			return ((::System::Void(*)(::PVOID, ::Microsoft::Win32::RegistryHive))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_REGISTRYKEY_CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::Microsoft::Win32::RegistryHive a1, ::System::IntPtr a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::Microsoft::Win32::RegistryHive, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_REGISTRYKEY_CTOR_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _ctor_2(::System::Object* a1, ::System::String* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_REGISTRYKEY_CTOR_2_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Boolean IsEquals(::Microsoft::Win32::RegistryKey* a1, ::Microsoft::Win32::RegistryKey* a2)
		{
			return ((::System::Boolean(*)(::Microsoft::Win32::RegistryKey*, ::Microsoft::Win32::RegistryKey*))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_REGISTRYKEY_ISEQUALS_OFFSET))(a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_REGISTRYKEY_DISPOSE_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_REGISTRYKEY_GET_NAME_OFFSET))(this);
		}

		::System::Void Flush()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_REGISTRYKEY_FLUSH_OFFSET))(this);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_REGISTRYKEY_CLOSE_OFFSET))(this);
		}

		::Microsoft::Win32::SafeHandles::SafeRegistryHandle* get_Handle()
		{
			return ((::Microsoft::Win32::SafeHandles::SafeRegistryHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_REGISTRYKEY_GET_HANDLE_OFFSET))(this);
		}

		::Microsoft::Win32::RegistryKey* OpenSubKey(::System::String* a1)
		{
			return ((::Microsoft::Win32::RegistryKey*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_REGISTRYKEY_OPENSUBKEY_OFFSET))(this, a1);
		}

		::Microsoft::Win32::RegistryKey* OpenSubKey_1(::System::String* a1, ::System::Boolean a2)
		{
			return ((::Microsoft::Win32::RegistryKey*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_REGISTRYKEY_OPENSUBKEY_1_OFFSET))(this, a1, a2);
		}

		::System::Object* GetValue(::System::String* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_REGISTRYKEY_GETVALUE_OFFSET))(this, a1);
		}

		::System::Object* GetValue_1(::System::String* a1, ::System::Object* a2)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_REGISTRYKEY_GETVALUE_1_OFFSET))(this, a1, a2);
		}

		::Il2CppArray<::System::String*>* GetSubKeyNames()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_REGISTRYKEY_GETSUBKEYNAMES_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_REGISTRYKEY_TOSTRING_OFFSET))(this);
		}

		::System::Boolean get_IsRoot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_REGISTRYKEY_GET_ISROOT_OFFSET))(this);
		}

		::Microsoft::Win32::RegistryHive get_Hive()
		{
			return ((::Microsoft::Win32::RegistryHive(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_REGISTRYKEY_GET_HIVE_OFFSET))(this);
		}

		::System::Object* get_InternalHandle()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_REGISTRYKEY_GET_INTERNALHANDLE_OFFSET))(this);
		}

		::System::Void AssertKeyStillValid()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_REGISTRYKEY_ASSERTKEYSTILLVALID_OFFSET))(this);
		}

		::System::Void AssertKeyNameLength(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_REGISTRYKEY_ASSERTKEYNAMELENGTH_OFFSET))(this, a1);
		}

		static ::System::String* DecodeString(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::String*(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_REGISTRYKEY_DECODESTRING_OFFSET))(a1);
		}

		static ::System::IO::IOException* CreateMarkedForDeletionException()
		{
			return ((::System::IO::IOException*(*)())((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_REGISTRYKEY_CREATEMARKEDFORDELETIONEXCEPTION_OFFSET))();
		}

		static ::System::String* GetHiveName(::Microsoft::Win32::RegistryHive a1)
		{
			return ((::System::String*(*)(::Microsoft::Win32::RegistryHive))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_REGISTRYKEY_GETHIVENAME_OFFSET))(a1);
		}

	};
}
