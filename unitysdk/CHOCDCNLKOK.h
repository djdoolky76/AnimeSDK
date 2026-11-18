#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define CHOCDCNLKOK_OMNIPHDKFBF_OFFSET UNITYSDK_OFFSET(0x159DA2B0)

inline static constexpr unsigned int CHOCDCNLKOK_TypeDefinitionIndex = 82223;

class CHOCDCNLKOK : public ::System::Object
{
public:
	static ::System::Single OMNIPHDKFBF(::UnityEngine::Vector2 KEENPNJBNNK, ::UnityEngine::Vector2 LJCOAFLHPMD, ::UnityEngine::Vector2 BDBFGEFOJEJ, ::System::Single IAKPGBCAAKM, ::System::Single LEFJHKPHIHL, ::System::Single IJKOLMELBBC)
	{
		return ((::System::Single(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CHOCDCNLKOK_OMNIPHDKFBF_OFFSET))(KEENPNJBNNK, LJCOAFLHPMD, BDBFGEFOJEJ, IAKPGBCAAKM, LEFJHKPHIHL, IJKOLMELBBC);
	}
};
