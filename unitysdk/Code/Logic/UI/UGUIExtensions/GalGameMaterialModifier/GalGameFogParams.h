#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EKCECHFIMHO.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

#define CODE_LOGIC_UI_UGUIEXTENSIONS_GALGAMEMATERIALMODIFIER_GALGAMEFOGPARAMS_CAGLGEHPMEC_OFFSET UNITYSDK_OFFSET(0x15A265D0)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_GALGAMEMATERIALMODIFIER_GALGAMEFOGPARAMS_CFDBGCPDOGA_OFFSET UNITYSDK_OFFSET(0x15A26530)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_GALGAMEMATERIALMODIFIER_GALGAMEFOGPARAMS_LHAJNJOOMKA_OFFSET UNITYSDK_OFFSET(0x15A26580)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_GALGAMEMATERIALMODIFIER_GALGAMEFOGPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0x15A26510)

namespace Code::Logic::UI::UGUIExtensions::GalGameMaterialModifier
{
	inline static constexpr unsigned int GalGameFogParams_TypeDefinitionIndex = 89361;

	class GalGameFogParams : public ::System::Object
	{
	public:
		::EKCECHFIMHO useFogType; // 0x10
		::System::Single fogStartDistance; // 0x14
		::System::Single fogEndDistance; // 0x18
		::System::Single fogDensity; // 0x1C
		::UnityEngine::Color fogColor; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CODE_LOGIC_UI_UGUIEXTENSIONS_GALGAMEMATERIALMODIFIER_GALGAMEFOGPARAMS__CTOR_OFFSET))(this);
		}

		::System::Boolean CFDBGCPDOGA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CODE_LOGIC_UI_UGUIEXTENSIONS_GALGAMEMATERIALMODIFIER_GALGAMEFOGPARAMS_CFDBGCPDOGA_OFFSET))(this);
		}

		::System::Boolean LHAJNJOOMKA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CODE_LOGIC_UI_UGUIEXTENSIONS_GALGAMEMATERIALMODIFIER_GALGAMEFOGPARAMS_LHAJNJOOMKA_OFFSET))(this);
		}

		::System::Boolean CAGLGEHPMEC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CODE_LOGIC_UI_UGUIEXTENSIONS_GALGAMEMATERIALMODIFIER_GALGAMEFOGPARAMS_CAGLGEHPMEC_OFFSET))(this);
		}
	};
}
