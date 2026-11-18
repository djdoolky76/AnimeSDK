#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMACMECHIEF.h"
#include "unitysdk/System/Object.h"

#define DHPBNGKCFBA_ABDLEONNPAJ_OFFSET UNITYSDK_OFFSET(0x1329CBC0)
#define DHPBNGKCFBA__CTOR_OFFSET UNITYSDK_OFFSET(0x1329CBB0)

inline static constexpr unsigned int DHPBNGKCFBA_TypeDefinitionIndex = 77574;

class DHPBNGKCFBA : public ::System::Object
{
public:
	::System::Object* OHBCOPJAFAH; // 0x10
	::System::Object* CCNJFEOAPAP; // 0x18
	::FMACMECHIEF LBHPNGCDNHF; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHPBNGKCFBA__CTOR_OFFSET))(this);
	}

	::System::Void ABDLEONNPAJ(::FMACMECHIEF BPINANLEDPD, ::System::Object* OEOMMCDMHCM, ::System::Object* BCKJMDDEEKN)
	{
		return ((::System::Void(*)(::PVOID, ::FMACMECHIEF, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + DHPBNGKCFBA_ABDLEONNPAJ_OFFSET))(this, BPINANLEDPD, OEOMMCDMHCM, BCKJMDDEEKN);
	}
};
