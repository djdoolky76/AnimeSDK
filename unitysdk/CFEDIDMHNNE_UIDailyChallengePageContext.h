#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define CFEDIDMHNNE_UIDAILYCHALLENGEPAGECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1478DAB0)

inline static constexpr unsigned int CFEDIDMHNNE_UIDailyChallengePageContext_TypeDefinitionIndex = 75478;

class CFEDIDMHNNE_UIDailyChallengePageContext : public ::MoleMole::UIControllerContextBase
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFEDIDMHNNE_UIDAILYCHALLENGEPAGECONTEXT__CTOR_OFFSET))(this);
	}
};
