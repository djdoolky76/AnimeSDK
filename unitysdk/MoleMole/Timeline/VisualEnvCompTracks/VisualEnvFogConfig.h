#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/AutoGenerateComps/CompTimelineBaseConfig.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"

class WeatherConfig;

#define MOLEMOLE_TIMELINE_VISUALENVCOMPTRACKS_VISUALENVFOGCONFIG_BJLELCAIHLP_OFFSET UNITYSDK_OFFSET(0x19F625C0)
#define MOLEMOLE_TIMELINE_VISUALENVCOMPTRACKS_VISUALENVFOGCONFIG_DHDANLOBHFJ_OFFSET UNITYSDK_OFFSET(0x19F624E0)
#define MOLEMOLE_TIMELINE_VISUALENVCOMPTRACKS_VISUALENVFOGCONFIG_FMLOHPFMEDK_OFFSET UNITYSDK_OFFSET(0x19F62450)
#define MOLEMOLE_TIMELINE_VISUALENVCOMPTRACKS_VISUALENVFOGCONFIG_GHEBADNHCKH_OFFSET UNITYSDK_OFFSET(0x19F620D0)
#define MOLEMOLE_TIMELINE_VISUALENVCOMPTRACKS_VISUALENVFOGCONFIG_HEGPPHAGDCO_OFFSET UNITYSDK_OFFSET(0x19F61E40)
#define MOLEMOLE_TIMELINE_VISUALENVCOMPTRACKS_VISUALENVFOGCONFIG_IIHOMIJLDMI_OFFSET UNITYSDK_OFFSET(0x19F61F90)
#define MOLEMOLE_TIMELINE_VISUALENVCOMPTRACKS_VISUALENVFOGCONFIG_NGPINNOAPDG_OFFSET UNITYSDK_OFFSET(0x19F622A0)
#define MOLEMOLE_TIMELINE_VISUALENVCOMPTRACKS_VISUALENVFOGCONFIG_NJIOPMCBIOI_OFFSET UNITYSDK_OFFSET(0x19F62690)
#define MOLEMOLE_TIMELINE_VISUALENVCOMPTRACKS_VISUALENVFOGCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19F62280)

namespace MoleMole::Timeline::VisualEnvCompTracks
{
	inline static constexpr unsigned int VisualEnvFogConfig_TypeDefinitionIndex = 89693;

	class VisualEnvFogConfig : public ::MoleMole::Timeline::AutoGenerateComps::CompTimelineBaseConfig
	{
	public:
		::UnityEngine::Color fogRayColor; // 0x18
		::UnityEngine::Color fogMieColor; // 0x28
		::System::Single fogMieG; // 0x38
		::UnityEngine::Color fogExtinctColor; // 0x3C
		::System::Single fogDensity; // 0x4C
		::System::Single fogScattering; // 0x50
		::UnityEngine::Vector2 fogHeightRange; // 0x54
		::System::Single fogStartDistance; // 0x5C
		::System::Boolean useMirrorFog; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VISUALENVCOMPTRACKS_VISUALENVFOGCONFIG__CTOR_OFFSET))(this);
		}

		::System::Void HEGPPHAGDCO(::WeatherConfig* HMOGPGGAJLO)
		{
			return ((::System::Void(*)(::PVOID, ::WeatherConfig*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VISUALENVCOMPTRACKS_VISUALENVFOGCONFIG_HEGPPHAGDCO_OFFSET))(this, HMOGPGGAJLO);
		}

		::System::Void IIHOMIJLDMI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VISUALENVCOMPTRACKS_VISUALENVFOGCONFIG_IIHOMIJLDMI_OFFSET))(this);
		}

		::MoleMole::Timeline::AutoGenerateComps::CompTimelineBaseConfig* GHEBADNHCKH(::MoleMole::Timeline::AutoGenerateComps::CompTimelineBaseConfig* CEJEKGEMEDG, ::MoleMole::Timeline::AutoGenerateComps::CompTimelineBaseConfig* POHKMAABHMN)
		{
			return ((::MoleMole::Timeline::AutoGenerateComps::CompTimelineBaseConfig*(*)(::PVOID, ::MoleMole::Timeline::AutoGenerateComps::CompTimelineBaseConfig*, ::MoleMole::Timeline::AutoGenerateComps::CompTimelineBaseConfig*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VISUALENVCOMPTRACKS_VISUALENVFOGCONFIG_GHEBADNHCKH_OFFSET))(this, CEJEKGEMEDG, POHKMAABHMN);
		}

		::MoleMole::Timeline::AutoGenerateComps::CompTimelineBaseConfig* NGPINNOAPDG(::MoleMole::Timeline::AutoGenerateComps::CompTimelineBaseConfig* CEJEKGEMEDG, ::System::Single LJHKPBDPDLG)
		{
			return ((::MoleMole::Timeline::AutoGenerateComps::CompTimelineBaseConfig*(*)(::PVOID, ::MoleMole::Timeline::AutoGenerateComps::CompTimelineBaseConfig*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VISUALENVCOMPTRACKS_VISUALENVFOGCONFIG_NGPINNOAPDG_OFFSET))(this, CEJEKGEMEDG, LJHKPBDPDLG);
		}

		::System::Void FMLOHPFMEDK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VISUALENVCOMPTRACKS_VISUALENVFOGCONFIG_FMLOHPFMEDK_OFFSET))(this);
		}

		::MoleMole::Timeline::AutoGenerateComps::CompTimelineBaseConfig* DHDANLOBHFJ(::MoleMole::Timeline::AutoGenerateComps::CompTimelineBaseConfig* MIALFKCCCPI, ::System::Single KMGKAIDEIBA)
		{
			return ((::MoleMole::Timeline::AutoGenerateComps::CompTimelineBaseConfig*(*)(::PVOID, ::MoleMole::Timeline::AutoGenerateComps::CompTimelineBaseConfig*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VISUALENVCOMPTRACKS_VISUALENVFOGCONFIG_DHDANLOBHFJ_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
		}

		::MoleMole::Timeline::AutoGenerateComps::CompTimelineBaseConfig* BJLELCAIHLP(::MoleMole::Timeline::AutoGenerateComps::CompTimelineBaseConfig* MIALFKCCCPI, ::MoleMole::Timeline::AutoGenerateComps::CompTimelineBaseConfig* KMGKAIDEIBA)
		{
			return ((::MoleMole::Timeline::AutoGenerateComps::CompTimelineBaseConfig*(*)(::PVOID, ::MoleMole::Timeline::AutoGenerateComps::CompTimelineBaseConfig*, ::MoleMole::Timeline::AutoGenerateComps::CompTimelineBaseConfig*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VISUALENVCOMPTRACKS_VISUALENVFOGCONFIG_BJLELCAIHLP_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
		}

		::System::Void NJIOPMCBIOI(::WeatherConfig* MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::WeatherConfig*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VISUALENVCOMPTRACKS_VISUALENVFOGCONFIG_NJIOPMCBIOI_OFFSET))(this, MIALFKCCCPI);
		}
	};
}
