#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigTeamEntity; }
namespace System { class Action; }

#define LDAIPDJIFFP_JIIPEJCLIBN_OKKMJKOAIKG_OFFSET UNITYSDK_OFFSET(0xD41F970)
#define LDAIPDJIFFP_JIIPEJCLIBN__CTOR_OFFSET UNITYSDK_OFFSET(0xD41F960)

inline static constexpr unsigned int LDAIPDJIFFP_JIIPEJCLIBN_TypeDefinitionIndex = 90834;

class LDAIPDJIFFP_JIIPEJCLIBN : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDAIPDJIFFP_JIIPEJCLIBN__CTOR_OFFSET))(this);
	}

	::System::Void OKKMJKOAIKG(::MoleMole::Config::ConfigTeamEntity* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigTeamEntity*))((::PBYTE)hIl2Cpp + LDAIPDJIFFP_JIIPEJCLIBN_OKKMJKOAIKG_OFFSET))(this, DFMKILICPFB);
	}
};
