#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_TIMELINE_MIHOYOEFFECTTAGCONTROLTRACK_CKIAINDIPOE_OFFSET UNITYSDK_OFFSET(0x18824870)
#define MOLEMOLE_TIMELINE_MIHOYOEFFECTTAGCONTROLTRACK_HINAJHPEJKJ_OFFSET UNITYSDK_OFFSET(0x18824860)
#define MOLEMOLE_TIMELINE_MIHOYOEFFECTTAGCONTROLTRACK_ONAFTERTRACKDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x18824410)
#define MOLEMOLE_TIMELINE_MIHOYOEFFECTTAGCONTROLTRACK_ONBEFORETRACKSERIALIZE_OFFSET UNITYSDK_OFFSET(0x188240C0)
#define MOLEMOLE_TIMELINE_MIHOYOEFFECTTAGCONTROLTRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x18824740)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int MihoyoEffectTagControlTrack_TypeDefinitionIndex = 65193;

	class MihoyoEffectTagControlTrack : public ::UnityEngine::Timeline::TrackAsset
	{
	public:
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Timeline::TrackAsset*, ::System::Object*>* tagMap; // 0xB0
		::System::Collections::Generic::List_1<::System::Object*>* tagItems; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MIHOYOEFFECTTAGCONTROLTRACK__CTOR_OFFSET))(this);
		}

		::System::Void OnBeforeTrackSerialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MIHOYOEFFECTTAGCONTROLTRACK_ONBEFORETRACKSERIALIZE_OFFSET))(this);
		}

		::System::Void OnAfterTrackDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MIHOYOEFFECTTAGCONTROLTRACK_ONAFTERTRACKDESERIALIZE_OFFSET))(this);
		}

		::System::Void HINAJHPEJKJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MIHOYOEFFECTTAGCONTROLTRACK_HINAJHPEJKJ_OFFSET))(this);
		}

		::System::Void CKIAINDIPOE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MIHOYOEFFECTTAGCONTROLTRACK_CKIAINDIPOE_OFFSET))(this);
		}
	};
}
