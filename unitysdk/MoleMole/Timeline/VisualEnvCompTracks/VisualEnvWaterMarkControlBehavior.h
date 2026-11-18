#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/AutoGenerateComps/CompControlBehavior.h"

class WeatherConfig;
namespace MoleMole::Timeline::AutoGenerateComps { class CompTimelineBaseConfig; }
namespace MoleMole::Timeline::VisualEnvCompTracks { class VisualEnvWaterMarkConfig; }

#define MOLEMOLE_TIMELINE_VISUALENVCOMPTRACKS_VISUALENVWATERMARKCONTROLBEHAVIOR_DOLIKJAJGKM_OFFSET UNITYSDK_OFFSET(0x198E3FA0)
#define MOLEMOLE_TIMELINE_VISUALENVCOMPTRACKS_VISUALENVWATERMARKCONTROLBEHAVIOR_GET_COMPTIMELINECONFIG_OFFSET UNITYSDK_OFFSET(0x198E3F00)
#define MOLEMOLE_TIMELINE_VISUALENVCOMPTRACKS_VISUALENVWATERMARKCONTROLBEHAVIOR_HGFCCFIENCD_OFFSET UNITYSDK_OFFSET(0x198E3FE0)
#define MOLEMOLE_TIMELINE_VISUALENVCOMPTRACKS_VISUALENVWATERMARKCONTROLBEHAVIOR_NMBJIKEJKCK_OFFSET UNITYSDK_OFFSET(0x198E3F10)
#define MOLEMOLE_TIMELINE_VISUALENVCOMPTRACKS_VISUALENVWATERMARKCONTROLBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0x198E3F90)

namespace MoleMole::Timeline::VisualEnvCompTracks
{
	inline static constexpr unsigned int VisualEnvWaterMarkControlBehavior_TypeDefinitionIndex = 77011;

	class VisualEnvWaterMarkControlBehavior : public ::MoleMole::Timeline::AutoGenerateComps::CompControlBehavior
	{
	public:
		::System::Boolean initEnvConfig; // 0x18
		::System::Byte _padding0[0x7];
		::MoleMole::Timeline::VisualEnvCompTracks::VisualEnvWaterMarkConfig* EnvTimelineConfig; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VISUALENVCOMPTRACKS_VISUALENVWATERMARKCONTROLBEHAVIOR__CTOR_OFFSET))(this);
		}

		::MoleMole::Timeline::AutoGenerateComps::CompTimelineBaseConfig* get_CompTimelineConfig()
		{
			return ((::MoleMole::Timeline::AutoGenerateComps::CompTimelineBaseConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VISUALENVCOMPTRACKS_VISUALENVWATERMARKCONTROLBEHAVIOR_GET_COMPTIMELINECONFIG_OFFSET))(this);
		}

		::MoleMole::Timeline::AutoGenerateComps::CompTimelineBaseConfig* NMBJIKEJKCK()
		{
			return ((::MoleMole::Timeline::AutoGenerateComps::CompTimelineBaseConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VISUALENVCOMPTRACKS_VISUALENVWATERMARKCONTROLBEHAVIOR_NMBJIKEJKCK_OFFSET))(this);
		}

		::MoleMole::Timeline::AutoGenerateComps::CompTimelineBaseConfig* DOLIKJAJGKM()
		{
			return ((::MoleMole::Timeline::AutoGenerateComps::CompTimelineBaseConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VISUALENVCOMPTRACKS_VISUALENVWATERMARKCONTROLBEHAVIOR_DOLIKJAJGKM_OFFSET))(this);
		}

		::System::Void HGFCCFIENCD(::WeatherConfig* HMOGPGGAJLO)
		{
			return ((::System::Void(*)(::PVOID, ::WeatherConfig*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VISUALENVCOMPTRACKS_VISUALENVWATERMARKCONTROLBEHAVIOR_HGFCCFIENCD_OFFSET))(this, HMOGPGGAJLO);
		}
	};
}
