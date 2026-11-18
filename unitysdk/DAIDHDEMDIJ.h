#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
class UIControlReferenceList;
namespace MoleMole { class MonoGamepadSelectable; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }

#define DAIDHDEMDIJ_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x193F5070)
#define DAIDHDEMDIJ_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x193F4F80)
#define DAIDHDEMDIJ_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x193F4D50)
#define DAIDHDEMDIJ__CTOR_OFFSET UNITYSDK_OFFSET(0x193F5060)

inline static constexpr unsigned int DAIDHDEMDIJ_TypeDefinitionIndex = 45159;

class DAIDHDEMDIJ : public ::GIBMJLOJLKD
{
public:
	::UIControlReferenceList* OPAKBMGODHM; // 0x18
	::LGINJIKKBJA* HJDAMCBKNEI; // 0x20
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x28
	::UnityEngine::GameObject* BDCGGDDPPAL; // 0x30
	::UIControlReferenceList* GMGOELDAFCI; // 0x38
	::UnityEngine::GameObject* JFDOOELFAOA; // 0x40
	::UnityEngine::GameObject* FDJHEBHLJLD; // 0x48
	::MoleMole::MonoGamepadSelectable* KDAGHGAKCFA; // 0x50
	::UnityEngine::GameObject* DPDOFDHIBCP; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAIDHDEMDIJ__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DAIDHDEMDIJ_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAIDHDEMDIJ_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DAIDHDEMDIJ_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
