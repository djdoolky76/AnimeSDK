#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigIndicatedLights; }

#define IGGKIPJBEEF_GNEFBIKGHLO_FLIAEJGDMLI_OFFSET UNITYSDK_OFFSET(0x15C0B880)
#define IGGKIPJBEEF_GNEFBIKGHLO_HOLMEPGEFBO_OFFSET UNITYSDK_OFFSET(0x15C0BA10)
#define IGGKIPJBEEF_GNEFBIKGHLO__CTOR_OFFSET UNITYSDK_OFFSET(0x15C0B870)

inline static constexpr unsigned int IGGKIPJBEEF_GNEFBIKGHLO_TypeDefinitionIndex = 90965;

class IGGKIPJBEEF_GNEFBIKGHLO : public ::System::Object
{
public:
	::Foundation::AssetPath PJNJFACFJHP; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGGKIPJBEEF_GNEFBIKGHLO__CTOR_OFFSET))(this);
	}

	::System::Void FLIAEJGDMLI(::MoleMole::Config::ConfigIndicatedLights* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigIndicatedLights*))((::PBYTE)hIl2Cpp + IGGKIPJBEEF_GNEFBIKGHLO_FLIAEJGDMLI_OFFSET))(this, DFMKILICPFB);
	}

	::MoleMole::Config::ConfigIndicatedLights* HOLMEPGEFBO()
	{
		return ((::MoleMole::Config::ConfigIndicatedLights*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGGKIPJBEEF_GNEFBIKGHLO_HOLMEPGEFBO_OFFSET))(this);
	}
};
