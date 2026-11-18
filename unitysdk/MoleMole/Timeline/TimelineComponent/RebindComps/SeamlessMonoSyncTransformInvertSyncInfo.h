#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/TimelineComponent/SeamlessBaseReferenceCompInfo.h"
#include "unitysdk/MoleMole/CGRuntimeUnitLoadType.h"

namespace MoleMole { class CGRuntimeUnit; }
namespace MoleMole::Timeline { class MonoSyncTransformInvert; }
namespace System { class String; }
namespace UnityEngine { class Component; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_REBINDCOMPS_SEAMLESSMONOSYNCTRANSFORMINVERTSYNCINFO_INITBASEINFO_OFFSET UNITYSDK_OFFSET(0x1A0B53C0)
#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_REBINDCOMPS_SEAMLESSMONOSYNCTRANSFORMINVERTSYNCINFO_REBIND_OFFSET UNITYSDK_OFFSET(0x1A0B5750)
#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_REBINDCOMPS_SEAMLESSMONOSYNCTRANSFORMINVERTSYNCINFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A0B5320)
#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_REBINDCOMPS_SEAMLESSMONOSYNCTRANSFORMINVERTSYNCINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0B52A0)
#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_REBINDCOMPS_SEAMLESSMONOSYNCTRANSFORMINVERTSYNCINFO___BASE_INITBASEINFO_OFFSET UNITYSDK_OFFSET(0x1A0B5B20)
#define MOLEMOLE_TIMELINE_TIMELINECOMPONENT_REBINDCOMPS_SEAMLESSMONOSYNCTRANSFORMINVERTSYNCINFO___BASE_REBIND_OFFSET UNITYSDK_OFFSET(0x1A0B5BE0)

namespace MoleMole::Timeline::TimelineComponent::RebindComps
{
	inline static constexpr unsigned int SeamlessMonoSyncTransformInvertSyncInfo_TypeDefinitionIndex = 89374;

	class SeamlessMonoSyncTransformInvertSyncInfo : public ::MoleMole::Timeline::TimelineComponent::SeamlessBaseReferenceCompInfo
	{
	public:
		::MoleMole::Timeline::MonoSyncTransformInvert* Component; // 0x30
		::System::String* syncTargetPath; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_REBINDCOMPS_SEAMLESSMONOSYNCTRANSFORMINVERTSYNCINFO__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MoleMole::CGRuntimeUnit* runtimeUnit, ::MoleMole::Timeline::MonoSyncTransformInvert* component, ::MoleMole::CGRuntimeUnitLoadType loadType)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::CGRuntimeUnit*, ::MoleMole::Timeline::MonoSyncTransformInvert*, ::MoleMole::CGRuntimeUnitLoadType))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_REBINDCOMPS_SEAMLESSMONOSYNCTRANSFORMINVERTSYNCINFO__CTOR_1_OFFSET))(this, runtimeUnit, component, loadType);
		}

		::System::Void InitBaseInfo(::MoleMole::CGRuntimeUnit* runtimeUnit, ::UnityEngine::Component* component, ::MoleMole::CGRuntimeUnitLoadType loadType)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::CGRuntimeUnit*, ::UnityEngine::Component*, ::MoleMole::CGRuntimeUnitLoadType))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_REBINDCOMPS_SEAMLESSMONOSYNCTRANSFORMINVERTSYNCINFO_INITBASEINFO_OFFSET))(this, runtimeUnit, component, loadType);
		}

		::System::Void Rebind(::UnityEngine::GameObject* referenceRoot)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_REBINDCOMPS_SEAMLESSMONOSYNCTRANSFORMINVERTSYNCINFO_REBIND_OFFSET))(this, referenceRoot);
		}

		::System::Void __base_InitBaseInfo(::MoleMole::CGRuntimeUnit* P0, ::UnityEngine::Component* P1, ::MoleMole::CGRuntimeUnitLoadType P2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::CGRuntimeUnit*, ::UnityEngine::Component*, ::MoleMole::CGRuntimeUnitLoadType))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_REBINDCOMPS_SEAMLESSMONOSYNCTRANSFORMINVERTSYNCINFO___BASE_INITBASEINFO_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_Rebind(::UnityEngine::GameObject* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINECOMPONENT_REBINDCOMPS_SEAMLESSMONOSYNCTRANSFORMINVERTSYNCINFO___BASE_REBIND_OFFSET))(this, P0);
		}
	};
}
