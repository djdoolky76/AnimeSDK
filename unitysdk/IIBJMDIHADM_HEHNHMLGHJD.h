#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigBuddyUISetting; }
namespace System { class Action; }

#define IIBJMDIHADM_HEHNHMLGHJD_OKKMJKOAIKG_OFFSET UNITYSDK_OFFSET(0xB935A70)
#define IIBJMDIHADM_HEHNHMLGHJD__CTOR_OFFSET UNITYSDK_OFFSET(0xB935A60)

inline static constexpr unsigned int IIBJMDIHADM_HEHNHMLGHJD_TypeDefinitionIndex = 44197;

class IIBJMDIHADM_HEHNHMLGHJD : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIBJMDIHADM_HEHNHMLGHJD__CTOR_OFFSET))(this);
	}

	::System::Void OKKMJKOAIKG(::MoleMole::ConfigBuddyUISetting* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigBuddyUISetting*))((::PBYTE)hIl2Cpp + IIBJMDIHADM_HEHNHMLGHJD_OKKMJKOAIKG_OFFSET))(this, DFMKILICPFB);
	}
};
