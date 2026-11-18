#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class MonoGamepadSelectable; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CJKALAJDAFN_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x15339480)
#define CJKALAJDAFN_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x15339370)
#define CJKALAJDAFN_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x15339170)
#define CJKALAJDAFN__CTOR_OFFSET UNITYSDK_OFFSET(0x15339470)

inline static constexpr unsigned int CJKALAJDAFN_TypeDefinitionIndex = 60941;

class CJKALAJDAFN : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::Transform* OOENDNEIFDO; // 0x18
	::UnityEngine::GameObject* IEMPKFNGAOB; // 0x20
	::MoleMole::MonoGamepadSelectable* JKGFAGMDLHL; // 0x28
	::FGCOIBFFCHB* CBCKLGMHAEA; // 0x30
	::LGINJIKKBJA* ADDNFIECFDO; // 0x38
	::MoleMole::UIGeneralButtonController* ONFPPIDAEEL; // 0x40
	::FGCOIBFFCHB* LHHPCKBBNMO; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJKALAJDAFN__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CJKALAJDAFN_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CJKALAJDAFN_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJKALAJDAFN_KGEBDLGBGNM_OFFSET))(this);
	}
};
