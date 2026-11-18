#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CGHGNMAFDNN_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x145B7190)
#define CGHGNMAFDNN_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x145B7090)
#define CGHGNMAFDNN_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x145B6E10)
#define CGHGNMAFDNN__CTOR_OFFSET UNITYSDK_OFFSET(0x145B7180)

inline static constexpr unsigned int CGHGNMAFDNN_TypeDefinitionIndex = 75782;

class CGHGNMAFDNN : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::GameObject* GNMHJLLKHMM; // 0x18
	::FGCOIBFFCHB* DPDOFDHIBCP; // 0x20
	::UnityEngine::RectTransform* BOBHDAOCFGF; // 0x28
	::UnityEngine::GameObject* KHOJKFHFKIJ; // 0x30
	::UnityEngine::GameObject* FDJHEBHLJLD; // 0x38
	::UnityEngine::RectTransform* HCCEEIDOGDO; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* KPNDMELCPFP; // 0x48
	::FGCOIBFFCHB* BGABOFECPBN; // 0x50
	::UnityEngine::GameObject* DPNLLKMJMMB; // 0x58
	::LGINJIKKBJA* HJDAMCBKNEI; // 0x60
	::UnityEngine::UI::Extension::UILocalizationText* NMBFIFKHLEM; // 0x68
	::FGCOIBFFCHB* JDJFNABCCNP; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGHGNMAFDNN__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CGHGNMAFDNN_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CGHGNMAFDNN_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGHGNMAFDNN_KGEBDLGBGNM_OFFSET))(this);
	}
};
