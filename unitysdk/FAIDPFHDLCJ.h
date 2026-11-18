#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace System { class Object; }
namespace UnityEngine { class RectTransform; }
template <typename T> class KNLFLMMHALL_1;

#define FAIDPFHDLCJ_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x11AB10C0)
#define FAIDPFHDLCJ_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x11AB0F50)
#define FAIDPFHDLCJ_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x11AB0CC0)
#define FAIDPFHDLCJ__CTOR_OFFSET UNITYSDK_OFFSET(0x11AB10B0)

inline static constexpr unsigned int FAIDPFHDLCJ_TypeDefinitionIndex = 90654;

class FAIDPFHDLCJ : public ::GIBMJLOJLKD
{
public:
	::KNLFLMMHALL_1<::System::Object*>* CBDINMGCFBE; // 0x18
	::KNLFLMMHALL_1<::System::Object*>* NKJJPEHKFPC; // 0x20
	::UnityEngine::RectTransform* FKOBIFAFEGP; // 0x28
	::KNLFLMMHALL_1<::System::Object*>* LNCCMLCHHHP; // 0x30
	::KNLFLMMHALL_1<::System::Object*>* FAEMBKJNHFI; // 0x38
	::KNLFLMMHALL_1<::System::Object*>* GCNGBLFELCE; // 0x40
	::FGCOIBFFCHB* ANBLGKBBIKI; // 0x48
	::LGINJIKKBJA* HJDAMCBKNEI; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAIDPFHDLCJ__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FAIDPFHDLCJ_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAIDPFHDLCJ_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FAIDPFHDLCJ_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
