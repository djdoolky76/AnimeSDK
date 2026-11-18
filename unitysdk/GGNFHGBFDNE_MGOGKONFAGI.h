#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class TagLibraryConfig; }
namespace System { class Action; }

#define GGNFHGBFDNE_MGOGKONFAGI_OKKMJKOAIKG_OFFSET UNITYSDK_OFFSET(0x15F1E2E0)
#define GGNFHGBFDNE_MGOGKONFAGI__CTOR_OFFSET UNITYSDK_OFFSET(0x15F1E2D0)

inline static constexpr unsigned int GGNFHGBFDNE_MGOGKONFAGI_TypeDefinitionIndex = 48437;

class GGNFHGBFDNE_MGOGKONFAGI : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGNFHGBFDNE_MGOGKONFAGI__CTOR_OFFSET))(this);
	}

	::System::Void OKKMJKOAIKG(::MoleMole::Config::TagLibraryConfig* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::TagLibraryConfig*))((::PBYTE)hIl2Cpp + GGNFHGBFDNE_MGOGKONFAGI_OKKMJKOAIKG_OFFSET))(this, DFMKILICPFB);
	}
};
