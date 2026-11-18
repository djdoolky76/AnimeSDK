#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define PNCBPMCHIKM_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1C2BFA10)
#define PNCBPMCHIKM_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1C2BF950)
#define PNCBPMCHIKM__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2BFA00)

inline static constexpr unsigned int PNCBPMCHIKM_TypeDefinitionIndex = 52714;

class PNCBPMCHIKM : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* HBADNCJHEOJ; // 0x18
	::UnityEngine::GameObject* DGJIHEFCLKA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNCBPMCHIKM__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PNCBPMCHIKM_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PNCBPMCHIKM_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
