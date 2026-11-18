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

#define DCIDFEOOAPB_DPLFAGHGFDK_OFFSET UNITYSDK_OFFSET(0x12060540)
#define DCIDFEOOAPB_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x12060760)
#define DCIDFEOOAPB_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x12060690)
#define DCIDFEOOAPB_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x120602A0)
#define DCIDFEOOAPB__CTOR_OFFSET UNITYSDK_OFFSET(0x12060750)

inline static constexpr unsigned int DCIDFEOOAPB_TypeDefinitionIndex = 52975;

class DCIDFEOOAPB : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* KJODNKPHIGL; // 0x18
	::LGINJIKKBJA* JDBDAFFFOJK; // 0x20
	::GCIMMDDIFBJ* DHCKPIBEKNB; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* NMMCKDHAHHH; // 0x30
	::System::Collections::Generic::List_1<::UnityEngine::UI::GraphicCast*>* CEAKHJIKNOJ; // 0x38
	::UnityEngine::CanvasGroup* JIHNLAGEDLN; // 0x40
	::FGCOIBFFCHB* CIJAKOOOPNG; // 0x48
	::FGCOIBFFCHB* BAOBIBPKOEK; // 0x50
	::UnityEngine::CanvasGroup* LAHDPGLIHND; // 0x58
	::UnityEngine::Transform* LBIHJNDFLOI; // 0x60
	::UnityEngine::RectTransform* NHGGPNJCKKP; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCIDFEOOAPB__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DCIDFEOOAPB_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCIDFEOOAPB_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DCIDFEOOAPB_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Collections::Generic::List_1<::UnityEngine::UI::GraphicCast*>* DPLFAGHGFDK(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* GCAOGFBGMMH)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::UI::GraphicCast*>*(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DCIDFEOOAPB_DPLFAGHGFDK_OFFSET))(this, JMJGHFAOMNH, GCAOGFBGMMH);
	}
};
