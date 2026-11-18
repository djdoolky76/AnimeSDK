#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define FFDDPCDOMBJ_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x14293160)
#define FFDDPCDOMBJ_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x14293070)
#define FFDDPCDOMBJ_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x14292EA0)
#define FFDDPCDOMBJ__CTOR_OFFSET UNITYSDK_OFFSET(0x14293150)

inline static constexpr unsigned int FFDDPCDOMBJ_TypeDefinitionIndex = 47066;

class FFDDPCDOMBJ : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::GameObject* EHJGHDILEEK; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* AMEEMEPHGEL; // 0x20
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* BJBGIMJKCDA; // 0x30
	::LGINJIKKBJA* PGGFLBDFIFI; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFDDPCDOMBJ__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FFDDPCDOMBJ_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FFDDPCDOMBJ_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFDDPCDOMBJ_KGEBDLGBGNM_OFFSET))(this);
	}
};
