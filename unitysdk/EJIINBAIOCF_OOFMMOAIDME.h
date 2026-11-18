#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EJIINBAIOCF;
namespace MoleMole { class UIInLevelEavesdropChildWindowController; }
namespace System { class Action; }

#define EJIINBAIOCF_OOFMMOAIDME_NJKNHBAKPMH_OFFSET UNITYSDK_OFFSET(0x1354DEB0)
#define EJIINBAIOCF_OOFMMOAIDME__CTOR_OFFSET UNITYSDK_OFFSET(0x1354DEA0)

inline static constexpr unsigned int EJIINBAIOCF_OOFMMOAIDME_TypeDefinitionIndex = 59041;

class EJIINBAIOCF_OOFMMOAIDME : public ::System::Object
{
public:
	::MoleMole::UIInLevelEavesdropChildWindowController* JOLDOMEIKEF; // 0x10
	::System::Action* NJJPAJNJFOJ; // 0x18
	::EJIINBAIOCF* KLHPEBKNIFB; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJIINBAIOCF_OOFMMOAIDME__CTOR_OFFSET))(this);
	}

	::System::Void NJKNHBAKPMH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJIINBAIOCF_OOFMMOAIDME_NJKNHBAKPMH_OFFSET))(this);
	}
};
