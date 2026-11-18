#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }

#define DPFHELHBLPC_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x132A9FE0)
#define DPFHELHBLPC_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x132A9F10)
#define DPFHELHBLPC_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x132A9D70)
#define DPFHELHBLPC__CTOR_OFFSET UNITYSDK_OFFSET(0x132A9FD0)

inline static constexpr unsigned int DPFHELHBLPC_TypeDefinitionIndex = 43439;

class DPFHELHBLPC : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* EPDJDKJFBHP; // 0x18
	::LGINJIKKBJA* ALAKLHDMHIN; // 0x20
	::UnityEngine::UI::Extension::UITimeWidget* OPEHBEBNGCH; // 0x28
	::LGINJIKKBJA* CNEMGKPCIBB; // 0x30
	::MoleMole::UIGeneralButtonController* DNGFGABBHEG; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPFHELHBLPC__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DPFHELHBLPC_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPFHELHBLPC_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DPFHELHBLPC_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
