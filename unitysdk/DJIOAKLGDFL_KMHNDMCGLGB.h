#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class DynamicGadgetSubsystem; }
namespace System { class Action; }

#define DJIOAKLGDFL_KMHNDMCGLGB_CNCFLFDLGLP_OFFSET UNITYSDK_OFFSET(0x148AC8D0)
#define DJIOAKLGDFL_KMHNDMCGLGB_EMHJBFPCKEJ_OFFSET UNITYSDK_OFFSET(0x148AC8E0)
#define DJIOAKLGDFL_KMHNDMCGLGB__CTOR_OFFSET UNITYSDK_OFFSET(0x148AC8C0)

inline static constexpr unsigned int DJIOAKLGDFL_KMHNDMCGLGB_TypeDefinitionIndex = 57639;

class DJIOAKLGDFL_KMHNDMCGLGB : public ::System::Object
{
public:
	::MoleMole::DynamicGadgetSubsystem* HIIBPEFJLII; // 0x10
	::System::Action* IFKOKLCPMNF; // 0x18
	::System::Action* EDNJGMKPFHG; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJIOAKLGDFL_KMHNDMCGLGB__CTOR_OFFSET))(this);
	}

	::System::Void CNCFLFDLGLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJIOAKLGDFL_KMHNDMCGLGB_CNCFLFDLGLP_OFFSET))(this);
	}

	::System::Void EMHJBFPCKEJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJIOAKLGDFL_KMHNDMCGLGB_EMHJBFPCKEJ_OFFSET))(this);
	}
};
