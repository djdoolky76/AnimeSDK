#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUIAnimCell;
class UIMainStoryParam;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Text; }

#define PDBELGCFJGE_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x17314D10)
#define PDBELGCFJGE_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x17314C20)
#define PDBELGCFJGE_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x17314980)
#define PDBELGCFJGE__CTOR_OFFSET UNITYSDK_OFFSET(0x17314D00)

inline static constexpr unsigned int PDBELGCFJGE_TypeDefinitionIndex = 61875;

class PDBELGCFJGE : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::GameObject* JEMMGGOBKBJ; // 0x18
	::UnityEngine::Animation* OIKFFMHNCHB; // 0x20
	::UnityEngine::GameObject* HLJMMLMNFDG; // 0x28
	::LGINJIKKBJA* KHOJKFHFKIJ; // 0x30
	::MonoUIAnimCell* AKEJJMNGGAH; // 0x38
	::UnityEngine::GameObject* IODBDPOLPKA; // 0x40
	::UnityEngine::UI::Text* MGEDBKBHJPM; // 0x48
	::UIMainStoryParam* KLBGAHPJAJO; // 0x50
	::UnityEngine::GameObject* CMKDOPBCLMA; // 0x58
	::UnityEngine::UI::Text* FDOGGANACAP; // 0x60
	::FGCOIBFFCHB* OPPMKLIKKBO; // 0x68
	::UnityEngine::GameObject* JIHNHKFEOHJ; // 0x70
	::UnityEngine::GameObject* PPBOGIJFCFC; // 0x78
	::UnityEngine::UI::Text* OKJBNCEFOKB; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDBELGCFJGE__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PDBELGCFJGE_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDBELGCFJGE_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PDBELGCFJGE_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
