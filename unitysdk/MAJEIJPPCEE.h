#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define MAJEIJPPCEE_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x12D4D7F0)
#define MAJEIJPPCEE_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x12D4D6B0)
#define MAJEIJPPCEE__CTOR_OFFSET UNITYSDK_OFFSET(0x12D4D7E0)

inline static constexpr unsigned int MAJEIJPPCEE_TypeDefinitionIndex = 92143;

class MAJEIJPPCEE : public ::GIBMJLOJLKD
{
public:
	::MoleMole::UIGeneralButtonController* DDPMCFOFMFA; // 0x18
	::UnityEngine::RectTransform* PDACHPLBKIE; // 0x20
	::UnityEngine::Transform* FIOPMNMJBCG; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* EPFNAHDACLG; // 0x30
	::UnityEngine::RectTransform* ODALDIOFMPH; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* ELPMOBIIFGJ; // 0x40
	::UnityEngine::GameObject* DPDOFDHIBCP; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAJEIJPPCEE__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MAJEIJPPCEE_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MAJEIJPPCEE_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
