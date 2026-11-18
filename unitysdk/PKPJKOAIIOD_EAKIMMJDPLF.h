#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigUIWeapon; }
namespace System { class Action; }

#define PKPJKOAIIOD_EAKIMMJDPLF_OKKMJKOAIKG_OFFSET UNITYSDK_OFFSET(0x150D3FD0)
#define PKPJKOAIIOD_EAKIMMJDPLF__CTOR_OFFSET UNITYSDK_OFFSET(0x150D3FC0)

inline static constexpr unsigned int PKPJKOAIIOD_EAKIMMJDPLF_TypeDefinitionIndex = 39194;

class PKPJKOAIIOD_EAKIMMJDPLF : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKPJKOAIIOD_EAKIMMJDPLF__CTOR_OFFSET))(this);
	}

	::System::Void OKKMJKOAIKG(::MoleMole::Config::ConfigUIWeapon* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIWeapon*))((::PBYTE)hIl2Cpp + PKPJKOAIIOD_EAKIMMJDPLF_OKKMJKOAIKG_OFFSET))(this, DFMKILICPFB);
	}
};
