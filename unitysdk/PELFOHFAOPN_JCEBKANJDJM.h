#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigUIStoreCamera; }
namespace System { class Action; }

#define PELFOHFAOPN_JCEBKANJDJM_OKKMJKOAIKG_OFFSET UNITYSDK_OFFSET(0x18465C80)
#define PELFOHFAOPN_JCEBKANJDJM__CTOR_OFFSET UNITYSDK_OFFSET(0x18465C70)

inline static constexpr unsigned int PELFOHFAOPN_JCEBKANJDJM_TypeDefinitionIndex = 91638;

class PELFOHFAOPN_JCEBKANJDJM : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PELFOHFAOPN_JCEBKANJDJM__CTOR_OFFSET))(this);
	}

	::System::Void OKKMJKOAIKG(::MoleMole::ConfigUIStoreCamera* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigUIStoreCamera*))((::PBYTE)hIl2Cpp + PELFOHFAOPN_JCEBKANJDJM_OKKMJKOAIKG_OFFSET))(this, DFMKILICPFB);
	}
};
