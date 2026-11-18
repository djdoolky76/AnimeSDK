#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"
#include "unitysdk/UnityEngine/ExposedReference_1.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class IExposedPropertyTable; }

#define MOLEMOLE_TIMELINE_BATCHUNACTIVATIONTRACK_CREATETRACKMIXER_OFFSET UNITYSDK_OFFSET(0x15AD7970)
#define MOLEMOLE_TIMELINE_BATCHUNACTIVATIONTRACK_HDLFPMKIKAA_OFFSET UNITYSDK_OFFSET(0x15AD7CE0)
#define MOLEMOLE_TIMELINE_BATCHUNACTIVATIONTRACK_JMHKEDIANHH_OFFSET UNITYSDK_OFFSET(0x15AD8090)
#define MOLEMOLE_TIMELINE_BATCHUNACTIVATIONTRACK_LGAGFNHGIGH_OFFSET UNITYSDK_OFFSET(0x15AD8050)
#define MOLEMOLE_TIMELINE_BATCHUNACTIVATIONTRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x15AD7FA0)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int BatchUnActivationTrack_TypeDefinitionIndex = 65040;

	class BatchUnActivationTrack : public ::UnityEngine::Timeline::TrackAsset
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::ExposedReference_1<::UnityEngine::GameObject*>>* targetReferences; // 0xB0
		::UnityEngine::IExposedPropertyTable* _resolver; // 0xB8
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* _resolvedTargets; // 0xC0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_BATCHUNACTIVATIONTRACK__CTOR_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreateTrackMixer(::UnityEngine::Playables::PlayableGraph MHPNGBGGMMN, ::UnityEngine::GameObject* NJOAJLDJCCJ, ::System::Int32 BMHCCJPEFPI)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_BATCHUNACTIVATIONTRACK_CREATETRACKMIXER_OFFSET))(this, MHPNGBGGMMN, NJOAJLDJCCJ, BMHCCJPEFPI);
		}

		::UnityEngine::Playables::Playable LGAGFNHGIGH(::UnityEngine::Playables::PlayableGraph MIALFKCCCPI, ::UnityEngine::GameObject* KMGKAIDEIBA, ::System::Int32 FDHMCIFPNCK)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_BATCHUNACTIVATIONTRACK_LGAGFNHGIGH_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
		}

		::System::Void JMHKEDIANHH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_BATCHUNACTIVATIONTRACK_JMHKEDIANHH_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* HDLFPMKIKAA()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_BATCHUNACTIVATIONTRACK_HDLFPMKIKAA_OFFSET))(this);
		}
	};
}
