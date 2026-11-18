#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MIKOMFIBMBN.h"

namespace MoleMole { class UIBaseController; }

#define OHIGNOFDDAJ_JPPEEOLOGGP_1_OFFSET UNITYSDK_OFFSET(0x13A622E0)
#define OHIGNOFDDAJ_JPPEEOLOGGP_OFFSET UNITYSDK_OFFSET(0x13A620E0)
#define OHIGNOFDDAJ_ONNPDMJFMJH_OFFSET UNITYSDK_OFFSET(0x13A61EA0)
#define OHIGNOFDDAJ__CTOR_OFFSET UNITYSDK_OFFSET(0x13A61E60)

inline static constexpr unsigned int OHIGNOFDDAJ_TypeDefinitionIndex = 80221;

class OHIGNOFDDAJ
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHIGNOFDDAJ__CTOR_OFFSET))(this);
	}

	::MIKOMFIBMBN ONNPDMJFMJH()
	{
		return ((::MIKOMFIBMBN(*)(::PVOID))((::PBYTE)hIl2Cpp + OHIGNOFDDAJ_ONNPDMJFMJH_OFFSET))(this);
	}

	static ::OHIGNOFDDAJ* JPPEEOLOGGP(::MoleMole::UIBaseController* NCIMBHDKIJM)
	{
		return ((::OHIGNOFDDAJ*(*)(::MoleMole::UIBaseController*))((::PBYTE)hIl2Cpp + OHIGNOFDDAJ_JPPEEOLOGGP_OFFSET))(NCIMBHDKIJM);
	}

	static ::MoleMole::UIBaseController* JPPEEOLOGGP_1(::OHIGNOFDDAJ* GIOICJPANDB)
	{
		return ((::MoleMole::UIBaseController*(*)(::OHIGNOFDDAJ*))((::PBYTE)hIl2Cpp + OHIGNOFDDAJ_JPPEEOLOGGP_1_OFFSET))(GIOICJPANDB);
	}
};
