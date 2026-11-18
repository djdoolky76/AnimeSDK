#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIInLevelPauseChallengeRowWidgetController; }

#define OKEKBNAEHAG_PJCLGHJICKI_OFFSET UNITYSDK_OFFSET(0xE15E410)
#define OKEKBNAEHAG__CTOR_OFFSET UNITYSDK_OFFSET(0xE15E830)

inline static constexpr unsigned int OKEKBNAEHAG_TypeDefinitionIndex = 67224;

class OKEKBNAEHAG : public ::System::Object
{
public:
	::System::Int32 DEMJJFCAFEI; // 0x10
	::System::Int32 AOCOIDIMLIH; // 0x14
	::System::Boolean ICNHOHOBBNN; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKEKBNAEHAG__CTOR_OFFSET))(this);
	}

	::System::Void PJCLGHJICKI(::MoleMole::UIInLevelPauseChallengeRowWidgetController* DLABBNHKHKK)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIInLevelPauseChallengeRowWidgetController*))((::PBYTE)hIl2Cpp + OKEKBNAEHAG_PJCLGHJICKI_OFFSET))(this, DLABBNHKHKK);
	}
};
