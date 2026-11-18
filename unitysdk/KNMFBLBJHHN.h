#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Text; }

#define KNMFBLBJHHN_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1A2D7D40)
#define KNMFBLBJHHN_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1A2D7C50)
#define KNMFBLBJHHN_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1A2D7A80)
#define KNMFBLBJHHN__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2D7D30)

inline static constexpr unsigned int KNMFBLBJHHN_TypeDefinitionIndex = 64953;

class KNMFBLBJHHN : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x18
	::UnityEngine::UI::Text* MGEDBKBHJPM; // 0x20
	::UnityEngine::GameObject* DPDOFDHIBCP; // 0x28
	::LGINJIKKBJA* KHOJKFHFKIJ; // 0x30
	::UnityEngine::GameObject* IODBDPOLPKA; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNMFBLBJHHN__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KNMFBLBJHHN_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KNMFBLBJHHN_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNMFBLBJHHN_KGEBDLGBGNM_OFFSET))(this);
	}
};
