#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define IHCPIIBGGBP_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1A466D60)
#define IHCPIIBGGBP_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1A466C90)
#define IHCPIIBGGBP_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1A466B20)
#define IHCPIIBGGBP__CTOR_OFFSET UNITYSDK_OFFSET(0x1A466D50)

inline static constexpr unsigned int IHCPIIBGGBP_TypeDefinitionIndex = 86458;

class IHCPIIBGGBP : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* ODALDIOFMPH; // 0x18
	::UnityEngine::Transform* IANDPKMMGLK; // 0x20
	::LGINJIKKBJA* BKDDKDMILCA; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHCPIIBGGBP__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IHCPIIBGGBP_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHCPIIBGGBP_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IHCPIIBGGBP_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
