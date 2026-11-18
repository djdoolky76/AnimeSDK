#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BAEEKGKDCJL.h"
#include "unitysdk/DPINADAJFCO.h"
#include "unitysdk/FKCPBAAEJJO.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/DEDDPKGLKHI_GEENBEFJCAF.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/IMEOLKEAJEO.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class CLBFDOIGIMB;
class FOLOGHLENFB;
class GEIHCPAOKKK;
class IHMFPAPMPCH;
class JJFFDGFKJAP;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Battle { class SimpleDropItemSubSystem_SimpleDropItem; }
namespace MoleMole::Config { class ItemDropEffectSetting; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_ALLOCATEITEM_OFFSET UNITYSDK_OFFSET(0x174C6E50)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_APPLYACTIVE_OFFSET UNITYSDK_OFFSET(0x174C9350)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_APPLYFORCE_OFFSET UNITYSDK_OFFSET(0x174CAC10)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_APPLYPOSITION_OFFSET UNITYSDK_OFFSET(0x174D0160)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_APPLYVELOCITY_OFFSET UNITYSDK_OFFSET(0x174CAA50)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_CACHEITEMIDS_OFFSET UNITYSDK_OFFSET(0x174C4420)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_CANPICKUPSUMMERSURFDROPITEM_OFFSET UNITYSDK_OFFSET(0x174CC900)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_CHECKSHOULDSHOWTIP_OFFSET UNITYSDK_OFFSET(0x174CEDE0)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_COMPLETEPICKUPITEM_OFFSET UNITYSDK_OFFSET(0x174CDC80)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_CREATEDROPITEM_OFFSET UNITYSDK_OFFSET(0x174C20B0)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_DOAUTOROTATE_OFFSET UNITYSDK_OFFSET(0x174C50D0)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_ENABLESHOWIDLEEFFECT_OFFSET UNITYSDK_OFFSET(0x174CBD10)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_ENSUREITEMCACHECAPACITY_OFFSET UNITYSDK_OFFSET(0x174C74A0)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_ENTERDEADSTAGE_OFFSET UNITYSDK_OFFSET(0x174CE350)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_EXECUTEJUMPINGANDFALLING_OFFSET UNITYSDK_OFFSET(0x174C6940)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_FINDDROPCOLLIDER_OFFSET UNITYSDK_OFFSET(0x174C86F0)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_FIREPICKUPEVENTS_OFFSET UNITYSDK_OFFSET(0x174CDD30)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_FIREPICKUPLEVELITEMEVENT_OFFSET UNITYSDK_OFFSET(0x174CE550)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_FIREREWARDTIP_1_OFFSET UNITYSDK_OFFSET(0x174CE860)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_FIREREWARDTIP_OFFSET UNITYSDK_OFFSET(0x174CDFA0)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_FIRESERVERREWARDTIPS_OFFSET UNITYSDK_OFFSET(0x174CE9F0)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_FIRESURFITEMPICKUPEVENTS_OFFSET UNITYSDK_OFFSET(0x174CE6E0)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_FLUSHREMOVECACHE_OFFSET UNITYSDK_OFFSET(0x174C5D70)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_GETCURRENTITEMCOUNT_OFFSET UNITYSDK_OFFSET(0x174C1EB0)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_GETDEADEFFECTMUTEXDURATION_OFFSET UNITYSDK_OFFSET(0x174D0050)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_GETDROPEFFECT_OFFSET UNITYSDK_OFFSET(0x174C6F10)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_GETDROPITEMATTACHPOINT_OFFSET UNITYSDK_OFFSET(0x174C8B30)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_GETDROPITEMEFFECTNAME_OFFSET UNITYSDK_OFFSET(0x174CF740)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_GETGRAVITY_OFFSET UNITYSDK_OFFSET(0x174CADC0)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_GETITEMCOLLIDERRADIUS_OFFSET UNITYSDK_OFFSET(0x174CD760)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_GETITEMPOSITION_OFFSET UNITYSDK_OFFSET(0x174CB910)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_GETITEMPOSTOTARGETPOS_1_OFFSET UNITYSDK_OFFSET(0x174CF340)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_GETITEMPOSTOTARGETPOS_OFFSET UNITYSDK_OFFSET(0x174CD3E0)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_GETMAXITEMCOUNT_OFFSET UNITYSDK_OFFSET(0x174C2AB0)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_GETPICKERCOLLIDERRADIUS_OFFSET UNITYSDK_OFFSET(0x174CD830)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_GETPICKERENTITY_OFFSET UNITYSDK_OFFSET(0x174CCDA0)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_GETPICKERPOSITION_1_OFFSET UNITYSDK_OFFSET(0x174CEF50)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_GETPICKERPOSITION_OFFSET UNITYSDK_OFFSET(0x174CD340)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_GETPRELOADMODELCOUNT_OFFSET UNITYSDK_OFFSET(0x174C80E0)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_GETROTATION_OFFSET UNITYSDK_OFFSET(0x174C8300)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_GET_CURRENTITEMCOUNT_OFFSET UNITYSDK_OFFSET(0x174C1E20)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_GET_ISONLYPICKSHOW_OFFSET UNITYSDK_OFFSET(0x174C1E00)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_GROUNDCHECK_OFFSET UNITYSDK_OFFSET(0x174CAF10)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_HITWALLCHECK_OFFSET UNITYSDK_OFFSET(0x174CB480)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_INITDROPPARAM_OFFSET UNITYSDK_OFFSET(0x174C9120)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_INITEXTRAITEMTRAITS_OFFSET UNITYSDK_OFFSET(0x174C6F60)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_INITPICKUPPARAM_OFFSET UNITYSDK_OFFSET(0x174C7190)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_INITRANDOMSEQUENCE_OFFSET UNITYSDK_OFFSET(0x174C34E0)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_INITSIMULATEMOTIONPARAMS_OFFSET UNITYSDK_OFFSET(0x174C9D40)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_INITSURFITEMDATA_OFFSET UNITYSDK_OFFSET(0x174C96A0)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_INTERNALCREATEDROPITEM_OFFSET UNITYSDK_OFFSET(0x174C22E0)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_INTERNALGETCURRENTITEMCOUNT_OFFSET UNITYSDK_OFFSET(0x174C1F40)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_INTERNALGETMAXITEMCOUNT_OFFSET UNITYSDK_OFFSET(0x174C2BB0)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_INTERNALREMOVEDROPITEM_1_OFFSET UNITYSDK_OFFSET(0x174D0420)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_INTERNALREMOVEDROPITEM_OFFSET UNITYSDK_OFFSET(0x174C30A0)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_INTERNALRESETMAXITEMCOUNT_OFFSET UNITYSDK_OFFSET(0x174C2E70)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_INTERNALSETDROPITEMACTIVE_OFFSET UNITYSDK_OFFSET(0x174C3180)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_INTERNALSETMAXITEMCOUNT_OFFSET UNITYSDK_OFFSET(0x174C2D00)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_INTERNALSTARTPICKUP_OFFSET UNITYSDK_OFFSET(0x174C3330)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_ISDROPITEMSKIPIDLESTATE_OFFSET UNITYSDK_OFFSET(0x174CBF70)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_JUMP_OFFSET UNITYSDK_OFFSET(0x174CA4C0)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x174C3470)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x174C36E0)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_ONFIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x174C5E70)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_ONGROUND_OFFSET UNITYSDK_OFFSET(0x174C9740)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_ONMODELLOADED_OFFSET UNITYSDK_OFFSET(0x174C7780)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x174C3DA0)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_PICKUPANDREMOVEDROPITEM_OFFSET UNITYSDK_OFFSET(0x174C81B0)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_PICKUPCHECK_OFFSET UNITYSDK_OFFSET(0x174CD440)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_PICKUPITEM_OFFSET UNITYSDK_OFFSET(0x174CD6D0)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_PLAYBORNEFFECT_OFFSET UNITYSDK_OFFSET(0x174C8F50)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_PLAYDEADEFFECT_OFFSET UNITYSDK_OFFSET(0x174CFC90)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_PLAYIDLEEFFECT_OFFSET UNITYSDK_OFFSET(0x174CBBB0)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_PLAYWORLDEFFECT_OFFSET UNITYSDK_OFFSET(0x174CF960)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_PRELOADDROPITEM_OFFSET UNITYSDK_OFFSET(0x174C2940)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_RANDOMRANGE_OFFSET UNITYSDK_OFFSET(0x174C95E0)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_RELEASEITEM_OFFSET UNITYSDK_OFFSET(0x174C3A70)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_REMOVEDROPITEM_OFFSET UNITYSDK_OFFSET(0x174C2FE0)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_REMOVEEFFECT_OFFSET UNITYSDK_OFFSET(0x174CBD70)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_RESETMAXITEMCOUNT_1_OFFSET UNITYSDK_OFFSET(0x174C2EF0)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_RESETMAXITEMCOUNT_OFFSET UNITYSDK_OFFSET(0x174C2D90)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_SETDROPITEMACTIVE_OFFSET UNITYSDK_OFFSET(0x174C30F0)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_SETITEMPOSITION_OFFSET UNITYSDK_OFFSET(0x174CB400)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_SETMAXITEMCOUNT_OFFSET UNITYSDK_OFFSET(0x174C2C50)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_SETONGROUND_OFFSET UNITYSDK_OFFSET(0x174CA780)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_SETRENDERERS_OFFSET UNITYSDK_OFFSET(0x174CB990)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_SET_ISONLYPICKSHOW_OFFSET UNITYSDK_OFFSET(0x174C1E10)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_SIMULATEDROPMOTION_OFFSET UNITYSDK_OFFSET(0x174C6240)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_STARTPICKUP_1_OFFSET UNITYSDK_OFFSET(0x174CC480)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_STARTPICKUP_OFFSET UNITYSDK_OFFSET(0x174C32B0)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_SYNCPOSITIONFROMTRANSFORM_OFFSET UNITYSDK_OFFSET(0x174C8420)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_TRIMTOMAXITEMCOUNT_OFFSET UNITYSDK_OFFSET(0x174C7550)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_TRYINITTARGETYOFFSET_OFFSET UNITYSDK_OFFSET(0x174CF120)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_UPDATEBORNEFFECT_OFFSET UNITYSDK_OFFSET(0x174C45B0)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_UPDATECUSTOMIZEDPICKUP_OFFSET UNITYSDK_OFFSET(0x174CC410)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_UPDATEONLYPICKSHOWSTAGE_OFFSET UNITYSDK_OFFSET(0x174C4650)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_UPDATEPICKFLYING_OFFSET UNITYSDK_OFFSET(0x174C4A00)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_UPDATEPICKUPCHECK_OFFSET UNITYSDK_OFFSET(0x174C4F80)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_UPDATEPROXIMITYPICKUP_OFFSET UNITYSDK_OFFSET(0x174CBFE0)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_UPDATESTAGE_OFFSET UNITYSDK_OFFSET(0x174C4800)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x174D0570)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x174D0890)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x174D0920)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM___BASE_ONFIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x174D09B0)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x174D0A50)

namespace MoleMole::Battle
{
	inline static constexpr unsigned int SimpleDropItemSubSystem_TypeDefinitionIndex = 53112;

	class SimpleDropItemSubSystem
	{
	public:
		static ::System::Boolean* StaticGet__IsOnlyPickShow_k__BackingField()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(SimpleDropItemSubSystem_TypeDefinitionIndex)->GetStaticField(0x10180);
		}
		// static const ::System::Int32 ScatterAngleCount = 0x12; // 0x0
		// static const ::System::Single AirborneThreshold; // 0x0
		// static const ::System::Single SpherecastRadius; // 0x0
		::System::Collections::Generic::List_1<::System::Int32>* _removeCache; // 0x10
		::System::Collections::Generic::Stack_1<::System::Object*>* _itemPool; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* _maxItemCountByItemID; // 0x20
		::Il2CppArray<::UnityEngine::RaycastHit>* _dropHits; // 0x28
		::Il2CppArray<::System::Int32>* _scatterAngleRandomSequence; // 0x30
		::System::Collections::Generic::List_1<::System::Int32>* _updateCache; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>* _deadEffectNextPlayableTimeByItemID; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>* _items; // 0x48
		::System::Int32 _scatterAngleId; // 0x50
		::System::Int32 _nextHandleId; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM__CTOR_OFFSET))(this);
		}

		static ::System::Boolean get_IsOnlyPickShow()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_GET_ISONLYPICKSHOW_OFFSET))();
		}

		static ::System::Void set_IsOnlyPickShow(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_SET_ISONLYPICKSHOW_OFFSET))(value);
		}

		static ::System::Int32 get_CurrentItemCount()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_GET_CURRENTITEMCOUNT_OFFSET))();
		}

		static ::System::Int32 GetCurrentItemCount(::System::Int32 itemID)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_GETCURRENTITEMCOUNT_OFFSET))(itemID);
		}

		static ::IMEOLKEAJEO CreateDropItem(::System::Int32 itemID, ::System::Int32 count, ::UnityEngine::Vector3 velocity, ::FKCPBAAEJJO dropItemSource, ::UnityEngine::Vector3 pos, ::System::Single faceAngle, ::System::Boolean defaultActive, ::System::Int32 overridePickType, ::System::Nullable_1<::System::Object*> serverIndex, ::System::Collections::Generic::List_1<::CLBFDOIGIMB*>* extraItemTraits, ::System::Action_1<::IMEOLKEAJEO>* onCreated)
		{
			return ((::IMEOLKEAJEO(*)(::System::Int32, ::System::Int32, ::UnityEngine::Vector3, ::FKCPBAAEJJO, ::UnityEngine::Vector3, ::System::Single, ::System::Boolean, ::System::Int32, ::System::Nullable_1<::System::Object*>, ::System::Collections::Generic::List_1<::CLBFDOIGIMB*>*, ::System::Action_1<::IMEOLKEAJEO>*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_CREATEDROPITEM_OFFSET))(itemID, count, velocity, dropItemSource, pos, faceAngle, defaultActive, overridePickType, serverIndex, extraItemTraits, onCreated);
		}

		static ::System::Void PreloadDropItem(::System::Int32 itemID, ::System::Int32 count)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_PRELOADDROPITEM_OFFSET))(itemID, count);
		}

		static ::System::Int32 GetMaxItemCount(::System::Int32 itemID)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_GETMAXITEMCOUNT_OFFSET))(itemID);
		}

		static ::System::Void SetMaxItemCount(::System::Int32 itemID, ::System::Int32 maxItemCount)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_SETMAXITEMCOUNT_OFFSET))(itemID, maxItemCount);
		}

		static ::System::Void ResetMaxItemCount(::System::Int32 itemID)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_RESETMAXITEMCOUNT_OFFSET))(itemID);
		}

		static ::System::Void ResetMaxItemCount_1()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_RESETMAXITEMCOUNT_1_OFFSET))();
		}

		static ::System::Void RemoveDropItem(::IMEOLKEAJEO handle)
		{
			return ((::System::Void(*)(::IMEOLKEAJEO))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_REMOVEDROPITEM_OFFSET))(handle);
		}

		static ::System::Void SetDropItemActive(::IMEOLKEAJEO handle, ::System::Boolean value)
		{
			return ((::System::Void(*)(::IMEOLKEAJEO, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_SETDROPITEMACTIVE_OFFSET))(handle, value);
		}

		static ::System::Void StartPickUp(::IMEOLKEAJEO handle)
		{
			return ((::System::Void(*)(::IMEOLKEAJEO))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_STARTPICKUP_OFFSET))(handle);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_ONAWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnFixedUpdate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_ONFIXEDUPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void CacheItemIds()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_CACHEITEMIDS_OFFSET))(this);
		}

		::IMEOLKEAJEO InternalCreateDropItem(::System::Int32 itemID, ::System::Int32 count, ::UnityEngine::Vector3 velocity, ::FKCPBAAEJJO dropItemSource, ::UnityEngine::Vector3 pos, ::System::Single faceAngle, ::System::Boolean defaultActive, ::System::Int32 overridePickType, ::System::Nullable_1<::System::Object*> serverIndex, ::System::Collections::Generic::List_1<::CLBFDOIGIMB*>* extraItemTraits, ::System::Action_1<::IMEOLKEAJEO>* onCreated)
		{
			return ((::IMEOLKEAJEO(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::Vector3, ::FKCPBAAEJJO, ::UnityEngine::Vector3, ::System::Single, ::System::Boolean, ::System::Int32, ::System::Nullable_1<::System::Object*>, ::System::Collections::Generic::List_1<::CLBFDOIGIMB*>*, ::System::Action_1<::IMEOLKEAJEO>*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_INTERNALCREATEDROPITEM_OFFSET))(this, itemID, count, velocity, dropItemSource, pos, faceAngle, defaultActive, overridePickType, serverIndex, extraItemTraits, onCreated);
		}

		static ::System::Int32 GetPreloadModelCount(::FOLOGHLENFB* itemTemplateData, ::System::Int32 count)
		{
			return ((::System::Int32(*)(::FOLOGHLENFB*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_GETPRELOADMODELCOUNT_OFFSET))(itemTemplateData, count);
		}

		::System::Int32 InternalGetCurrentItemCount(::System::Int32 itemID)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_INTERNALGETCURRENTITEMCOUNT_OFFSET))(this, itemID);
		}

		::System::Int32 InternalGetMaxItemCount(::System::Int32 itemID)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_INTERNALGETMAXITEMCOUNT_OFFSET))(this, itemID);
		}

		::System::Void InternalSetMaxItemCount(::System::Int32 itemID, ::System::Int32 maxItemCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_INTERNALSETMAXITEMCOUNT_OFFSET))(this, itemID, maxItemCount);
		}

		::System::Void InternalResetMaxItemCount(::System::Int32 itemID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_INTERNALRESETMAXITEMCOUNT_OFFSET))(this, itemID);
		}

		::System::Void TrimToMaxItemCount(::System::Int32 itemID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_TRIMTOMAXITEMCOUNT_OFFSET))(this, itemID);
		}

		::System::Void OnModelLoaded(::System::Int32 handleId, ::Foundation::AssetPath path, ::UnityEngine::GameObject* go, ::System::Action_1<::IMEOLKEAJEO>* onCreated)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Foundation::AssetPath, ::UnityEngine::GameObject*, ::System::Action_1<::IMEOLKEAJEO>*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_ONMODELLOADED_OFFSET))(this, handleId, path, go, onCreated);
		}

		static ::UnityEngine::Collider* FindDropCollider(::UnityEngine::GameObject* go, ::MoleMole::Config::ItemDropEffectSetting* setting)
		{
			return ((::UnityEngine::Collider*(*)(::UnityEngine::GameObject*, ::MoleMole::Config::ItemDropEffectSetting*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_FINDDROPCOLLIDER_OFFSET))(go, setting);
		}

		static ::UnityEngine::Transform* GetDropItemAttachPoint(::UnityEngine::GameObject* go, ::System::String* attachPointName)
		{
			return ((::UnityEngine::Transform*(*)(::UnityEngine::GameObject*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_GETDROPITEMATTACHPOINT_OFFSET))(go, attachPointName);
		}

		static ::UnityEngine::Quaternion GetRotation(::UnityEngine::Vector3 forward)
		{
			return ((::UnityEngine::Quaternion(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_GETROTATION_OFFSET))(forward);
		}

		::System::Void InitRandomSequence()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_INITRANDOMSEQUENCE_OFFSET))(this);
		}

		::System::Void EnsureItemCacheCapacity(::System::Int32 capacity)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_ENSUREITEMCACHECAPACITY_OFFSET))(this, capacity);
		}

		static ::BAEEKGKDCJL GetDropEffect(::FKCPBAAEJJO dropItemSource)
		{
			return ((::BAEEKGKDCJL(*)(::FKCPBAAEJJO))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_GETDROPEFFECT_OFFSET))(dropItemSource);
		}

		static ::System::Void InitPickUpParam(::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem* item)
		{
			return ((::System::Void(*)(::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_INITPICKUPPARAM_OFFSET))(item);
		}

		static ::System::Void InitExtraItemTraits(::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem* item, ::System::Collections::Generic::List_1<::CLBFDOIGIMB*>* extraItemTraits)
		{
			return ((::System::Void(*)(::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem*, ::System::Collections::Generic::List_1<::CLBFDOIGIMB*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_INITEXTRAITEMTRAITS_OFFSET))(item, extraItemTraits);
		}

		static ::System::Void InitSurfItemData(::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem* item, ::IHMFPAPMPCH* surfTrait)
		{
			return ((::System::Void(*)(::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem*, ::IHMFPAPMPCH*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_INITSURFITEMDATA_OFFSET))(item, surfTrait);
		}

		static ::System::Single RandomRange(::System::Single min, ::System::Single max)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_RANDOMRANGE_OFFSET))(min, max);
		}

		::System::Void InitDropParam(::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem* item)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_INITDROPPARAM_OFFSET))(this, item);
		}

		static ::System::Boolean Jump(::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem* item)
		{
			return ((::System::Boolean(*)(::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_JUMP_OFFSET))(item);
		}

		::System::Void InitSimulateMotionParams(::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem* item)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_INITSIMULATEMOTIONPARAMS_OFFSET))(this, item);
		}

		::System::Void ExecuteJumpingAndFalling(::System::Single deltaTime, ::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem* item)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_EXECUTEJUMPINGANDFALLING_OFFSET))(this, deltaTime, item);
		}

		static ::System::Void GroundCheck(::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem* item)
		{
			return ((::System::Void(*)(::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_GROUNDCHECK_OFFSET))(item);
		}

		::System::Void HitWallCheck(::System::Single deltaTime, ::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem* item)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_HITWALLCHECK_OFFSET))(this, deltaTime, item);
		}

		static ::System::Void SimulateDropMotion(::System::Single deltaTime, ::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem* item)
		{
			return ((::System::Void(*)(::System::Single, ::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_SIMULATEDROPMOTION_OFFSET))(deltaTime, item);
		}

		static ::UnityEngine::Vector3 GetGravity(::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem* item)
		{
			return ((::UnityEngine::Vector3(*)(::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_GETGRAVITY_OFFSET))(item);
		}

		static ::System::Void OnGround(::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem* item, ::System::Boolean isPosYAlmostOnGround)
		{
			return ((::System::Void(*)(::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_ONGROUND_OFFSET))(item, isPosYAlmostOnGround);
		}

		static ::System::Void UpdateBornEffect(::System::Single deltaTime, ::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem* item)
		{
			return ((::System::Void(*)(::System::Single, ::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_UPDATEBORNEFFECT_OFFSET))(deltaTime, item);
		}

		static ::System::Void UpdateStage(::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem* item, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_UPDATESTAGE_OFFSET))(item, deltaTime);
		}

		static ::System::Void UpdateOnlyPickShowStage(::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem* item, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_UPDATEONLYPICKSHOWSTAGE_OFFSET))(item, deltaTime);
		}

		static ::System::Void UpdateCustomizedPickUp(::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem* item)
		{
			return ((::System::Void(*)(::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_UPDATECUSTOMIZEDPICKUP_OFFSET))(item);
		}

		static ::System::Boolean CanPickUpSummerSurfDropItem(::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem* item)
		{
			return ((::System::Boolean(*)(::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_CANPICKUPSUMMERSURFDROPITEM_OFFSET))(item);
		}

		static ::System::Void UpdateProximityPickUp(::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem* item)
		{
			return ((::System::Void(*)(::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_UPDATEPROXIMITYPICKUP_OFFSET))(item);
		}

		static ::System::Void StartPickUp_1(::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem* item)
		{
			return ((::System::Void(*)(::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_STARTPICKUP_1_OFFSET))(item);
		}

		::System::Void InternalStartPickUp(::System::Int32 handleId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_INTERNALSTARTPICKUP_OFFSET))(this, handleId);
		}

		static ::System::Void UpdatePickFlying(::System::Single deltaTime, ::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem* item)
		{
			return ((::System::Void(*)(::System::Single, ::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_UPDATEPICKFLYING_OFFSET))(deltaTime, item);
		}

		::System::Void UpdatePickUpCheck(::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem* item)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_UPDATEPICKUPCHECK_OFFSET))(this, item);
		}

		static ::System::Boolean PickUpCheck(::UnityEngine::Vector3 itemPosToTargetPos, ::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem* item)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3, ::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_PICKUPCHECK_OFFSET))(itemPosToTargetPos, item);
		}

		::System::Void PickUpItem(::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem* item)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_PICKUPITEM_OFFSET))(this, item);
		}

		::System::Boolean CompletePickUpItem(::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem* item, ::System::Boolean enterDeadStage)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_COMPLETEPICKUPITEM_OFFSET))(this, item, enterDeadStage);
		}

		static ::System::Void FirePickUpEvents(::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem* item)
		{
			return ((::System::Void(*)(::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_FIREPICKUPEVENTS_OFFSET))(item);
		}

		static ::System::Void FirePickUpLevelItemEvent(::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem* item)
		{
			return ((::System::Void(*)(::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_FIREPICKUPLEVELITEMEVENT_OFFSET))(item);
		}

		static ::System::Void FireSurfItemPickUpEvents(::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem* item)
		{
			return ((::System::Void(*)(::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_FIRESURFITEMPICKUPEVENTS_OFFSET))(item);
		}

		static ::System::Void FireRewardTip(::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem* item)
		{
			return ((::System::Void(*)(::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_FIREREWARDTIP_OFFSET))(item);
		}

		static ::System::Void FireRewardTip_1(::System::Int32 itemTemplateId, ::System::Int32 itemCount)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_FIREREWARDTIP_1_OFFSET))(itemTemplateId, itemCount);
		}

		static ::System::Void FireServerRewardTips(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::JJFFDGFKJAP*>* serverRewardDropItems, ::DEDDPKGLKHI_GEENBEFJCAF serverIndex, ::System::Int32 itemTemplateID, ::System::Int32 modelIndex, ::System::Int32 modelCount)
		{
			return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::JJFFDGFKJAP*>*, ::DEDDPKGLKHI_GEENBEFJCAF, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_FIRESERVERREWARDTIPS_OFFSET))(serverRewardDropItems, serverIndex, itemTemplateID, modelIndex, modelCount);
		}

		static ::System::Boolean CheckShouldShowTip(::System::Int32 cfgId, ::FOLOGHLENFB*& item)
		{
			return ((::System::Boolean(*)(::System::Int32, ::FOLOGHLENFB*&))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_CHECKSHOULDSHOWTIP_OFFSET))(cfgId, item);
		}

		static ::MoleMole::EntityHandle GetPickerEntity(::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem* item)
		{
			return ((::MoleMole::EntityHandle(*)(::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_GETPICKERENTITY_OFFSET))(item);
		}

		static ::UnityEngine::Vector3 GetPickerPosition(::MoleMole::EntityHandle pickerEntity, ::GEIHCPAOKKK* pickerModelComponent, ::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem* item)
		{
			return ((::UnityEngine::Vector3(*)(::MoleMole::EntityHandle, ::GEIHCPAOKKK*, ::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_GETPICKERPOSITION_OFFSET))(pickerEntity, pickerModelComponent, item);
		}

		static ::UnityEngine::Vector3 GetPickerPosition_1(::MoleMole::EntityHandle pickerEntity, ::GEIHCPAOKKK* pickerModelComponent, ::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem* item, ::System::Boolean& useConfigPosition)
		{
			return ((::UnityEngine::Vector3(*)(::MoleMole::EntityHandle, ::GEIHCPAOKKK*, ::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem*, ::System::Boolean&))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_GETPICKERPOSITION_1_OFFSET))(pickerEntity, pickerModelComponent, item, useConfigPosition);
		}

		static ::System::Void TryInitTargetYOffset(::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem* item)
		{
			return ((::System::Void(*)(::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_TRYINITTARGETYOFFSET_OFFSET))(item);
		}

		static ::System::Boolean GetItemPosToTargetPos(::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem* item, ::UnityEngine::Vector3& itemPosToTargetPos)
		{
			return ((::System::Boolean(*)(::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem*, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_GETITEMPOSTOTARGETPOS_OFFSET))(item, itemPosToTargetPos);
		}

		static ::System::Boolean GetItemPosToTargetPos_1(::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem* item, ::UnityEngine::Vector3& itemPosToTargetPos, ::System::Boolean& useConfigPosition)
		{
			return ((::System::Boolean(*)(::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem*, ::UnityEngine::Vector3&, ::System::Boolean&))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_GETITEMPOSTOTARGETPOS_1_OFFSET))(item, itemPosToTargetPos, useConfigPosition);
		}

		static ::System::Single GetItemColliderRadius(::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem* item)
		{
			return ((::System::Single(*)(::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_GETITEMCOLLIDERRADIUS_OFFSET))(item);
		}

		static ::System::Single GetPickerColliderRadius(::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem* item)
		{
			return ((::System::Single(*)(::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_GETPICKERCOLLIDERRADIUS_OFFSET))(item);
		}

		static ::System::Void PlayBornEffect(::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem* item)
		{
			return ((::System::Void(*)(::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_PLAYBORNEFFECT_OFFSET))(item);
		}

		static ::System::Void PlayIdleEffect(::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem* item)
		{
			return ((::System::Void(*)(::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_PLAYIDLEEFFECT_OFFSET))(item);
		}

		::System::Void PlayDeadEffect(::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem* item)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_PLAYDEADEFFECT_OFFSET))(this, item);
		}

		::System::Single GetDeadEffectMutexDuration(::System::Int32 itemID)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_GETDEADEFFECTMUTEXDURATION_OFFSET))(this, itemID);
		}

		::System::Void EnterDeadStage(::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem* item)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_ENTERDEADSTAGE_OFFSET))(this, item);
		}

		static ::System::Void PlayWorldEffect(::System::String* effectName, ::UnityEngine::Vector3 position, ::UnityEngine::Vector3 forward, ::System::Action_1<::MoleMole::Battle::Entity*>* onCreated, ::UnityEngine::Transform* attachTransform)
		{
			return ((::System::Void(*)(::System::String*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Action_1<::MoleMole::Battle::Entity*>*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_PLAYWORLDEFFECT_OFFSET))(effectName, position, forward, onCreated, attachTransform);
		}

		static ::System::String* GetDropItemEffectName(::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem* item, ::DPINADAJFCO phase)
		{
			return ((::System::String*(*)(::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem*, ::DPINADAJFCO))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_GETDROPITEMEFFECTNAME_OFFSET))(item, phase);
		}

		static ::System::Boolean IsDropItemSkipIdleState(::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem* item)
		{
			return ((::System::Boolean(*)(::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_ISDROPITEMSKIPIDLESTATE_OFFSET))(item);
		}

		static ::System::Boolean EnableShowIdleEffect(::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem* item)
		{
			return ((::System::Boolean(*)(::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_ENABLESHOWIDLEEFFECT_OFFSET))(item);
		}

		static ::System::Void DoAutoRotate(::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem* item)
		{
			return ((::System::Void(*)(::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_DOAUTOROTATE_OFFSET))(item);
		}

		::System::Void InternalSetDropItemActive(::System::Int32 handleId, ::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_INTERNALSETDROPITEMACTIVE_OFFSET))(this, handleId, value);
		}

		static ::System::Void ApplyActive(::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem* item)
		{
			return ((::System::Void(*)(::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_APPLYACTIVE_OFFSET))(item);
		}

		static ::System::Void ApplyPosition(::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem* item)
		{
			return ((::System::Void(*)(::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_APPLYPOSITION_OFFSET))(item);
		}

		static ::UnityEngine::Vector3 GetItemPosition(::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem* item)
		{
			return ((::UnityEngine::Vector3(*)(::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_GETITEMPOSITION_OFFSET))(item);
		}

		static ::System::Void SetItemPosition(::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem* item, ::UnityEngine::Vector3 position)
		{
			return ((::System::Void(*)(::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_SETITEMPOSITION_OFFSET))(item, position);
		}

		static ::System::Void SyncPositionFromTransform(::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem* item)
		{
			return ((::System::Void(*)(::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_SYNCPOSITIONFROMTRANSFORM_OFFSET))(item);
		}

		static ::System::Void SetOnGround(::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem* item, ::System::Boolean value)
		{
			return ((::System::Void(*)(::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_SETONGROUND_OFFSET))(item, value);
		}

		static ::System::Void ApplyVelocity(::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem* item, ::UnityEngine::Vector3 velocity)
		{
			return ((::System::Void(*)(::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_APPLYVELOCITY_OFFSET))(item, velocity);
		}

		static ::System::Void ApplyForce(::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem* item, ::UnityEngine::Vector3 force)
		{
			return ((::System::Void(*)(::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_APPLYFORCE_OFFSET))(item, force);
		}

		static ::System::Void SetRenderers(::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem* item, ::System::Boolean value)
		{
			return ((::System::Void(*)(::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_SETRENDERERS_OFFSET))(item, value);
		}

		::System::Void InternalRemoveDropItem(::System::Int32 handleId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_INTERNALREMOVEDROPITEM_OFFSET))(this, handleId);
		}

		::System::Void InternalRemoveDropItem_1(::System::Int32 handleId, ::System::Boolean enterDeadStage)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_INTERNALREMOVEDROPITEM_1_OFFSET))(this, handleId, enterDeadStage);
		}

		::System::Void PickUpAndRemoveDropItem(::System::Int32 handleId, ::System::Boolean enterDeadStage)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_PICKUPANDREMOVEDROPITEM_OFFSET))(this, handleId, enterDeadStage);
		}

		::System::Void FlushRemoveCache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_FLUSHREMOVECACHE_OFFSET))(this);
		}

		::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem* AllocateItem()
		{
			return ((::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_ALLOCATEITEM_OFFSET))(this);
		}

		::System::Void ReleaseItem(::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem* item)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_RELEASEITEM_OFFSET))(this, item);
		}

		static ::System::Void RemoveEffect(::MoleMole::EntityHandle& effectHandle)
		{
			return ((::System::Void(*)(::MoleMole::EntityHandle&))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_REMOVEEFFECT_OFFSET))(effectHandle);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnFixedUpdate(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM___BASE_ONFIXEDUPDATE_OFFSET))(this, P0);
		}

		::System::Void __base_OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
