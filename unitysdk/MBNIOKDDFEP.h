#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIWidgetController; }

#define MBNIOKDDFEP__CTOR_OFFSET UNITYSDK_OFFSET(0x12D4E9F0)

inline static constexpr unsigned int MBNIOKDDFEP_TypeDefinitionIndex = 93165;

class MBNIOKDDFEP : public ::System::Object
{
public:
	::MoleMole::UIWidgetController* MCHMIFCCDJG; // 0x10
	::MoleMole::UIWidgetController* CBOFKOPLPAL; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBNIOKDDFEP__CTOR_OFFSET))(this);
	}
};
