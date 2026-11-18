#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGeneralShareTipPopWindowController_Context; }

#define LDNBMAGCDAP_HCEMMAFDDEG_HIIOHBDCEOI_OFFSET UNITYSDK_OFFSET(0x15181E90)
#define LDNBMAGCDAP_HCEMMAFDDEG__CTOR_OFFSET UNITYSDK_OFFSET(0x15181E80)

inline static constexpr unsigned int LDNBMAGCDAP_HCEMMAFDDEG_TypeDefinitionIndex = 87433;

class LDNBMAGCDAP_HCEMMAFDDEG : public ::System::Object
{
public:
	::MoleMole::UIGeneralShareTipPopWindowController_Context* AAOCANGHBDG; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDNBMAGCDAP_HCEMMAFDDEG__CTOR_OFFSET))(this);
	}

	::System::Void HIIOHBDCEOI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDNBMAGCDAP_HCEMMAFDDEG_HIIOHBDCEOI_OFFSET))(this);
	}
};
