#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define OJNBKPBKLFM_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1368E7E0)
#define OJNBKPBKLFM_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1368E6A0)
#define OJNBKPBKLFM_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1368E3E0)
#define OJNBKPBKLFM__CTOR_OFFSET UNITYSDK_OFFSET(0x1368E7D0)

inline static constexpr unsigned int OJNBKPBKLFM_TypeDefinitionIndex = 44843;

class OJNBKPBKLFM : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* NHCHJOAOOHE; // 0x18
	::UnityEngine::GameObject* DPNLLKMJMMB; // 0x20
	::UnityEngine::GameObject* NKLJNKJIEIJ; // 0x28
	::UnityEngine::Animation* HLOCALEFHPB; // 0x30
	::UnityEngine::GameObject* IODBDPOLPKA; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* BPNNPFHJCDN; // 0x40
	::FGCOIBFFCHB* GFLEPFOCFKF; // 0x48
	::UnityEngine::Transform* FDJHEBHLJLD; // 0x50
	::LGINJIKKBJA* KHOJKFHFKIJ; // 0x58
	::UnityEngine::GameObject* NLAJEBGNMFN; // 0x60
	::FGCOIBFFCHB* BMOPOIGPFHM; // 0x68
	::LGINJIKKBJA* IOIANILNPPI; // 0x70
	::UnityEngine::GameObject* JFDOOELFAOA; // 0x78
	::UnityEngine::GameObject* LFFMODGGEHM; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJNBKPBKLFM__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OJNBKPBKLFM_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJNBKPBKLFM_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OJNBKPBKLFM_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
