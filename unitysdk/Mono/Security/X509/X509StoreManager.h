#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Mono::Security::X509 { class X509CertificateCollection_8FF10F09B594C630; }
namespace Mono::Security::X509 { class X509Stores; }
namespace System { class String; }
namespace System::Collections { class ArrayList; }

#define MONO_SECURITY_X509_X509STOREMANAGER_GET_CURRENTUSERPATH_OFFSET UNITYSDK_OFFSET(0x1FEF6010)
#define MONO_SECURITY_X509_X509STOREMANAGER_GET_CURRENTUSER_OFFSET UNITYSDK_OFFSET(0x1FEF6290)
#define MONO_SECURITY_X509_X509STOREMANAGER_GET_INTERMEDIATECACERTIFICATES_OFFSET UNITYSDK_OFFSET(0x1FEF6690)
#define MONO_SECURITY_X509_X509STOREMANAGER_GET_INTERMEDIATECACRLS_OFFSET UNITYSDK_OFFSET(0x1FEF68F0)
#define MONO_SECURITY_X509_X509STOREMANAGER_GET_LOCALMACHINEPATH_OFFSET UNITYSDK_OFFSET(0x1FEF60B0)
#define MONO_SECURITY_X509_X509STOREMANAGER_GET_LOCALMACHINE_OFFSET UNITYSDK_OFFSET(0x1FEF6390)
#define MONO_SECURITY_X509_X509STOREMANAGER_GET_NEWCURRENTUSERPATH_OFFSET UNITYSDK_OFFSET(0x1FEF6150)
#define MONO_SECURITY_X509_X509STOREMANAGER_GET_NEWCURRENTUSER_OFFSET UNITYSDK_OFFSET(0x1FEF6490)
#define MONO_SECURITY_X509_X509STOREMANAGER_GET_NEWLOCALMACHINEPATH_OFFSET UNITYSDK_OFFSET(0x1FEF61F0)
#define MONO_SECURITY_X509_X509STOREMANAGER_GET_NEWLOCALMACHINE_OFFSET UNITYSDK_OFFSET(0x1FEF6590)
#define MONO_SECURITY_X509_X509STOREMANAGER_GET_TRUSTEDROOTCACRLS_OFFSET UNITYSDK_OFFSET(0x1FEF6D40)
#define MONO_SECURITY_X509_X509STOREMANAGER_GET_TRUSTEDROOTCERTIFICATES_OFFSET UNITYSDK_OFFSET(0x1FEF6AE0)
#define MONO_SECURITY_X509_X509STOREMANAGER_GET_UNTRUSTEDCERTIFICATES_OFFSET UNITYSDK_OFFSET(0x1FEF6F30)
#define MONO_SECURITY_X509_X509STOREMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1FEF6000)

namespace Mono::Security::X509
{
	inline static constexpr unsigned int X509StoreManager_TypeDefinitionIndex = 2304;

	class X509StoreManager : public ::System::Object
	{
	public:
		static ::Mono::Security::X509::X509Stores** StaticGet__machineStore()
		{
			return (::Mono::Security::X509::X509Stores**)Il2CppClass::FromTypeDefinitionIndex(X509StoreManager_TypeDefinitionIndex)->GetStaticField(0x2390);
		}
		static ::System::String** StaticGet__userPath()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(X509StoreManager_TypeDefinitionIndex)->GetStaticField(0x2398);
		}
		static ::System::String** StaticGet__newLocalMachinePath()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(X509StoreManager_TypeDefinitionIndex)->GetStaticField(0x23A0);
		}
		static ::Mono::Security::X509::X509Stores** StaticGet__newMachineStore()
		{
			return (::Mono::Security::X509::X509Stores**)Il2CppClass::FromTypeDefinitionIndex(X509StoreManager_TypeDefinitionIndex)->GetStaticField(0x23A8);
		}
		static ::System::String** StaticGet__newUserPath()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(X509StoreManager_TypeDefinitionIndex)->GetStaticField(0x23B0);
		}
		static ::Mono::Security::X509::X509Stores** StaticGet__userStore()
		{
			return (::Mono::Security::X509::X509Stores**)Il2CppClass::FromTypeDefinitionIndex(X509StoreManager_TypeDefinitionIndex)->GetStaticField(0x23B8);
		}
		static ::Mono::Security::X509::X509Stores** StaticGet__newUserStore()
		{
			return (::Mono::Security::X509::X509Stores**)Il2CppClass::FromTypeDefinitionIndex(X509StoreManager_TypeDefinitionIndex)->GetStaticField(0x23C0);
		}
		static ::System::String** StaticGet__localMachinePath()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(X509StoreManager_TypeDefinitionIndex)->GetStaticField(0x23C8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509STOREMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::String* get_CurrentUserPath()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509STOREMANAGER_GET_CURRENTUSERPATH_OFFSET))();
		}

		static ::System::String* get_LocalMachinePath()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509STOREMANAGER_GET_LOCALMACHINEPATH_OFFSET))();
		}

		static ::System::String* get_NewCurrentUserPath()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509STOREMANAGER_GET_NEWCURRENTUSERPATH_OFFSET))();
		}

		static ::System::String* get_NewLocalMachinePath()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509STOREMANAGER_GET_NEWLOCALMACHINEPATH_OFFSET))();
		}

		static ::Mono::Security::X509::X509Stores* get_CurrentUser()
		{
			return ((::Mono::Security::X509::X509Stores*(*)())((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509STOREMANAGER_GET_CURRENTUSER_OFFSET))();
		}

		static ::Mono::Security::X509::X509Stores* get_LocalMachine()
		{
			return ((::Mono::Security::X509::X509Stores*(*)())((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509STOREMANAGER_GET_LOCALMACHINE_OFFSET))();
		}

		static ::Mono::Security::X509::X509Stores* get_NewCurrentUser()
		{
			return ((::Mono::Security::X509::X509Stores*(*)())((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509STOREMANAGER_GET_NEWCURRENTUSER_OFFSET))();
		}

		static ::Mono::Security::X509::X509Stores* get_NewLocalMachine()
		{
			return ((::Mono::Security::X509::X509Stores*(*)())((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509STOREMANAGER_GET_NEWLOCALMACHINE_OFFSET))();
		}

		static ::Mono::Security::X509::X509CertificateCollection_8FF10F09B594C630* get_IntermediateCACertificates()
		{
			return ((::Mono::Security::X509::X509CertificateCollection_8FF10F09B594C630*(*)())((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509STOREMANAGER_GET_INTERMEDIATECACERTIFICATES_OFFSET))();
		}

		static ::System::Collections::ArrayList* get_IntermediateCACrls()
		{
			return ((::System::Collections::ArrayList*(*)())((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509STOREMANAGER_GET_INTERMEDIATECACRLS_OFFSET))();
		}

		static ::Mono::Security::X509::X509CertificateCollection_8FF10F09B594C630* get_TrustedRootCertificates()
		{
			return ((::Mono::Security::X509::X509CertificateCollection_8FF10F09B594C630*(*)())((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509STOREMANAGER_GET_TRUSTEDROOTCERTIFICATES_OFFSET))();
		}

		static ::System::Collections::ArrayList* get_TrustedRootCACrls()
		{
			return ((::System::Collections::ArrayList*(*)())((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509STOREMANAGER_GET_TRUSTEDROOTCACRLS_OFFSET))();
		}

		static ::Mono::Security::X509::X509CertificateCollection_8FF10F09B594C630* get_UntrustedCertificates()
		{
			return ((::Mono::Security::X509::X509CertificateCollection_8FF10F09B594C630*(*)())((::PBYTE)hIl2Cpp + MONO_SECURITY_X509_X509STOREMANAGER_GET_UNTRUSTEDCERTIFICATES_OFFSET))();
		}
	};
}
