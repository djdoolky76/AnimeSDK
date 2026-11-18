#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GPPMPHICDEA_KJPKBOIAOBM.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/HFALNBMNFCA.h"

namespace MoleMole { class UIControllerContextBase; }

#define GPPMPHICDEA_DLGMIDBGKML_IFEJFLKHHEJ_OFFSET UNITYSDK_OFFSET(0x13E03960)
#define GPPMPHICDEA_DLGMIDBGKML_OOLKALLCJPN_OFFSET UNITYSDK_OFFSET(0x13E03710)
#define GPPMPHICDEA_DLGMIDBGKML_PFANDKINEEI_OFFSET UNITYSDK_OFFSET(0x13E03950)
#define GPPMPHICDEA_DLGMIDBGKML__CTOR_OFFSET UNITYSDK_OFFSET(0x13E03700)

inline static constexpr unsigned int GPPMPHICDEA_DLGMIDBGKML_TypeDefinitionIndex = 42663;

class GPPMPHICDEA_DLGMIDBGKML : public ::System::Object
{
public:
	::GPPMPHICDEA_KJPKBOIAOBM FFNENJMLKAM; // 0x10
	::MoleMole::UIControllerContextBase* AAOCANGHBDG; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPPMPHICDEA_DLGMIDBGKML__CTOR_OFFSET))(this);
	}

	::System::Void OOLKALLCJPN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPPMPHICDEA_DLGMIDBGKML_OOLKALLCJPN_OFFSET))(this);
	}

	::System::Void PFANDKINEEI(::HFALNBMNFCA BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::HFALNBMNFCA))((::PBYTE)hIl2Cpp + GPPMPHICDEA_DLGMIDBGKML_PFANDKINEEI_OFFSET))(this, BHDNBGLCNOM);
	}

	::System::Void IFEJFLKHHEJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPPMPHICDEA_DLGMIDBGKML_IFEJFLKHHEJ_OFFSET))(this);
	}
};
