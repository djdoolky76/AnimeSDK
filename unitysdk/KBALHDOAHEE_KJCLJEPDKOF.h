#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class KBALHDOAHEE_CGNJFBKMLEF;
namespace MoleMole::Config { class ConfigEntityTimeSlows; }

#define KBALHDOAHEE_KJCLJEPDKOF_DKCDNFGDGLC_OFFSET UNITYSDK_OFFSET(0x1948A740)
#define KBALHDOAHEE_KJCLJEPDKOF__CTOR_OFFSET UNITYSDK_OFFSET(0x1948A730)

inline static constexpr unsigned int KBALHDOAHEE_KJCLJEPDKOF_TypeDefinitionIndex = 44928;

class KBALHDOAHEE_KJCLJEPDKOF : public ::System::Object
{
public:
	::KBALHDOAHEE_CGNJFBKMLEF* FGBNBFHOKAA; // 0x10
	::Foundation::AssetPath OIIHCACKLHD; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBALHDOAHEE_KJCLJEPDKOF__CTOR_OFFSET))(this);
	}

	::System::Void DKCDNFGDGLC(::MoleMole::Config::ConfigEntityTimeSlows* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityTimeSlows*))((::PBYTE)hIl2Cpp + KBALHDOAHEE_KJCLJEPDKOF_DKCDNFGDGLC_OFFSET))(this, DFMKILICPFB);
	}
};
