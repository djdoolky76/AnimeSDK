#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NMGCEBIMAFP_ICHAHJCPNKN.h"
#include "unitysdk/System/Object.h"

class NMGCEBIMAFP;
namespace System::Collections::Generic { template <typename T> class Stack_1; }

#define FJFOEPHLMAC_AIKIFDMCPCP_OFFSET UNITYSDK_OFFSET(0x1CE8E110)
#define FJFOEPHLMAC_FIMPLABMMHN_OFFSET UNITYSDK_OFFSET(0x1CE8E4E0)
#define FJFOEPHLMAC_GKHJOOIKMAE_OFFSET UNITYSDK_OFFSET(0x1CE8DB30)
#define FJFOEPHLMAC_JOGKPAELPFJ_OFFSET UNITYSDK_OFFSET(0x1CE8DD40)
#define FJFOEPHLMAC_LNKFPFOBPEP_OFFSET UNITYSDK_OFFSET(0x1CE8DF30)
#define FJFOEPHLMAC_PDHPOHEAIII_OFFSET UNITYSDK_OFFSET(0x1CE82690)
#define FJFOEPHLMAC__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CE8DAA0)

inline static constexpr unsigned int FJFOEPHLMAC_TypeDefinitionIndex = 34841;

class FJFOEPHLMAC : public ::System::Object
{
public:
	static ::System::Collections::Generic::Stack_1<::NMGCEBIMAFP*>** StaticGet_NLPFCBFLNMH()
	{
		return (::System::Collections::Generic::Stack_1<::NMGCEBIMAFP*>**)Il2CppClass::FromTypeDefinitionIndex(FJFOEPHLMAC_TypeDefinitionIndex)->GetStaticField(0x2A5E0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FJFOEPHLMAC__CCTOR_OFFSET))();
	}

	static ::System::Void GKHJOOIKMAE(::NMGCEBIMAFP*& IEFANHKENKI)
	{
		return ((::System::Void(*)(::NMGCEBIMAFP*&))((::PBYTE)hIl2Cpp + FJFOEPHLMAC_GKHJOOIKMAE_OFFSET))(IEFANHKENKI);
	}

	static ::System::Void JOGKPAELPFJ(::NMGCEBIMAFP*& IEFANHKENKI)
	{
		return ((::System::Void(*)(::NMGCEBIMAFP*&))((::PBYTE)hIl2Cpp + FJFOEPHLMAC_JOGKPAELPFJ_OFFSET))(IEFANHKENKI);
	}

	static ::System::Boolean LNKFPFOBPEP()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FJFOEPHLMAC_LNKFPFOBPEP_OFFSET))();
	}

	static ::System::Void AIKIFDMCPCP(::NMGCEBIMAFP*& IEFANHKENKI)
	{
		return ((::System::Void(*)(::NMGCEBIMAFP*&))((::PBYTE)hIl2Cpp + FJFOEPHLMAC_AIKIFDMCPCP_OFFSET))(IEFANHKENKI);
	}

	static ::System::Void FIMPLABMMHN(::NMGCEBIMAFP*& IEFANHKENKI)
	{
		return ((::System::Void(*)(::NMGCEBIMAFP*&))((::PBYTE)hIl2Cpp + FJFOEPHLMAC_FIMPLABMMHN_OFFSET))(IEFANHKENKI);
	}

	static ::NMGCEBIMAFP_ICHAHJCPNKN PDHPOHEAIII()
	{
		return ((::NMGCEBIMAFP_ICHAHJCPNKN(*)())((::PBYTE)hIl2Cpp + FJFOEPHLMAC_PDHPOHEAIII_OFFSET))();
	}
};
