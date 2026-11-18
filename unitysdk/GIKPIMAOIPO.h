#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIDoubleTipsInfoWidgetController; }
namespace System { class Object; }
namespace UnityEngine { class Transform; }
template <typename T> class KNLFLMMHALL_1;
template <typename T> class MEKABAIJMNM_1;

#define GIKPIMAOIPO_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x10FE3D70)
#define GIKPIMAOIPO_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x10FE3B80)
#define GIKPIMAOIPO_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x10FE3820)
#define GIKPIMAOIPO__CTOR_OFFSET UNITYSDK_OFFSET(0x10FE3D60)

inline static constexpr unsigned int GIKPIMAOIPO_TypeDefinitionIndex = 53192;

class GIKPIMAOIPO : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* ANBLGKBBIKI; // 0x18
	::KNLFLMMHALL_1<::System::Object*>* LNCCMLCHHHP; // 0x20
	::LGINJIKKBJA* NDCFJEBCKIK; // 0x28
	::KNLFLMMHALL_1<::System::Object*>* NOKAGCCBOPK; // 0x30
	::UnityEngine::Transform* CIOEEGFAAAB; // 0x38
	::MEKABAIJMNM_1<::MoleMole::UIDoubleTipsInfoWidgetController*>* LLNLKIKBBMF; // 0x40
	::KNLFLMMHALL_1<::System::Object*>* LKDGMIEFOAF; // 0x48
	::FGCOIBFFCHB* HBOPDCKGIAJ; // 0x50
	::LGINJIKKBJA* HJDAMCBKNEI; // 0x58
	::KNLFLMMHALL_1<::System::Object*>* BDADEGCNGNE; // 0x60
	::KNLFLMMHALL_1<::System::Object*>* DJOELOKEGAM; // 0x68
	::KNLFLMMHALL_1<::System::Object*>* IDDPJFEMDKM; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIKPIMAOIPO__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GIKPIMAOIPO_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIKPIMAOIPO_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GIKPIMAOIPO_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
