#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Security::Cryptography { class CspParameters; }

#define MONO_SECURITY_CRYPTOGRAPHY_KEYPAIRPERSISTENCE_CANSECURE_OFFSET UNITYSDK_OFFSET(0x3B4EDE0)
#define MONO_SECURITY_CRYPTOGRAPHY_KEYPAIRPERSISTENCE_COPY_OFFSET UNITYSDK_OFFSET(0x3B4EE40)
#define MONO_SECURITY_CRYPTOGRAPHY_KEYPAIRPERSISTENCE_FROMXML_OFFSET UNITYSDK_OFFSET(0x3B4EEF0)
#define MONO_SECURITY_CRYPTOGRAPHY_KEYPAIRPERSISTENCE_GET_CANCHANGE_OFFSET UNITYSDK_OFFSET(0x354EBA0)
#define MONO_SECURITY_CRYPTOGRAPHY_KEYPAIRPERSISTENCE_GET_CONTAINERNAME_OFFSET UNITYSDK_OFFSET(0x3B4FCE0)
#define MONO_SECURITY_CRYPTOGRAPHY_KEYPAIRPERSISTENCE_GET_FILENAME_OFFSET UNITYSDK_OFFSET(0x3B4FE40)
#define MONO_SECURITY_CRYPTOGRAPHY_KEYPAIRPERSISTENCE_GET_MACHINEPATH_OFFSET UNITYSDK_OFFSET(0x3B50000)
#define MONO_SECURITY_CRYPTOGRAPHY_KEYPAIRPERSISTENCE_GET_USEDEFAULTKEYCONTAINER_OFFSET UNITYSDK_OFFSET(0x3B50520)
#define MONO_SECURITY_CRYPTOGRAPHY_KEYPAIRPERSISTENCE_GET_USEMACHINEKEYSTORE_OFFSET UNITYSDK_OFFSET(0x3B50540)
#define MONO_SECURITY_CRYPTOGRAPHY_KEYPAIRPERSISTENCE_GET_USERPATH_OFFSET UNITYSDK_OFFSET(0x3B50560)
#define MONO_SECURITY_CRYPTOGRAPHY_KEYPAIRPERSISTENCE_ISMACHINEPROTECTED_OFFSET UNITYSDK_OFFSET(0x3B4F030)
#define MONO_SECURITY_CRYPTOGRAPHY_KEYPAIRPERSISTENCE_ISUSERPROTECTED_OFFSET UNITYSDK_OFFSET(0x3B4F110)
#define MONO_SECURITY_CRYPTOGRAPHY_KEYPAIRPERSISTENCE_LOAD_OFFSET UNITYSDK_OFFSET(0x3B4F1F0)
#define MONO_SECURITY_CRYPTOGRAPHY_KEYPAIRPERSISTENCE_PROTECTMACHINE_OFFSET UNITYSDK_OFFSET(0x3B4F430)
#define MONO_SECURITY_CRYPTOGRAPHY_KEYPAIRPERSISTENCE_PROTECTUSER_OFFSET UNITYSDK_OFFSET(0x3B4F510)
#define MONO_SECURITY_CRYPTOGRAPHY_KEYPAIRPERSISTENCE_REMOVE_OFFSET UNITYSDK_OFFSET(0x3B4F5F0)
#define MONO_SECURITY_CRYPTOGRAPHY_KEYPAIRPERSISTENCE_SAVE_OFFSET UNITYSDK_OFFSET(0x3B4F610)
#define MONO_SECURITY_CRYPTOGRAPHY_KEYPAIRPERSISTENCE_SET_KEYVALUE_OFFSET UNITYSDK_OFFSET(0x3B50A80)
#define MONO_SECURITY_CRYPTOGRAPHY_KEYPAIRPERSISTENCE_TOXML_OFFSET UNITYSDK_OFFSET(0x3B4F7E0)
#define MONO_SECURITY_CRYPTOGRAPHY_KEYPAIRPERSISTENCE__CANSECURE_OFFSET UNITYSDK_OFFSET(0x3B4F9F0)
#define MONO_SECURITY_CRYPTOGRAPHY_KEYPAIRPERSISTENCE__CCTOR_OFFSET UNITYSDK_OFFSET(0x3B4FA00)
#define MONO_SECURITY_CRYPTOGRAPHY_KEYPAIRPERSISTENCE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3B4FBB0)
#define MONO_SECURITY_CRYPTOGRAPHY_KEYPAIRPERSISTENCE__CTOR_OFFSET UNITYSDK_OFFSET(0x3B4FA80)
#define MONO_SECURITY_CRYPTOGRAPHY_KEYPAIRPERSISTENCE__ISMACHINEPROTECTED_OFFSET UNITYSDK_OFFSET(0x3B4F9F0)
#define MONO_SECURITY_CRYPTOGRAPHY_KEYPAIRPERSISTENCE__ISUSERPROTECTED_OFFSET UNITYSDK_OFFSET(0x3B4F9F0)
#define MONO_SECURITY_CRYPTOGRAPHY_KEYPAIRPERSISTENCE__PROTECTMACHINE_OFFSET UNITYSDK_OFFSET(0x3B4F9F0)
#define MONO_SECURITY_CRYPTOGRAPHY_KEYPAIRPERSISTENCE__PROTECTUSER_OFFSET UNITYSDK_OFFSET(0x3B4F9F0)

namespace Mono::Security::Cryptography
{
	inline static constexpr unsigned int KeyPairPersistence_TypeDefinitionIndex = 10311;

	class KeyPairPersistence : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet__userPathExists()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(KeyPairPersistence_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::String** StaticGet__userPath()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KeyPairPersistence_TypeDefinitionIndex)->GetStaticField(0x8);
		}
		static ::System::Boolean* StaticGet__machinePathExists()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(KeyPairPersistence_TypeDefinitionIndex)->GetStaticField(0x10);
		}
		static ::System::String** StaticGet__machinePath()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(KeyPairPersistence_TypeDefinitionIndex)->GetStaticField(0x18);
		}
		static ::System::Object** StaticGet_lockobj()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(KeyPairPersistence_TypeDefinitionIndex)->GetStaticField(0x20);
		}
		::System::Security::Cryptography::CspParameters* _params; // 0x10
		::System::String* _keyvalue; // 0x18
		::System::String* _filename; // 0x20
		::System::String* _container; // 0x28

		static ::System::String* get_UserPath()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_KEYPAIRPERSISTENCE_GET_USERPATH_OFFSET))();
		}

		::System::Boolean get_UseDefaultKeyContainer()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_KEYPAIRPERSISTENCE_GET_USEDEFAULTKEYCONTAINER_OFFSET))(this);
		}

		::System::String* ToXml()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_KEYPAIRPERSISTENCE_TOXML_OFFSET))(this);
		}

		::System::Security::Cryptography::CspParameters* Copy(::System::Security::Cryptography::CspParameters* B5459FABA90E20BD)
		{
			return ((::System::Security::Cryptography::CspParameters*(*)(::PVOID, ::System::Security::Cryptography::CspParameters*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_KEYPAIRPERSISTENCE_COPY_OFFSET))(this, B5459FABA90E20BD);
		}

		static ::System::String* get_MachinePath()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_KEYPAIRPERSISTENCE_GET_MACHINEPATH_OFFSET))();
		}

		::System::Void Save()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_KEYPAIRPERSISTENCE_SAVE_OFFSET))(this);
		}

		::System::Void Remove()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_KEYPAIRPERSISTENCE_REMOVE_OFFSET))(this);
		}

		static ::System::Boolean _ProtectMachine(::PVOID EFF983A80A48BB2A)
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_KEYPAIRPERSISTENCE__PROTECTMACHINE_OFFSET))(EFF983A80A48BB2A);
		}

		::System::Void FromXml(::System::String* E725133A324488A3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_KEYPAIRPERSISTENCE_FROMXML_OFFSET))(this, E725133A324488A3);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_KEYPAIRPERSISTENCE__CCTOR_OFFSET))();
		}

		::System::String* get_Filename()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_KEYPAIRPERSISTENCE_GET_FILENAME_OFFSET))(this);
		}

		static ::System::Boolean IsMachineProtected(::System::String* EFF983A80A48BB2A)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_KEYPAIRPERSISTENCE_ISMACHINEPROTECTED_OFFSET))(EFF983A80A48BB2A);
		}

		static ::System::Boolean ProtectMachine(::System::String* EFF983A80A48BB2A)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_KEYPAIRPERSISTENCE_PROTECTMACHINE_OFFSET))(EFF983A80A48BB2A);
		}

		::System::String* get_ContainerName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_KEYPAIRPERSISTENCE_GET_CONTAINERNAME_OFFSET))(this);
		}

		static ::System::Boolean _ProtectUser(::PVOID EFF983A80A48BB2A)
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_KEYPAIRPERSISTENCE__PROTECTUSER_OFFSET))(EFF983A80A48BB2A);
		}

		static ::System::Boolean ProtectUser(::System::String* EFF983A80A48BB2A)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_KEYPAIRPERSISTENCE_PROTECTUSER_OFFSET))(EFF983A80A48BB2A);
		}

		static ::System::Boolean _CanSecure(::PVOID A525E46A9CD93677)
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_KEYPAIRPERSISTENCE__CANSECURE_OFFSET))(A525E46A9CD93677);
		}

		static ::System::Boolean _IsMachineProtected(::PVOID EFF983A80A48BB2A)
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_KEYPAIRPERSISTENCE__ISMACHINEPROTECTED_OFFSET))(EFF983A80A48BB2A);
		}

		::System::Boolean Load()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_KEYPAIRPERSISTENCE_LOAD_OFFSET))(this);
		}

		::System::Void set_KeyValue(::System::String* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_KEYPAIRPERSISTENCE_SET_KEYVALUE_OFFSET))(this, E937D4885DAA1AE8);
		}

		static ::System::Boolean _IsUserProtected(::PVOID EFF983A80A48BB2A)
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_KEYPAIRPERSISTENCE__ISUSERPROTECTED_OFFSET))(EFF983A80A48BB2A);
		}

		::System::Void _ctor(::System::Security::Cryptography::CspParameters* B652C74F012A9C5B, ::System::String* E190768DDAE9872B)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::CspParameters*, ::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_KEYPAIRPERSISTENCE__CTOR_OFFSET))(this, B652C74F012A9C5B, E190768DDAE9872B);
		}

		static ::System::Boolean CanSecure(::System::String* EFF983A80A48BB2A)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_KEYPAIRPERSISTENCE_CANSECURE_OFFSET))(EFF983A80A48BB2A);
		}

		::System::Boolean get_CanChange()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_KEYPAIRPERSISTENCE_GET_CANCHANGE_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Security::Cryptography::CspParameters* B652C74F012A9C5B)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::CspParameters*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_KEYPAIRPERSISTENCE__CTOR_1_OFFSET))(this, B652C74F012A9C5B);
		}

		static ::System::Boolean IsUserProtected(::System::String* EFF983A80A48BB2A)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_KEYPAIRPERSISTENCE_ISUSERPROTECTED_OFFSET))(EFF983A80A48BB2A);
		}

		::System::Boolean get_UseMachineKeyStore()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_KEYPAIRPERSISTENCE_GET_USEMACHINEKEYSTORE_OFFSET))(this);
		}
	};
}
