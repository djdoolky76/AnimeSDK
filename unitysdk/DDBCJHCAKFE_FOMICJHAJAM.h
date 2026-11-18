#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DDBCJHCAKFE;
namespace System { class Action; }

#define DDBCJHCAKFE_FOMICJHAJAM_IOPBAFMBGCI_OFFSET UNITYSDK_OFFSET(0x15A2BB50)
#define DDBCJHCAKFE_FOMICJHAJAM__CTOR_OFFSET UNITYSDK_OFFSET(0x15A2BB40)

inline static constexpr unsigned int DDBCJHCAKFE_FOMICJHAJAM_TypeDefinitionIndex = 82605;

class DDBCJHCAKFE_FOMICJHAJAM : public ::System::Object
{
public:
	::DDBCJHCAKFE* KLHPEBKNIFB; // 0x10
	::System::Action* KJEGEDODKCE; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDBCJHCAKFE_FOMICJHAJAM__CTOR_OFFSET))(this);
	}

	::System::Void IOPBAFMBGCI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDBCJHCAKFE_FOMICJHAJAM_IOPBAFMBGCI_OFFSET))(this);
	}
};
