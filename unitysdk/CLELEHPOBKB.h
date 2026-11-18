#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLELEHPOBKB_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1155BD40)
#define CLELEHPOBKB_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1155BC10)
#define CLELEHPOBKB__CTOR_OFFSET UNITYSDK_OFFSET(0x1155BD30)

inline static constexpr unsigned int CLELEHPOBKB_TypeDefinitionIndex = 65574;

class CLELEHPOBKB : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* EHALDAHKAGN; // 0x18
	::UnityEngine::RectTransform* JHDHDNOIHDD; // 0x20
	::UnityEngine::Transform* OMKKKALAKHL; // 0x28
	::UnityEngine::RectTransform* ODALDIOFMPH; // 0x30
	::UnityEngine::RectTransform* JHICJEACFFH; // 0x38
	::UnityEngine::RectTransform* FJGDNFOBEMO; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLELEHPOBKB__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLELEHPOBKB_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLELEHPOBKB_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
