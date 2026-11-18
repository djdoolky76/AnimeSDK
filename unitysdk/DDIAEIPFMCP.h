#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define DDIAEIPFMCP__CCTOR_OFFSET UNITYSDK_OFFSET(0x147C4130)

inline static constexpr unsigned int DDIAEIPFMCP_TypeDefinitionIndex = 65020;

class DDIAEIPFMCP : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_CAFEEIGJJME()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(DDIAEIPFMCP_TypeDefinitionIndex)->GetStaticField(0x47D40);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DDIAEIPFMCP__CCTOR_OFFSET))();
	}
};
