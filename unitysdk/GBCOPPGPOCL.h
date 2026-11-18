#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace MoleMole { class UIGeneralTipsWidgetController; }

#define GBCOPPGPOCL__CTOR_OFFSET UNITYSDK_OFFSET(0x179C7F40)

inline static constexpr unsigned int GBCOPPGPOCL_TypeDefinitionIndex = 64516;

class GBCOPPGPOCL : public ::System::Object
{
public:
	::MoleMole::UIGeneralTipsWidgetController* JHLMDEFFGKD; // 0x10
	::UnityEngine::Vector2 IACKHFCLPJI; // 0x18
	::UnityEngine::Vector2 AKAGDEFAGJA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBCOPPGPOCL__CTOR_OFFSET))(this);
	}
};
