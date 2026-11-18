#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI { class Text; }

#define OFOEKBBBALH_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1F959710)
#define OFOEKBBBALH_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1F959640)
#define OFOEKBBBALH_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1F959470)
#define OFOEKBBBALH__CTOR_OFFSET UNITYSDK_OFFSET(0x1F959700)

inline static constexpr unsigned int OFOEKBBBALH_TypeDefinitionIndex = 95108;

class OFOEKBBBALH : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* INBAMJIBJKL; // 0x18
	::LGINJIKKBJA* FIEAEGDAPJJ; // 0x20
	::UnityEngine::UI::Text* HJMOFMLMAOE; // 0x28
	::UnityEngine::UI::Text* EIJIICLEGNI; // 0x30
	::UnityEngine::UI::Text* CHEOABHIINF; // 0x38
	::LGINJIKKBJA* HJDAMCBKNEI; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFOEKBBBALH__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OFOEKBBBALH_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OFOEKBBBALH_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFOEKBBBALH_KGEBDLGBGNM_OFFSET))(this);
	}
};
