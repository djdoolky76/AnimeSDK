#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }

#define NGOGMFGAAOM_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0xE57FCB0)
#define NGOGMFGAAOM_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0xE57FC20)
#define NGOGMFGAAOM_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0xE57FAD0)
#define NGOGMFGAAOM__CTOR_OFFSET UNITYSDK_OFFSET(0xE57FCA0)

inline static constexpr unsigned int NGOGMFGAAOM_TypeDefinitionIndex = 39758;

class NGOGMFGAAOM : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* HODPPKHAJAG; // 0x18
	::UnityEngine::RectTransform* BAPBGCKGNED; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGOGMFGAAOM__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NGOGMFGAAOM_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NGOGMFGAAOM_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGOGMFGAAOM_KGEBDLGBGNM_OFFSET))(this);
	}
};
