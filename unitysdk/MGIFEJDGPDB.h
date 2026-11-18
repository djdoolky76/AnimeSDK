#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define MGIFEJDGPDB_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x14D814D0)
#define MGIFEJDGPDB_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x14D81400)
#define MGIFEJDGPDB_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x14D81200)
#define MGIFEJDGPDB__CTOR_OFFSET UNITYSDK_OFFSET(0x14D814C0)

inline static constexpr unsigned int MGIFEJDGPDB_TypeDefinitionIndex = 49571;

class MGIFEJDGPDB : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x18
	::UnityEngine::RectTransform* DPDOFDHIBCP; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* JHGGHHOJDPF; // 0x28
	::UnityEngine::RectTransform* DEIPJONPFNG; // 0x30
	::LGINJIKKBJA* KHOJKFHFKIJ; // 0x38
	::UnityEngine::RectTransform* FDJHEBHLJLD; // 0x40
	::FGCOIBFFCHB* FHMJFENEGOL; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGIFEJDGPDB__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MGIFEJDGPDB_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGIFEJDGPDB_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MGIFEJDGPDB_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
