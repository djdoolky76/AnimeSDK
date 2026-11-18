#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/PEMDFINAHEA.h"

class BPCBGBDIFDE;
class GLAAJLGNEGP;

#define BPCBGBDIFDE_GEIEGONMGMD_LHJAMLNBGAA_OFFSET UNITYSDK_OFFSET(0x14F05840)
#define BPCBGBDIFDE_GEIEGONMGMD__CTOR_OFFSET UNITYSDK_OFFSET(0x14F05830)

inline static constexpr unsigned int BPCBGBDIFDE_GEIEGONMGMD_TypeDefinitionIndex = 78655;

class BPCBGBDIFDE_GEIEGONMGMD : public ::System::Object
{
public:
	::BPCBGBDIFDE* KLHPEBKNIFB; // 0x10
	::GLAAJLGNEGP* HELLOIIPKGF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPCBGBDIFDE_GEIEGONMGMD__CTOR_OFFSET))(this);
	}

	::PEMDFINAHEA LHJAMLNBGAA()
	{
		return ((::PEMDFINAHEA(*)(::PVOID))((::PBYTE)hIl2Cpp + BPCBGBDIFDE_GEIEGONMGMD_LHJAMLNBGAA_OFFSET))(this);
	}
};
