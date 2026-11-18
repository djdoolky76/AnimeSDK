#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define MOLEMOLE_UISNAKEENDINGANIMSCRIPT_GPAPHCKIDBN_IIIFGPMKJPM_OFFSET UNITYSDK_OFFSET(0x9B66B0)
#define MOLEMOLE_UISNAKEENDINGANIMSCRIPT_GPAPHCKIDBN__CTOR_OFFSET UNITYSDK_OFFSET(0x9B6690)

namespace MoleMole
{
	inline static constexpr unsigned int UISnakeEndingAnimScript_GPAPHCKIDBN_TypeDefinitionIndex = 96639;

	struct alignas(8) UISnakeEndingAnimScript_GPAPHCKIDBN
	{
		::UnityEngine::UI::Extension::UILocalizationText* APGMDFGJFAH; // 0x10
		::System::String* NBLAJNHBLCM; // 0x18
		::System::String* LBMKCLOPGDL; // 0x20
		::System::Boolean JBIBFJGINPB; // 0x28

		::System::Void _ctor(::UnityEngine::UI::Extension::UILocalizationText* FCCLIEJAKLI, ::System::String* NBLAJNHBLCM, ::System::String* LBMKCLOPGDL, ::System::Boolean OFIIEPEFDGN)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UILocalizationText*, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UISNAKEENDINGANIMSCRIPT_GPAPHCKIDBN__CTOR_OFFSET))(this, FCCLIEJAKLI, NBLAJNHBLCM, LBMKCLOPGDL, OFIIEPEFDGN);
		}

		::System::Void IIIFGPMKJPM(::System::Boolean DCFEKPONCKN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UISNAKEENDINGANIMSCRIPT_GPAPHCKIDBN_IIIFGPMKJPM_OFFSET))(this, DCFEKPONCKN);
		}
	};
}
