#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define ALIHODPPBMG__CCTOR_OFFSET UNITYSDK_OFFSET(0x1648C4F0)

inline static constexpr unsigned int ALIHODPPBMG_TypeDefinitionIndex = 66074;

class ALIHODPPBMG : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_GLJIFJAPDEE()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ALIHODPPBMG_TypeDefinitionIndex)->GetStaticField(0x49670);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ALIHODPPBMG__CCTOR_OFFSET))();
	}
};
