#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI { class Text; }

#define CDOAPCFFOJF_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x199FB2A0)
#define CDOAPCFFOJF_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x199FB1D0)
#define CDOAPCFFOJF_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x199FB050)
#define CDOAPCFFOJF__CTOR_OFFSET UNITYSDK_OFFSET(0x199FB290)

inline static constexpr unsigned int CDOAPCFFOJF_TypeDefinitionIndex = 41216;

class CDOAPCFFOJF : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Text* EMOJABAOCLE; // 0x18
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x20
	::UnityEngine::UI::Text* LHKDENMCKCA; // 0x28
	::LGINJIKKBJA* BKDDKDMILCA; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDOAPCFFOJF__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CDOAPCFFOJF_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDOAPCFFOJF_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CDOAPCFFOJF_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
