#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class MonoUITableScrollGroup;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace System { class Object; }
namespace UnityEngine::UI::Extension { class UIToggleButton; }
template <typename T> class KNLFLMMHALL_1;

#define BCBJMCLHNIP_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1701C6D0)
#define BCBJMCLHNIP_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1701C600)
#define BCBJMCLHNIP_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1701C460)
#define BCBJMCLHNIP__CTOR_OFFSET UNITYSDK_OFFSET(0x1701C6C0)

inline static constexpr unsigned int BCBJMCLHNIP_TypeDefinitionIndex = 44663;

class BCBJMCLHNIP : public ::GIBMJLOJLKD
{
public:
	::MonoUITableScrollGroup* PJEOJINPLJC; // 0x18
	::UnityEngine::UI::Extension::UIToggleButton* DFKEJDCDLOB; // 0x20
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x28
	::UnityEngine::UI::Extension::UIToggleButton* CCBDBHEPGIO; // 0x30
	::KNLFLMMHALL_1<::System::Object*>* PDMIFABPBIC; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCBJMCLHNIP__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BCBJMCLHNIP_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCBJMCLHNIP_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BCBJMCLHNIP_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
