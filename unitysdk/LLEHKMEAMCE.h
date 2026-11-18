#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }

#define LLEHKMEAMCE_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0xD438340)
#define LLEHKMEAMCE_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0xD438250)
#define LLEHKMEAMCE_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0xD438040)
#define LLEHKMEAMCE__CTOR_OFFSET UNITYSDK_OFFSET(0xD438330)

inline static constexpr unsigned int LLEHKMEAMCE_TypeDefinitionIndex = 42841;

class LLEHKMEAMCE : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::GameObject* FDJHEBHLJLD; // 0x18
	::UnityEngine::GameObject* DPNLLKMJMMB; // 0x20
	::UnityEngine::RectTransform* KHFECPOGDBF; // 0x28
	::UnityEngine::GameObject* JFDOOELFAOA; // 0x30
	::LGINJIKKBJA* KHOJKFHFKIJ; // 0x38
	::UnityEngine::Animation* MFLFEBEHHLF; // 0x40
	::FGCOIBFFCHB* MGEIIBDFMFD; // 0x48
	::UnityEngine::GameObject* DPDOFDHIBCP; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLEHKMEAMCE__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LLEHKMEAMCE_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLEHKMEAMCE_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LLEHKMEAMCE_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
