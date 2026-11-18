#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class GCIMMDDIFBJ;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
template <typename T> class KNLFLMMHALL_1;

#define JEIDIKBKAIK_DGHJGLOCCAE_OFFSET UNITYSDK_OFFSET(0x16ACD630)
#define JEIDIKBKAIK_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x16ACD8B0)
#define JEIDIKBKAIK_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x16ACD820)
#define JEIDIKBKAIK_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x16ACD3E0)
#define JEIDIKBKAIK__CTOR_OFFSET UNITYSDK_OFFSET(0x16ACD8A0)

inline static constexpr unsigned int JEIDIKBKAIK_TypeDefinitionIndex = 41151;

class JEIDIKBKAIK : public ::GIBMJLOJLKD
{
public:
	::GCIMMDDIFBJ* NDIEOPDFNDM; // 0x18
	::GCIMMDDIFBJ* LLDHMBJPFIB; // 0x20
	::UnityEngine::RectTransform* IKOFJEHPPAN; // 0x28
	::GCIMMDDIFBJ* BGAAIKGMOMO; // 0x30
	::FGCOIBFFCHB* OBEMLOACGAF; // 0x38
	::UnityEngine::GameObject* PNCNPGAACAA; // 0x40
	::UnityEngine::RectTransform* JHEHEKPDLEH; // 0x48
	::UnityEngine::RectTransform* MLHMOBNFPMK; // 0x50
	::System::Collections::Generic::List_1<::KNLFLMMHALL_1<::System::Object*>*>* BNKEEHDFLAG; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEIDIKBKAIK__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JEIDIKBKAIK_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JEIDIKBKAIK_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Collections::Generic::List_1<::KNLFLMMHALL_1<::System::Object*>*>* DGHJGLOCCAE(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* GCAOGFBGMMH)
	{
		return ((::System::Collections::Generic::List_1<::KNLFLMMHALL_1<::System::Object*>*>*(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JEIDIKBKAIK_DGHJGLOCCAE_OFFSET))(this, JMJGHFAOMNH, GCAOGFBGMMH);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEIDIKBKAIK_KGEBDLGBGNM_OFFSET))(this);
	}
};
