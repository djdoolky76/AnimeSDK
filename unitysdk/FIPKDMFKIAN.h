#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class CanvasGroup; }

#define FIPKDMFKIAN_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1321A780)
#define FIPKDMFKIAN_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1321A6F0)
#define FIPKDMFKIAN_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1321A5A0)
#define FIPKDMFKIAN__CTOR_OFFSET UNITYSDK_OFFSET(0x1321A770)

inline static constexpr unsigned int FIPKDMFKIAN_TypeDefinitionIndex = 82281;

class FIPKDMFKIAN : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* KEHPAOOHNOI; // 0x18
	::UnityEngine::CanvasGroup* PNCNPGAACAA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIPKDMFKIAN__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FIPKDMFKIAN_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FIPKDMFKIAN_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIPKDMFKIAN_KGEBDLGBGNM_OFFSET))(this);
	}
};
