#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ELFDOCCOFLJ_2.h"
#include "unitysdk/FFINLFNBLBG.h"
#include "unitysdk/Foundation/Unreal/FGameplayTag.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/GLHOLLOPOOB.h"
#include "unitysdk/Foundation/ViewObject/SuiteInfo.h"

class CHDFDOGABHI;
class DBIHEOFKIAA;
class EJHHPFFPFOJ;
class GEAPPLEFPJJ;
class JCADHFOKIHK;
class NFCIDHJGOIB;
class NMLEGIGBGKM;
class PCFMJDNECHN;
namespace FluffyUnderware::Curvy { class CurvySpline; }
namespace MoleMole { class FloorSubsystem_FGamePlayTagSupport; }
namespace MoleMole { class MonoTriggerEventDispatcher; }
namespace System { class EventArgs; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }
template <typename T1, typename T2> class JKLAKHFDIEN_2;

#define MOLEMOLE_FLOORSUBSYSTEM_ADDDYNAMICCONFIGTRIGGER_OFFSET UNITYSDK_OFFSET(0x1B90EBB0)
#define MOLEMOLE_FLOORSUBSYSTEM_CLEARALLGAMEPLAYTAGCACHE_OFFSET UNITYSDK_OFFSET(0x1B911380)
#define MOLEMOLE_FLOORSUBSYSTEM_CLEARGAMEPLAYTAGCACHE_1_OFFSET UNITYSDK_OFFSET(0x1B911140)
#define MOLEMOLE_FLOORSUBSYSTEM_CLEARGAMEPLAYTAGCACHE_OFFSET UNITYSDK_OFFSET(0x1B911090)
#define MOLEMOLE_FLOORSUBSYSTEM_CREATECURVYSPLINE_OFFSET UNITYSDK_OFFSET(0x1B90DAC0)
#define MOLEMOLE_FLOORSUBSYSTEM_CREATETRIGGEREVENTDISPATCHER_OFFSET UNITYSDK_OFFSET(0x1B90C880)
#define MOLEMOLE_FLOORSUBSYSTEM_GETCONFIGTRIGGER_1_OFFSET UNITYSDK_OFFSET(0x1B90CE50)
#define MOLEMOLE_FLOORSUBSYSTEM_GETCONFIGTRIGGER_OFFSET UNITYSDK_OFFSET(0x1B90D040)
#define MOLEMOLE_FLOORSUBSYSTEM_GETGAMEPLAYTAGSFROMCONFIG_OFFSET UNITYSDK_OFFSET(0x1B90FC00)
#define MOLEMOLE_FLOORSUBSYSTEM_GETSPLINESBYGAMEPLAYTAG_1_OFFSET UNITYSDK_OFFSET(0x1B910E30)
#define MOLEMOLE_FLOORSUBSYSTEM_GETSPLINESBYGAMEPLAYTAG_OFFSET UNITYSDK_OFFSET(0x1B910570)
#define MOLEMOLE_FLOORSUBSYSTEM_GETVIEWOBJECTSBYSPLINE_OFFSET UNITYSDK_OFFSET(0x1B90F650)
#define MOLEMOLE_FLOORSUBSYSTEM_GET_FLOORID_OFFSET UNITYSDK_OFFSET(0x1B90F1E0)
#define MOLEMOLE_FLOORSUBSYSTEM_GET_FLOORUSAGE_OFFSET UNITYSDK_OFFSET(0x1B90F1F0)
#define MOLEMOLE_FLOORSUBSYSTEM_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x1B90BD50)
#define MOLEMOLE_FLOORSUBSYSTEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1B90C3D0)
#define MOLEMOLE_FLOORSUBSYSTEM_ONSECTIONSWITCHED_OFFSET UNITYSDK_OFFSET(0x1B911940)
#define MOLEMOLE_FLOORSUBSYSTEM_ONSPLINEADDED_OFFSET UNITYSDK_OFFSET(0x1B90E310)
#define MOLEMOLE_FLOORSUBSYSTEM_ONSPLINEDISPOSED_OFFSET UNITYSDK_OFFSET(0x1B90FC60)
#define MOLEMOLE_FLOORSUBSYSTEM_RECORDVIEWOBJECTFROMSPLINE_OFFSET UNITYSDK_OFFSET(0x1B90D670)
#define MOLEMOLE_FLOORSUBSYSTEM_REMOVEVIEWOBJECTFROMSPLINE_OFFSET UNITYSDK_OFFSET(0x1B90F8A0)
#define MOLEMOLE_FLOORSUBSYSTEM_REQUESTSPLINE_1_OFFSET UNITYSDK_OFFSET(0x1B90D300)
#define MOLEMOLE_FLOORSUBSYSTEM_REQUESTSPLINE_OFFSET UNITYSDK_OFFSET(0x1B90D250)
#define MOLEMOLE_FLOORSUBSYSTEM_REQUEST_1_OFFSET UNITYSDK_OFFSET(0x1B90CA00)
#define MOLEMOLE_FLOORSUBSYSTEM_REQUEST_OFFSET UNITYSDK_OFFSET(0x1B90C670)
#define MOLEMOLE_FLOORSUBSYSTEM_SETFLOORID_OFFSET UNITYSDK_OFFSET(0x1B90FB70)
#define MOLEMOLE_FLOORSUBSYSTEM_TRYGETCONFIGBATTLEREGION_1_OFFSET UNITYSDK_OFFSET(0x1B90BAC0)
#define MOLEMOLE_FLOORSUBSYSTEM_TRYGETCONFIGBATTLEREGION_OFFSET UNITYSDK_OFFSET(0x1B90B930)
#define MOLEMOLE_FLOORSUBSYSTEM_TRYGETCONFIGPOINT_OFFSET UNITYSDK_OFFSET(0x1B90F200)
#define MOLEMOLE_FLOORSUBSYSTEM_TRYGETCONFIGSPLINE_OFFSET UNITYSDK_OFFSET(0x1B90D890)
#define MOLEMOLE_FLOORSUBSYSTEM_TRYGETSPLINEKEY_OFFSET UNITYSDK_OFFSET(0x1B90F430)
#define MOLEMOLE_FLOORSUBSYSTEM_TRYGETSPLINE_OFFSET UNITYSDK_OFFSET(0x1B90EB00)
#define MOLEMOLE_FLOORSUBSYSTEM_UNLOADTRIGGERDISPATCHERBYSUITEINFO_OFFSET UNITYSDK_OFFSET(0x1B911670)
#define MOLEMOLE_FLOORSUBSYSTEM_UPDATETRIGGERDISPATCHERBYSUITEINFO_OFFSET UNITYSDK_OFFSET(0x1B911420)
#define MOLEMOLE_FLOORSUBSYSTEM__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B911AA0)
#define MOLEMOLE_FLOORSUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1B911A80)
#define MOLEMOLE_FLOORSUBSYSTEM__ONAWAKE_B__1_1_OFFSET UNITYSDK_OFFSET(0x1B911B30)
#define MOLEMOLE_FLOORSUBSYSTEM__ONSPLINEADDED_B__37_0_OFFSET UNITYSDK_OFFSET(0x1B911DE0)
#define MOLEMOLE_FLOORSUBSYSTEM__ONSPLINEDISPOSED_B__38_0_OFFSET UNITYSDK_OFFSET(0x1B911F20)
#define MOLEMOLE_FLOORSUBSYSTEM___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x10D07AF0)
#define MOLEMOLE_FLOORSUBSYSTEM___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x10D07B80)

namespace MoleMole
{
	inline static constexpr unsigned int FloorSubsystem_TypeDefinitionIndex = 50119;

	class FloorSubsystem
	{
	public:
		static ::JCADHFOKIHK** StaticGet_actorAbility()
		{
			return (::JCADHFOKIHK**)Il2CppClass::FromTypeDefinitionIndex(FloorSubsystem_TypeDefinitionIndex)->GetStaticField(0x388E0);
		}
		::MoleMole::FloorSubsystem_FGamePlayTagSupport* _OnSplineDisposed; // 0x10
		::JKLAKHFDIEN_2<::ELFDOCCOFLJ_2<::System::UInt32, ::System::String*>, ::FluffyUnderware::Curvy::CurvySpline*>* m_SplineMap; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Collections::Generic::List_1<::Foundation::ViewObject::ViewObjectHandle>*>* m_Spline2ViewObjects; // 0x20
		::System::Collections::Generic::Dictionary_2<::Foundation::Unreal::FGameplayTag, ::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::CurvySpline*>*>* m_SplineTagCache; // 0x28
		::NMLEGIGBGKM* _configFloor; // 0x30
		::MoleMole::FloorSubsystem_FGamePlayTagSupport* _OnSplineAdded; // 0x38
		::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::CurvySpline*>* m_GetSplinesResultCache; // 0x40
		::System::Collections::Generic::Dictionary_2<::FluffyUnderware::Curvy::CurvySpline*, ::ELFDOCCOFLJ_2<::System::UInt32, ::System::String*>>* m_Spline2Key; // 0x48
		::JKLAKHFDIEN_2<::ELFDOCCOFLJ_2<::System::UInt32, ::System::String*>, ::MoleMole::MonoTriggerEventDispatcher*>* m_TriggerMap; // 0x50
		::JKLAKHFDIEN_2<::ELFDOCCOFLJ_2<::System::UInt32, ::System::String*>, ::DBIHEOFKIAA*>* m_TriggerSuiteInfoMap; // 0x58
		::GLHOLLOPOOB _floorUsage; // 0x60
		::System::Int32 _floorID; // 0x64

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOORSUBSYSTEM__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_FLOORSUBSYSTEM__CCTOR_OFFSET))();
		}

		::System::Boolean TryGetConfigBattleRegion(::System::UInt32 groupID, ::System::String* key, ::Foundation::ViewObject::SuiteInfo suiteInfo, ::CHDFDOGABHI*& battleRegion, ::System::UInt32& ownerGroupID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::String*, ::Foundation::ViewObject::SuiteInfo, ::CHDFDOGABHI*&, ::System::UInt32&))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOORSUBSYSTEM_TRYGETCONFIGBATTLEREGION_OFFSET))(this, groupID, key, suiteInfo, battleRegion, ownerGroupID);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOORSUBSYSTEM_ONAWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOORSUBSYSTEM_ONDESTROY_OFFSET))(this);
		}

		::System::Object* Request(::System::String* key, ::MoleMole::MonoTriggerEventDispatcher*& dispatcher)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*, ::MoleMole::MonoTriggerEventDispatcher*&))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOORSUBSYSTEM_REQUEST_OFFSET))(this, key, dispatcher);
		}

		::System::Object* Request_1(::System::UInt32 groupId, ::Foundation::ViewObject::SuiteInfo suiteInfo, ::System::String* key, ::System::Boolean keepFloorTriggerOnSuiteChange, ::MoleMole::MonoTriggerEventDispatcher*& dispatcher, ::System::Object*& suiteInfoHandle)
		{
			return ((::System::Object*(*)(::PVOID, ::System::UInt32, ::Foundation::ViewObject::SuiteInfo, ::System::String*, ::System::Boolean, ::MoleMole::MonoTriggerEventDispatcher*&, ::System::Object*&))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOORSUBSYSTEM_REQUEST_1_OFFSET))(this, groupId, suiteInfo, key, keepFloorTriggerOnSuiteChange, dispatcher, suiteInfoHandle);
		}

		::System::Object* RequestSpline(::System::UInt32 groupId, ::System::String* key, ::FluffyUnderware::Curvy::CurvySpline*& spline)
		{
			return ((::System::Object*(*)(::PVOID, ::System::UInt32, ::System::String*, ::FluffyUnderware::Curvy::CurvySpline*&))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOORSUBSYSTEM_REQUESTSPLINE_OFFSET))(this, groupId, key, spline);
		}

		::System::Object* RequestSpline_1(::System::UInt32 groupId, ::System::String* key, ::FluffyUnderware::Curvy::CurvySpline*& spline, ::Foundation::ViewObject::ViewObjectHandle viewObjectHandle)
		{
			return ((::System::Object*(*)(::PVOID, ::System::UInt32, ::System::String*, ::FluffyUnderware::Curvy::CurvySpline*&, ::Foundation::ViewObject::ViewObjectHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOORSUBSYSTEM_REQUESTSPLINE_1_OFFSET))(this, groupId, key, spline, viewObjectHandle);
		}

		::System::Boolean TryGetSpline(::System::UInt32 groupId, ::System::String* key, ::FluffyUnderware::Curvy::CurvySpline*& spline)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::String*, ::FluffyUnderware::Curvy::CurvySpline*&))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOORSUBSYSTEM_TRYGETSPLINE_OFFSET))(this, groupId, key, spline);
		}

		::MoleMole::MonoTriggerEventDispatcher* CreateTriggerEventDispatcher(::PCFMJDNECHN* configTrigger)
		{
			return ((::MoleMole::MonoTriggerEventDispatcher*(*)(::PVOID, ::PCFMJDNECHN*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOORSUBSYSTEM_CREATETRIGGEREVENTDISPATCHER_OFFSET))(this, configTrigger);
		}

		::FluffyUnderware::Curvy::CurvySpline* CreateCurvySpline(::GEAPPLEFPJJ* configTrigger)
		{
			return ((::FluffyUnderware::Curvy::CurvySpline*(*)(::PVOID, ::GEAPPLEFPJJ*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOORSUBSYSTEM_CREATECURVYSPLINE_OFFSET))(this, configTrigger);
		}

		static ::MoleMole::MonoTriggerEventDispatcher* AddDynamicConfigTrigger(::NFCIDHJGOIB* config, ::UnityEngine::Transform* parent, ::FFINLFNBLBG configurableColliderType)
		{
			return ((::MoleMole::MonoTriggerEventDispatcher*(*)(::NFCIDHJGOIB*, ::UnityEngine::Transform*, ::FFINLFNBLBG))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOORSUBSYSTEM_ADDDYNAMICCONFIGTRIGGER_OFFSET))(config, parent, configurableColliderType);
		}

		::System::Int32 get_FloorID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOORSUBSYSTEM_GET_FLOORID_OFFSET))(this);
		}

		::GLHOLLOPOOB get_FloorUsage()
		{
			return ((::GLHOLLOPOOB(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOORSUBSYSTEM_GET_FLOORUSAGE_OFFSET))(this);
		}

		::PCFMJDNECHN* GetConfigTrigger(::System::UInt32 groupID, ::System::String* key, ::System::Boolean& isFloorTrigger)
		{
			return ((::PCFMJDNECHN*(*)(::PVOID, ::System::UInt32, ::System::String*, ::System::Boolean&))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOORSUBSYSTEM_GETCONFIGTRIGGER_OFFSET))(this, groupID, key, isFloorTrigger);
		}

		::PCFMJDNECHN* GetConfigTrigger_1(::System::UInt32 groupID, ::System::String* key)
		{
			return ((::PCFMJDNECHN*(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOORSUBSYSTEM_GETCONFIGTRIGGER_1_OFFSET))(this, groupID, key);
		}

		::System::Boolean TryGetConfigPoint(::System::UInt32 groupID, ::System::String* key, ::EJHHPFFPFOJ*& point)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::String*, ::EJHHPFFPFOJ*&))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOORSUBSYSTEM_TRYGETCONFIGPOINT_OFFSET))(this, groupID, key, point);
		}

		::System::Boolean TryGetConfigSpline(::System::UInt32 groupID, ::System::String* key, ::GEAPPLEFPJJ*& spline)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::String*, ::GEAPPLEFPJJ*&))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOORSUBSYSTEM_TRYGETCONFIGSPLINE_OFFSET))(this, groupID, key, spline);
		}

		::System::Boolean TryGetSplineKey(::FluffyUnderware::Curvy::CurvySpline* curvySpline, ::System::UInt32& groupID, ::System::String*& splineName)
		{
			return ((::System::Boolean(*)(::PVOID, ::FluffyUnderware::Curvy::CurvySpline*, ::System::UInt32&, ::System::String*&))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOORSUBSYSTEM_TRYGETSPLINEKEY_OFFSET))(this, curvySpline, groupID, splineName);
		}

		::System::Collections::Generic::IReadOnlyList_1<::Foundation::ViewObject::ViewObjectHandle>* GetViewObjectsBySpline(::FluffyUnderware::Curvy::CurvySpline* spline)
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::Foundation::ViewObject::ViewObjectHandle>*(*)(::PVOID, ::FluffyUnderware::Curvy::CurvySpline*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOORSUBSYSTEM_GETVIEWOBJECTSBYSPLINE_OFFSET))(this, spline);
		}

		::System::Void RemoveViewObjectFromSpline(::FluffyUnderware::Curvy::CurvySpline* spline, ::Foundation::ViewObject::ViewObjectHandle viewObjectHandle)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::CurvySpline*, ::Foundation::ViewObject::ViewObjectHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOORSUBSYSTEM_REMOVEVIEWOBJECTFROMSPLINE_OFFSET))(this, spline, viewObjectHandle);
		}

		::System::Void RecordViewObjectFromSpline(::FluffyUnderware::Curvy::CurvySpline* spline, ::Foundation::ViewObject::ViewObjectHandle viewObjectHandle)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::CurvySpline*, ::Foundation::ViewObject::ViewObjectHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOORSUBSYSTEM_RECORDVIEWOBJECTFROMSPLINE_OFFSET))(this, spline, viewObjectHandle);
		}

		::System::Boolean TryGetConfigBattleRegion_1(::System::UInt32 groupID, ::System::String* key, ::CHDFDOGABHI*& battleRegion, ::System::UInt32& ownerGroupID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::String*, ::CHDFDOGABHI*&, ::System::UInt32&))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOORSUBSYSTEM_TRYGETCONFIGBATTLEREGION_1_OFFSET))(this, groupID, key, battleRegion, ownerGroupID);
		}

		::System::Void SetFloorID(::System::Int32 floorID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOORSUBSYSTEM_SETFLOORID_OFFSET))(this, floorID);
		}

		::System::Collections::Generic::IReadOnlyList_1<::System::String*>* GetGamePlayTagsFromConfig(::GEAPPLEFPJJ* config)
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::System::String*>*(*)(::PVOID, ::GEAPPLEFPJJ*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOORSUBSYSTEM_GETGAMEPLAYTAGSFROMCONFIG_OFFSET))(this, config);
		}

		::System::Void OnSplineAdded(::FluffyUnderware::Curvy::CurvySpline* spline, ::GEAPPLEFPJJ* config)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::CurvySpline*, ::GEAPPLEFPJJ*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOORSUBSYSTEM_ONSPLINEADDED_OFFSET))(this, spline, config);
		}

		::System::Void OnSplineDisposed(::FluffyUnderware::Curvy::CurvySpline* spline)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::CurvySpline*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOORSUBSYSTEM_ONSPLINEDISPOSED_OFFSET))(this, spline);
		}

		::System::Collections::Generic::IReadOnlyList_1<::FluffyUnderware::Curvy::CurvySpline*>* GetSplinesByGamePlayTag(::Foundation::Unreal::FGameplayTag gamePlayTag, ::System::Boolean buildCache)
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::FluffyUnderware::Curvy::CurvySpline*>*(*)(::PVOID, ::Foundation::Unreal::FGameplayTag, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOORSUBSYSTEM_GETSPLINESBYGAMEPLAYTAG_OFFSET))(this, gamePlayTag, buildCache);
		}

		::System::Collections::Generic::IReadOnlyList_1<::FluffyUnderware::Curvy::CurvySpline*>* GetSplinesByGamePlayTag_1(::System::String* gamePlayTag, ::System::Boolean buildCache)
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::FluffyUnderware::Curvy::CurvySpline*>*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOORSUBSYSTEM_GETSPLINESBYGAMEPLAYTAG_1_OFFSET))(this, gamePlayTag, buildCache);
		}

		::System::Void ClearGamePlayTagCache(::Foundation::Unreal::FGameplayTag gamePlayTag)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::FGameplayTag))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOORSUBSYSTEM_CLEARGAMEPLAYTAGCACHE_OFFSET))(this, gamePlayTag);
		}

		::System::Void ClearGamePlayTagCache_1(::System::String* gamePlayTag)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOORSUBSYSTEM_CLEARGAMEPLAYTAGCACHE_1_OFFSET))(this, gamePlayTag);
		}

		::System::Void ClearAllGamePlayTagCache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOORSUBSYSTEM_CLEARALLGAMEPLAYTAGCACHE_OFFSET))(this);
		}

		::System::Void UpdateTriggerDispatcherBySuiteInfo(::System::UInt32 groupId, ::Foundation::ViewObject::SuiteInfo suiteInfo)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Foundation::ViewObject::SuiteInfo))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOORSUBSYSTEM_UPDATETRIGGERDISPATCHERBYSUITEINFO_OFFSET))(this, groupId, suiteInfo);
		}

		::System::Void UnloadTriggerDispatcherBySuiteInfo(::System::UInt32 groupId, ::Foundation::ViewObject::SuiteInfo suiteInfo)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Foundation::ViewObject::SuiteInfo))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOORSUBSYSTEM_UNLOADTRIGGERDISPATCHERBYSUITEINFO_OFFSET))(this, groupId, suiteInfo);
		}

		::System::Void OnSectionSwitched(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOORSUBSYSTEM_ONSECTIONSWITCHED_OFFSET))(this, args);
		}

		::System::Void _OnAwake_b__1_1(::FluffyUnderware::Curvy::CurvySpline* value)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::CurvySpline*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOORSUBSYSTEM__ONAWAKE_B__1_1_OFFSET))(this, value);
		}

		::System::Void _OnSplineAdded_b__37_0(::FluffyUnderware::Curvy::CurvySpline* _spline, ::Foundation::Unreal::FGameplayTag tag)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::CurvySpline*, ::Foundation::Unreal::FGameplayTag))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOORSUBSYSTEM__ONSPLINEADDED_B__37_0_OFFSET))(this, _spline, tag);
		}

		::System::Void _OnSplineDisposed_b__38_0(::FluffyUnderware::Curvy::CurvySpline* _spline, ::Foundation::Unreal::FGameplayTag tag)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::CurvySpline*, ::Foundation::Unreal::FGameplayTag))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOORSUBSYSTEM__ONSPLINEDISPOSED_B__38_0_OFFSET))(this, _spline, tag);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOORSUBSYSTEM___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOORSUBSYSTEM___BASE_ONDESTROY_OFFSET))(this);
		}
	};
}
