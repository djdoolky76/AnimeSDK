#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class MonoUITableScrollGroup;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralBtn03WidgetController; }
namespace System { class Object; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine::UI::Extension { class UIToggleButton; }
template <typename T> class KNLFLMMHALL_1;
template <typename T> class MEKABAIJMNM_1;

#define MPGKPEFJLBF_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1C5A1340)
#define MPGKPEFJLBF_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1C5A1200)
#define MPGKPEFJLBF_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1C5A0F60)
#define MPGKPEFJLBF__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5A1330)

inline static constexpr unsigned int MPGKPEFJLBF_TypeDefinitionIndex = 67342;

class MPGKPEFJLBF : public ::GIBMJLOJLKD
{
public:
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x18
	::UnityEngine::CanvasGroup* OKGBOAENDNC; // 0x20
	::KNLFLMMHALL_1<::System::Object*>* CCDNKBONPLB; // 0x28
	::UnityEngine::UI::Extension::UIToggleButton* CCBDBHEPGIO; // 0x30
	::KNLFLMMHALL_1<::System::Object*>* PDMIFABPBIC; // 0x38
	::MonoUITableScrollGroup* PJEOJINPLJC; // 0x40
	::KNLFLMMHALL_1<::System::Object*>* MKFIIFBMNEH; // 0x48
	::UnityEngine::UI::Extension::UIToggleButton* DFKEJDCDLOB; // 0x50
	::MEKABAIJMNM_1<::MoleMole::UIGeneralBtn03WidgetController*>* JGPBKAHIBLG; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPGKPEFJLBF__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MPGKPEFJLBF_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MPGKPEFJLBF_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPGKPEFJLBF_KGEBDLGBGNM_OFFSET))(this);
	}
};
