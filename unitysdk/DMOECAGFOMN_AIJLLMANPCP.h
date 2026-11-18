#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define DMOECAGFOMN_AIJLLMANPCP__CCTOR_OFFSET UNITYSDK_OFFSET(0x13E5A050)

inline static constexpr unsigned int DMOECAGFOMN_AIJLLMANPCP_TypeDefinitionIndex = 38288;

class DMOECAGFOMN_AIJLLMANPCP : public ::System::Object
{
public:
	static ::System::String** StaticGet_IJDIKHDNPJE()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(DMOECAGFOMN_AIJLLMANPCP_TypeDefinitionIndex)->GetStaticField(0x35000);
	}
	static ::System::String** StaticGet_EFACDMIHALO()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(DMOECAGFOMN_AIJLLMANPCP_TypeDefinitionIndex)->GetStaticField(0x35008);
	}
	static ::System::String** StaticGet_EMNOGGHEKNE()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(DMOECAGFOMN_AIJLLMANPCP_TypeDefinitionIndex)->GetStaticField(0x35010);
	}
	static ::System::String** StaticGet_DBKNCFEDEGI()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(DMOECAGFOMN_AIJLLMANPCP_TypeDefinitionIndex)->GetStaticField(0x35018);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DMOECAGFOMN_AIJLLMANPCP__CCTOR_OFFSET))();
	}
};
