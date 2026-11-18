#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"
#include "unitysdk/System/ValueTuple_2.h"

class MPLPNHNADPD;
namespace UnityEngine::Timeline { class TimelineClip; }

#define MOLEMOLE_TIMELINE_POSTPROCESSTRACK_BBPCIKJIFNJ_OFFSET UNITYSDK_OFFSET(0x17E78860)
#define MOLEMOLE_TIMELINE_POSTPROCESSTRACK_DCCIEBHLMAM_OFFSET UNITYSDK_OFFSET(0x17E78690)
#define MOLEMOLE_TIMELINE_POSTPROCESSTRACK_JPFGLOPDGFG_OFFSET UNITYSDK_OFFSET(0x17E78720)
#define MOLEMOLE_TIMELINE_POSTPROCESSTRACK_ONCREATECLIP_OFFSET UNITYSDK_OFFSET(0x17E785E0)
#define MOLEMOLE_TIMELINE_POSTPROCESSTRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x17E78630)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int PostProcessTrack_TypeDefinitionIndex = 80848;

	class PostProcessTrack : public ::UnityEngine::Timeline::TrackAsset
	{
	public:
		::System::Boolean dontResetWhenDestroy; // 0xB0
		::System::Boolean dontResetActive; // 0xB1
		::System::Boolean recoverOnlyAfterLastClip; // 0xB2

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_POSTPROCESSTRACK__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateClip(::UnityEngine::Timeline::TimelineClip* PHGBOCIDLEI)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_POSTPROCESSTRACK_ONCREATECLIP_OFFSET))(this, PHGBOCIDLEI);
		}

		::System::Void DCCIEBHLMAM(::MPLPNHNADPD* NIIKLAKFDCJ)
		{
			return ((::System::Void(*)(::PVOID, ::MPLPNHNADPD*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_POSTPROCESSTRACK_DCCIEBHLMAM_OFFSET))(this, NIIKLAKFDCJ);
		}

		::System::ValueTuple_2<::System::Double, ::System::Double> JPFGLOPDGFG()
		{
			return ((::System::ValueTuple_2<::System::Double, ::System::Double>(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_POSTPROCESSTRACK_JPFGLOPDGFG_OFFSET))(this);
		}

		::System::Void BBPCIKJIFNJ(::UnityEngine::Timeline::TimelineClip* MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_POSTPROCESSTRACK_BBPCIKJIFNJ_OFFSET))(this, MIALFKCCCPI);
		}
	};
}
