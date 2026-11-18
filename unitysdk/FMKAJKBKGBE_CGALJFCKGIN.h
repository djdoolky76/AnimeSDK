#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class MonoSurfConfig; }
namespace System { class Action; }

#define FMKAJKBKGBE_CGALJFCKGIN_OKKMJKOAIKG_OFFSET UNITYSDK_OFFSET(0x142AADD0)
#define FMKAJKBKGBE_CGALJFCKGIN__CTOR_OFFSET UNITYSDK_OFFSET(0x142AADC0)

inline static constexpr unsigned int FMKAJKBKGBE_CGALJFCKGIN_TypeDefinitionIndex = 90973;

class FMKAJKBKGBE_CGALJFCKGIN : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMKAJKBKGBE_CGALJFCKGIN__CTOR_OFFSET))(this);
	}

	::System::Void OKKMJKOAIKG(::MoleMole::Config::MonoSurfConfig* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::MonoSurfConfig*))((::PBYTE)hIl2Cpp + FMKAJKBKGBE_CGALJFCKGIN_OKKMJKOAIKG_OFFSET))(this, DFMKILICPFB);
	}
};
