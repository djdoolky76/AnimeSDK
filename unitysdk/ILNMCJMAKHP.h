#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NLLAEGMBGNN.h"
#include "unitysdk/System/Object.h"

class BIMIDALMOLB;

#define ILNMCJMAKHP__CCTOR_OFFSET UNITYSDK_OFFSET(0x1381C580)

inline static constexpr unsigned int ILNMCJMAKHP_TypeDefinitionIndex = 62510;

class ILNMCJMAKHP : public ::System::Object
{
public:
	static ::Il2CppArray<::NLLAEGMBGNN>** StaticGet_DLKGAFJABNO()
	{
		return (::Il2CppArray<::NLLAEGMBGNN>**)Il2CppClass::FromTypeDefinitionIndex(ILNMCJMAKHP_TypeDefinitionIndex)->GetStaticField(0x3E190);
	}
	static ::BIMIDALMOLB** StaticGet_LJNLGJLKCGD()
	{
		return (::BIMIDALMOLB**)Il2CppClass::FromTypeDefinitionIndex(ILNMCJMAKHP_TypeDefinitionIndex)->GetStaticField(0x3E198);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ILNMCJMAKHP__CCTOR_OFFSET))();
	}
};
