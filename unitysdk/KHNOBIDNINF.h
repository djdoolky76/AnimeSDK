#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIInLevelPauseBattleInfoWidgetController_EChallengeFinishState.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define KHNOBIDNINF__CTOR_OFFSET UNITYSDK_OFFSET(0x1299AE10)

inline static constexpr unsigned int KHNOBIDNINF_TypeDefinitionIndex = 84092;

class KHNOBIDNINF : public ::System::Object
{
public:
	::System::String* BJBGIMJKCDA; // 0x10
	::System::Int32 FHOPFLFMMMP; // 0x18
	::System::Int32 MFKBCHAJOGK; // 0x1C
	::MoleMole::UIInLevelPauseBattleInfoWidgetController_EChallengeFinishState OCOJFKMOKMK; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHNOBIDNINF__CTOR_OFFSET))(this);
	}
};
