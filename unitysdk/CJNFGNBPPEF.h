#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HGAJKHIMKJP;
class MonoUITableScrollV2;
class ODLBEJANMEG;
namespace MoleMole { class ScrollViewItemWidgetController; }
namespace MoleMole { class UIBaseController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIGeneralItemTips2PopWindowController; }
namespace MoleMole { class UIWidgetController; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CJNFGNBPPEF_BJNAJOCFIFB_OFFSET UNITYSDK_OFFSET(0x13268B20)
#define CJNFGNBPPEF_BOMGGJAGJDO_OFFSET UNITYSDK_OFFSET(0x13268740)
#define CJNFGNBPPEF_HFBPONNNLBA_OFFSET UNITYSDK_OFFSET(0x13268CE0)
#define CJNFGNBPPEF_LMHDEOOOJIH_OFFSET UNITYSDK_OFFSET(0x13268FA0)
#define CJNFGNBPPEF_NKAKMKGDAFO_OFFSET UNITYSDK_OFFSET(0x13268900)
#define CJNFGNBPPEF__CTOR_1_OFFSET UNITYSDK_OFFSET(0x13268600)
#define CJNFGNBPPEF__CTOR_OFFSET UNITYSDK_OFFSET(0x132684C0)

inline static constexpr unsigned int CJNFGNBPPEF_TypeDefinitionIndex = 50423;

class CJNFGNBPPEF : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::ODLBEJANMEG*>* AIJJOIDFKEO; // 0x10
	::MonoUITableScrollV2* IMAGFAMHGFO; // 0x18
	::MoleMole::UIGeneralItemTips2PopWindowController* GIMNCPMCHGL; // 0x20
	::HGAJKHIMKJP* KPKBEODLMCG; // 0x28
	::MoleMole::UIWidgetController* PIDHMJFIKLG; // 0x30

	::System::Void _ctor(::MoleMole::UIWidgetController* FPPPIIFJOBO, ::MonoUITableScrollV2* EGGEGOCMDIH, ::HGAJKHIMKJP* PMHJBOFDPEJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIWidgetController*, ::MonoUITableScrollV2*, ::HGAJKHIMKJP*))((::PBYTE)hIl2Cpp + CJNFGNBPPEF__CTOR_OFFSET))(this, FPPPIIFJOBO, EGGEGOCMDIH, PMHJBOFDPEJ);
	}

	::System::Void _ctor_1(::MoleMole::UIGeneralItemTips2PopWindowController* KJBIBNNOMKA, ::MonoUITableScrollV2* EGGEGOCMDIH, ::HGAJKHIMKJP* PMHJBOFDPEJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIGeneralItemTips2PopWindowController*, ::MonoUITableScrollV2*, ::HGAJKHIMKJP*))((::PBYTE)hIl2Cpp + CJNFGNBPPEF__CTOR_1_OFFSET))(this, KJBIBNNOMKA, EGGEGOCMDIH, PMHJBOFDPEJ);
	}

	::MoleMole::ScrollViewItemWidgetController* BOMGGJAGJDO(::System::Func_1<::MoleMole::UIControlReference*>* IONFBAPOJKM)
	{
		return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + CJNFGNBPPEF_BOMGGJAGJDO_OFFSET))(this, IONFBAPOJKM);
	}

	::MoleMole::ScrollViewItemWidgetController* BJNAJOCFIFB(::System::Func_1<::MoleMole::UIControlReference*>* IONFBAPOJKM)
	{
		return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + CJNFGNBPPEF_BJNAJOCFIFB_OFFSET))(this, IONFBAPOJKM);
	}

	::System::Void HFBPONNNLBA(::System::Int32 OJILOFDPKAK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CJNFGNBPPEF_HFBPONNNLBA_OFFSET))(this, OJILOFDPKAK);
	}

	::System::Int32 LMHDEOOOJIH(::System::Int32 BLIIBGEDDEI)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CJNFGNBPPEF_LMHDEOOOJIH_OFFSET))(this, BLIIBGEDDEI);
	}

	::MoleMole::UIBaseController* NKAKMKGDAFO()
	{
		return ((::MoleMole::UIBaseController*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJNFGNBPPEF_NKAKMKGDAFO_OFFSET))(this);
	}
};
