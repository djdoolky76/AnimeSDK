#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MLJGPKJJPIL.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define KJMCHNKFDBK_IMDMHBCKJLE_EFKGNFCEENK_OFFSET UNITYSDK_OFFSET(0x1765FA40)
#define KJMCHNKFDBK_IMDMHBCKJLE_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1765F970)
#define KJMCHNKFDBK_IMDMHBCKJLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1765FBF0)

inline static constexpr unsigned int KJMCHNKFDBK_IMDMHBCKJLE_TypeDefinitionIndex = 70322;

class KJMCHNKFDBK_IMDMHBCKJLE : public ::MLJGPKJJPIL
{
public:
	::UnityEngine::GameObject* FPHCFLBCHPG; // 0x28
	::UnityEngine::GameObject* AHBPPMAMJPE; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* EPDJDKJFBHP; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJMCHNKFDBK_IMDMHBCKJLE__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KJMCHNKFDBK_IMDMHBCKJLE_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void EFKGNFCEENK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJMCHNKFDBK_IMDMHBCKJLE_EFKGNFCEENK_OFFSET))(this);
	}
};
