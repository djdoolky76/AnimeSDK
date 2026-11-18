#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IOOIHHOJOPI.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UISlider; }

#define NINPNGLHIMD_EFKGNFCEENK_OFFSET UNITYSDK_OFFSET(0x12896AF0)
#define NINPNGLHIMD_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x128969E0)
#define NINPNGLHIMD__CTOR_OFFSET UNITYSDK_OFFSET(0x12896D60)

inline static constexpr unsigned int NINPNGLHIMD_TypeDefinitionIndex = 80344;

class NINPNGLHIMD : public ::IOOIHHOJOPI
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* EEFICEIDCFE; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* DBBDKLENOKD; // 0x30
	::UnityEngine::UI::Extension::UISlider* IKOFJEHPPAN; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* JFNCJHAGLLI; // 0x40
	::UnityEngine::RectTransform* AMEEMEPHGEL; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NINPNGLHIMD__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NINPNGLHIMD_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void EFKGNFCEENK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NINPNGLHIMD_EFKGNFCEENK_OFFSET))(this);
	}
};
