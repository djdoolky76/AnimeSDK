#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E18ED99A30D9921D.h"

namespace System { class String; }

#define FAD340A9EB678F83_E4ECC50B2E252F43_OFFSET UNITYSDK_OFFSET(0x4417820)
#define FAD340A9EB678F83__CCTOR_OFFSET UNITYSDK_OFFSET(0x44176A0)
#define FAD340A9EB678F83__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int FAD340A9EB678F83_TypeDefinitionIndex = 18933;

class FAD340A9EB678F83 : public ::E18ED99A30D9921D
{
public:
	static ::Il2CppArray<::System::Char>** StaticGet_E972E701F023FDE6()
	{
		return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(FAD340A9EB678F83_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::Il2CppArray<::System::Char>** StaticGet_FBE2AEFA778E6F81()
	{
		return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(FAD340A9EB678F83_TypeDefinitionIndex)->GetStaticField(0x8);
	}
	static ::Il2CppArray<::System::Char>** StaticGet_BA2F01774A05D7D9()
	{
		return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(FAD340A9EB678F83_TypeDefinitionIndex)->GetStaticField(0x10);
	}
	static ::System::Char* StaticGet_A4405AB1DBAB0797()
	{
		return (::System::Char*)Il2CppClass::FromTypeDefinitionIndex(FAD340A9EB678F83_TypeDefinitionIndex)->GetStaticField(0x18);
	}

	::Il2CppArray<::System::Boolean>* E4ECC50B2E252F43(::System::String* E655B2F737B7E1BD)
	{
		return ((::Il2CppArray<::System::Boolean>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FAD340A9EB678F83_E4ECC50B2E252F43_OFFSET))(this, E655B2F737B7E1BD);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FAD340A9EB678F83__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAD340A9EB678F83__CTOR_OFFSET))(this);
	}
};
