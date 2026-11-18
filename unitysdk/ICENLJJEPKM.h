#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
class UIControlReferenceList;
namespace MoleMole { class MonoGamepadSelectable; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }

#define ICENLJJEPKM_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x15EA23A0)
#define ICENLJJEPKM_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x15EA22D0)
#define ICENLJJEPKM_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x15EA20F0)
#define ICENLJJEPKM__CTOR_OFFSET UNITYSDK_OFFSET(0x15EA2390)

inline static constexpr unsigned int ICENLJJEPKM_TypeDefinitionIndex = 65677;

class ICENLJJEPKM : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::GameObject* FDJHEBHLJLD; // 0x18
	::LGINJIKKBJA* HJDAMCBKNEI; // 0x20
	::MoleMole::MonoGamepadSelectable* KDAGHGAKCFA; // 0x28
	::UnityEngine::GameObject* BDCGGDDPPAL; // 0x30
	::UnityEngine::GameObject* DPDOFDHIBCP; // 0x38
	::UnityEngine::GameObject* JFDOOELFAOA; // 0x40
	::UIControlReferenceList* GMGOELDAFCI; // 0x48
	::UIControlReferenceList* OPAKBMGODHM; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICENLJJEPKM__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ICENLJJEPKM_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ICENLJJEPKM_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICENLJJEPKM_KGEBDLGBGNM_OFFSET))(this);
	}
};
