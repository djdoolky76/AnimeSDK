#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Claims/ClaimsIdentity.h"
#include "unitysdk/System/Security/Principal/WindowsAccountType.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"
namespace System { class Object; }
namespace System { class String; }
namespace System::Runtime::Serialization { class SerializationInfo; }
namespace System::Security::Claims { class ClaimsIdentity; }
namespace System::Security::Principal { class WindowsIdentity; }
namespace System::Security::Principal { class WindowsImpersonationContext; }

#define SYSTEM_SECURITY_PRINCIPAL_WINDOWSIDENTITY_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D275C70)
#define SYSTEM_SECURITY_PRINCIPAL_WINDOWSIDENTITY_CLONEASBASE_OFFSET UNITYSDK_OFFSET(0x1D275C50)
#define SYSTEM_SECURITY_PRINCIPAL_WINDOWSIDENTITY_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D275440)
#define SYSTEM_SECURITY_PRINCIPAL_WINDOWSIDENTITY_CTOR_2_OFFSET UNITYSDK_OFFSET(0x1D275480)
#define SYSTEM_SECURITY_PRINCIPAL_WINDOWSIDENTITY_CTOR_OFFSET UNITYSDK_OFFSET(0x1D275310)
#define SYSTEM_SECURITY_PRINCIPAL_WINDOWSIDENTITY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D2754B0)
#define SYSTEM_SECURITY_PRINCIPAL_WINDOWSIDENTITY_GETCURRENTTOKEN_OFFSET UNITYSDK_OFFSET(0x1D275570)
#define SYSTEM_SECURITY_PRINCIPAL_WINDOWSIDENTITY_GETCURRENT_OFFSET UNITYSDK_OFFSET(0x1D2754C0)
#define SYSTEM_SECURITY_PRINCIPAL_WINDOWSIDENTITY_GETTOKENINTERNAL_OFFSET UNITYSDK_OFFSET(0x1D275C60)
#define SYSTEM_SECURITY_PRINCIPAL_WINDOWSIDENTITY_GETTOKENNAME_OFFSET UNITYSDK_OFFSET(0x1D2756A0)
#define SYSTEM_SECURITY_PRINCIPAL_WINDOWSIDENTITY_GET_AUTHENTICATIONTYPE_OFFSET UNITYSDK_OFFSET(0x1D275630)
#define SYSTEM_SECURITY_PRINCIPAL_WINDOWSIDENTITY_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1D275640)
#define SYSTEM_SECURITY_PRINCIPAL_WINDOWSIDENTITY_IMPERSONATE_OFFSET UNITYSDK_OFFSET(0x1D275580)
#define SYSTEM_SECURITY_PRINCIPAL_WINDOWSIDENTITY_SETTOKEN_OFFSET UNITYSDK_OFFSET(0x1D275380)
#define SYSTEM_SECURITY_PRINCIPAL_WINDOWSIDENTITY_SYSTEM_RUNTIME_SERIALIZATION_IDESERIALIZATIONCALLBACK_ONDESERIALIZATION_OFFSET UNITYSDK_OFFSET(0x1D2756B0)
#define SYSTEM_SECURITY_PRINCIPAL_WINDOWSIDENTITY_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1D275A00)

namespace System::Security::Principal
{
	inline static constexpr unsigned int WindowsIdentity_TypeDefinitionIndex = 989;

	class WindowsIdentity : public ::System::Security::Claims::ClaimsIdentity
	{
	public:
		::System::String* _name; // 0x78
		::System::Runtime::Serialization::SerializationInfo* _info; // 0x80
		::System::String* _type; // 0x88
		::System::Security::Principal::WindowsAccountType _account; // 0x90
		::System::Boolean _authenticated; // 0x94
		::System::Byte _padding0[0x3];
		::System::IntPtr _token; // 0x98
		static ::System::IntPtr* StaticGet_invalidWindows()
		{
			return (::System::IntPtr*)UnitySDK::FromName("System.Security.Principal", "WindowsIdentity")->GetStaticField(0x6C10);
		}

		::System::Void _ctor(::System::IntPtr a1, ::System::String* a2, ::System::Security::Principal::WindowsAccountType a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::String*, ::System::Security::Principal::WindowsAccountType, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PRINCIPAL_WINDOWSIDENTITY_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _ctor_1(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PRINCIPAL_WINDOWSIDENTITY_CTOR_1_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_2(::System::Security::Claims::ClaimsIdentity* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Claims::ClaimsIdentity*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PRINCIPAL_WINDOWSIDENTITY_CTOR_2_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PRINCIPAL_WINDOWSIDENTITY_CCTOR_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PRINCIPAL_WINDOWSIDENTITY_DISPOSE_OFFSET))(this);
		}

		static ::System::Security::Principal::WindowsIdentity* GetCurrent()
		{
			return ((::System::Security::Principal::WindowsIdentity*(*)())((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PRINCIPAL_WINDOWSIDENTITY_GETCURRENT_OFFSET))();
		}

		::System::Security::Principal::WindowsImpersonationContext* Impersonate()
		{
			return ((::System::Security::Principal::WindowsImpersonationContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PRINCIPAL_WINDOWSIDENTITY_IMPERSONATE_OFFSET))(this);
		}

		::System::String* get_AuthenticationType()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PRINCIPAL_WINDOWSIDENTITY_GET_AUTHENTICATIONTYPE_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PRINCIPAL_WINDOWSIDENTITY_GET_NAME_OFFSET))(this);
		}

		::System::Void System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PRINCIPAL_WINDOWSIDENTITY_SYSTEM_RUNTIME_SERIALIZATION_IDESERIALIZATIONCALLBACK_ONDESERIALIZATION_OFFSET))(this, a1);
		}

		::System::Void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PRINCIPAL_WINDOWSIDENTITY_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_GETOBJECTDATA_OFFSET))(this, a1, a2);
		}

		::System::Security::Claims::ClaimsIdentity* CloneAsBase()
		{
			return ((::System::Security::Claims::ClaimsIdentity*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PRINCIPAL_WINDOWSIDENTITY_CLONEASBASE_OFFSET))(this);
		}

		::System::IntPtr GetTokenInternal()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PRINCIPAL_WINDOWSIDENTITY_GETTOKENINTERNAL_OFFSET))(this);
		}

		::System::Void SetToken(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PRINCIPAL_WINDOWSIDENTITY_SETTOKEN_OFFSET))(this, a1);
		}

		static ::System::IntPtr GetCurrentToken()
		{
			return ((::System::IntPtr(*)())((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PRINCIPAL_WINDOWSIDENTITY_GETCURRENTTOKEN_OFFSET))();
		}

		static ::System::String* GetTokenName(::System::IntPtr a1)
		{
			return ((::System::String*(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PRINCIPAL_WINDOWSIDENTITY_GETTOKENNAME_OFFSET))(a1);
		}

	};
}
