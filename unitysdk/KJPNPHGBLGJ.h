#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UIToggleButton; }

#define KJPNPHGBLGJ_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1765FD90)
#define KJPNPHGBLGJ_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1765FC80)
#define KJPNPHGBLGJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1765FD80)

inline static constexpr unsigned int KJPNPHGBLGJ_TypeDefinitionIndex = 75842;

class KJPNPHGBLGJ : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* FPDIJKAKIJE; // 0x18
	::UnityEngine::UI::Extension::UIToggleButton* KHOJKFHFKIJ; // 0x20
	::UnityEngine::GameObject* DPDOFDHIBCP; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* HJMOFMLMAOE; // 0x30
	::UnityEngine::RectTransform* OECLNMAKJLP; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJPNPHGBLGJ__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KJPNPHGBLGJ_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KJPNPHGBLGJ_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
