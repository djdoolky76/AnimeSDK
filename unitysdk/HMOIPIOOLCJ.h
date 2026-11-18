#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define HMOIPIOOLCJ_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0xE9FE3F0)
#define HMOIPIOOLCJ_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0xE9FE330)
#define HMOIPIOOLCJ__CTOR_OFFSET UNITYSDK_OFFSET(0xE9FE3E0)

inline static constexpr unsigned int HMOIPIOOLCJ_TypeDefinitionIndex = 61426;

class HMOIPIOOLCJ : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::Transform* GGEDBHJOHKN; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* AMEEMEPHGEL; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMOIPIOOLCJ__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HMOIPIOOLCJ_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HMOIPIOOLCJ_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
