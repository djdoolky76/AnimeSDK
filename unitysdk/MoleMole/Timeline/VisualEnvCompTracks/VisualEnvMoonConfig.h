#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/AutoGenerateComps/CompTimelineBaseConfig.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector3.h"

class WeatherConfig;

#define MOLEMOLE_TIMELINE_VISUALENVCOMPTRACKS_VISUALENVMOONCONFIG_BJLELCAIHLP_OFFSET UNITYSDK_OFFSET(0x1C0E20D0)
#define MOLEMOLE_TIMELINE_VISUALENVCOMPTRACKS_VISUALENVMOONCONFIG_DHDANLOBHFJ_OFFSET UNITYSDK_OFFSET(0x1C0E2230)
#define MOLEMOLE_TIMELINE_VISUALENVCOMPTRACKS_VISUALENVMOONCONFIG_FMLOHPFMEDK_OFFSET UNITYSDK_OFFSET(0x1C0E21A0)
#define MOLEMOLE_TIMELINE_VISUALENVCOMPTRACKS_VISUALENVMOONCONFIG_GHEBADNHCKH_OFFSET UNITYSDK_OFFSET(0x1C0E1CE0)
#define MOLEMOLE_TIMELINE_VISUALENVCOMPTRACKS_VISUALENVMOONCONFIG_HEGPPHAGDCO_OFFSET UNITYSDK_OFFSET(0x1C0E1A60)
#define MOLEMOLE_TIMELINE_VISUALENVCOMPTRACKS_VISUALENVMOONCONFIG_IIHOMIJLDMI_OFFSET UNITYSDK_OFFSET(0x1C0E1B90)
#define MOLEMOLE_TIMELINE_VISUALENVCOMPTRACKS_VISUALENVMOONCONFIG_NGPINNOAPDG_OFFSET UNITYSDK_OFFSET(0x1C0E1F10)
#define MOLEMOLE_TIMELINE_VISUALENVCOMPTRACKS_VISUALENVMOONCONFIG_NJIOPMCBIOI_OFFSET UNITYSDK_OFFSET(0x1C0E2310)
#define MOLEMOLE_TIMELINE_VISUALENVCOMPTRACKS_VISUALENVMOONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0E1EF0)

namespace MoleMole::Timeline::VisualEnvCompTracks
{
	inline static constexpr unsigned int VisualEnvMoonConfig_TypeDefinitionIndex = 78239;

	class VisualEnvMoonConfig : public ::MoleMole::Timeline::AutoGenerateComps::CompTimelineBaseConfig
	{
	public:
		::UnityEngine::Vector3 moonDir; // 0x18
		::UnityEngine::Color MoonLightColor; // 0x24
		::System::Single MoonLightIntensity; // 0x34
		::UnityEngine::Color MoonLightColorForChar; // 0x38
		::UnityEngine::Color MoonLightColorForCharIndoor; // 0x48
		::System::Single MoonLightIntensityForChar; // 0x58
		::System::Single MoonLightIntensityForCharIndoor; // 0x5C
		::UnityEngine::Color MoonColor; // 0x60
		::System::Single moonSize; // 0x70
		::System::Single customMoonPhase; // 0x74
		::System::Single moonPhaseAlphaBlend; // 0x78
		::UnityEngine::Color MoonGlowColor; // 0x7C
		::System::Boolean enableLensFlareForMoon; // 0x8C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VISUALENVCOMPTRACKS_VISUALENVMOONCONFIG__CTOR_OFFSET))(this);
		}

		::System::Void HEGPPHAGDCO(::WeatherConfig* HMOGPGGAJLO)
		{
			return ((::System::Void(*)(::PVOID, ::WeatherConfig*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VISUALENVCOMPTRACKS_VISUALENVMOONCONFIG_HEGPPHAGDCO_OFFSET))(this, HMOGPGGAJLO);
		}

		::System::Void IIHOMIJLDMI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VISUALENVCOMPTRACKS_VISUALENVMOONCONFIG_IIHOMIJLDMI_OFFSET))(this);
		}

		::MoleMole::Timeline::AutoGenerateComps::CompTimelineBaseConfig* GHEBADNHCKH(::MoleMole::Timeline::AutoGenerateComps::CompTimelineBaseConfig* CEJEKGEMEDG, ::MoleMole::Timeline::AutoGenerateComps::CompTimelineBaseConfig* POHKMAABHMN)
		{
			return ((::MoleMole::Timeline::AutoGenerateComps::CompTimelineBaseConfig*(*)(::PVOID, ::MoleMole::Timeline::AutoGenerateComps::CompTimelineBaseConfig*, ::MoleMole::Timeline::AutoGenerateComps::CompTimelineBaseConfig*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VISUALENVCOMPTRACKS_VISUALENVMOONCONFIG_GHEBADNHCKH_OFFSET))(this, CEJEKGEMEDG, POHKMAABHMN);
		}

		::MoleMole::Timeline::AutoGenerateComps::CompTimelineBaseConfig* NGPINNOAPDG(::MoleMole::Timeline::AutoGenerateComps::CompTimelineBaseConfig* CEJEKGEMEDG, ::System::Single LJHKPBDPDLG)
		{
			return ((::MoleMole::Timeline::AutoGenerateComps::CompTimelineBaseConfig*(*)(::PVOID, ::MoleMole::Timeline::AutoGenerateComps::CompTimelineBaseConfig*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VISUALENVCOMPTRACKS_VISUALENVMOONCONFIG_NGPINNOAPDG_OFFSET))(this, CEJEKGEMEDG, LJHKPBDPDLG);
		}

		::MoleMole::Timeline::AutoGenerateComps::CompTimelineBaseConfig* BJLELCAIHLP(::MoleMole::Timeline::AutoGenerateComps::CompTimelineBaseConfig* MIALFKCCCPI, ::MoleMole::Timeline::AutoGenerateComps::CompTimelineBaseConfig* KMGKAIDEIBA)
		{
			return ((::MoleMole::Timeline::AutoGenerateComps::CompTimelineBaseConfig*(*)(::PVOID, ::MoleMole::Timeline::AutoGenerateComps::CompTimelineBaseConfig*, ::MoleMole::Timeline::AutoGenerateComps::CompTimelineBaseConfig*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VISUALENVCOMPTRACKS_VISUALENVMOONCONFIG_BJLELCAIHLP_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
		}

		::System::Void FMLOHPFMEDK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VISUALENVCOMPTRACKS_VISUALENVMOONCONFIG_FMLOHPFMEDK_OFFSET))(this);
		}

		::MoleMole::Timeline::AutoGenerateComps::CompTimelineBaseConfig* DHDANLOBHFJ(::MoleMole::Timeline::AutoGenerateComps::CompTimelineBaseConfig* MIALFKCCCPI, ::System::Single KMGKAIDEIBA)
		{
			return ((::MoleMole::Timeline::AutoGenerateComps::CompTimelineBaseConfig*(*)(::PVOID, ::MoleMole::Timeline::AutoGenerateComps::CompTimelineBaseConfig*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VISUALENVCOMPTRACKS_VISUALENVMOONCONFIG_DHDANLOBHFJ_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
		}

		::System::Void NJIOPMCBIOI(::WeatherConfig* MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::WeatherConfig*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VISUALENVCOMPTRACKS_VISUALENVMOONCONFIG_NJIOPMCBIOI_OFFSET))(this, MIALFKCCCPI);
		}
	};
}
