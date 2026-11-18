#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class GCIMMDDIFBJ;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class MonoInputKey; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define EJCAFKFNMJM_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x17234910)
#define EJCAFKFNMJM_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x17234880)
#define EJCAFKFNMJM_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x17234650)
#define EJCAFKFNMJM__CTOR_OFFSET UNITYSDK_OFFSET(0x17234900)

inline static constexpr unsigned int EJCAFKFNMJM_TypeDefinitionIndex = 89083;

class EJCAFKFNMJM : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::Transform* PEFNEBEDKBH; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* HJMOFMLMAOE; // 0x20
	::GCIMMDDIFBJ* HBPKCNJFOPC; // 0x28
	::UnityEngine::RectTransform* JFHCMCCHFCK; // 0x30
	::UnityEngine::Transform* KBJOGOBDOON; // 0x38
	::GCIMMDDIFBJ* OBNLBMABFPF; // 0x40
	::MoleMole::MonoInputKey* ENKOLDOMCNA; // 0x48
	::LGINJIKKBJA* HJDAMCBKNEI; // 0x50
	::UnityEngine::UI::Extension::UILocalizationText* JEDGGJKBMMG; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJCAFKFNMJM__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EJCAFKFNMJM_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EJCAFKFNMJM_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJCAFKFNMJM_KGEBDLGBGNM_OFFSET))(this);
	}
};
