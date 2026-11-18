#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigGlobalSoundActionIndex; }
namespace System { class Action; }

#define BGJCOEKKMBG_EEBGNNCMFHL_OKKMJKOAIKG_OFFSET UNITYSDK_OFFSET(0x18675370)
#define BGJCOEKKMBG_EEBGNNCMFHL__CTOR_OFFSET UNITYSDK_OFFSET(0x18675360)

inline static constexpr unsigned int BGJCOEKKMBG_EEBGNNCMFHL_TypeDefinitionIndex = 46539;

class BGJCOEKKMBG_EEBGNNCMFHL : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGJCOEKKMBG_EEBGNNCMFHL__CTOR_OFFSET))(this);
	}

	::System::Void OKKMJKOAIKG(::MoleMole::Config::ConfigGlobalSoundActionIndex* PAMJIOAIBEJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigGlobalSoundActionIndex*))((::PBYTE)hIl2Cpp + BGJCOEKKMBG_EEBGNNCMFHL_OKKMJKOAIKG_OFFSET))(this, PAMJIOAIBEJ);
	}
};
