#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITabButtonGroup; }
template <typename T> class KNLFLMMHALL_1;

#define ABLFJPPJLIP_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x16FD4060)
#define ABLFJPPJLIP_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x16FD3F70)
#define ABLFJPPJLIP_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x16FD3B70)
#define ABLFJPPJLIP_PDPHJKFGCED_OFFSET UNITYSDK_OFFSET(0x16FD3D80)
#define ABLFJPPJLIP__CTOR_OFFSET UNITYSDK_OFFSET(0x16FD4050)

inline static constexpr unsigned int ABLFJPPJLIP_TypeDefinitionIndex = 88821;

class ABLFJPPJLIP : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* MDHHGDLPNFG; // 0x18
	::UnityEngine::UI::Extension::UITabButtonGroup* FJPCAHJIAGA; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* CHFEDONOMMG; // 0x28
	::System::Collections::Generic::List_1<::KNLFLMMHALL_1<::System::Object*>*>* EKMAOANMJBE; // 0x30
	::LGINJIKKBJA* BKDDKDMILCA; // 0x38
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x40
	::KNLFLMMHALL_1<::System::Object*>* PFNAFELKHHP; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABLFJPPJLIP__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ABLFJPPJLIP_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Collections::Generic::List_1<::KNLFLMMHALL_1<::System::Object*>*>* PDPHJKFGCED(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* GCAOGFBGMMH)
	{
		return ((::System::Collections::Generic::List_1<::KNLFLMMHALL_1<::System::Object*>*>*(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ABLFJPPJLIP_PDPHJKFGCED_OFFSET))(this, JMJGHFAOMNH, GCAOGFBGMMH);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ABLFJPPJLIP_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABLFJPPJLIP_KGEBDLGBGNM_OFFSET))(this);
	}
};
