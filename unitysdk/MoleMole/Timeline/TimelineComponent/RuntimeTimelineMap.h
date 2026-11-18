#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedMonoBehaviour.h"

namespace MoleMole { class CGRuntimeUnit; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::Playables { class PlayableDirector; }

#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEMAP_APPLYUNITOBJFROMSERIALIZEDREFERENCEMAP_OFFSET UNITYSDK_OFFSET(0x1A0B6600)
#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEMAP_GETSKINANDACCESSORYCONFIG_OFFSET UNITYSDK_OFFSET(0x1A0B6B00)
#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEMAP_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1A0B6AB0)
#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEMAP_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1A0B65B0)
#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEMAP_SETAMIFOOKIK_OFFSET UNITYSDK_OFFSET(0x1A0B6990)
#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEMAP__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0B6E10)

namespace MoleMole::Timeline::TimelineComponent
{
	inline static constexpr unsigned int RuntimeTimelineMap_TypeDefinitionIndex = 71302;

	class RuntimeTimelineMap : public ::Sirenix::OdinInspector::SerializedMonoBehaviour
	{
	public:
		::UnityEngine::Playables::PlayableDirector* LightPlayableDirector; // 0x58
		::UnityEngine::Playables::PlayableDirector* EffectPlayableDirector; // 0x60
		::System::Collections::Generic::List_1<::MoleMole::CGRuntimeUnit*>* unitReferences; // 0x68
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::GameObject*>* referenceNameToUnitRoot; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEMAP__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEMAP_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEMAP_ONDISABLE_OFFSET))(this);
		}

		::System::Void SetAmiFookIK(::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEMAP_SETAMIFOOKIK_OFFSET))(this, enable);
		}

		::System::Void ApplyUnitObjFromSerializedReferenceMap()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEMAP_APPLYUNITOBJFROMSERIALIZEDREFERENCEMAP_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::CGRuntimeUnit*>* GetSkinAndAccessoryConfig()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::CGRuntimeUnit*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_RUNTIMETIMELINEMAP_GETSKINANDACCESSORYCONFIG_OFFSET))(this);
		}
	};
}
