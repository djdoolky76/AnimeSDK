#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BIKHOIPCKPC_KJBNPPNIMJC;
namespace MoleMole { class UIHollowPushBoxGame3DModelController; }

#define BIKHOIPCKPC_ENOHKMIIGHK_ANKMCFFKIJF_OFFSET UNITYSDK_OFFSET(0x14C46A70)
#define BIKHOIPCKPC_ENOHKMIIGHK__CTOR_OFFSET UNITYSDK_OFFSET(0x14C46A60)

inline static constexpr unsigned int BIKHOIPCKPC_ENOHKMIIGHK_TypeDefinitionIndex = 46385;

class BIKHOIPCKPC_ENOHKMIIGHK : public ::System::Object
{
public:
	::BIKHOIPCKPC_KJBNPPNIMJC* FGBNBFHOKAA; // 0x10
	::MoleMole::UIHollowPushBoxGame3DModelController* ICHPOADPNEG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIKHOIPCKPC_ENOHKMIIGHK__CTOR_OFFSET))(this);
	}

	::System::Void ANKMCFFKIJF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIKHOIPCKPC_ENOHKMIIGHK_ANKMCFFKIJF_OFFSET))(this);
	}
};
