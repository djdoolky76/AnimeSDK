#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace System { class Object; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class KNLFLMMHALL_1;

#define KGCNFMACPAO_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x186231A0)
#define KGCNFMACPAO_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x18623080)
#define KGCNFMACPAO_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x18622E50)
#define KGCNFMACPAO__CTOR_OFFSET UNITYSDK_OFFSET(0x18623190)

inline static constexpr unsigned int KGCNFMACPAO_TypeDefinitionIndex = 47315;

class KGCNFMACPAO : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* PJGLNHAAGOD; // 0x18
	::LGINJIKKBJA* ACAAAJMHIFH; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* GANCEGMMNMB; // 0x28
	::KNLFLMMHALL_1<::System::Object*>* PDNIIOFPPKD; // 0x30
	::KNLFLMMHALL_1<::System::Object*>* BOOKCAHAJGO; // 0x38
	::KNLFLMMHALL_1<::System::Object*>* PCKCFAMFLFI; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* GLNDILPMGMJ; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGCNFMACPAO__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KGCNFMACPAO_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGCNFMACPAO_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KGCNFMACPAO_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
