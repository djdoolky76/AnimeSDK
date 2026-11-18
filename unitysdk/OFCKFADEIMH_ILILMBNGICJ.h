#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class OFCKFADEIMH_JNBGBNBGHKL;
namespace MoleMole::Config { class ConfigInteractEntry; }

#define OFCKFADEIMH_ILILMBNGICJ_OKKMJKOAIKG_OFFSET UNITYSDK_OFFSET(0x15FDA3E0)
#define OFCKFADEIMH_ILILMBNGICJ__CTOR_OFFSET UNITYSDK_OFFSET(0x15FDA3D0)

inline static constexpr unsigned int OFCKFADEIMH_ILILMBNGICJ_TypeDefinitionIndex = 59239;

class OFCKFADEIMH_ILILMBNGICJ : public ::System::Object
{
public:
	::OFCKFADEIMH_JNBGBNBGHKL* FGBNBFHOKAA; // 0x10
	::Foundation::AssetPath OIIHCACKLHD; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFCKFADEIMH_ILILMBNGICJ__CTOR_OFFSET))(this);
	}

	::System::Void OKKMJKOAIKG(::MoleMole::Config::ConfigInteractEntry* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigInteractEntry*))((::PBYTE)hIl2Cpp + OFCKFADEIMH_ILILMBNGICJ_OKKMJKOAIKG_OFFSET))(this, DFMKILICPFB);
	}
};
