#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUIBtnScaleAnim;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Text; }

#define KKFPJKPDEHN_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x13C6D790)
#define KKFPJKPDEHN_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x13C6D6A0)
#define KKFPJKPDEHN_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x13C6D470)
#define KKFPJKPDEHN__CTOR_OFFSET UNITYSDK_OFFSET(0x13C6D780)

inline static constexpr unsigned int KKFPJKPDEHN_TypeDefinitionIndex = 90550;

class KKFPJKPDEHN : public ::GIBMJLOJLKD
{
public:
	::MonoUIBtnScaleAnim* JJKNFHLLNIH; // 0x18
	::UnityEngine::GameObject* IODBDPOLPKA; // 0x20
	::UnityEngine::GameObject* LKCPFCFFILO; // 0x28
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x30
	::UnityEngine::UI::Text* HJMOFMLMAOE; // 0x38
	::UnityEngine::GameObject* DPDOFDHIBCP; // 0x40
	::UnityEngine::GameObject* FDJHEBHLJLD; // 0x48
	::LGINJIKKBJA* HJDAMCBKNEI; // 0x50
	::UnityEngine::GameObject* ILOBEELCFOK; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKFPJKPDEHN__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KKFPJKPDEHN_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KKFPJKPDEHN_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKFPJKPDEHN_KGEBDLGBGNM_OFFSET))(this);
	}
};
