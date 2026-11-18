#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ItemDropEffectScriptConfig; }
namespace System { class Action; }

#define NHNONMCLLPK_AJJBJDPEDHI_OKKMJKOAIKG_OFFSET UNITYSDK_OFFSET(0xE581290)
#define NHNONMCLLPK_AJJBJDPEDHI__CTOR_OFFSET UNITYSDK_OFFSET(0xE581280)

inline static constexpr unsigned int NHNONMCLLPK_AJJBJDPEDHI_TypeDefinitionIndex = 92582;

class NHNONMCLLPK_AJJBJDPEDHI : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHNONMCLLPK_AJJBJDPEDHI__CTOR_OFFSET))(this);
	}

	::System::Void OKKMJKOAIKG(::MoleMole::Config::ItemDropEffectScriptConfig* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ItemDropEffectScriptConfig*))((::PBYTE)hIl2Cpp + NHNONMCLLPK_AJJBJDPEDHI_OKKMJKOAIKG_OFFSET))(this, DFMKILICPFB);
	}
};
