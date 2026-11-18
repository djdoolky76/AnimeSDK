#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define NPEEGFCAKKC_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x15FB5720)
#define NPEEGFCAKKC_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x15FB5690)
#define NPEEGFCAKKC_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x15FB5520)
#define NPEEGFCAKKC__CTOR_OFFSET UNITYSDK_OFFSET(0x15FB5710)

inline static constexpr unsigned int NPEEGFCAKKC_TypeDefinitionIndex = 58372;

class NPEEGFCAKKC : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::Transform* ODALDIOFMPH; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* AMEEMEPHGEL; // 0x20
	::LGINJIKKBJA* ALAKLHDMHIN; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPEEGFCAKKC__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NPEEGFCAKKC_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NPEEGFCAKKC_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPEEGFCAKKC_KGEBDLGBGNM_OFFSET))(this);
	}
};
