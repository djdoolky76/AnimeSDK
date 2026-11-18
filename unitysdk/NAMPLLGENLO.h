#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }

#define NAMPLLGENLO_CEMGPKNDOON_OFFSET UNITYSDK_OFFSET(0x18F8F1D0)
#define NAMPLLGENLO_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x18F8F250)
#define NAMPLLGENLO_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x18F8F110)
#define NAMPLLGENLO_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x18F8EF90)
#define NAMPLLGENLO_POIFGHCCMKN_OFFSET UNITYSDK_OFFSET(0x18F8F2F0)
#define NAMPLLGENLO__CTOR_OFFSET UNITYSDK_OFFSET(0x18F8F240)

inline static constexpr unsigned int NAMPLLGENLO_TypeDefinitionIndex = 81635;

class NAMPLLGENLO : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* ALAKLHDMHIN; // 0x18
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x20
	::UnityEngine::UI::Text* EMOJABAOCLE; // 0x28
	::UnityEngine::Transform* AIBOHAIMPOJ; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAMPLLGENLO__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NAMPLLGENLO_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Boolean CEMGPKNDOON(::MoleMole::UIControlCollection* FJHDNIKAKLO, ::HNLACBJDCGI* FOLOGOFJHED)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIControlCollection*, ::HNLACBJDCGI*))((::PBYTE)hIl2Cpp + NAMPLLGENLO_CEMGPKNDOON_OFFSET))(this, FJHDNIKAKLO, FOLOGOFJHED);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAMPLLGENLO_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NAMPLLGENLO_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Boolean POIFGHCCMKN(::MoleMole::UIControlCollection* MIALFKCCCPI, ::HNLACBJDCGI* KMGKAIDEIBA)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIControlCollection*, ::HNLACBJDCGI*))((::PBYTE)hIl2Cpp + NAMPLLGENLO_POIFGHCCMKN_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
