#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigSwitchTeamActivity; }
namespace System { class Action; }

#define NMEOBOGLNNE_DMJFENNPFAN_OKKMJKOAIKG_OFFSET UNITYSDK_OFFSET(0xE765BA0)
#define NMEOBOGLNNE_DMJFENNPFAN__CTOR_OFFSET UNITYSDK_OFFSET(0xE765B90)

inline static constexpr unsigned int NMEOBOGLNNE_DMJFENNPFAN_TypeDefinitionIndex = 41746;

class NMEOBOGLNNE_DMJFENNPFAN : public ::System::Object
{
public:
	::Foundation::AssetPath PJNJFACFJHP; // 0x10
	::System::Action* IBNICCGMILF; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMEOBOGLNNE_DMJFENNPFAN__CTOR_OFFSET))(this);
	}

	::System::Void OKKMJKOAIKG(::MoleMole::Config::ConfigSwitchTeamActivity* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigSwitchTeamActivity*))((::PBYTE)hIl2Cpp + NMEOBOGLNNE_DMJFENNPFAN_OKKMJKOAIKG_OFFSET))(this, DFMKILICPFB);
	}
};
