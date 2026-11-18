#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigBuddyMisc; }

#define JEALNIHFONN_HAANBHHLBNH_FLIAEJGDMLI_OFFSET UNITYSDK_OFFSET(0x198A27B0)
#define JEALNIHFONN_HAANBHHLBNH_HOLMEPGEFBO_OFFSET UNITYSDK_OFFSET(0x198A2940)
#define JEALNIHFONN_HAANBHHLBNH__CTOR_OFFSET UNITYSDK_OFFSET(0x198A27A0)

inline static constexpr unsigned int JEALNIHFONN_HAANBHHLBNH_TypeDefinitionIndex = 49560;

class JEALNIHFONN_HAANBHHLBNH : public ::System::Object
{
public:
	::Foundation::AssetPath PJNJFACFJHP; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEALNIHFONN_HAANBHHLBNH__CTOR_OFFSET))(this);
	}

	::System::Void FLIAEJGDMLI(::MoleMole::Config::ConfigBuddyMisc* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigBuddyMisc*))((::PBYTE)hIl2Cpp + JEALNIHFONN_HAANBHHLBNH_FLIAEJGDMLI_OFFSET))(this, DFMKILICPFB);
	}

	::MoleMole::Config::ConfigBuddyMisc* HOLMEPGEFBO()
	{
		return ((::MoleMole::Config::ConfigBuddyMisc*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEALNIHFONN_HAANBHHLBNH_HOLMEPGEFBO_OFFSET))(this);
	}
};
