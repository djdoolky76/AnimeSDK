#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EAAIIJHJGBH;
class GFFIKKPLIGC;

#define ILMMIICOAAG_IDPGLDKEECM_OFFSET UNITYSDK_OFFSET(0x13C9B650)
#define ILMMIICOAAG__CTOR_OFFSET UNITYSDK_OFFSET(0x13C9B640)

inline static constexpr unsigned int ILMMIICOAAG_TypeDefinitionIndex = 64683;

class ILMMIICOAAG : public ::System::Object
{
public:
	::EAAIIJHJGBH* FMPNLKPONGK; // 0x10
	::GFFIKKPLIGC* NEINEFGBDEG; // 0x18

	::System::Void _ctor(::EAAIIJHJGBH* MHJBBOJKPNF, ::GFFIKKPLIGC* OOBHKCFKAJE)
	{
		return ((::System::Void(*)(::PVOID, ::EAAIIJHJGBH*, ::GFFIKKPLIGC*))((::PBYTE)hIl2Cpp + ILMMIICOAAG__CTOR_OFFSET))(this, MHJBBOJKPNF, OOBHKCFKAJE);
	}

	static ::System::Boolean IDPGLDKEECM(::ILMMIICOAAG* EEJDPAKIDCK, ::ILMMIICOAAG* KIAGKPDIDDH)
	{
		return ((::System::Boolean(*)(::ILMMIICOAAG*, ::ILMMIICOAAG*))((::PBYTE)hIl2Cpp + ILMMIICOAAG_IDPGLDKEECM_OFFSET))(EEJDPAKIDCK, KIAGKPDIDDH);
	}
};
