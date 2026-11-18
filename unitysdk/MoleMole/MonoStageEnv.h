#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/MoleMole/SpawnPointMaskRegion.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class EOAHFDPLGGJ;
class FDLGJMFLCHG;
class FHNLCIIHLIH;
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace FluffyUnderware::Curvy { class CurvySpline; }
namespace MoleMole { class MonoCurveMoveObject; }
namespace MoleMole { class MonoDestructionObject; }
namespace MoleMole { class MonoEntity; }
namespace MoleMole { class MonoEntityModelModifier; }
namespace MoleMole { class MonoInterestPoint; }
namespace MoleMole { class MonoMainCityObject; }
namespace MoleMole { class MonoPartySceneObject; }
namespace MoleMole { class MonoSceneFindWayObject; }
namespace MoleMole { class MonoSceneMoveObject; }
namespace MoleMole { class MonoSceneToFindObject; }
namespace MoleMole { class MonoSimpleRigidbodyObject; }
namespace MoleMole { class MonoSpawnMonsterConfig; }
namespace MoleMole { class MonoSpawnPoint; }
namespace MoleMole { class MonoSpawnPointMaskRegion; }
namespace MoleMole { class MonoStageCameraConfig; }
namespace MoleMole { class MonoStageEnv_FFNOLJEOFJG; }
namespace MoleMole { class MonoTerrainZone3D; }
namespace MoleMole { class MonoTerrainZoneVoxel; }
namespace MoleMole { class MonoVehicleObject; }
namespace MoleMole { class MonoWayPath; }
namespace MoleMole::Battle { class ColliderEventDispatcher; }
namespace MoleMole::SceneMark { class DoorMark; }
namespace MoleMole::SceneMark { class MonoSceneMarkRoot; }
namespace MoleMole::SceneMark { class SceneMarkNode; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_MONOSTAGEENV_AJKBMKFBFIK_OFFSET UNITYSDK_OFFSET(0x12492DC0)
#define MOLEMOLE_MONOSTAGEENV_AKDNBKBFHLI_OFFSET UNITYSDK_OFFSET(0x12495E70)
#define MOLEMOLE_MONOSTAGEENV_ANEDJMPBCBI_OFFSET UNITYSDK_OFFSET(0x12498820)
#define MOLEMOLE_MONOSTAGEENV_AWAKE_OFFSET UNITYSDK_OFFSET(0x124913B0)
#define MOLEMOLE_MONOSTAGEENV_BUILDSTAGEENV_OFFSET UNITYSDK_OFFSET(0x12491480)
#define MOLEMOLE_MONOSTAGEENV_CLEAR_OFFSET UNITYSDK_OFFSET(0x12496610)
#define MOLEMOLE_MONOSTAGEENV_COJDOAGEFBB_OFFSET UNITYSDK_OFFSET(0x12493970)
#define MOLEMOLE_MONOSTAGEENV_CREATEDYNAMICSPAWNPOINT_OFFSET UNITYSDK_OFFSET(0x12496CC0)
#define MOLEMOLE_MONOSTAGEENV_CREATESPAWNPOINTMASKREGION_OFFSET UNITYSDK_OFFSET(0x12497720)
#define MOLEMOLE_MONOSTAGEENV_DOFNLNAGDOC_OFFSET UNITYSDK_OFFSET(0x12491E70)
#define MOLEMOLE_MONOSTAGEENV_EIHKBLPPLJJ_OFFSET UNITYSDK_OFFSET(0x124937F0)
#define MOLEMOLE_MONOSTAGEENV_EKCNOLNICPH_OFFSET UNITYSDK_OFFSET(0x124920C0)
#define MOLEMOLE_MONOSTAGEENV_FICPEMCHFCH_OFFSET UNITYSDK_OFFSET(0x12493310)
#define MOLEMOLE_MONOSTAGEENV_FINDMARKNODEBYSHORTNAME_OFFSET UNITYSDK_OFFSET(0x124953C0)
#define MOLEMOLE_MONOSTAGEENV_GETALLCURVEMOVEOBJECTS_OFFSET UNITYSDK_OFFSET(0x12490A80)
#define MOLEMOLE_MONOSTAGEENV_GETALLCURVYSPLINE_OFFSET UNITYSDK_OFFSET(0x12495260)
#define MOLEMOLE_MONOSTAGEENV_GETALLDESTRUCTIONOBJECTS_OFFSET UNITYSDK_OFFSET(0x12490A40)
#define MOLEMOLE_MONOSTAGEENV_GETALLINTERESTPOINTS_OFFSET UNITYSDK_OFFSET(0x12490820)
#define MOLEMOLE_MONOSTAGEENV_GETALLMAINCITYSCENEOBJECTS_OFFSET UNITYSDK_OFFSET(0x12490A00)
#define MOLEMOLE_MONOSTAGEENV_GETALLPARTYSCENEOBJECTS_OFFSET UNITYSDK_OFFSET(0x12490B50)
#define MOLEMOLE_MONOSTAGEENV_GETALLSCENEFINDWAYOBJECTS_OFFSET UNITYSDK_OFFSET(0x12490B00)
#define MOLEMOLE_MONOSTAGEENV_GETALLSCENEMOVEOBJECTS_OFFSET UNITYSDK_OFFSET(0x12490980)
#define MOLEMOLE_MONOSTAGEENV_GETALLSCENEOBJECTS_OFFSET UNITYSDK_OFFSET(0x12490940)
#define MOLEMOLE_MONOSTAGEENV_GETALLSIMPLERIGIDBODYOBJECTS_OFFSET UNITYSDK_OFFSET(0x12490AC0)
#define MOLEMOLE_MONOSTAGEENV_GETALLSTAGEDOORS_OFFSET UNITYSDK_OFFSET(0x12495370)
#define MOLEMOLE_MONOSTAGEENV_GETALLVEHICLEOBJECTS_OFFSET UNITYSDK_OFFSET(0x124909C0)
#define MOLEMOLE_MONOSTAGEENV_GETALLWAYPATHSNOALLOC_OFFSET UNITYSDK_OFFSET(0x12494E80)
#define MOLEMOLE_MONOSTAGEENV_GETCOLLIDEREVENTDISPATCHER_OFFSET UNITYSDK_OFFSET(0x124947B0)
#define MOLEMOLE_MONOSTAGEENV_GETCURVYSPLINE_OFFSET UNITYSDK_OFFSET(0x12495180)
#define MOLEMOLE_MONOSTAGEENV_GETDOOR_OFFSET UNITYSDK_OFFSET(0x124952B0)
#define MOLEMOLE_MONOSTAGEENV_GETDYNAMICOBJECT_OFFSET UNITYSDK_OFFSET(0x12494FF0)
#define MOLEMOLE_MONOSTAGEENV_GETENTITYMODELMODIFIERBYSPAWNPOINT_OFFSET UNITYSDK_OFFSET(0x124965B0)
#define MOLEMOLE_MONOSTAGEENV_GETRANDOMSPAWNPOINT_OFFSET UNITYSDK_OFFSET(0x124949A0)
#define MOLEMOLE_MONOSTAGEENV_GETSPAWNMONSTERCONFIGBYSPAWNPOINT_OFFSET UNITYSDK_OFFSET(0x12496040)
#define MOLEMOLE_MONOSTAGEENV_GETSPAWNPOINTGROUPLIST_OFFSET UNITYSDK_OFFSET(0x12495750)
#define MOLEMOLE_MONOSTAGEENV_GETSPAWNPOINTMASKREGION_OFFSET UNITYSDK_OFFSET(0x12497D60)
#define MOLEMOLE_MONOSTAGEENV_GETSPAWNPOINT_OFFSET UNITYSDK_OFFSET(0x12496680)
#define MOLEMOLE_MONOSTAGEENV_GETVIRTUALCAMERA_OFFSET UNITYSDK_OFFSET(0x12490860)
#define MOLEMOLE_MONOSTAGEENV_GETWAYENTITYLIST_OFFSET UNITYSDK_OFFSET(0x12497630)
#define MOLEMOLE_MONOSTAGEENV_GETWAYPATH_OFFSET UNITYSDK_OFFSET(0x12494D90)
#define MOLEMOLE_MONOSTAGEENV_GET_DYNAMICOBJECTMANAGER_OFFSET UNITYSDK_OFFSET(0x124907F0)
#define MOLEMOLE_MONOSTAGEENV_GET_EVNDESIGNGO_OFFSET UNITYSDK_OFFSET(0x124907E0)
#define MOLEMOLE_MONOSTAGEENV_GET_MONOSTAGECAMERACONFIG_OFFSET UNITYSDK_OFFSET(0x12490810)
#define MOLEMOLE_MONOSTAGEENV_GET_SPAWNPOINTMASKREGIONS_OFFSET UNITYSDK_OFFSET(0x12497710)
#define MOLEMOLE_MONOSTAGEENV_GET_SPAWNPOINTS_OFFSET UNITYSDK_OFFSET(0x12496670)
#define MOLEMOLE_MONOSTAGEENV_GET_STAGEPREHITBOUNDS_OFFSET UNITYSDK_OFFSET(0x12490800)
#define MOLEMOLE_MONOSTAGEENV_GET_TERRAINVOXEL_OFFSET UNITYSDK_OFFSET(0x12490D30)
#define MOLEMOLE_MONOSTAGEENV_GET_TERRAINZONE_OFFSET UNITYSDK_OFFSET(0x12490BA0)
#define MOLEMOLE_MONOSTAGEENV_GKBLIAENBLD_OFFSET UNITYSDK_OFFSET(0x124943D0)
#define MOLEMOLE_MONOSTAGEENV_HHDIKLGBDIH_OFFSET UNITYSDK_OFFSET(0x12491B80)
#define MOLEMOLE_MONOSTAGEENV_HHNLCJFJCMG_OFFSET UNITYSDK_OFFSET(0x124960A0)
#define MOLEMOLE_MONOSTAGEENV_IGAOOHKKDMF_OFFSET UNITYSDK_OFFSET(0x12498290)
#define MOLEMOLE_MONOSTAGEENV_INITSPAWNPOINTMASKREGIONS_OFFSET UNITYSDK_OFFSET(0x12493F20)
#define MOLEMOLE_MONOSTAGEENV_KCLLGJJAIDL_OFFSET UNITYSDK_OFFSET(0x12491A00)
#define MOLEMOLE_MONOSTAGEENV_MLBHOBAGJMK_OFFSET UNITYSDK_OFFSET(0x12498830)
#define MOLEMOLE_MONOSTAGEENV_NCHCGJHIIPL_OFFSET UNITYSDK_OFFSET(0x124967E0)
#define MOLEMOLE_MONOSTAGEENV_NECKEAIOLIK_OFFSET UNITYSDK_OFFSET(0x124985F0)
#define MOLEMOLE_MONOSTAGEENV_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x12495500)
#define MOLEMOLE_MONOSTAGEENV_ONENABLE_OFFSET UNITYSDK_OFFSET(0x124913F0)
#define MOLEMOLE_MONOSTAGEENV_PCGAJHNPBAL_OFFSET UNITYSDK_OFFSET(0x12493D70)
#define MOLEMOLE_MONOSTAGEENV_QUERYALLSPAWNPOINTBYPREFIX_OFFSET UNITYSDK_OFFSET(0x124968F0)
#define MOLEMOLE_MONOSTAGEENV_REBUILDSPAWNPOINTS_OFFSET UNITYSDK_OFFSET(0x124946A0)
#define MOLEMOLE_MONOSTAGEENV_REGISTERSPAWNPOINTENTITY_OFFSET UNITYSDK_OFFSET(0x12497300)
#define MOLEMOLE_MONOSTAGEENV_REGISTERTERRAINVOXEL_OFFSET UNITYSDK_OFFSET(0x12491070)
#define MOLEMOLE_MONOSTAGEENV_RESETDYNAMICOBJECTLAYER_OFFSET UNITYSDK_OFFSET(0x12495110)
#define MOLEMOLE_MONOSTAGEENV_SETDYNAMICOBJECTLAYERACTIVE_OFFSET UNITYSDK_OFFSET(0x124950A0)
#define MOLEMOLE_MONOSTAGEENV_UNREGISTERTERRAINVOXEL_OFFSET UNITYSDK_OFFSET(0x12491220)
#define MOLEMOLE_MONOSTAGEENV_UPDATE_OFFSET UNITYSDK_OFFSET(0x12495420)
#define MOLEMOLE_MONOSTAGEENV__CCTOR_OFFSET UNITYSDK_OFFSET(0x124981F0)
#define MOLEMOLE_MONOSTAGEENV__CTOR_OFFSET UNITYSDK_OFFSET(0x12497E40)

namespace MoleMole
{
	inline static constexpr unsigned int MonoStageEnv_TypeDefinitionIndex = 55643;

	class MonoStageEnv : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::Il2CppArray<::UnityEngine::Collider*>** StaticGet_GCNFCBIIMKD()
		{
			return (::Il2CppArray<::UnityEngine::Collider*>**)Il2CppClass::FromTypeDefinitionIndex(MonoStageEnv_TypeDefinitionIndex)->GetStaticField(0x3D3E0);
		}
		static ::System::Collections::Generic::List_1<::MoleMole::MonoSpawnPoint*>** StaticGet_CEBDHCJFMML()
		{
			return (::System::Collections::Generic::List_1<::MoleMole::MonoSpawnPoint*>**)Il2CppClass::FromTypeDefinitionIndex(MonoStageEnv_TypeDefinitionIndex)->GetStaticField(0x3D3E8);
		}
		static ::MoleMole::MonoStageEnv** StaticGet_S_AdditiveStageEnv()
		{
			return (::MoleMole::MonoStageEnv**)Il2CppClass::FromTypeDefinitionIndex(MonoStageEnv_TypeDefinitionIndex)->GetStaticField(0x3D3F0);
		}
		::System::Boolean IsAdditiveEnv; // 0x18
		::System::Byte _padding0[0x7];
		::MoleMole::SceneMark::MonoSceneMarkRoot* MBNJEGBGHIE; // 0x20
		::Il2CppArray<::System::String*>* PILMJMBDFJL; // 0x28
		::Il2CppArray<::MoleMole::MonoSpawnPoint*>* BFNFAODMPIM; // 0x30
		::Il2CppArray<::MoleMole::Battle::ColliderEventDispatcher*>* KMIPOJHEJAE; // 0x38
		::Il2CppArray<::MoleMole::MonoInterestPoint*>* LGBJKNIKADN; // 0x40
		::Il2CppArray<::MoleMole::MonoEntity*>* DBEOKLENAJH; // 0x48
		::Il2CppArray<::MoleMole::MonoMainCityObject*>* INAFELPBFNI; // 0x50
		::Il2CppArray<::MoleMole::MonoDestructionObject*>* GKLCANNFAOO; // 0x58
		::Il2CppArray<::MoleMole::MonoCurveMoveObject*>* FCNMIEIFJDC; // 0x60
		::Il2CppArray<::MoleMole::MonoSimpleRigidbodyObject*>* GPANNCACNCB; // 0x68
		::Il2CppArray<::MoleMole::MonoSceneMoveObject*>* JBCJBEHDKGA; // 0x70
		::Il2CppArray<::MoleMole::MonoVehicleObject*>* EAEAHAODPMD; // 0x78
		::Il2CppArray<::MoleMole::MonoSceneFindWayObject*>* MJHBLAKOOFF; // 0x80
		::Il2CppArray<::MoleMole::MonoPartySceneObject*>* EDMKKAJAIAF; // 0x88
		::System::Collections::Generic::Dictionary_2<::System::String*, ::Cinemachine::CinemachineVirtualCamera*>* JPKKEMFPCCP; // 0x90
		::Il2CppArray<::FDLGJMFLCHG*>* GEACEAOILPO; // 0x98
		::Il2CppArray<::System::String*>* OLGJLBHPCNM; // 0xA0
		::MoleMole::MonoStageCameraConfig* BPJEPLDJMGO; // 0xA8
		::UnityEngine::GameObject* LNGHDJFGDDA; // 0xB0
		::UnityEngine::GameObject* SpecialEnvInst; // 0xB8
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::MonoWayPath*>* IEOLOHPLLBK; // 0xC0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::MoleMole::MonoSpawnPoint*>*>* EEFNKDHBHNP; // 0xC8
		::EOAHFDPLGGJ* _COCIOEEOMIL_k__BackingField; // 0xD0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::FluffyUnderware::Curvy::CurvySpline*>* ELMKKMAOOCD; // 0xD8
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* KHEJEIOMBKD; // 0xE0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::String*>*>* DIILJKDAHLA; // 0xE8
		::System::Collections::Generic::List_1<::UnityEngine::Bounds>* OFILGKAKOIK; // 0xF0
		::System::Boolean OPBKOMFFJJJ; // 0xF8
		::System::Byte _padding1[0x7];
		::MoleMole::MonoTerrainZone3D* IAFFHOIPKBM; // 0x100
		::System::Int32 EENJLCNKPME; // 0x108
		::System::Byte _padding2[0x4];
		::System::Collections::Generic::List_1<::MoleMole::MonoTerrainZoneVoxel*>* AJLDLKEJCAH; // 0x110
		::MoleMole::MonoTerrainZoneVoxel* FAFEFKDKJMM; // 0x118
		::System::Boolean JALHEGEKCNL; // 0x120
		::System::Byte _padding3[0x7];
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::MonoSpawnPoint*>* OKDIHBCGDKM; // 0x128
		::UnityEngine::GameObject* IPDHGJCOJEF; // 0x130
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::EntityHandle>*>* JOFNOFJOKKL; // 0x138
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::MonoSceneToFindObject*>*>* sceneToFindObjectMap; // 0x140
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::MoleMole::MonoSpawnPointMaskRegion*>*>* _GBENGJGKEGL_k__BackingField; // 0x148
		::UnityEngine::Transform* HCKOGCMIDHJ; // 0x150

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGEENV__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGEENV__CCTOR_OFFSET))();
		}

		::UnityEngine::GameObject* get_EvnDesignGo()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGEENV_GET_EVNDESIGNGO_OFFSET))(this);
		}

		::EOAHFDPLGGJ* get_dynamicObjectManager()
		{
			return ((::EOAHFDPLGGJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGEENV_GET_DYNAMICOBJECTMANAGER_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::UnityEngine::Bounds>* get_StagePreHitBounds()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Bounds>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGEENV_GET_STAGEPREHITBOUNDS_OFFSET))(this);
		}

		::MoleMole::MonoStageCameraConfig* get_monoStageCameraConfig()
		{
			return ((::MoleMole::MonoStageCameraConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGEENV_GET_MONOSTAGECAMERACONFIG_OFFSET))(this);
		}

		::Il2CppArray<::MoleMole::MonoInterestPoint*>* GetAllInterestPoints()
		{
			return ((::Il2CppArray<::MoleMole::MonoInterestPoint*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGEENV_GETALLINTERESTPOINTS_OFFSET))(this);
		}

		::Cinemachine::CinemachineVirtualCamera* GetVirtualCamera(::System::String* KONLMDBCDCK)
		{
			return ((::Cinemachine::CinemachineVirtualCamera*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGEENV_GETVIRTUALCAMERA_OFFSET))(this, KONLMDBCDCK);
		}

		::Il2CppArray<::MoleMole::MonoEntity*>* GetAllSceneObjects()
		{
			return ((::Il2CppArray<::MoleMole::MonoEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGEENV_GETALLSCENEOBJECTS_OFFSET))(this);
		}

		::Il2CppArray<::MoleMole::MonoSceneMoveObject*>* GetAllSceneMoveObjects()
		{
			return ((::Il2CppArray<::MoleMole::MonoSceneMoveObject*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGEENV_GETALLSCENEMOVEOBJECTS_OFFSET))(this);
		}

		::Il2CppArray<::MoleMole::MonoVehicleObject*>* GetAllVehicleObjects()
		{
			return ((::Il2CppArray<::MoleMole::MonoVehicleObject*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGEENV_GETALLVEHICLEOBJECTS_OFFSET))(this);
		}

		::Il2CppArray<::MoleMole::MonoMainCityObject*>* GetAllMainCitySceneObjects()
		{
			return ((::Il2CppArray<::MoleMole::MonoMainCityObject*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGEENV_GETALLMAINCITYSCENEOBJECTS_OFFSET))(this);
		}

		::Il2CppArray<::MoleMole::MonoDestructionObject*>* GetAllDestructionObjects()
		{
			return ((::Il2CppArray<::MoleMole::MonoDestructionObject*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGEENV_GETALLDESTRUCTIONOBJECTS_OFFSET))(this);
		}

		::Il2CppArray<::MoleMole::MonoCurveMoveObject*>* GetAllCurveMoveObjects()
		{
			return ((::Il2CppArray<::MoleMole::MonoCurveMoveObject*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGEENV_GETALLCURVEMOVEOBJECTS_OFFSET))(this);
		}

		::Il2CppArray<::MoleMole::MonoSimpleRigidbodyObject*>* GetAllSimpleRigidbodyObjects()
		{
			return ((::Il2CppArray<::MoleMole::MonoSimpleRigidbodyObject*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGEENV_GETALLSIMPLERIGIDBODYOBJECTS_OFFSET))(this);
		}

		::Il2CppArray<::MoleMole::MonoSceneFindWayObject*>* GetAllSceneFindWayObjects()
		{
			return ((::Il2CppArray<::MoleMole::MonoSceneFindWayObject*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGEENV_GETALLSCENEFINDWAYOBJECTS_OFFSET))(this);
		}

		::Il2CppArray<::MoleMole::MonoPartySceneObject*>* GetAllPartySceneObjects()
		{
			return ((::Il2CppArray<::MoleMole::MonoPartySceneObject*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGEENV_GETALLPARTYSCENEOBJECTS_OFFSET))(this);
		}

		::MoleMole::MonoTerrainZone3D* get_TerrainZone()
		{
			return ((::MoleMole::MonoTerrainZone3D*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGEENV_GET_TERRAINZONE_OFFSET))(this);
		}

		::MoleMole::MonoTerrainZoneVoxel* get_TerrainVoxel()
		{
			return ((::MoleMole::MonoTerrainZoneVoxel*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGEENV_GET_TERRAINVOXEL_OFFSET))(this);
		}

		::System::Void RegisterTerrainVoxel(::MoleMole::MonoTerrainZoneVoxel* JEFOHGLJGMI)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoTerrainZoneVoxel*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGEENV_REGISTERTERRAINVOXEL_OFFSET))(this, JEFOHGLJGMI);
		}

		::System::Void UnregisterTerrainVoxel(::MoleMole::MonoTerrainZoneVoxel* JEFOHGLJGMI)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoTerrainZoneVoxel*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGEENV_UNREGISTERTERRAINVOXEL_OFFSET))(this, JEFOHGLJGMI);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGEENV_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGEENV_ONENABLE_OFFSET))(this);
		}

		::System::Void BuildStageEnv(::UnityEngine::GameObject* DNLLMAEIIFM, ::System::Boolean IHFBPFEKFAG)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGEENV_BUILDSTAGEENV_OFFSET))(this, DNLLMAEIIFM, IHFBPFEKFAG);
		}

		::System::Void RebuildSpawnPoints()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGEENV_REBUILDSPAWNPOINTS_OFFSET))(this);
		}

		::MoleMole::Battle::ColliderEventDispatcher* GetColliderEventDispatcher(::System::String* HIAIKHDFCLN)
		{
			return ((::MoleMole::Battle::ColliderEventDispatcher*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGEENV_GETCOLLIDEREVENTDISPATCHER_OFFSET))(this, HIAIKHDFCLN);
		}

		::MoleMole::MonoSpawnPoint* GetRandomSpawnPoint(::System::String* GLBEOLEENIJ)
		{
			return ((::MoleMole::MonoSpawnPoint*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGEENV_GETRANDOMSPAWNPOINT_OFFSET))(this, GLBEOLEENIJ);
		}

		::MoleMole::MonoWayPath* GetWayPath(::System::String* JODGPNNHBHK)
		{
			return ((::MoleMole::MonoWayPath*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGEENV_GETWAYPATH_OFFSET))(this, JODGPNNHBHK);
		}

		::System::Void GetAllWayPathsNoAlloc(::System::Collections::Generic::List_1<::MoleMole::MonoWayPath*>*& DJOMKJPCGDA)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::MonoWayPath*>*&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGEENV_GETALLWAYPATHSNOALLOC_OFFSET))(this, DJOMKJPCGDA);
		}

		::FHNLCIIHLIH* GetDynamicObject(::System::String* MCOHLHMKLIP)
		{
			return ((::FHNLCIIHLIH*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGEENV_GETDYNAMICOBJECT_OFFSET))(this, MCOHLHMKLIP);
		}

		::System::Void SetDynamicObjectLayerActive(::System::Boolean EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGEENV_SETDYNAMICOBJECTLAYERACTIVE_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Void ResetDynamicObjectLayer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGEENV_RESETDYNAMICOBJECTLAYER_OFFSET))(this);
		}

		::FluffyUnderware::Curvy::CurvySpline* GetCurvySpline(::System::String* MCOHLHMKLIP)
		{
			return ((::FluffyUnderware::Curvy::CurvySpline*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGEENV_GETCURVYSPLINE_OFFSET))(this, MCOHLHMKLIP);
		}

		::System::Collections::Generic::IReadOnlyDictionary_2<::System::String*, ::FluffyUnderware::Curvy::CurvySpline*>* GetAllCurvySpline()
		{
			return ((::System::Collections::Generic::IReadOnlyDictionary_2<::System::String*, ::FluffyUnderware::Curvy::CurvySpline*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGEENV_GETALLCURVYSPLINE_OFFSET))(this);
		}

		::FDLGJMFLCHG* GetDoor(::System::String* HIAIKHDFCLN)
		{
			return ((::FDLGJMFLCHG*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGEENV_GETDOOR_OFFSET))(this, HIAIKHDFCLN);
		}

		::Il2CppArray<::FDLGJMFLCHG*>* GetAllStageDoors()
		{
			return ((::Il2CppArray<::FDLGJMFLCHG*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGEENV_GETALLSTAGEDOORS_OFFSET))(this);
		}

		::MoleMole::SceneMark::SceneMarkNode* FindMarkNodeByShortName(::System::String* HIAIKHDFCLN)
		{
			return ((::MoleMole::SceneMark::SceneMarkNode*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGEENV_FINDMARKNODEBYSHORTNAME_OFFSET))(this, HIAIKHDFCLN);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGEENV_UPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGEENV_ONDESTROY_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::String*>* GetSpawnPointGroupList(::System::String* DFCJFPNCLEO, ::System::Boolean BNNPIAANGHM)
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGEENV_GETSPAWNPOINTGROUPLIST_OFFSET))(this, DFCJFPNCLEO, BNNPIAANGHM);
		}

		::MoleMole::MonoSpawnMonsterConfig* GetSpawnMonsterConfigBySpawnPoint(::System::String* DFCJFPNCLEO)
		{
			return ((::MoleMole::MonoSpawnMonsterConfig*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGEENV_GETSPAWNMONSTERCONFIGBYSPAWNPOINT_OFFSET))(this, DFCJFPNCLEO);
		}

		::MoleMole::MonoEntityModelModifier* GetEntityModelModifierBySpawnPoint(::System::String* DFCJFPNCLEO)
		{
			return ((::MoleMole::MonoEntityModelModifier*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGEENV_GETENTITYMODELMODIFIERBYSPAWNPOINT_OFFSET))(this, DFCJFPNCLEO);
		}

		::System::Void Clear(::System::Boolean KENKJGPIIHK)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGEENV_CLEAR_OFFSET))(this, KENKJGPIIHK);
		}

		::Il2CppArray<::MoleMole::MonoSpawnPoint*>* get_spawnPoints()
		{
			return ((::Il2CppArray<::MoleMole::MonoSpawnPoint*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGEENV_GET_SPAWNPOINTS_OFFSET))(this);
		}

		::MoleMole::MonoSpawnPoint* GetSpawnPoint(::System::String* DFCJFPNCLEO, ::System::Boolean PKCCMCNOCNH)
		{
			return ((::MoleMole::MonoSpawnPoint*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGEENV_GETSPAWNPOINT_OFFSET))(this, DFCJFPNCLEO, PKCCMCNOCNH);
		}

		::System::Collections::Generic::List_1<::MoleMole::MonoSpawnPoint*>* QueryAllSpawnPointByPrefix(::System::String* GLBEOLEENIJ)
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::MonoSpawnPoint*>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGEENV_QUERYALLSPAWNPOINTBYPREFIX_OFFSET))(this, GLBEOLEENIJ);
		}

		::System::Boolean CreateDynamicSpawnPoint(::System::String* IHNFCAALLEH, ::UnityEngine::Vector3 OHOGDOMNHNK, ::UnityEngine::Vector3 ELHMOANKHFM)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGEENV_CREATEDYNAMICSPAWNPOINT_OFFSET))(this, IHNFCAALLEH, OHOGDOMNHNK, ELHMOANKHFM);
		}

		::System::Void RegisterSpawnPointEntity(::System::Int32 NLLPOBJLMBK, ::MoleMole::EntityHandle HPADNAEINPK, ::MoleMole::MonoSceneToFindObject* DIIBJOPCANO)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::MoleMole::EntityHandle, ::MoleMole::MonoSceneToFindObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGEENV_REGISTERSPAWNPOINTENTITY_OFFSET))(this, NLLPOBJLMBK, HPADNAEINPK, DIIBJOPCANO);
		}

		::System::Collections::Generic::List_1<::MoleMole::EntityHandle>* GetWayEntityList(::System::Int32 NLLPOBJLMBK)
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::EntityHandle>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGEENV_GETWAYENTITYLIST_OFFSET))(this, NLLPOBJLMBK);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::MoleMole::MonoSpawnPointMaskRegion*>*>* get_SpawnPointMaskRegions()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::MoleMole::MonoSpawnPointMaskRegion*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGEENV_GET_SPAWNPOINTMASKREGIONS_OFFSET))(this);
		}

		::System::Void InitSpawnPointMaskRegions()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGEENV_INITSPAWNPOINTMASKREGIONS_OFFSET))(this);
		}

		::System::Void CreateSpawnPointMaskRegion(::System::String* IFIKDGDNHFO, ::UnityEngine::Vector3 OHOGDOMNHNK, ::UnityEngine::Quaternion BFBELMDIAHI, ::MoleMole::SpawnPointMaskRegion LDNFBDLIJAH)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::MoleMole::SpawnPointMaskRegion))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGEENV_CREATESPAWNPOINTMASKREGION_OFFSET))(this, IFIKDGDNHFO, OHOGDOMNHNK, BFBELMDIAHI, LDNFBDLIJAH);
		}

		::System::Collections::Generic::List_1<::MoleMole::MonoSpawnPointMaskRegion*>* GetSpawnPointMaskRegion(::System::String* IFIKDGDNHFO)
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::MonoSpawnPointMaskRegion*>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGEENV_GETSPAWNPOINTMASKREGION_OFFSET))(this, IFIKDGDNHFO);
		}

		::System::Void HHDIKLGBDIH(::UnityEngine::GameObject* IAPKABMDJNF)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGEENV_HHDIKLGBDIH_OFFSET))(this, IAPKABMDJNF);
		}

		::System::Void KCLLGJJAIDL(::Il2CppArray<::MoleMole::MonoSpawnPoint*>* EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::MoleMole::MonoSpawnPoint*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGEENV_KCLLGJJAIDL_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Void PCGAJHNPBAL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGEENV_PCGAJHNPBAL_OFFSET))(this);
		}

		::System::Void IGAOOHKKDMF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGEENV_IGAOOHKKDMF_OFFSET))(this);
		}

		::System::Void FICPEMCHFCH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGEENV_FICPEMCHFCH_OFFSET))(this);
		}

		::UnityEngine::Transform* AKDNBKBFHLI(::System::String* DIOLEKLFLBK)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGEENV_AKDNBKBFHLI_OFFSET))(this, DIOLEKLFLBK);
		}

		::System::Void EKCNOLNICPH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGEENV_EKCNOLNICPH_OFFSET))(this);
		}

		::System::Void NECKEAIOLIK(::FDLGJMFLCHG* PFEGDFMBFLC, ::MoleMole::SceneMark::DoorMark* BBBLJHAMKEF)
		{
			return ((::System::Void(*)(::PVOID, ::FDLGJMFLCHG*, ::MoleMole::SceneMark::DoorMark*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGEENV_NECKEAIOLIK_OFFSET))(this, PFEGDFMBFLC, BBBLJHAMKEF);
		}

		::MoleMole::MonoStageEnv_FFNOLJEOFJG* HHNLCJFJCMG(::System::String* DFCJFPNCLEO)
		{
			return ((::MoleMole::MonoStageEnv_FFNOLJEOFJG*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGEENV_HHNLCJFJCMG_OFFSET))(this, DFCJFPNCLEO);
		}

		::System::Void AJKBMKFBFIK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGEENV_AJKBMKFBFIK_OFFSET))(this);
		}

		::System::Void ANEDJMPBCBI(::EOAHFDPLGGJ* EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::EOAHFDPLGGJ*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGEENV_ANEDJMPBCBI_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Void MLBHOBAGJMK(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::MoleMole::MonoSpawnPointMaskRegion*>*>* EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::MoleMole::MonoSpawnPointMaskRegion*>*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGEENV_MLBHOBAGJMK_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Void DOFNLNAGDOC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGEENV_DOFNLNAGDOC_OFFSET))(this);
		}

		::System::Void GKBLIAENBLD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGEENV_GKBLIAENBLD_OFFSET))(this);
		}

		::System::Void COJDOAGEFBB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGEENV_COJDOAGEFBB_OFFSET))(this);
		}

		::System::Int32 NCHCGJHIIPL(::System::String* HHLLGKFNPPD)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGEENV_NCHCGJHIIPL_OFFSET))(this, HHLLGKFNPPD);
		}

		::System::Void EIHKBLPPLJJ(::UnityEngine::GameObject* DMNGICOLNNA)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTAGEENV_EIHKBLPPLJJ_OFFSET))(this, DMNGICOLNNA);
		}
	};
}
