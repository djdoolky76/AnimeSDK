#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UIDynamicNumberLabel; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define GDNFCAJILHK_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x16CAEAF0)
#define GDNFCAJILHK_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x16CAEA20)
#define GDNFCAJILHK_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x16CAE870)
#define GDNFCAJILHK__CTOR_OFFSET UNITYSDK_OFFSET(0x16CAEAE0)

inline static constexpr unsigned int GDNFCAJILHK_TypeDefinitionIndex = 48625;

class GDNFCAJILHK : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* IODBDPOLPKA; // 0x18
	::UnityEngine::UI::Extension::UIDynamicNumberLabel* NLAIEOKEDLE; // 0x20
	::UnityEngine::RectTransform* DPNLLKMJMMB; // 0x28
	::FGCOIBFFCHB* LFPIAMKMOFN; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* KGKOEPFPLPC; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* IAKFIHLNKHK; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDNFCAJILHK__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GDNFCAJILHK_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GDNFCAJILHK_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDNFCAJILHK_KGEBDLGBGNM_OFFSET))(this);
	}
};
