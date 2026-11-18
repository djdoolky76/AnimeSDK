#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define IEAMPDEKOCA_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x15BFFAB0)
#define IEAMPDEKOCA_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x15BFFA20)
#define IEAMPDEKOCA_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x15BFF8A0)
#define IEAMPDEKOCA__CTOR_OFFSET UNITYSDK_OFFSET(0x15BFFAA0)

inline static constexpr unsigned int IEAMPDEKOCA_TypeDefinitionIndex = 88969;

class IEAMPDEKOCA : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::Transform* NFHNKIIBEEN; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* DBBDKLENOKD; // 0x20
	::LGINJIKKBJA* CIPPJFIMLLM; // 0x28
	::UnityEngine::Transform* MANMABCFMHN; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEAMPDEKOCA__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IEAMPDEKOCA_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEAMPDEKOCA_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IEAMPDEKOCA_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
