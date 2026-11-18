#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigEntityUnderlyingAnimEvents; }

#define GHAEAIEPJBC_KOLIOEOIOOC_HOLMEPGEFBO_OFFSET UNITYSDK_OFFSET(0x13DD6D70)
#define GHAEAIEPJBC_KOLIOEOIOOC__CTOR_OFFSET UNITYSDK_OFFSET(0x13DD6D60)

inline static constexpr unsigned int GHAEAIEPJBC_KOLIOEOIOOC_TypeDefinitionIndex = 57277;

class GHAEAIEPJBC_KOLIOEOIOOC : public ::System::Object
{
public:
	::Foundation::AssetPath PJNJFACFJHP; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHAEAIEPJBC_KOLIOEOIOOC__CTOR_OFFSET))(this);
	}

	::System::Void HOLMEPGEFBO(::MoleMole::Config::ConfigEntityUnderlyingAnimEvents* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityUnderlyingAnimEvents*))((::PBYTE)hIl2Cpp + GHAEAIEPJBC_KOLIOEOIOOC_HOLMEPGEFBO_OFFSET))(this, DFMKILICPFB);
	}
};
