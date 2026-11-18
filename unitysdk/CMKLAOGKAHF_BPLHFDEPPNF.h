#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigMultiplayerUI; }
namespace System { class Action; }

#define CMKLAOGKAHF_BPLHFDEPPNF_OKKMJKOAIKG_OFFSET UNITYSDK_OFFSET(0x13E13A50)
#define CMKLAOGKAHF_BPLHFDEPPNF__CTOR_OFFSET UNITYSDK_OFFSET(0x13E13A40)

inline static constexpr unsigned int CMKLAOGKAHF_BPLHFDEPPNF_TypeDefinitionIndex = 88834;

class CMKLAOGKAHF_BPLHFDEPPNF : public ::System::Object
{
public:
	::Foundation::AssetPath PJNJFACFJHP; // 0x10
	::System::Action* IBNICCGMILF; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMKLAOGKAHF_BPLHFDEPPNF__CTOR_OFFSET))(this);
	}

	::System::Void OKKMJKOAIKG(::MoleMole::Config::ConfigMultiplayerUI* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigMultiplayerUI*))((::PBYTE)hIl2Cpp + CMKLAOGKAHF_BPLHFDEPPNF_OKKMJKOAIKG_OFFSET))(this, DFMKILICPFB);
	}
};
