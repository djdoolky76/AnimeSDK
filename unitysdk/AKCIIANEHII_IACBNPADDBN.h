#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AKCIIANEHII_OCNHAEGMCGF;
namespace MoleMole::Battle { class Entity; }

#define AKCIIANEHII_IACBNPADDBN_MDNFDBCIHCL_OFFSET UNITYSDK_OFFSET(0x1820AB30)
#define AKCIIANEHII_IACBNPADDBN__CTOR_OFFSET UNITYSDK_OFFSET(0x1820AB20)

inline static constexpr unsigned int AKCIIANEHII_IACBNPADDBN_TypeDefinitionIndex = 39581;

class AKCIIANEHII_IACBNPADDBN : public ::System::Object
{
public:
	::AKCIIANEHII_OCNHAEGMCGF* FGBNBFHOKAA; // 0x10
	::MoleMole::Battle::Entity* AMNIHACKELI; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKCIIANEHII_IACBNPADDBN__CTOR_OFFSET))(this);
	}

	::System::Void MDNFDBCIHCL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKCIIANEHII_IACBNPADDBN_MDNFDBCIHCL_OFFSET))(this);
	}
};
