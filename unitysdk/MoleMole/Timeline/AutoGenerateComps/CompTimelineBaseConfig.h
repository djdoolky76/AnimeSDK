#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class WeatherConfig;

#define MOLEMOLE_TIMELINE_AUTOGENERATECOMPS_COMPTIMELINEBASECONFIG_GHEBADNHCKH_OFFSET UNITYSDK_OFFSET(0x131256E0)
#define MOLEMOLE_TIMELINE_AUTOGENERATECOMPS_COMPTIMELINEBASECONFIG_HEGPPHAGDCO_OFFSET UNITYSDK_OFFSET(0x131255E0)
#define MOLEMOLE_TIMELINE_AUTOGENERATECOMPS_COMPTIMELINEBASECONFIG_IIHOMIJLDMI_OFFSET UNITYSDK_OFFSET(0x131256A0)
#define MOLEMOLE_TIMELINE_AUTOGENERATECOMPS_COMPTIMELINEBASECONFIG_KCCOAKONDDJ_OFFSET UNITYSDK_OFFSET(0x13125650)
#define MOLEMOLE_TIMELINE_AUTOGENERATECOMPS_COMPTIMELINEBASECONFIG_NGPINNOAPDG_OFFSET UNITYSDK_OFFSET(0x13125770)
#define MOLEMOLE_TIMELINE_AUTOGENERATECOMPS_COMPTIMELINEBASECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x13125760)

namespace MoleMole::Timeline::AutoGenerateComps
{
	inline static constexpr unsigned int CompTimelineBaseConfig_TypeDefinitionIndex = 48860;

	class CompTimelineBaseConfig : public ::System::Object
	{
	public:
		::WeatherConfig* weatherCfg; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_AUTOGENERATECOMPS_COMPTIMELINEBASECONFIG__CTOR_OFFSET))(this);
		}

		::System::Void HEGPPHAGDCO(::WeatherConfig* HMOGPGGAJLO)
		{
			return ((::System::Void(*)(::PVOID, ::WeatherConfig*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_AUTOGENERATECOMPS_COMPTIMELINEBASECONFIG_HEGPPHAGDCO_OFFSET))(this, HMOGPGGAJLO);
		}

		::System::Void IIHOMIJLDMI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_AUTOGENERATECOMPS_COMPTIMELINEBASECONFIG_IIHOMIJLDMI_OFFSET))(this);
		}

		::MoleMole::Timeline::AutoGenerateComps::CompTimelineBaseConfig* GHEBADNHCKH(::MoleMole::Timeline::AutoGenerateComps::CompTimelineBaseConfig* EJCBEJMGFAJ, ::MoleMole::Timeline::AutoGenerateComps::CompTimelineBaseConfig* EBFCACIEKBC)
		{
			return ((::MoleMole::Timeline::AutoGenerateComps::CompTimelineBaseConfig*(*)(::PVOID, ::MoleMole::Timeline::AutoGenerateComps::CompTimelineBaseConfig*, ::MoleMole::Timeline::AutoGenerateComps::CompTimelineBaseConfig*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_AUTOGENERATECOMPS_COMPTIMELINEBASECONFIG_GHEBADNHCKH_OFFSET))(this, EJCBEJMGFAJ, EBFCACIEKBC);
		}

		::MoleMole::Timeline::AutoGenerateComps::CompTimelineBaseConfig* NGPINNOAPDG(::MoleMole::Timeline::AutoGenerateComps::CompTimelineBaseConfig* EJCBEJMGFAJ, ::System::Single LJHKPBDPDLG)
		{
			return ((::MoleMole::Timeline::AutoGenerateComps::CompTimelineBaseConfig*(*)(::PVOID, ::MoleMole::Timeline::AutoGenerateComps::CompTimelineBaseConfig*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_AUTOGENERATECOMPS_COMPTIMELINEBASECONFIG_NGPINNOAPDG_OFFSET))(this, EJCBEJMGFAJ, LJHKPBDPDLG);
		}

		::System::Void KCCOAKONDDJ(::WeatherConfig* HMOGPGGAJLO)
		{
			return ((::System::Void(*)(::PVOID, ::WeatherConfig*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_AUTOGENERATECOMPS_COMPTIMELINEBASECONFIG_KCCOAKONDDJ_OFFSET))(this, HMOGPGGAJLO);
		}
	};
}
