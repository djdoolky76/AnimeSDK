#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define APEECAEMPFH__CCTOR_OFFSET UNITYSDK_OFFSET(0x14C25AF0)

inline static constexpr unsigned int APEECAEMPFH_TypeDefinitionIndex = 59088;

class APEECAEMPFH : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_CAOFPEBIFPH()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(APEECAEMPFH_TypeDefinitionIndex)->GetStaticField(0x496B0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + APEECAEMPFH__CCTOR_OFFSET))();
	}
};
