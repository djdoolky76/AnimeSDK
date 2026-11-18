#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define OFKOAADDOFF_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x13A53FF0)
#define OFKOAADDOFF_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x13A53EF0)
#define OFKOAADDOFF__CTOR_OFFSET UNITYSDK_OFFSET(0x13A53FE0)

inline static constexpr unsigned int OFKOAADDOFF_TypeDefinitionIndex = 81437;

class OFKOAADDOFF : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::Transform* IGGLGJHNMMD; // 0x18
	::UnityEngine::RectTransform* PDACHPLBKIE; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* BMLHGEJLNHK; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* DBBDKLENOKD; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFKOAADDOFF__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OFKOAADDOFF_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OFKOAADDOFF_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
