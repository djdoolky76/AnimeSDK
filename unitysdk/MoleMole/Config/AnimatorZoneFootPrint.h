#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorZone.h"
#include "unitysdk/MoleMole/Config/AnimatorZoneFootPrint_FootType.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"

class NLNIIPDCABP;
class PKMJPMFCNBK;
namespace MoleMole::Battle { class Entity; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_ANIMATORZONEFOOTPRINT_BUILDEXTRAANIMATORZONEINFOS_OFFSET UNITYSDK_OFFSET(0x19229250)
#define MOLEMOLE_CONFIG_ANIMATORZONEFOOTPRINT_FINDNEXTSEGMENTINDEX_OFFSET UNITYSDK_OFFSET(0x1922A490)
#define MOLEMOLE_CONFIG_ANIMATORZONEFOOTPRINT_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x19229B10)
#define MOLEMOLE_CONFIG_ANIMATORZONEFOOTPRINT_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x19229A30)
#define MOLEMOLE_CONFIG_ANIMATORZONEFOOTPRINT_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x19229AA0)
#define MOLEMOLE_CONFIG_ANIMATORZONEFOOTPRINT__CTOR_OFFSET UNITYSDK_OFFSET(0x1922A670)
#define MOLEMOLE_CONFIG_ANIMATORZONEFOOTPRINT___BASE_BUILDEXTRAANIMATORZONEINFOS_OFFSET UNITYSDK_OFFSET(0x1922A780)
#define MOLEMOLE_CONFIG_ANIMATORZONEFOOTPRINT___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1922A820)
#define MOLEMOLE_CONFIG_ANIMATORZONEFOOTPRINT___BASE_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x1922A8E0)
#define MOLEMOLE_CONFIG_ANIMATORZONEFOOTPRINT___BASE_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x1922A990)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneFootPrint_TypeDefinitionIndex = 84502;

	class AnimatorZoneFootPrint : public ::MoleMole::Config::AnimatorZone
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*>* FrameStepOnGroundSegmentDict; // 0x50
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>*>* _FrameStepOnGroundSegmentDict; // 0x58
		::MoleMole::Config::AnimatorZoneFootPrint_FootType footType; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEFOOTPRINT__CTOR_OFFSET))(this);
		}

		::System::Void BuildExtraAnimatorZoneInfos(::NLNIIPDCABP* animatorComponent, ::PKMJPMFCNBK* zoneInfo)
		{
			return ((::System::Void(*)(::PVOID, ::NLNIIPDCABP*, ::PKMJPMFCNBK*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEFOOTPRINT_BUILDEXTRAANIMATORZONEINFOS_OFFSET))(this, animatorComponent, zoneInfo);
		}

		::System::Void OnZoneEnter(::MoleMole::Battle::Entity* entity, ::UnityEngine::AnimatorStateInfo& curStateInfo, ::PKMJPMFCNBK* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::PKMJPMFCNBK*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEFOOTPRINT_ONZONEENTER_OFFSET))(this, entity, curStateInfo, zoneInfo, deltaTime);
		}

		::System::Void OnZoneExit(::MoleMole::Battle::Entity* entity, ::System::Single stateNormalizedTime, ::PKMJPMFCNBK* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::PKMJPMFCNBK*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEFOOTPRINT_ONZONEEXIT_OFFSET))(this, entity, stateNormalizedTime, zoneInfo, deltaTime);
		}

		::System::Void OnUpdate(::MoleMole::Battle::Entity* entity, ::System::Single deltaTime, ::PKMJPMFCNBK* zoneInfo, ::System::Single animNormalizedTime, ::UnityEngine::AnimatorStateInfo& curStateInfo)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::PKMJPMFCNBK*, ::System::Single, ::UnityEngine::AnimatorStateInfo&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEFOOTPRINT_ONUPDATE_OFFSET))(this, entity, deltaTime, zoneInfo, animNormalizedTime, curStateInfo);
		}

		::System::ValueTuple_2<::System::Int32, ::System::Single> FindNextSegmentIndex(::System::Single animNormalizedTime, ::System::Single stateFrameCount, ::System::Collections::Generic::List_1<::System::Object*>* subSegments)
		{
			return ((::System::ValueTuple_2<::System::Int32, ::System::Single>(*)(::PVOID, ::System::Single, ::System::Single, ::System::Collections::Generic::List_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEFOOTPRINT_FINDNEXTSEGMENTINDEX_OFFSET))(this, animNormalizedTime, stateFrameCount, subSegments);
		}

		::System::Void __base_BuildExtraAnimatorZoneInfos(::NLNIIPDCABP* P0, ::PKMJPMFCNBK* P1)
		{
			return ((::System::Void(*)(::PVOID, ::NLNIIPDCABP*, ::PKMJPMFCNBK*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEFOOTPRINT___BASE_BUILDEXTRAANIMATORZONEINFOS_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnUpdate(::MoleMole::Battle::Entity* P0, ::System::Single P1, ::PKMJPMFCNBK* P2, ::System::Single P3, ::UnityEngine::AnimatorStateInfo& P4)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::PKMJPMFCNBK*, ::System::Single, ::UnityEngine::AnimatorStateInfo&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEFOOTPRINT___BASE_ONUPDATE_OFFSET))(this, P0, P1, P2, P3, P4);
		}

		::System::Void __base_OnZoneEnter(::MoleMole::Battle::Entity* P0, ::UnityEngine::AnimatorStateInfo& P1, ::PKMJPMFCNBK* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::PKMJPMFCNBK*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEFOOTPRINT___BASE_ONZONEENTER_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void __base_OnZoneExit(::MoleMole::Battle::Entity* P0, ::System::Single P1, ::PKMJPMFCNBK* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::PKMJPMFCNBK*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEFOOTPRINT___BASE_ONZONEEXIT_OFFSET))(this, P0, P1, P2, P3);
		}
	};
}
