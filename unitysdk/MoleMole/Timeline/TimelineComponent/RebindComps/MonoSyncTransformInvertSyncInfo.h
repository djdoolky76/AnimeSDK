#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/TimelineComponent/NoSeamlessBaseReferenceCompInfo.h"

namespace MoleMole::Timeline { class MonoSyncTransformInvert; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_REBINDCOMPS_MONOSYNCTRANSFORMINVERTSYNCINFO_CHECKISVALID_OFFSET UNITYSDK_OFFSET(0x19B74710)
#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_REBINDCOMPS_MONOSYNCTRANSFORMINVERTSYNCINFO_INITINFO_OFFSET UNITYSDK_OFFSET(0x19B73F40)
#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_REBINDCOMPS_MONOSYNCTRANSFORMINVERTSYNCINFO_REBIND_OFFSET UNITYSDK_OFFSET(0x19B741D0)
#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_REBINDCOMPS_MONOSYNCTRANSFORMINVERTSYNCINFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19B73EF0)
#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_REBINDCOMPS_MONOSYNCTRANSFORMINVERTSYNCINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x19B73EB0)
#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_REBINDCOMPS_MONOSYNCTRANSFORMINVERTSYNCINFO___BASE_CHECKISVALID_OFFSET UNITYSDK_OFFSET(0x19B74A30)

namespace MoleMole::Timeline::TimelineComponent::RebindComps
{
	inline static constexpr unsigned int MonoSyncTransformInvertSyncInfo_TypeDefinitionIndex = 87238;

	class MonoSyncTransformInvertSyncInfo : public ::MoleMole::Timeline::TimelineComponent::NoSeamlessBaseReferenceCompInfo
	{
	public:
		::System::String* RelativePath; // 0x10
		::MoleMole::Timeline::MonoSyncTransformInvert* Component; // 0x18
		::System::String* syncTargetPath; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_REBINDCOMPS_MONOSYNCTRANSFORMINVERTSYNCINFO__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MoleMole::Timeline::MonoSyncTransformInvert* component)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Timeline::MonoSyncTransformInvert*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_REBINDCOMPS_MONOSYNCTRANSFORMINVERTSYNCINFO__CTOR_1_OFFSET))(this, component);
		}

		::System::Void InitInfo(::MoleMole::Timeline::MonoSyncTransformInvert* component)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Timeline::MonoSyncTransformInvert*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_REBINDCOMPS_MONOSYNCTRANSFORMINVERTSYNCINFO_INITINFO_OFFSET))(this, component);
		}

		::System::Void Rebind(::UnityEngine::GameObject* root)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_REBINDCOMPS_MONOSYNCTRANSFORMINVERTSYNCINFO_REBIND_OFFSET))(this, root);
		}

		::System::Boolean CheckIsValid(::UnityEngine::GameObject* root)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_REBINDCOMPS_MONOSYNCTRANSFORMINVERTSYNCINFO_CHECKISVALID_OFFSET))(this, root);
		}

		::System::Boolean __base_CheckIsValid(::UnityEngine::GameObject* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_REBINDCOMPS_MONOSYNCTRANSFORMINVERTSYNCINFO___BASE_CHECKISVALID_OFFSET))(this, P0);
		}
	};
}
