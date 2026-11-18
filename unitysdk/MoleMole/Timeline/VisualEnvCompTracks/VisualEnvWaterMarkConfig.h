#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/AutoGenerateComps/CompTimelineBaseConfig.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector4.h"

class WeatherConfig;
namespace UnityEngine { class Texture; }

#define MOLEMOLE_TIMELINE_VISUALENVCOMPTRACKS_VISUALENVWATERMARKCONFIG_BJLELCAIHLP_OFFSET UNITYSDK_OFFSET(0x14BDAC10)
#define MOLEMOLE_TIMELINE_VISUALENVCOMPTRACKS_VISUALENVWATERMARKCONFIG_DHDANLOBHFJ_OFFSET UNITYSDK_OFFSET(0x14BDAE80)
#define MOLEMOLE_TIMELINE_VISUALENVCOMPTRACKS_VISUALENVWATERMARKCONFIG_FMLOHPFMEDK_OFFSET UNITYSDK_OFFSET(0x14BDADF0)
#define MOLEMOLE_TIMELINE_VISUALENVCOMPTRACKS_VISUALENVWATERMARKCONFIG_GHEBADNHCKH_OFFSET UNITYSDK_OFFSET(0x14BDA790)
#define MOLEMOLE_TIMELINE_VISUALENVCOMPTRACKS_VISUALENVWATERMARKCONFIG_HEGPPHAGDCO_OFFSET UNITYSDK_OFFSET(0x14BDA5C0)
#define MOLEMOLE_TIMELINE_VISUALENVCOMPTRACKS_VISUALENVWATERMARKCONFIG_IIHOMIJLDMI_OFFSET UNITYSDK_OFFSET(0x14BDA6C0)
#define MOLEMOLE_TIMELINE_VISUALENVCOMPTRACKS_VISUALENVWATERMARKCONFIG_NGPINNOAPDG_OFFSET UNITYSDK_OFFSET(0x14BDAA20)
#define MOLEMOLE_TIMELINE_VISUALENVCOMPTRACKS_VISUALENVWATERMARKCONFIG_NJIOPMCBIOI_OFFSET UNITYSDK_OFFSET(0x14BDACE0)
#define MOLEMOLE_TIMELINE_VISUALENVCOMPTRACKS_VISUALENVWATERMARKCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x14BDAA00)

namespace MoleMole::Timeline::VisualEnvCompTracks
{
	inline static constexpr unsigned int VisualEnvWaterMarkConfig_TypeDefinitionIndex = 59586;

	class VisualEnvWaterMarkConfig : public ::MoleMole::Timeline::AutoGenerateComps::CompTimelineBaseConfig
	{
	public:
		::System::Boolean overrideWetness; // 0x18
		::System::Byte _padding0[0x3];
		::System::Single wetness; // 0x1C
		::System::Boolean ignoreNoiseMap; // 0x20
		::System::Byte _padding1[0x7];
		::UnityEngine::Texture* wetnessNoise; // 0x28
		::System::Single wetnessNoiseTilling; // 0x30
		::UnityEngine::Vector2 wetnessNoiseClampRange; // 0x34
		::System::Boolean wetnessApplyAllSurface; // 0x3C
		::System::Byte _padding2[0x3];
		::UnityEngine::Vector2 porosity; // 0x40
		::UnityEngine::Vector4 m_SceneWaterPoolBoundBox; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VISUALENVCOMPTRACKS_VISUALENVWATERMARKCONFIG__CTOR_OFFSET))(this);
		}

		::System::Void HEGPPHAGDCO(::WeatherConfig* HMOGPGGAJLO)
		{
			return ((::System::Void(*)(::PVOID, ::WeatherConfig*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VISUALENVCOMPTRACKS_VISUALENVWATERMARKCONFIG_HEGPPHAGDCO_OFFSET))(this, HMOGPGGAJLO);
		}

		::System::Void IIHOMIJLDMI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VISUALENVCOMPTRACKS_VISUALENVWATERMARKCONFIG_IIHOMIJLDMI_OFFSET))(this);
		}

		::MoleMole::Timeline::AutoGenerateComps::CompTimelineBaseConfig* GHEBADNHCKH(::MoleMole::Timeline::AutoGenerateComps::CompTimelineBaseConfig* CEJEKGEMEDG, ::MoleMole::Timeline::AutoGenerateComps::CompTimelineBaseConfig* POHKMAABHMN)
		{
			return ((::MoleMole::Timeline::AutoGenerateComps::CompTimelineBaseConfig*(*)(::PVOID, ::MoleMole::Timeline::AutoGenerateComps::CompTimelineBaseConfig*, ::MoleMole::Timeline::AutoGenerateComps::CompTimelineBaseConfig*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VISUALENVCOMPTRACKS_VISUALENVWATERMARKCONFIG_GHEBADNHCKH_OFFSET))(this, CEJEKGEMEDG, POHKMAABHMN);
		}

		::MoleMole::Timeline::AutoGenerateComps::CompTimelineBaseConfig* NGPINNOAPDG(::MoleMole::Timeline::AutoGenerateComps::CompTimelineBaseConfig* CEJEKGEMEDG, ::System::Single LJHKPBDPDLG)
		{
			return ((::MoleMole::Timeline::AutoGenerateComps::CompTimelineBaseConfig*(*)(::PVOID, ::MoleMole::Timeline::AutoGenerateComps::CompTimelineBaseConfig*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VISUALENVCOMPTRACKS_VISUALENVWATERMARKCONFIG_NGPINNOAPDG_OFFSET))(this, CEJEKGEMEDG, LJHKPBDPDLG);
		}

		::MoleMole::Timeline::AutoGenerateComps::CompTimelineBaseConfig* BJLELCAIHLP(::MoleMole::Timeline::AutoGenerateComps::CompTimelineBaseConfig* MIALFKCCCPI, ::MoleMole::Timeline::AutoGenerateComps::CompTimelineBaseConfig* KMGKAIDEIBA)
		{
			return ((::MoleMole::Timeline::AutoGenerateComps::CompTimelineBaseConfig*(*)(::PVOID, ::MoleMole::Timeline::AutoGenerateComps::CompTimelineBaseConfig*, ::MoleMole::Timeline::AutoGenerateComps::CompTimelineBaseConfig*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VISUALENVCOMPTRACKS_VISUALENVWATERMARKCONFIG_BJLELCAIHLP_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
		}

		::System::Void NJIOPMCBIOI(::WeatherConfig* MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::WeatherConfig*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VISUALENVCOMPTRACKS_VISUALENVWATERMARKCONFIG_NJIOPMCBIOI_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Void FMLOHPFMEDK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VISUALENVCOMPTRACKS_VISUALENVWATERMARKCONFIG_FMLOHPFMEDK_OFFSET))(this);
		}

		::MoleMole::Timeline::AutoGenerateComps::CompTimelineBaseConfig* DHDANLOBHFJ(::MoleMole::Timeline::AutoGenerateComps::CompTimelineBaseConfig* MIALFKCCCPI, ::System::Single KMGKAIDEIBA)
		{
			return ((::MoleMole::Timeline::AutoGenerateComps::CompTimelineBaseConfig*(*)(::PVOID, ::MoleMole::Timeline::AutoGenerateComps::CompTimelineBaseConfig*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VISUALENVCOMPTRACKS_VISUALENVWATERMARKCONFIG_DHDANLOBHFJ_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
		}
	};
}
