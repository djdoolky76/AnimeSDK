#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OFDKEANKAIL.h"
#include "unitysdk/System/Object.h"

class DMHOLJNNCJA_PJJIMDAOJCJ;
class KCGGEECLBEP_EMDOEFOJAMI;

#define KCGGEECLBEP_LDAPMJHJHKL_AAHMACBDCPN_OFFSET UNITYSDK_OFFSET(0x1514C940)
#define KCGGEECLBEP_LDAPMJHJHKL__CTOR_OFFSET UNITYSDK_OFFSET(0x1514C930)

inline static constexpr unsigned int KCGGEECLBEP_LDAPMJHJHKL_TypeDefinitionIndex = 83740;

class KCGGEECLBEP_LDAPMJHJHKL : public ::System::Object
{
public:
	::DMHOLJNNCJA_PJJIMDAOJCJ* GLHOHNAFMIG; // 0x10
	::KCGGEECLBEP_EMDOEFOJAMI* FGBNBFHOKAA; // 0x18
	::OFDKEANKAIL MAOCFFFKJCF; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCGGEECLBEP_LDAPMJHJHKL__CTOR_OFFSET))(this);
	}

	::System::Void AAHMACBDCPN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCGGEECLBEP_LDAPMJHJHKL_AAHMACBDCPN_OFFSET))(this);
	}
};
