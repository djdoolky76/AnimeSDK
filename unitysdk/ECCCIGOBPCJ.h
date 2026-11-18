#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define ECCCIGOBPCJ_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x132B0600)
#define ECCCIGOBPCJ_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x132B0500)
#define ECCCIGOBPCJ_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x132B0290)
#define ECCCIGOBPCJ__CTOR_OFFSET UNITYSDK_OFFSET(0x132B05F0)

inline static constexpr unsigned int ECCCIGOBPCJ_TypeDefinitionIndex = 83224;

class ECCCIGOBPCJ : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::GameObject* FDJHEBHLJLD; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* PCLNFDNGEBL; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* NMBFIFKHLEM; // 0x28
	::FGCOIBFFCHB* CLOGCANJDHD; // 0x30
	::UnityEngine::GameObject* ABIJFEDMJPA; // 0x38
	::UnityEngine::GameObject* JNIFDFEPIAJ; // 0x40
	::FGCOIBFFCHB* ACDAOCDOBCE; // 0x48
	::FGCOIBFFCHB* DPDOFDHIBCP; // 0x50
	::LGINJIKKBJA* ICPJFJLCCHB; // 0x58
	::UnityEngine::UI::Extension::UILocalizationText* MBDMAMEEAOO; // 0x60
	::UnityEngine::GameObject* GNMHJLLKHMM; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECCCIGOBPCJ__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ECCCIGOBPCJ_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECCCIGOBPCJ_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ECCCIGOBPCJ_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
