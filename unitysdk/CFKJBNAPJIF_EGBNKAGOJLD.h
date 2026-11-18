#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CFKJBNAPJIF;
class IFOHGNLIAKH;

#define CFKJBNAPJIF_EGBNKAGOJLD_OHIDAOMMEEI_OFFSET UNITYSDK_OFFSET(0x132580B0)
#define CFKJBNAPJIF_EGBNKAGOJLD__CTOR_OFFSET UNITYSDK_OFFSET(0x132580A0)

inline static constexpr unsigned int CFKJBNAPJIF_EGBNKAGOJLD_TypeDefinitionIndex = 65228;

class CFKJBNAPJIF_EGBNKAGOJLD : public ::System::Object
{
public:
	::CFKJBNAPJIF* KLHPEBKNIFB; // 0x10
	::System::Int32 OIKFFGKDHME; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFKJBNAPJIF_EGBNKAGOJLD__CTOR_OFFSET))(this);
	}

	::System::Void OHIDAOMMEEI(::IFOHGNLIAKH* NCIMBHDKIJM)
	{
		return ((::System::Void(*)(::PVOID, ::IFOHGNLIAKH*))((::PBYTE)hIl2Cpp + CFKJBNAPJIF_EGBNKAGOJLD_OHIDAOMMEEI_OFFSET))(this, NCIMBHDKIJM);
	}
};
