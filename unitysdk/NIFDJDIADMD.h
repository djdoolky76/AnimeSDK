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

#define NIFDJDIADMD_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x128960D0)
#define NIFDJDIADMD_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x12895FE0)
#define NIFDJDIADMD_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x12895DD0)
#define NIFDJDIADMD__CTOR_OFFSET UNITYSDK_OFFSET(0x128960C0)

inline static constexpr unsigned int NIFDJDIADMD_TypeDefinitionIndex = 52773;

class NIFDJDIADMD : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* KHFECPOGDBF; // 0x18
	::UnityEngine::GameObject* DPNLLKMJMMB; // 0x20
	::UnityEngine::GameObject* FDJHEBHLJLD; // 0x28
	::LGINJIKKBJA* KHOJKFHFKIJ; // 0x30
	::FGCOIBFFCHB* MGEIIBDFMFD; // 0x38
	::UnityEngine::GameObject* DPDOFDHIBCP; // 0x40
	::UnityEngine::GameObject* JFDOOELFAOA; // 0x48
	::UnityEngine::Animation* MFLFEBEHHLF; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIFDJDIADMD__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NIFDJDIADMD_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NIFDJDIADMD_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIFDJDIADMD_KGEBDLGBGNM_OFFSET))(this);
	}
};
