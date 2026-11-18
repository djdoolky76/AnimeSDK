#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define BMGHHFBOLGD__CCTOR_OFFSET UNITYSDK_OFFSET(0x14EF86D0)

inline static constexpr unsigned int BMGHHFBOLGD_TypeDefinitionIndex = 40911;

class BMGHHFBOLGD : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_KKFNCIKMFFO()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(BMGHHFBOLGD_TypeDefinitionIndex)->GetStaticField(0x30EE0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BMGHHFBOLGD__CCTOR_OFFSET))();
	}
};
