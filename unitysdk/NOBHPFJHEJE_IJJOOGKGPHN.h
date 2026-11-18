#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class NOBHPFJHEJE;
class PIFJGHKOPEO;

#define NOBHPFJHEJE_IJJOOGKGPHN_EFMCEPCBHPN_OFFSET UNITYSDK_OFFSET(0x172ACED0)
#define NOBHPFJHEJE_IJJOOGKGPHN__CTOR_OFFSET UNITYSDK_OFFSET(0x172ACEC0)

inline static constexpr unsigned int NOBHPFJHEJE_IJJOOGKGPHN_TypeDefinitionIndex = 41997;

class NOBHPFJHEJE_IJJOOGKGPHN : public ::System::Object
{
public:
	::PIFJGHKOPEO* NCBDAFOFHHP; // 0x10
	::NOBHPFJHEJE* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOBHPFJHEJE_IJJOOGKGPHN__CTOR_OFFSET))(this);
	}

	::System::Void EFMCEPCBHPN(::System::Int32 IGAAKDOIPNN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NOBHPFJHEJE_IJJOOGKGPHN_EFMCEPCBHPN_OFFSET))(this, IGAAKDOIPNN);
	}
};
