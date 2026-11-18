#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class GCIMMDDIFBJ;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define ABBOLCKBDIL_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1FEA6B90)
#define ABBOLCKBDIL_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1FEA6B00)
#define ABBOLCKBDIL_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1FEA67A0)
#define ABBOLCKBDIL__CTOR_OFFSET UNITYSDK_OFFSET(0x1FEA6B80)

inline static constexpr unsigned int ABBOLCKBDIL_TypeDefinitionIndex = 95148;

class ABBOLCKBDIL : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::Transform* HMKGODBPNMN; // 0x18
	::UnityEngine::Transform* KEAJJCDJJAF; // 0x20
	::UnityEngine::RectTransform* OBKNGNCLKKE; // 0x28
	::UnityEngine::RectTransform* IKOFJEHPPAN; // 0x30
	::UnityEngine::Transform* GJPHJOPLFNK; // 0x38
	::UnityEngine::Transform* EGGJNIGKNHN; // 0x40
	::UnityEngine::Transform* BPEMEIBENJK; // 0x48
	::UnityEngine::GameObject* BENDFFBLBGA; // 0x50
	::GCIMMDDIFBJ* MICIFODNFEN; // 0x58
	::UnityEngine::RectTransform* KPMPBLHPLMI; // 0x60
	::UnityEngine::Transform* GAEMFKKMDDK; // 0x68
	::LGINJIKKBJA* CIPLLBJJOJG; // 0x70
	::UnityEngine::GameObject* OAFCCJIPGAM; // 0x78
	::UnityEngine::RectTransform* BAPBGCKGNED; // 0x80
	::UnityEngine::Transform* ALIAHIDAGEH; // 0x88
	::UnityEngine::RectTransform* MCLGPCKJCIP; // 0x90
	::UnityEngine::RectTransform* IJLFMJHLDNM; // 0x98

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABBOLCKBDIL__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ABBOLCKBDIL_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABBOLCKBDIL_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ABBOLCKBDIL_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
