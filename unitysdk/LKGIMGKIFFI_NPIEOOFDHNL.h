#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimCameraPriority.h"
#include "unitysdk/RPG/GameCore/FiveDimGameplayMode.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/HGBCMFANCOE.h"
#include "unitysdk/HPKDNHLINPC.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class BABNOKHOBCF;
class GLAKFODMCPH;
class HFDDNMNGKNC;
class INMMPMDELKE;
class KFJGDFIDKOI;
class MNCOPNHONHO;
namespace Entitas { template <typename T> class ICollector_1; }
namespace Entitas { template <typename T> class IGroup_1; }
namespace RPG::GameCore { class FiveDimCameraFollowConfig; }
namespace RPG::GameCore { class FiveDimCameraLensConfig; }
namespace RPG::GameCore { class FiveDimDefaultCameraConfig; }
namespace RPG::GameCore { class FiveDimGlobalCameraConfig; }
namespace RPG::GameCore { class FiveDimMoveBakedConfig; }
namespace RPG::GameCore { class FiveDimMoveConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class ICollection_1; }

#define LKGIMGKIFFI_NPIEOOFDHNL_CANPLAYERUSECAMERAOBSERVE_OFFSET UNITYSDK_OFFSET(0xB741790)
#define LKGIMGKIFFI_NPIEOOFDHNL_CREATECAMERATRIGGERCOLLECTOR_OFFSET UNITYSDK_OFFSET(0xB741410)
#define LKGIMGKIFFI_NPIEOOFDHNL_CREATECAMERATRIGGER_OFFSET UNITYSDK_OFFSET(0xB741620)
#define LKGIMGKIFFI_NPIEOOFDHNL_CREATECAMERAVIEW_OFFSET UNITYSDK_OFFSET(0xB7415A0)
#define LKGIMGKIFFI_NPIEOOFDHNL_CREATEEMPTYENTITY_OFFSET UNITYSDK_OFFSET(0xB740970)
#define LKGIMGKIFFI_NPIEOOFDHNL_CTOR_OFFSET UNITYSDK_OFFSET(0xB740900)
#define LKGIMGKIFFI_NPIEOOFDHNL_DESTROYENTITY_OFFSET UNITYSDK_OFFSET(0xB7409D0)
#define LKGIMGKIFFI_NPIEOOFDHNL_GETCAMERABOUNDSENTITY_OFFSET UNITYSDK_OFFSET(0xB740B20)
#define LKGIMGKIFFI_NPIEOOFDHNL_GETCAMERAGRAVITYDIRECTION_OFFSET UNITYSDK_OFFSET(0xB741E70)
#define LKGIMGKIFFI_NPIEOOFDHNL_GETCAMERAGROUP_OFFSET UNITYSDK_OFFSET(0xB741230)
#define LKGIMGKIFFI_NPIEOOFDHNL_GETCAMERATRIGGERGROUP_OFFSET UNITYSDK_OFFSET(0xB741320)
#define LKGIMGKIFFI_NPIEOOFDHNL_GETENTITIESWITHCAMERAPRIORITY_OFFSET UNITYSDK_OFFSET(0xB741540)
#define LKGIMGKIFFI_NPIEOOFDHNL_GETENTITYBYCONFIGID_OFFSET UNITYSDK_OFFSET(0xB740A30)
#define LKGIMGKIFFI_NPIEOOFDHNL_GETENTITYBYRUNTIMEID_OFFSET UNITYSDK_OFFSET(0xB740910)
#define LKGIMGKIFFI_NPIEOOFDHNL_GETFIRSTCHILD_OFFSET UNITYSDK_OFFSET(0xB740B80)
#define LKGIMGKIFFI_NPIEOOFDHNL_GETPARENT_OFFSET UNITYSDK_OFFSET(0xB740AC0)
#define LKGIMGKIFFI_NPIEOOFDHNL_GETPLAYERMOVEBLACKBOARD_OFFSET UNITYSDK_OFFSET(0xB7416D0)
#define LKGIMGKIFFI_NPIEOOFDHNL_GET_GLOBALCAMERACONFIG_OFFSET UNITYSDK_OFFSET(0xB7418D0)
#define LKGIMGKIFFI_NPIEOOFDHNL_GET_LEVELUNITLENGTH_OFFSET UNITYSDK_OFFSET(0xB741CD0)
#define LKGIMGKIFFI_NPIEOOFDHNL_GET_MOVEBAKEDCONFIG_OFFSET UNITYSDK_OFFSET(0xB741C30)
#define LKGIMGKIFFI_NPIEOOFDHNL_GET_MOVECONFIG_OFFSET UNITYSDK_OFFSET(0xB741BC0)
#define LKGIMGKIFFI_NPIEOOFDHNL_GET_OWNERGAMEENTITY_OFFSET UNITYSDK_OFFSET(0xB741DC0)
#define LKGIMGKIFFI_NPIEOOFDHNL_GET_PLAYERENTITY_OFFSET UNITYSDK_OFFSET(0xB7416B0)
#define LKGIMGKIFFI_NPIEOOFDHNL_GET_ROOTENTITY_OFFSET UNITYSDK_OFFSET(0xB741D30)
#define LKGIMGKIFFI_NPIEOOFDHNL_GET_TIMESERVICE_OFFSET UNITYSDK_OFFSET(0xB7417F0)
#define LKGIMGKIFFI_NPIEOOFDHNL_GET_TOPCAMERARUNTIMEID_OFFSET UNITYSDK_OFFSET(0xB741810)
#define LKGIMGKIFFI_NPIEOOFDHNL_HASGAMEPLAYMODE_OFFSET UNITYSDK_OFFSET(0xB741E20)
#define LKGIMGKIFFI_NPIEOOFDHNL_ISPLAYERGRAVITYOPPOSITETOCAMERA_OFFSET UNITYSDK_OFFSET(0xB741750)
#define LKGIMGKIFFI_NPIEOOFDHNL_LOGERROR_OFFSET UNITYSDK_OFFSET(0xB741F00)
#define LKGIMGKIFFI_NPIEOOFDHNL_NNAEMNOJIMH_OFFSET UNITYSDK_OFFSET(0xB741B40)
#define LKGIMGKIFFI_NPIEOOFDHNL_PFOEFBJEJKE_OFFSET UNITYSDK_OFFSET(0xB741990)
#define LKGIMGKIFFI_NPIEOOFDHNL_SETLOCALTRANSFORM_OFFSET UNITYSDK_OFFSET(0xB740C80)
#define LKGIMGKIFFI_NPIEOOFDHNL_SETPARENT_OFFSET UNITYSDK_OFFSET(0xB740BE0)
#define LKGIMGKIFFI_NPIEOOFDHNL_SET_TOPCAMERARUNTIMEID_OFFSET UNITYSDK_OFFSET(0xB741870)

inline static constexpr unsigned int LKGIMGKIFFI_NPIEOOFDHNL_TypeDefinitionIndex = 76759;

	class LKGIMGKIFFI_NPIEOOFDHNL : public ::System::Object
	{
	public:
		::RPG::GameCore::FiveDimGlobalCameraConfig* AOHEAIDPMLD; // 0x10
		::MNCOPNHONHO* PDENFEFCAGN; // 0x18
		::RPG::GameCore::FiveDimCameraLensConfig* AHECPLAFKON; // 0x20
		::RPG::GameCore::FiveDimCameraFollowConfig* ECMPNCIPDBP; // 0x28
		::BABNOKHOBCF* FKINCGODJEP; // 0x30
		::System::Int32 CPHFBHCBAIH; // 0x38
		::System::Void _ctor(::BABNOKHOBCF* a1, ::MNCOPNHONHO* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::BABNOKHOBCF*, ::MNCOPNHONHO*, ::System::Int32))((::PBYTE)hIl2Cpp + LKGIMGKIFFI_NPIEOOFDHNL_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::INMMPMDELKE* GetEntityByRuntimeID(::System::Int32 a1)
		{
			return ((::INMMPMDELKE*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LKGIMGKIFFI_NPIEOOFDHNL_GETENTITYBYRUNTIMEID_OFFSET))(this, a1);
		}

		::INMMPMDELKE* CreateEmptyEntity(::System::String* a1)
		{
			return ((::INMMPMDELKE*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + LKGIMGKIFFI_NPIEOOFDHNL_CREATEEMPTYENTITY_OFFSET))(this, a1);
		}

		::System::Void DestroyEntity(::INMMPMDELKE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::INMMPMDELKE*))((::PBYTE)hIl2Cpp + LKGIMGKIFFI_NPIEOOFDHNL_DESTROYENTITY_OFFSET))(this, a1);
		}

		::INMMPMDELKE* GetEntityByConfigID(::System::UInt32 a1)
		{
			return ((::INMMPMDELKE*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LKGIMGKIFFI_NPIEOOFDHNL_GETENTITYBYCONFIGID_OFFSET))(this, a1);
		}

		::INMMPMDELKE* GetParent(::HFDDNMNGKNC* a1)
		{
			return ((::INMMPMDELKE*(*)(::PVOID, ::HFDDNMNGKNC*))((::PBYTE)hIl2Cpp + LKGIMGKIFFI_NPIEOOFDHNL_GETPARENT_OFFSET))(this, a1);
		}

		::INMMPMDELKE* GetCameraBoundsEntity(::HFDDNMNGKNC* a1)
		{
			return ((::INMMPMDELKE*(*)(::PVOID, ::HFDDNMNGKNC*))((::PBYTE)hIl2Cpp + LKGIMGKIFFI_NPIEOOFDHNL_GETCAMERABOUNDSENTITY_OFFSET))(this, a1);
		}

		::INMMPMDELKE* GetFirstChild(::INMMPMDELKE* a1)
		{
			return ((::INMMPMDELKE*(*)(::PVOID, ::INMMPMDELKE*))((::PBYTE)hIl2Cpp + LKGIMGKIFFI_NPIEOOFDHNL_GETFIRSTCHILD_OFFSET))(this, a1);
		}

		::System::Void SetParent(::INMMPMDELKE* a1, ::INMMPMDELKE* a2)
		{
			return ((::System::Void(*)(::PVOID, ::INMMPMDELKE*, ::INMMPMDELKE*))((::PBYTE)hIl2Cpp + LKGIMGKIFFI_NPIEOOFDHNL_SETPARENT_OFFSET))(this, a1, a2);
		}

		::System::Void SetLocalTransform(::INMMPMDELKE* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3)
		{
			return ((::System::Void(*)(::PVOID, ::INMMPMDELKE*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + LKGIMGKIFFI_NPIEOOFDHNL_SETLOCALTRANSFORM_OFFSET))(this, a1, a2, a3);
		}

		::Entitas::IGroup_1<::INMMPMDELKE*>* GetCameraGroup()
		{
			return ((::Entitas::IGroup_1<::INMMPMDELKE*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LKGIMGKIFFI_NPIEOOFDHNL_GETCAMERAGROUP_OFFSET))(this);
		}

		::Entitas::IGroup_1<::INMMPMDELKE*>* GetCameraTriggerGroup()
		{
			return ((::Entitas::IGroup_1<::INMMPMDELKE*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LKGIMGKIFFI_NPIEOOFDHNL_GETCAMERATRIGGERGROUP_OFFSET))(this);
		}

		::Entitas::ICollector_1<::INMMPMDELKE*>* CreateCameraTriggerCollector()
		{
			return ((::Entitas::ICollector_1<::INMMPMDELKE*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LKGIMGKIFFI_NPIEOOFDHNL_CREATECAMERATRIGGERCOLLECTOR_OFFSET))(this);
		}

		::System::Collections::Generic::ICollection_1<::INMMPMDELKE*>* GetEntitiesWithCameraPriority(::RPG::GameCore::FiveDimCameraPriority a1)
		{
			return ((::System::Collections::Generic::ICollection_1<::INMMPMDELKE*>*(*)(::PVOID, ::RPG::GameCore::FiveDimCameraPriority))((::PBYTE)hIl2Cpp + LKGIMGKIFFI_NPIEOOFDHNL_GETENTITIESWITHCAMERAPRIORITY_OFFSET))(this, a1);
		}

		::System::Void CreateCameraView(::INMMPMDELKE* a1, ::System::String* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::INMMPMDELKE*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + LKGIMGKIFFI_NPIEOOFDHNL_CREATECAMERAVIEW_OFFSET))(this, a1, a2, a3);
		}

		::System::Void CreateCameraTrigger(::INMMPMDELKE* a1, ::HPKDNHLINPC a2)
		{
			return ((::System::Void(*)(::PVOID, ::INMMPMDELKE*, ::HPKDNHLINPC))((::PBYTE)hIl2Cpp + LKGIMGKIFFI_NPIEOOFDHNL_CREATECAMERATRIGGER_OFFSET))(this, a1, a2);
		}

		::INMMPMDELKE* get_PlayerEntity()
		{
			return ((::INMMPMDELKE*(*)(::PVOID))((::PBYTE)hIl2Cpp + LKGIMGKIFFI_NPIEOOFDHNL_GET_PLAYERENTITY_OFFSET))(this);
		}

		::HGBCMFANCOE GetPlayerMoveBlackBoard()
		{
			return ((::HGBCMFANCOE(*)(::PVOID))((::PBYTE)hIl2Cpp + LKGIMGKIFFI_NPIEOOFDHNL_GETPLAYERMOVEBLACKBOARD_OFFSET))(this);
		}

		::System::Boolean IsPlayerGravityOppositeToCamera()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LKGIMGKIFFI_NPIEOOFDHNL_ISPLAYERGRAVITYOPPOSITETOCAMERA_OFFSET))(this);
		}

		::System::Boolean CanPlayerUseCameraObserve(::HGBCMFANCOE a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::HGBCMFANCOE, ::System::Boolean))((::PBYTE)hIl2Cpp + LKGIMGKIFFI_NPIEOOFDHNL_CANPLAYERUSECAMERAOBSERVE_OFFSET))(this, a1, a2);
		}

		::KFJGDFIDKOI* get_TimeService()
		{
			return ((::KFJGDFIDKOI*(*)(::PVOID))((::PBYTE)hIl2Cpp + LKGIMGKIFFI_NPIEOOFDHNL_GET_TIMESERVICE_OFFSET))(this);
		}

		::System::Int32 get_TopCameraRuntimeID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LKGIMGKIFFI_NPIEOOFDHNL_GET_TOPCAMERARUNTIMEID_OFFSET))(this);
		}

		::System::Void set_TopCameraRuntimeID(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LKGIMGKIFFI_NPIEOOFDHNL_SET_TOPCAMERARUNTIMEID_OFFSET))(this, a1);
		}

		::RPG::GameCore::FiveDimGlobalCameraConfig* get_GlobalCameraConfig()
		{
			return ((::RPG::GameCore::FiveDimGlobalCameraConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + LKGIMGKIFFI_NPIEOOFDHNL_GET_GLOBALCAMERACONFIG_OFFSET))(this);
		}

		static ::RPG::GameCore::FiveDimGlobalCameraConfig* PFOEFBJEJKE(::RPG::GameCore::FiveDimCameraLensConfig* a1, ::RPG::GameCore::FiveDimCameraFollowConfig* a2)
		{
			return ((::RPG::GameCore::FiveDimGlobalCameraConfig*(*)(::RPG::GameCore::FiveDimCameraLensConfig*, ::RPG::GameCore::FiveDimCameraFollowConfig*))((::PBYTE)hIl2Cpp + LKGIMGKIFFI_NPIEOOFDHNL_PFOEFBJEJKE_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::FiveDimDefaultCameraConfig* NNAEMNOJIMH(::RPG::GameCore::FiveDimDefaultCameraConfig* a1)
		{
			return ((::RPG::GameCore::FiveDimDefaultCameraConfig*(*)(::RPG::GameCore::FiveDimDefaultCameraConfig*))((::PBYTE)hIl2Cpp + LKGIMGKIFFI_NPIEOOFDHNL_NNAEMNOJIMH_OFFSET))(a1);
		}

		::RPG::GameCore::FiveDimMoveConfig* get_MoveConfig()
		{
			return ((::RPG::GameCore::FiveDimMoveConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + LKGIMGKIFFI_NPIEOOFDHNL_GET_MOVECONFIG_OFFSET))(this);
		}

		::RPG::GameCore::FiveDimMoveBakedConfig* get_MoveBakedConfig()
		{
			return ((::RPG::GameCore::FiveDimMoveBakedConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + LKGIMGKIFFI_NPIEOOFDHNL_GET_MOVEBAKEDCONFIG_OFFSET))(this);
		}

		::System::Single get_LevelUnitLength()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LKGIMGKIFFI_NPIEOOFDHNL_GET_LEVELUNITLENGTH_OFFSET))(this);
		}

		::INMMPMDELKE* get_RootEntity()
		{
			return ((::INMMPMDELKE*(*)(::PVOID))((::PBYTE)hIl2Cpp + LKGIMGKIFFI_NPIEOOFDHNL_GET_ROOTENTITY_OFFSET))(this);
		}

		::GLAKFODMCPH* get_OwnerGameEntity()
		{
			return ((::GLAKFODMCPH*(*)(::PVOID))((::PBYTE)hIl2Cpp + LKGIMGKIFFI_NPIEOOFDHNL_GET_OWNERGAMEENTITY_OFFSET))(this);
		}

		::System::Boolean HasGameplayMode(::RPG::GameCore::FiveDimGameplayMode a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::FiveDimGameplayMode))((::PBYTE)hIl2Cpp + LKGIMGKIFFI_NPIEOOFDHNL_HASGAMEPLAYMODE_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 GetCameraGravityDirection(::System::Int32 a1, ::INMMPMDELKE* a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32, ::INMMPMDELKE*))((::PBYTE)hIl2Cpp + LKGIMGKIFFI_NPIEOOFDHNL_GETCAMERAGRAVITYDIRECTION_OFFSET))(this, a1, a2);
		}

		::System::Void LogError(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + LKGIMGKIFFI_NPIEOOFDHNL_LOGERROR_OFFSET))(this, a1);
		}

	};
