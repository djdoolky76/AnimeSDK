#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class NotificationBadge; }
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define ECLCCGNKNFA_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0xF9B8250)
#define ECLCCGNKNFA_KDHPEBPDEGP_OFFSET UNITYSDK_OFFSET(0xF9B8000)
#define ECLCCGNKNFA_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0xF9B8150)
#define ECLCCGNKNFA_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0xF9B7D70)
#define ECLCCGNKNFA__CTOR_OFFSET UNITYSDK_OFFSET(0xF9B8240)

inline static constexpr unsigned int ECLCCGNKNFA_TypeDefinitionIndex = 75771;

class ECLCCGNKNFA : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* LFEAAEBMIJO; // 0x18
	::UnityEngine::Transform* HLHNEJHBCOI; // 0x20
	::LGINJIKKBJA* FPGMHCJLIOG; // 0x28
	::FGCOIBFFCHB* DDJAJDBHKNM; // 0x30
	::UnityEngine::GameObject* MANMLAJHACN; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* AIONHELBGBC; // 0x40
	::UnityEngine::Transform* EGNHAFINMDK; // 0x48
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x50
	::UnityEngine::Transform* EJADDHBDCNH; // 0x58
	::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>* FFCBKAONNFA; // 0x60
	::MoleMole::NotificationBadge* IMDLHCPGEDN; // 0x68
	::UnityEngine::Transform* ICHELEFIAMM; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECLCCGNKNFA__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ECLCCGNKNFA_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECLCCGNKNFA_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ECLCCGNKNFA_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>* KDHPEBPDEGP(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* GCAOGFBGMMH)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>*(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ECLCCGNKNFA_KDHPEBPDEGP_OFFSET))(this, JMJGHFAOMNH, GCAOGFBGMMH);
	}
};
