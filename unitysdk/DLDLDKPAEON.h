#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define DLDLDKPAEON_DISPOSE_OFFSET UNITYSDK_OFFSET(0x149B70F0)
#define DLDLDKPAEON_DJFKOKBPKNI_OFFSET UNITYSDK_OFFSET(0x149B7140)
#define DLDLDKPAEON_JPPEEOLOGGP_OFFSET UNITYSDK_OFFSET(0x149B7150)
#define DLDLDKPAEON_PEOEBEBFIJO_OFFSET UNITYSDK_OFFSET(0x149B71A0)
#define DLDLDKPAEON__CTOR_OFFSET UNITYSDK_OFFSET(0x149B7130)

inline static constexpr unsigned int DLDLDKPAEON_TypeDefinitionIndex = 73843;

class DLDLDKPAEON : public ::System::Object
{
public:
	::System::Boolean HHGILNNMNAK; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLDLDKPAEON__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLDLDKPAEON_DISPOSE_OFFSET))(this);
	}

	::System::Void DJFKOKBPKNI(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DLDLDKPAEON_DJFKOKBPKNI_OFFSET))(this, EGEGIMGMJHN);
	}

	static ::System::Boolean JPPEEOLOGGP(::DLDLDKPAEON* FPMBNMDLHME)
	{
		return ((::System::Boolean(*)(::DLDLDKPAEON*))((::PBYTE)hIl2Cpp + DLDLDKPAEON_JPPEEOLOGGP_OFFSET))(FPMBNMDLHME);
	}

	::System::Boolean PEOEBEBFIJO()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DLDLDKPAEON_PEOEBEBFIJO_OFFSET))(this);
	}
};
