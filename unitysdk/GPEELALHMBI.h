#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define GPEELALHMBI__CCTOR_OFFSET UNITYSDK_OFFSET(0x14D08EA0)

inline static constexpr unsigned int GPEELALHMBI_TypeDefinitionIndex = 55654;

class GPEELALHMBI : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_DOLEHDBNPPG()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(GPEELALHMBI_TypeDefinitionIndex)->GetStaticField(0x49C90);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GPEELALHMBI__CCTOR_OFFSET))();
	}
};
