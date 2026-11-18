#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class MonoGamepadCustomList; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class RawImage; }

#define HKHBEGMIPJB_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x15DBF590)
#define HKHBEGMIPJB_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x15DBF430)
#define HKHBEGMIPJB_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x15DBF1E0)
#define HKHBEGMIPJB__CTOR_OFFSET UNITYSDK_OFFSET(0x15DBF580)

inline static constexpr unsigned int HKHBEGMIPJB_TypeDefinitionIndex = 92178;

class HKHBEGMIPJB : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* ACAAAJMHIFH; // 0x18
	::FGCOIBFFCHB* CFNLJOOOFGD; // 0x20
	::UnityEngine::GameObject* FEKAMKHOIMK; // 0x28
	::LGINJIKKBJA* IFIMBDGBGKG; // 0x30
	::UnityEngine::Animation* NPAJLLHKPLJ; // 0x38
	::UnityEngine::UI::RawImage* MNHOFEMCLNH; // 0x40
	::FGCOIBFFCHB* LLDEIIPFIIB; // 0x48
	::LGINJIKKBJA* DAEMMMBCODF; // 0x50
	::MoleMole::MonoGamepadCustomList* EBIHJKBPAKO; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKHBEGMIPJB__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HKHBEGMIPJB_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HKHBEGMIPJB_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKHBEGMIPJB_KGEBDLGBGNM_OFFSET))(this);
	}
};
