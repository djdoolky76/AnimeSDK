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

#define CEOCEPEDEMF_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1153A100)
#define CEOCEPEDEMF_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x11539FA0)
#define CEOCEPEDEMF_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x11539D50)
#define CEOCEPEDEMF__CTOR_OFFSET UNITYSDK_OFFSET(0x1153A0F0)

inline static constexpr unsigned int CEOCEPEDEMF_TypeDefinitionIndex = 43027;

class CEOCEPEDEMF : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::GameObject* FEKAMKHOIMK; // 0x18
	::LGINJIKKBJA* DAEMMMBCODF; // 0x20
	::LGINJIKKBJA* ACAAAJMHIFH; // 0x28
	::UnityEngine::UI::RawImage* MNHOFEMCLNH; // 0x30
	::FGCOIBFFCHB* CFNLJOOOFGD; // 0x38
	::LGINJIKKBJA* IFIMBDGBGKG; // 0x40
	::UnityEngine::Animation* NPAJLLHKPLJ; // 0x48
	::MoleMole::MonoGamepadCustomList* EBIHJKBPAKO; // 0x50
	::FGCOIBFFCHB* LLDEIIPFIIB; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEOCEPEDEMF__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CEOCEPEDEMF_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CEOCEPEDEMF_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEOCEPEDEMF_KGEBDLGBGNM_OFFSET))(this);
	}
};
