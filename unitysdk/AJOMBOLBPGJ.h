#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NMGCEBIMAFP.h"

#define AJOMBOLBPGJ_CMFOIAAGPFL_OFFSET UNITYSDK_OFFSET(0x1CE85C90)
#define AJOMBOLBPGJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1CE85C00)
#define AJOMBOLBPGJ__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CE85C40)
#define AJOMBOLBPGJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE85BE0)

inline static constexpr unsigned int AJOMBOLBPGJ_TypeDefinitionIndex = 34775;

class AJOMBOLBPGJ : public ::NMGCEBIMAFP
{
public:
	static ::AJOMBOLBPGJ** StaticGet_GPIOJBLKFAJ()
	{
		return (::AJOMBOLBPGJ**)Il2CppClass::FromTypeDefinitionIndex(AJOMBOLBPGJ_TypeDefinitionIndex)->GetStaticField(0x2A5D0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJOMBOLBPGJ__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AJOMBOLBPGJ__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJOMBOLBPGJ_DISPOSE_OFFSET))(this);
	}

	::System::Void CMFOIAAGPFL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJOMBOLBPGJ_CMFOIAAGPFL_OFFSET))(this);
	}
};
