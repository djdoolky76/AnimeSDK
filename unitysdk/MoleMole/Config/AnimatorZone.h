#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AEFABLGCLOI.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MEFIOFBDFFL.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"
#include "unitysdk/UnityEngine/Color.h"

class NLNIIPDCABP;
class PKMJPMFCNBK;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class AnimatorStateTimeSegment; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_ANIMATORZONE_BUILDANIMATORZONEINFOS_OFFSET UNITYSDK_OFFSET(0x1928AA60)
#define MOLEMOLE_CONFIG_ANIMATORZONE_BUILDEXTRAANIMATORZONEINFOS_OFFSET UNITYSDK_OFFSET(0x1928AA10)
#define MOLEMOLE_CONFIG_ANIMATORZONE_BUILD_OFFSET UNITYSDK_OFFSET(0x1928A890)
#define MOLEMOLE_CONFIG_ANIMATORZONE_CHECKZONETAGLIST_1_OFFSET UNITYSDK_OFFSET(0x1928A150)
#define MOLEMOLE_CONFIG_ANIMATORZONE_CHECKZONETAGLIST_OFFSET UNITYSDK_OFFSET(0x1928A030)
#define MOLEMOLE_CONFIG_ANIMATORZONE_CLEAR_OFFSET UNITYSDK_OFFSET(0x1928BD20)
#define MOLEMOLE_CONFIG_ANIMATORZONE_CREATEZONEINFOINSTANCE_OFFSET UNITYSDK_OFFSET(0x19288DB0)
#define MOLEMOLE_CONFIG_ANIMATORZONE_ENTERZONE_OFFSET UNITYSDK_OFFSET(0x1928BE10)
#define MOLEMOLE_CONFIG_ANIMATORZONE_EXITZONE_OFFSET UNITYSDK_OFFSET(0x1928C0C0)
#define MOLEMOLE_CONFIG_ANIMATORZONE_FORCEEXIT_OFFSET UNITYSDK_OFFSET(0x1928CA70)
#define MOLEMOLE_CONFIG_ANIMATORZONE_GECURTANIMATORSTATETIMESEGMENTLIST_OFFSET UNITYSDK_OFFSET(0x1928C3C0)
#define MOLEMOLE_CONFIG_ANIMATORZONE_GECURTANIMATORSTATETIMESEGMENT_OFFSET UNITYSDK_OFFSET(0x1928C5E0)
#define MOLEMOLE_CONFIG_ANIMATORZONE_GETSEGMENTNAMEBYANIMATORINFO_OFFSET UNITYSDK_OFFSET(0x1928CFC0)
#define MOLEMOLE_CONFIG_ANIMATORZONE_GETZONEALLSTATEHASH_OFFSET UNITYSDK_OFFSET(0x1928C890)
#define MOLEMOLE_CONFIG_ANIMATORZONE_GETZONETAGCOLOR_OFFSET UNITYSDK_OFFSET(0x19289E80)
#define MOLEMOLE_CONFIG_ANIMATORZONE_GET_ISUPDATEONEFRAME_OFFSET UNITYSDK_OFFSET(0x1928A880)
#define MOLEMOLE_CONFIG_ANIMATORZONE_GET_NEEDHANDLEPRELOAD_OFFSET UNITYSDK_OFFSET(0x19289C80)
#define MOLEMOLE_CONFIG_ANIMATORZONE_GET_NEEDHANDLEUPDATE_OFFSET UNITYSDK_OFFSET(0x19289BE0)
#define MOLEMOLE_CONFIG_ANIMATORZONE_GET_SHOULDHANDLEBEFOREPHYSICS_OFFSET UNITYSDK_OFFSET(0x19289B40)
#define MOLEMOLE_CONFIG_ANIMATORZONE_INIT_OFFSET UNITYSDK_OFFSET(0x19289D20)
#define MOLEMOLE_CONFIG_ANIMATORZONE_ONINIT_OFFSET UNITYSDK_OFFSET(0x19289DD0)
#define MOLEMOLE_CONFIG_ANIMATORZONE_ONLAYERSTATESEGMENTDICTCHANGED_OFFSET UNITYSDK_OFFSET(0x1928A330)
#define MOLEMOLE_CONFIG_ANIMATORZONE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1928C340)
#define MOLEMOLE_CONFIG_ANIMATORZONE_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x19288EB0)
#define MOLEMOLE_CONFIG_ANIMATORZONE_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x19288F90)
#define MOLEMOLE_CONFIG_ANIMATORZONE_ONZONEPRELOAD_OFFSET UNITYSDK_OFFSET(0x1928BDC0)
#define MOLEMOLE_CONFIG_ANIMATORZONE_PREPROCESSANIMATORZONE_OFFSET UNITYSDK_OFFSET(0x1928CB40)
#define MOLEMOLE_CONFIG_ANIMATORZONE_PROCESSANIMATORZONE_OFFSET UNITYSDK_OFFSET(0x1928D390)
#define MOLEMOLE_CONFIG_ANIMATORZONE_RESETSTATE_OFFSET UNITYSDK_OFFSET(0x1928BD80)
#define MOLEMOLE_CONFIG_ANIMATORZONE_SETSHOULDHANDLEBEFOREPHYSICS_OFFSET UNITYSDK_OFFSET(0x19289E20)
#define MOLEMOLE_CONFIG_ANIMATORZONE__CTOR_OFFSET UNITYSDK_OFFSET(0x19288B80)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZone_TypeDefinitionIndex = 92464;

	class AnimatorZone : public ::System::Object
	{
	public:
		::System::Type* typeCache; // 0x10
		::System::Collections::Generic::HashSet_1<::System::String*>* WhiteList; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::MoleMole::Config::AnimatorStateTimeSegment*>*>*>* LayerStateSegmentDict; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::Config::AnimatorStateTimeSegment*>*>*>* _LayerStateHashSegmentDict; // 0x28
		::Il2CppArray<::System::String*>* _BlackagList; // 0x30
		::System::Collections::Generic::HashSet_1<::System::String*>* BlackList; // 0x38
		::Il2CppArray<::System::String*>* _WhiteTagList; // 0x40
		::AEFABLGCLOI _callbackFlags; // 0x48
		::System::Boolean IsSeam; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONE__CTOR_OFFSET))(this);
		}

		::System::Boolean get_ShouldHandleBeforePhysics()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONE_GET_SHOULDHANDLEBEFOREPHYSICS_OFFSET))(this);
		}

		::System::Boolean get_NeedHandleUpdate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONE_GET_NEEDHANDLEUPDATE_OFFSET))(this);
		}

		::System::Boolean get_NeedHandlePreload()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONE_GET_NEEDHANDLEPRELOAD_OFFSET))(this);
		}

		::System::Void Init(::NLNIIPDCABP* animatorComponent)
		{
			return ((::System::Void(*)(::PVOID, ::NLNIIPDCABP*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONE_INIT_OFFSET))(this, animatorComponent);
		}

		::System::Void OnInit(::NLNIIPDCABP* animatorComponent)
		{
			return ((::System::Void(*)(::PVOID, ::NLNIIPDCABP*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONE_ONINIT_OFFSET))(this, animatorComponent);
		}

		::System::Void SetShouldHandleBeforePhysics(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONE_SETSHOULDHANDLEBEFOREPHYSICS_OFFSET))(this, value);
		}

		::UnityEngine::Color GetZoneTagColor()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONE_GETZONETAGCOLOR_OFFSET))(this);
		}

		::System::Boolean CheckZoneTagList(::NLNIIPDCABP* animatorComponent, ::PKMJPMFCNBK* zoneInfo, ::System::Boolean isPrev, ::System::Int32 layerIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::NLNIIPDCABP*, ::PKMJPMFCNBK*, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONE_CHECKZONETAGLIST_OFFSET))(this, animatorComponent, zoneInfo, isPrev, layerIndex);
		}

		::System::Boolean CheckZoneTagList_1(::NLNIIPDCABP* animatorComponent, ::System::Boolean isPrev)
		{
			return ((::System::Boolean(*)(::PVOID, ::NLNIIPDCABP*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONE_CHECKZONETAGLIST_1_OFFSET))(this, animatorComponent, isPrev);
		}

		::System::Void OnLayerStateSegmentDictChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONE_ONLAYERSTATESEGMENTDICTCHANGED_OFFSET))(this);
		}

		::System::Boolean get_isUpdateOneFrame()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONE_GET_ISUPDATEONEFRAME_OFFSET))(this);
		}

		::System::Int32 Build(::NLNIIPDCABP* animatorComponent)
		{
			return ((::System::Int32(*)(::PVOID, ::NLNIIPDCABP*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONE_BUILD_OFFSET))(this, animatorComponent);
		}

		::System::Void BuildExtraAnimatorZoneInfos(::NLNIIPDCABP* animatorComponent, ::PKMJPMFCNBK* zoneInfo)
		{
			return ((::System::Void(*)(::PVOID, ::NLNIIPDCABP*, ::PKMJPMFCNBK*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONE_BUILDEXTRAANIMATORZONEINFOS_OFFSET))(this, animatorComponent, zoneInfo);
		}

		::System::Void BuildAnimatorZoneInfos(::NLNIIPDCABP* animatorComponent, ::PKMJPMFCNBK* zoneInfo)
		{
			return ((::System::Void(*)(::PVOID, ::NLNIIPDCABP*, ::PKMJPMFCNBK*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONE_BUILDANIMATORZONEINFOS_OFFSET))(this, animatorComponent, zoneInfo);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONE_CLEAR_OFFSET))(this);
		}

		::System::Void ResetState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONE_RESETSTATE_OFFSET))(this);
		}

		::System::Void OnZonePreload(::MoleMole::Battle::Entity* entity, ::NLNIIPDCABP* animatorComponent)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::NLNIIPDCABP*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONE_ONZONEPRELOAD_OFFSET))(this, entity, animatorComponent);
		}

		::System::Void EnterZone(::System::Collections::Generic::List_1<::MEFIOFBDFFL>*& toHandleAnimatorZones, ::NLNIIPDCABP* animatorComponent, ::UnityEngine::AnimatorStateInfo& curStateInfo, ::PKMJPMFCNBK* zoneInfo, ::System::Single deltaTime, ::System::Int32 layerIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MEFIOFBDFFL>*&, ::NLNIIPDCABP*, ::UnityEngine::AnimatorStateInfo&, ::PKMJPMFCNBK*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONE_ENTERZONE_OFFSET))(this, toHandleAnimatorZones, animatorComponent, curStateInfo, zoneInfo, deltaTime, layerIndex);
		}

		::System::Void OnZoneEnter(::MoleMole::Battle::Entity* entity, ::UnityEngine::AnimatorStateInfo& curStateInfo, ::PKMJPMFCNBK* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::PKMJPMFCNBK*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONE_ONZONEENTER_OFFSET))(this, entity, curStateInfo, zoneInfo, deltaTime);
		}

		::System::Void ExitZone(::System::Collections::Generic::List_1<::MEFIOFBDFFL>*& toHandleAnimatorZones, ::NLNIIPDCABP* animatorComponent, ::System::Single stateNormalizedTime, ::PKMJPMFCNBK* zoneInfo, ::System::Single deltaTime, ::System::Int32 layerIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MEFIOFBDFFL>*&, ::NLNIIPDCABP*, ::System::Single, ::PKMJPMFCNBK*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONE_EXITZONE_OFFSET))(this, toHandleAnimatorZones, animatorComponent, stateNormalizedTime, zoneInfo, deltaTime, layerIndex);
		}

		::System::Void OnZoneExit(::MoleMole::Battle::Entity* entity, ::System::Single stateNormalizedTime, ::PKMJPMFCNBK* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::PKMJPMFCNBK*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONE_ONZONEEXIT_OFFSET))(this, entity, stateNormalizedTime, zoneInfo, deltaTime);
		}

		::System::Void OnUpdate(::MoleMole::Battle::Entity* entity, ::System::Single deltaTime, ::PKMJPMFCNBK* zoneInfo, ::System::Single animNormalizedTime, ::UnityEngine::AnimatorStateInfo& curStateInfo)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::PKMJPMFCNBK*, ::System::Single, ::UnityEngine::AnimatorStateInfo&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONE_ONUPDATE_OFFSET))(this, entity, deltaTime, zoneInfo, animNormalizedTime, curStateInfo);
		}

		::PKMJPMFCNBK* CreateZoneInfoInstance()
		{
			return ((::PKMJPMFCNBK*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONE_CREATEZONEINFOINSTANCE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::MoleMole::Config::AnimatorStateTimeSegment*>* GeCurtAnimatorStateTimeSegmentList(::PKMJPMFCNBK* zoneInfo)
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::Config::AnimatorStateTimeSegment*>*(*)(::PVOID, ::PKMJPMFCNBK*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONE_GECURTANIMATORSTATETIMESEGMENTLIST_OFFSET))(this, zoneInfo);
		}

		::MoleMole::Config::AnimatorStateTimeSegment* GeCurtAnimatorStateTimeSegment(::System::Int32 idx, ::PKMJPMFCNBK* zoneInfo)
		{
			return ((::MoleMole::Config::AnimatorStateTimeSegment*(*)(::PVOID, ::System::Int32, ::PKMJPMFCNBK*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONE_GECURTANIMATORSTATETIMESEGMENT_OFFSET))(this, idx, zoneInfo);
		}

		::System::Void GetZoneAllStateHash(::System::Int32 layer, ::System::Collections::Generic::List_1<::System::Int32>*& results)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONE_GETZONEALLSTATEHASH_OFFSET))(this, layer, results);
		}

		::System::Void ForceExit(::PKMJPMFCNBK* zoneInfo, ::NLNIIPDCABP* animatorComponent)
		{
			return ((::System::Void(*)(::PVOID, ::PKMJPMFCNBK*, ::NLNIIPDCABP*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONE_FORCEEXIT_OFFSET))(this, zoneInfo, animatorComponent);
		}

		::System::Boolean PreprocessAnimatorZone(::NLNIIPDCABP* animatorComponent, ::PKMJPMFCNBK* zoneInfo, ::System::Int32 layerIndex, ::System::Int32 prevStateName, ::System::Int32 curStateName, ::UnityEngine::AnimatorStateInfo& prevStateInfo, ::UnityEngine::AnimatorStateInfo& curStateInfo, ::System::Boolean isHasPrevStateName, ::System::Boolean isHasCurrentStateName, ::System::Single prevStateFrameCount, ::System::Single curStateFrameCount, ::System::Single preNormalizedTime, ::System::Single curNormalizedTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::NLNIIPDCABP*, ::PKMJPMFCNBK*, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::AnimatorStateInfo&, ::UnityEngine::AnimatorStateInfo&, ::System::Boolean, ::System::Boolean, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONE_PREPROCESSANIMATORZONE_OFFSET))(this, animatorComponent, zoneInfo, layerIndex, prevStateName, curStateName, prevStateInfo, curStateInfo, isHasPrevStateName, isHasCurrentStateName, prevStateFrameCount, curStateFrameCount, preNormalizedTime, curNormalizedTime);
		}

		::System::Boolean ProcessAnimatorZone(::System::Collections::Generic::List_1<::MEFIOFBDFFL>*& toHandleAnimatorZones, ::System::Int32 layerIndex, ::System::Boolean isStateHashEqual, ::System::Boolean curStateReEntered, ::System::Boolean isPreEqualCurState, ::System::Boolean isPreAnimStateInfoFirstAdd, ::UnityEngine::AnimatorStateInfo& prevStateInfo, ::UnityEngine::AnimatorStateInfo& curStateInfo, ::PKMJPMFCNBK* zoneInfo, ::NLNIIPDCABP* animatorComponent, ::System::Single preNormalizedTime, ::System::Single curNormalizedTime, ::System::Single deltaTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::MEFIOFBDFFL>*&, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::UnityEngine::AnimatorStateInfo&, ::UnityEngine::AnimatorStateInfo&, ::PKMJPMFCNBK*, ::NLNIIPDCABP*, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONE_PROCESSANIMATORZONE_OFFSET))(this, toHandleAnimatorZones, layerIndex, isStateHashEqual, curStateReEntered, isPreEqualCurState, isPreAnimStateInfoFirstAdd, prevStateInfo, curStateInfo, zoneInfo, animatorComponent, preNormalizedTime, curNormalizedTime, deltaTime);
		}

		::System::Boolean GetSegmentNameByAnimatorInfo(::NLNIIPDCABP* animatorComponent, ::PKMJPMFCNBK* zoneInfo, ::System::Boolean isPrev, ::System::Int32 layerIndex, ::System::Int32 stateName, ::System::Single stateFrameCount, ::System::Single stateNormalizedTime, ::System::Collections::Generic::List_1<::MoleMole::Config::AnimatorStateTimeSegment*>* timeSegments, ::System::Boolean& inTimeRange, ::System::Int32& timeIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::NLNIIPDCABP*, ::PKMJPMFCNBK*, ::System::Boolean, ::System::Int32, ::System::Int32, ::System::Single, ::System::Single, ::System::Collections::Generic::List_1<::MoleMole::Config::AnimatorStateTimeSegment*>*, ::System::Boolean&, ::System::Int32&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONE_GETSEGMENTNAMEBYANIMATORINFO_OFFSET))(this, animatorComponent, zoneInfo, isPrev, layerIndex, stateName, stateFrameCount, stateNormalizedTime, timeSegments, inTimeRange, timeIndex);
		}
	};
}
