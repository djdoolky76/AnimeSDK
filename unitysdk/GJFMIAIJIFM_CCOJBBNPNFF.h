#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigUIFish; }
namespace System { class Action; }

#define GJFMIAIJIFM_CCOJBBNPNFF_OKKMJKOAIKG_OFFSET UNITYSDK_OFFSET(0x10FE4AA0)
#define GJFMIAIJIFM_CCOJBBNPNFF__CTOR_OFFSET UNITYSDK_OFFSET(0x10FE4A90)

inline static constexpr unsigned int GJFMIAIJIFM_CCOJBBNPNFF_TypeDefinitionIndex = 41651;

class GJFMIAIJIFM_CCOJBBNPNFF : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJFMIAIJIFM_CCOJBBNPNFF__CTOR_OFFSET))(this);
	}

	::System::Void OKKMJKOAIKG(::MoleMole::ConfigUIFish* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigUIFish*))((::PBYTE)hIl2Cpp + GJFMIAIJIFM_CCOJBBNPNFF_OKKMJKOAIKG_OFFSET))(this, DFMKILICPFB);
	}
};
