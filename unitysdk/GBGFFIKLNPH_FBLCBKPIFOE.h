#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigUIVirtualJoystick; }
namespace System { class Action; }

#define GBGFFIKLNPH_FBLCBKPIFOE_OKKMJKOAIKG_OFFSET UNITYSDK_OFFSET(0x10EE08A0)
#define GBGFFIKLNPH_FBLCBKPIFOE__CTOR_OFFSET UNITYSDK_OFFSET(0x10EE0890)

inline static constexpr unsigned int GBGFFIKLNPH_FBLCBKPIFOE_TypeDefinitionIndex = 41446;

class GBGFFIKLNPH_FBLCBKPIFOE : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBGFFIKLNPH_FBLCBKPIFOE__CTOR_OFFSET))(this);
	}

	::System::Void OKKMJKOAIKG(::MoleMole::Config::ConfigUIVirtualJoystick* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIVirtualJoystick*))((::PBYTE)hIl2Cpp + GBGFFIKLNPH_FBLCBKPIFOE_OKKMJKOAIKG_OFFSET))(this, DFMKILICPFB);
	}
};
