#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class GCIMMDDIFBJ;
class HNLACBJDCGI;
class ShaderAniHelp;
namespace MoleMole { class MonoUIStyleColorConfig; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define EKIILPBABOI_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0xFE1CCD0)
#define EKIILPBABOI_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0xFE1CB60)
#define EKIILPBABOI__CTOR_OFFSET UNITYSDK_OFFSET(0xFE1CCC0)

inline static constexpr unsigned int EKIILPBABOI_TypeDefinitionIndex = 50661;

class EKIILPBABOI : public ::GIBMJLOJLKD
{
public:
	::ShaderAniHelp* OBEMLOACGAF; // 0x18
	::MoleMole::MonoUIStyleColorConfig* PEIMIFBEONG; // 0x20
	::UnityEngine::RectTransform* PDACHPLBKIE; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* MMNNLOMMNGL; // 0x30
	::GCIMMDDIFBJ* LIMPLNKGIKJ; // 0x38
	::GCIMMDDIFBJ* MENLDDAPGAI; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKIILPBABOI__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EKIILPBABOI_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EKIILPBABOI_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
