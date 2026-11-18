#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FGCOIBFFCHB;
class UIControllerExtensionData;
namespace System { class String; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define NEGAMDDMCKM_AHLMNDDABDG_OFFSET UNITYSDK_OFFSET(0x12FE01E0)
#define NEGAMDDMCKM_CFKCFHFKMFO_OFFSET UNITYSDK_OFFSET(0x12FE0A20)
#define NEGAMDDMCKM__CTOR_OFFSET UNITYSDK_OFFSET(0x12FE01D0)

inline static constexpr unsigned int NEGAMDDMCKM_TypeDefinitionIndex = 67199;

class NEGAMDDMCKM : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEGAMDDMCKM__CTOR_OFFSET))(this);
	}

	static ::System::Void AHLMNDDABDG(::FGCOIBFFCHB* JNIAEBKPLBP, ::System::String* GHENAOABMOL)
	{
		return ((::System::Void(*)(::FGCOIBFFCHB*, ::System::String*))((::PBYTE)hIl2Cpp + NEGAMDDMCKM_AHLMNDDABDG_OFFSET))(JNIAEBKPLBP, GHENAOABMOL);
	}

	static ::System::Void CFKCFHFKMFO(::UnityEngine::UI::Extension::UILocalizationText* FCCLIEJAKLI, ::System::Boolean GNCEHAIFJCJ, ::UIControllerExtensionData* FCDCLMEHNMF)
	{
		return ((::System::Void(*)(::UnityEngine::UI::Extension::UILocalizationText*, ::System::Boolean, ::UIControllerExtensionData*))((::PBYTE)hIl2Cpp + NEGAMDDMCKM_CFKCFHFKMFO_OFFSET))(FCCLIEJAKLI, GNCEHAIFJCJ, FCDCLMEHNMF);
	}
};
