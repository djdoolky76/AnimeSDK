#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralToggleWidgetController; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class MEKABAIJMNM_1;

#define ODCJHAKCBGM_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x16BFB820)
#define ODCJHAKCBGM_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x16BFB710)
#define ODCJHAKCBGM_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x16BFB510)
#define ODCJHAKCBGM__CTOR_OFFSET UNITYSDK_OFFSET(0x16BFB810)

inline static constexpr unsigned int ODCJHAKCBGM_TypeDefinitionIndex = 81593;

class ODCJHAKCBGM : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* CGKOIBMEAFH; // 0x18
	::UnityEngine::Transform* CPIOABLKPIB; // 0x20
	::LGINJIKKBJA* ALAKLHDMHIN; // 0x28
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x30
	::UnityEngine::GameObject* NOFCCGPPFGD; // 0x38
	::LGINJIKKBJA* EHANLMBGMGJ; // 0x40
	::MEKABAIJMNM_1<::MoleMole::UIGeneralToggleWidgetController*>* NIENBJEFKAF; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODCJHAKCBGM__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ODCJHAKCBGM_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ODCJHAKCBGM_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODCJHAKCBGM_KGEBDLGBGNM_OFFSET))(this);
	}
};
