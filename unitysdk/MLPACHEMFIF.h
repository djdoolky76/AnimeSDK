#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIInLevelPauseChallengeRowWidgetController; }
namespace System { class String; }

#define MLPACHEMFIF_PJCLGHJICKI_OFFSET UNITYSDK_OFFSET(0x12172B50)
#define MLPACHEMFIF__CTOR_OFFSET UNITYSDK_OFFSET(0x12172CE0)

inline static constexpr unsigned int MLPACHEMFIF_TypeDefinitionIndex = 73365;

class MLPACHEMFIF : public ::System::Object
{
public:
	::System::String* BBGLMKFJMCB; // 0x10
	::System::Boolean CGFLLPOCDJM; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLPACHEMFIF__CTOR_OFFSET))(this);
	}

	::System::Void PJCLGHJICKI(::MoleMole::UIInLevelPauseChallengeRowWidgetController* DLABBNHKHKK)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIInLevelPauseChallengeRowWidgetController*))((::PBYTE)hIl2Cpp + MLPACHEMFIF_PJCLGHJICKI_OFFSET))(this, DLABBNHKHKK);
	}
};
