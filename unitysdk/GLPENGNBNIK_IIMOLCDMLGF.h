#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class GLPENGNBNIK_FKPNNGFMHEM;
namespace MoleMole::Config { class ConfigAbilityTargetData; }

#define GLPENGNBNIK_IIMOLCDMLGF_OKKMJKOAIKG_OFFSET UNITYSDK_OFFSET(0x10FEAA70)
#define GLPENGNBNIK_IIMOLCDMLGF__CTOR_OFFSET UNITYSDK_OFFSET(0x10FEAA60)

inline static constexpr unsigned int GLPENGNBNIK_IIMOLCDMLGF_TypeDefinitionIndex = 86955;

class GLPENGNBNIK_IIMOLCDMLGF : public ::System::Object
{
public:
	::GLPENGNBNIK_FKPNNGFMHEM* FGBNBFHOKAA; // 0x10
	::Foundation::AssetPath OIIHCACKLHD; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLPENGNBNIK_IIMOLCDMLGF__CTOR_OFFSET))(this);
	}

	::System::Void OKKMJKOAIKG(::MoleMole::Config::ConfigAbilityTargetData* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigAbilityTargetData*))((::PBYTE)hIl2Cpp + GLPENGNBNIK_IIMOLCDMLGF_OKKMJKOAIKG_OFFSET))(this, DFMKILICPFB);
	}
};
