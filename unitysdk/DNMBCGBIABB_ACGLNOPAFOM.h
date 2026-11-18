#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BPDDEPLBABF;
class CBHALHKAKLC_GDNPGMLCJCP;

#define DNMBCGBIABB_ACGLNOPAFOM_CFGMGAKDOIC_OFFSET UNITYSDK_OFFSET(0x12427A20)
#define DNMBCGBIABB_ACGLNOPAFOM_NBCIIJNMMCI_OFFSET UNITYSDK_OFFSET(0x12427AA0)
#define DNMBCGBIABB_ACGLNOPAFOM__CTOR_OFFSET UNITYSDK_OFFSET(0x12427A10)

inline static constexpr unsigned int DNMBCGBIABB_ACGLNOPAFOM_TypeDefinitionIndex = 66269;

class DNMBCGBIABB_ACGLNOPAFOM : public ::System::Object
{
public:
	::BPDDEPLBABF* KPKLABPCMIK; // 0x10
	::CBHALHKAKLC_GDNPGMLCJCP* OFAJNBEOKCH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNMBCGBIABB_ACGLNOPAFOM__CTOR_OFFSET))(this);
	}

	::System::Void CFGMGAKDOIC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNMBCGBIABB_ACGLNOPAFOM_CFGMGAKDOIC_OFFSET))(this);
	}

	::System::Void NBCIIJNMMCI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNMBCGBIABB_ACGLNOPAFOM_NBCIIJNMMCI_OFFSET))(this);
	}
};
