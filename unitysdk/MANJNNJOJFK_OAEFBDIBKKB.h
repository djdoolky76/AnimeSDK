#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigBubbleGroup; }
namespace System { class Action; }

#define MANJNNJOJFK_OAEFBDIBKKB_OKKMJKOAIKG_OFFSET UNITYSDK_OFFSET(0x13D13890)
#define MANJNNJOJFK_OAEFBDIBKKB__CTOR_OFFSET UNITYSDK_OFFSET(0x13D13880)

inline static constexpr unsigned int MANJNNJOJFK_OAEFBDIBKKB_TypeDefinitionIndex = 43562;

class MANJNNJOJFK_OAEFBDIBKKB : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MANJNNJOJFK_OAEFBDIBKKB__CTOR_OFFSET))(this);
	}

	::System::Void OKKMJKOAIKG(::MoleMole::ConfigBubbleGroup* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigBubbleGroup*))((::PBYTE)hIl2Cpp + MANJNNJOJFK_OAEFBDIBKKB_OKKMJKOAIKG_OFFSET))(this, DFMKILICPFB);
	}
};
