#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class GCIMMDDIFBJ;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class KNLFLMMHALL_1;

#define PCFNHLKJFDN_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x15530EA0)
#define PCFNHLKJFDN_FDHCICJAEOH_OFFSET UNITYSDK_OFFSET(0x15530A20)
#define PCFNHLKJFDN_FHKPHDMDBCN_OFFSET UNITYSDK_OFFSET(0x15530C10)
#define PCFNHLKJFDN_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x15530DF0)
#define PCFNHLKJFDN_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x15530780)
#define PCFNHLKJFDN__CTOR_OFFSET UNITYSDK_OFFSET(0x15530E90)

inline static constexpr unsigned int PCFNHLKJFDN_TypeDefinitionIndex = 67250;

class PCFNHLKJFDN : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* BKBGGPLDFJM; // 0x18
	::GCIMMDDIFBJ* CHCIEJKOLHJ; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* PMCNDKMMFDG; // 0x28
	::System::Collections::Generic::List_1<::FGCOIBFFCHB*>* LJOKAOFDEOA; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* NONEFKJHOJM; // 0x38
	::UnityEngine::GameObject* DPDOFDHIBCP; // 0x40
	::LGINJIKKBJA* HJDAMCBKNEI; // 0x48
	::UnityEngine::RectTransform* FLANDOHPICD; // 0x50
	::UnityEngine::UI::Extension::UILocalizationText* DBBDKLENOKD; // 0x58
	::System::Collections::Generic::List_1<::KNLFLMMHALL_1<::System::Object*>*>* CGIHGMCAKCD; // 0x60
	::FGCOIBFFCHB* KJBINNHKCDC; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCFNHLKJFDN__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PCFNHLKJFDN_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Collections::Generic::List_1<::KNLFLMMHALL_1<::System::Object*>*>* FDHCICJAEOH(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* GCAOGFBGMMH)
	{
		return ((::System::Collections::Generic::List_1<::KNLFLMMHALL_1<::System::Object*>*>*(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PCFNHLKJFDN_FDHCICJAEOH_OFFSET))(this, JMJGHFAOMNH, GCAOGFBGMMH);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PCFNHLKJFDN_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Collections::Generic::List_1<::FGCOIBFFCHB*>* FHKPHDMDBCN(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* GCAOGFBGMMH)
	{
		return ((::System::Collections::Generic::List_1<::FGCOIBFFCHB*>*(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PCFNHLKJFDN_FHKPHDMDBCN_OFFSET))(this, JMJGHFAOMNH, GCAOGFBGMMH);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCFNHLKJFDN_KGEBDLGBGNM_OFFSET))(this);
	}
};
