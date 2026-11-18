#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class GCIMMDDIFBJ;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class GraphicCast; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define ANPMKGDJCPM_DPLFAGHGFDK_OFFSET UNITYSDK_OFFSET(0x12D0ED10)
#define ANPMKGDJCPM_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x12D0EF30)
#define ANPMKGDJCPM_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x12D0EE60)
#define ANPMKGDJCPM_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x12D0EA70)
#define ANPMKGDJCPM__CTOR_OFFSET UNITYSDK_OFFSET(0x12D0EF20)

inline static constexpr unsigned int ANPMKGDJCPM_TypeDefinitionIndex = 90386;

class ANPMKGDJCPM : public ::GIBMJLOJLKD
{
public:
	::GCIMMDDIFBJ* DHCKPIBEKNB; // 0x18
	::UnityEngine::CanvasGroup* JIHNLAGEDLN; // 0x20
	::FGCOIBFFCHB* CIJAKOOOPNG; // 0x28
	::UnityEngine::Transform* LBIHJNDFLOI; // 0x30
	::UnityEngine::RectTransform* NHGGPNJCKKP; // 0x38
	::System::Collections::Generic::List_1<::UnityEngine::UI::GraphicCast*>* CEAKHJIKNOJ; // 0x40
	::LGINJIKKBJA* JDBDAFFFOJK; // 0x48
	::FGCOIBFFCHB* BAOBIBPKOEK; // 0x50
	::UnityEngine::CanvasGroup* LAHDPGLIHND; // 0x58
	::UnityEngine::UI::Extension::UILocalizationText* NMMCKDHAHHH; // 0x60
	::UnityEngine::RectTransform* KJODNKPHIGL; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANPMKGDJCPM__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ANPMKGDJCPM_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Collections::Generic::List_1<::UnityEngine::UI::GraphicCast*>* DPLFAGHGFDK(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* GCAOGFBGMMH)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::UI::GraphicCast*>*(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ANPMKGDJCPM_DPLFAGHGFDK_OFFSET))(this, JMJGHFAOMNH, GCAOGFBGMMH);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ANPMKGDJCPM_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANPMKGDJCPM_KGEBDLGBGNM_OFFSET))(this);
	}
};
