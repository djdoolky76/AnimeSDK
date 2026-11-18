#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define PEODFIHGAPL_OEDFAEAFHAP_OFFSET UNITYSDK_OFFSET(0x150C0030)
#define PEODFIHGAPL__CCTOR_OFFSET UNITYSDK_OFFSET(0x150C0020)

inline static constexpr unsigned int PEODFIHGAPL_TypeDefinitionIndex = 45257;

class PEODFIHGAPL : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_BIJIPJPJJPJ()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PEODFIHGAPL_TypeDefinitionIndex)->GetStaticField(0x13CE0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PEODFIHGAPL__CCTOR_OFFSET))();
	}

	static ::System::Int32 OEDFAEAFHAP()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + PEODFIHGAPL_OEDFAEAFHAP_OFFSET))();
	}
};
