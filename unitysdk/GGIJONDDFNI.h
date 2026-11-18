#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }

#define GGIJONDDFNI_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x15CE27C0)
#define GGIJONDDFNI_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x15CE26F0)
#define GGIJONDDFNI_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x15CE25A0)
#define GGIJONDDFNI__CTOR_OFFSET UNITYSDK_OFFSET(0x15CE27B0)

inline static constexpr unsigned int GGIJONDDFNI_TypeDefinitionIndex = 70398;

class GGIJONDDFNI : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* MFAIIDJEIHO; // 0x18
	::LGINJIKKBJA* DAOIHCKDHOI; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGIJONDDFNI__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GGIJONDDFNI_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGIJONDDFNI_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GGIJONDDFNI_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
