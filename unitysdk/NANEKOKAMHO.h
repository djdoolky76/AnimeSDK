#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }

#define NANEKOKAMHO_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x120E75A0)
#define NANEKOKAMHO_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x120E7510)
#define NANEKOKAMHO_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x120E7370)
#define NANEKOKAMHO__CTOR_OFFSET UNITYSDK_OFFSET(0x120E7590)

inline static constexpr unsigned int NANEKOKAMHO_TypeDefinitionIndex = 80138;

class NANEKOKAMHO : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* HBPKENOFMAC; // 0x18
	::UnityEngine::RectTransform* DEIPJONPFNG; // 0x20
	::UnityEngine::RectTransform* CGICCOBHACH; // 0x28
	::UnityEngine::RectTransform* FDJHEBHLJLD; // 0x30
	::UnityEngine::RectTransform* BEAFOPHEAEM; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NANEKOKAMHO__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NANEKOKAMHO_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NANEKOKAMHO_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NANEKOKAMHO_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
