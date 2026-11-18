#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class NIILFPLEBHA_JBPMOAAEBPC;
namespace MoleMole::Config { class ConfigEntitySkills; }

#define NIILFPLEBHA_KNLFOLBEKIF_FKINOAPDNBH_OFFSET UNITYSDK_OFFSET(0xE75E790)
#define NIILFPLEBHA_KNLFOLBEKIF__CTOR_OFFSET UNITYSDK_OFFSET(0xE75E780)

inline static constexpr unsigned int NIILFPLEBHA_KNLFOLBEKIF_TypeDefinitionIndex = 79071;

class NIILFPLEBHA_KNLFOLBEKIF : public ::System::Object
{
public:
	::NIILFPLEBHA_JBPMOAAEBPC* FGBNBFHOKAA; // 0x10
	::Foundation::AssetPath OIIHCACKLHD; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIILFPLEBHA_KNLFOLBEKIF__CTOR_OFFSET))(this);
	}

	::System::Void FKINOAPDNBH(::MoleMole::Config::ConfigEntitySkills* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntitySkills*))((::PBYTE)hIl2Cpp + NIILFPLEBHA_KNLFOLBEKIF_FKINOAPDNBH_OFFSET))(this, DFMKILICPFB);
	}
};
