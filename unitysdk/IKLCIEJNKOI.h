#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class GCIMMDDIFBJ;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }

#define IKLCIEJNKOI_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x13AA9090)
#define IKLCIEJNKOI_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x13AA8F70)
#define IKLCIEJNKOI_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x13AA8CD0)
#define IKLCIEJNKOI__CTOR_OFFSET UNITYSDK_OFFSET(0x13AA9080)

inline static constexpr unsigned int IKLCIEJNKOI_TypeDefinitionIndex = 48627;

class IKLCIEJNKOI : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* KADDHBOOKAC; // 0x18
	::FGCOIBFFCHB* KAFEDIPPCFO; // 0x20
	::GCIMMDDIFBJ* OIKFFMHNCHB; // 0x28
	::UnityEngine::Transform* LBIHJNDFLOI; // 0x30
	::FGCOIBFFCHB* LEIGOPHEFHC; // 0x38
	::FGCOIBFFCHB* CIJAKOOOPNG; // 0x40
	::FGCOIBFFCHB* BAOBIBPKOEK; // 0x48
	::UnityEngine::UI::Text* NMMCKDHAHHH; // 0x50
	::UnityEngine::CanvasGroup* JMBBEHOMANA; // 0x58
	::UnityEngine::RectTransform* KJODNKPHIGL; // 0x60
	::UnityEngine::RectTransform* FOGDENONBHP; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKLCIEJNKOI__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IKLCIEJNKOI_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IKLCIEJNKOI_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKLCIEJNKOI_KGEBDLGBGNM_OFFSET))(this);
	}
};
