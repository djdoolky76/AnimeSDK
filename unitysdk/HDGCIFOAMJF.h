#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
class UIMainStoryParam;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define HDGCIFOAMJF_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x14D181A0)
#define HDGCIFOAMJF_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x14D180B0)
#define HDGCIFOAMJF_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x14D17DC0)
#define HDGCIFOAMJF__CTOR_OFFSET UNITYSDK_OFFSET(0x14D18190)

inline static constexpr unsigned int HDGCIFOAMJF_TypeDefinitionIndex = 70132;

class HDGCIFOAMJF : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::GameObject* JIHNHKFEOHJ; // 0x18
	::UnityEngine::GameObject* CONBBLDCMED; // 0x20
	::UnityEngine::UI::Text* OKJBNCEFOKB; // 0x28
	::UnityEngine::GameObject* CMKDOPBCLMA; // 0x30
	::UnityEngine::GameObject* AFPNENOGGLH; // 0x38
	::UnityEngine::GameObject* ILFBJHPNDIM; // 0x40
	::UnityEngine::UI::Text* MGEDBKBHJPM; // 0x48
	::UnityEngine::GameObject* OCJOCLEDABL; // 0x50
	::FGCOIBFFCHB* OPPMKLIKKBO; // 0x58
	::UnityEngine::GameObject* IODBDPOLPKA; // 0x60
	::UnityEngine::UI::Extension::UILocalizationText* FDOGGANACAP; // 0x68
	::LGINJIKKBJA* KHOJKFHFKIJ; // 0x70
	::UnityEngine::GameObject* FDJHEBHLJLD; // 0x78
	::UIMainStoryParam* KLBGAHPJAJO; // 0x80
	::UnityEngine::GameObject* HLJMMLMNFDG; // 0x88
	::UnityEngine::Transform* PEPGNBJMEPE; // 0x90
	::UnityEngine::Animation* OIKFFMHNCHB; // 0x98

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDGCIFOAMJF__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HDGCIFOAMJF_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDGCIFOAMJF_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HDGCIFOAMJF_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
