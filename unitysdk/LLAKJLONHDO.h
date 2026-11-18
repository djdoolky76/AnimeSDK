#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define LLAKJLONHDO_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x158F4910)
#define LLAKJLONHDO_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x158F47A0)
#define LLAKJLONHDO__CTOR_OFFSET UNITYSDK_OFFSET(0x158F4900)

inline static constexpr unsigned int LLAKJLONHDO_TypeDefinitionIndex = 63365;

class LLAKJLONHDO : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::Transform* FIOPMNMJBCG; // 0x18
	::UnityEngine::RectTransform* ODALDIOFMPH; // 0x20
	::UnityEngine::GameObject* KDILMNFBLJN; // 0x28
	::UnityEngine::GameObject* DDPMCFOFMFA; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* LIPEGBMCMJE; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* ELPMOBIIFGJ; // 0x40
	::UnityEngine::GameObject* DPDOFDHIBCP; // 0x48
	::UnityEngine::RectTransform* FDJHEBHLJLD; // 0x50
	::UnityEngine::RectTransform* PDACHPLBKIE; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLAKJLONHDO__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LLAKJLONHDO_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LLAKJLONHDO_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
