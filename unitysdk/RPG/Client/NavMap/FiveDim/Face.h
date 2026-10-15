#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/KLNKLOMDIIC.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
class ALDLKGCNIAD;
class APAHPCEMFND;
class BCMOLHGOPEK;
class JNJPJOPEDHP;
class PLEODCMINJF;
namespace RPG::Client::NavMap { class MapData; }
namespace RPG::Client::NavMap::FiveDim { class CartographyFiveDim; }
namespace RPG::Client::NavMap::FiveDim { class EntityIcon; }
namespace RPG::Client::NavMap::FiveDim { class Face; }
namespace RPG::Client::NavMap::FiveDim { class MissionIcon; }
namespace RPG::Client::NavMap::FiveDim { class SectionConfig; }
namespace RPG::Client::NavMap::FiveDim { class SurfaceConnectIcon; }
namespace RPG::Client::NavMap::FiveDim { class SurfaceConnectIcon_SurfaceConnectTarget; }
namespace RPG::GameCore { class FiveDimMapFaceConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_NAVMAP_FIVEDIM_FACE_CONTAINSCONNECTTARGET_OFFSET UNITYSDK_OFFSET(0xD943A30)
#define RPG_CLIENT_NAVMAP_FIVEDIM_FACE_CONTAINSSURFACE_OFFSET UNITYSDK_OFFSET(0xD9439D0)
#define RPG_CLIENT_NAVMAP_FIVEDIM_FACE_CREATE_OFFSET UNITYSDK_OFFSET(0xD943FB0)
#define RPG_CLIENT_NAVMAP_FIVEDIM_FACE_CTOR_OFFSET UNITYSDK_OFFSET(0xD944160)
#define RPG_CLIENT_NAVMAP_FIVEDIM_FACE_GETMAPLOCALPOSITION_OFFSET UNITYSDK_OFFSET(0xD942580)
#define RPG_CLIENT_NAVMAP_FIVEDIM_FACE_GETPLAYERMAPLOCALPOSITION_OFFSET UNITYSDK_OFFSET(0xD942710)
#define RPG_CLIENT_NAVMAP_FIVEDIM_FACE_GETPLAYERMAPLOCALROTATION_OFFSET UNITYSDK_OFFSET(0xD942B60)
#define RPG_CLIENT_NAVMAP_FIVEDIM_FACE_GETSURFACE_OFFSET UNITYSDK_OFFSET(0xD93DC10)
#define RPG_CLIENT_NAVMAP_FIVEDIM_FACE_GETTRACKINGENTITYICON_OFFSET UNITYSDK_OFFSET(0xD943B80)
#define RPG_CLIENT_NAVMAP_FIVEDIM_FACE_GETTRACKINGMISSIONICON_OFFSET UNITYSDK_OFFSET(0xD943CE0)
#define RPG_CLIENT_NAVMAP_FIVEDIM_FACE_GET_BACKGROUNDPATH_OFFSET UNITYSDK_OFFSET(0xD941CA0)
#define RPG_CLIENT_NAVMAP_FIVEDIM_FACE_GET_BACKGROUNDSIZE_OFFSET UNITYSDK_OFFSET(0xD941C50)
#define RPG_CLIENT_NAVMAP_FIVEDIM_FACE_GET_CARTOGRAPHY_OFFSET UNITYSDK_OFFSET(0xD941DA0)
#define RPG_CLIENT_NAVMAP_FIVEDIM_FACE_GET_CHEATSHEET_OFFSET UNITYSDK_OFFSET(0xD942080)
#define RPG_CLIENT_NAVMAP_FIVEDIM_FACE_GET_CONTAINERGROUPID_OFFSET UNITYSDK_OFFSET(0xD93DE80)
#define RPG_CLIENT_NAVMAP_FIVEDIM_FACE_GET_CONTAINERINSTANCEID_OFFSET UNITYSDK_OFFSET(0xD93DED0)
#define RPG_CLIENT_NAVMAP_FIVEDIM_FACE_GET_FACEID_OFFSET UNITYSDK_OFFSET(0xD93DF20)
#define RPG_CLIENT_NAVMAP_FIVEDIM_FACE_GET_FACEINDEX_OFFSET UNITYSDK_OFFSET(0xD941BD0)
#define RPG_CLIENT_NAVMAP_FIVEDIM_FACE_GET_FOGS_OFFSET UNITYSDK_OFFSET(0xD942020)
#define RPG_CLIENT_NAVMAP_FIVEDIM_FACE_GET_ICONS_OFFSET UNITYSDK_OFFSET(0xD941F50)
#define RPG_CLIENT_NAVMAP_FIVEDIM_FACE_GET_ISPLAYERIN_OFFSET UNITYSDK_OFFSET(0xD941DF0)
#define RPG_CLIENT_NAVMAP_FIVEDIM_FACE_GET_ISSHOWEMPTYMAP_OFFSET UNITYSDK_OFFSET(0xD941EF0)
#define RPG_CLIENT_NAVMAP_FIVEDIM_FACE_GET_LEVELINSTANCE_OFFSET UNITYSDK_OFFSET(0xD941D90)
#define RPG_CLIENT_NAVMAP_FIVEDIM_FACE_GET_MAPDATA_OFFSET UNITYSDK_OFFSET(0xD942170)
#define RPG_CLIENT_NAVMAP_FIVEDIM_FACE_GET_MISSIONICONS_OFFSET UNITYSDK_OFFSET(0xD941F60)
#define RPG_CLIENT_NAVMAP_FIVEDIM_FACE_GET_NAME_OFFSET UNITYSDK_OFFSET(0xD941BF0)
#define RPG_CLIENT_NAVMAP_FIVEDIM_FACE_GET_SECTIONS_OFFSET UNITYSDK_OFFSET(0xD941F70)
#define RPG_CLIENT_NAVMAP_FIVEDIM_FACE_GET_SHOWLEVELVARNAME_OFFSET UNITYSDK_OFFSET(0xD941CF0)
#define RPG_CLIENT_NAVMAP_FIVEDIM_FACE_GET_SHOWLEVELVARVALUES_OFFSET UNITYSDK_OFFSET(0xD941D40)
#define RPG_CLIENT_NAVMAP_FIVEDIM_FACE_GET_SURFACECONNECTICONS_OFFSET UNITYSDK_OFFSET(0xD941F40)
#define RPG_CLIENT_NAVMAP_FIVEDIM_FACE_GET_UNITLENGTH_OFFSET UNITYSDK_OFFSET(0xD9420D0)
#define RPG_CLIENT_NAVMAP_FIVEDIM_FACE_GET_UNITPIXELCOUNT_OFFSET UNITYSDK_OFFSET(0xD942120)
#define RPG_CLIENT_NAVMAP_FIVEDIM_FACE_HASCHESTICON_OFFSET UNITYSDK_OFFSET(0xD943E40)
#define RPG_CLIENT_NAVMAP_FIVEDIM_FACE_HASSECTIONSHOW_OFFSET UNITYSDK_OFFSET(0xD9421F0)
#define RPG_CLIENT_NAVMAP_FIVEDIM_FACE_INIT_OFFSET UNITYSDK_OFFSET(0xD942FA0)
#define RPG_CLIENT_NAVMAP_FIVEDIM_FACE_ISINLOCKFOG_OFFSET UNITYSDK_OFFSET(0xD9424E0)
#define RPG_CLIENT_NAVMAP_FIVEDIM_FACE_ISSECTIONSHOW_OFFSET UNITYSDK_OFFSET(0xD9422C0)
#define RPG_CLIENT_NAVMAP_FIVEDIM_FACE_SET_FACEINDEX_OFFSET UNITYSDK_OFFSET(0xD941BE0)
#define RPG_CLIENT_NAVMAP_FIVEDIM_FACE_SORTENTITYICONS_OFFSET UNITYSDK_OFFSET(0xD93DD00)
#define RPG_CLIENT_NAVMAP_FIVEDIM_FACE_TRYADDENTITYICON_OFFSET UNITYSDK_OFFSET(0xD942CC0)
#define RPG_CLIENT_NAVMAP_FIVEDIM_FACE__COLLECTCHESTICONS_OFFSET UNITYSDK_OFFSET(0xD9430E0)
#define RPG_CLIENT_NAVMAP_FIVEDIM_FACE__CREATESURFACES_OFFSET UNITYSDK_OFFSET(0xD942D70)
#define RPG_CLIENT_NAVMAP_FIVEDIM_FACE__GETPLAYERTRANSFORMONSURFACE_OFFSET UNITYSDK_OFFSET(0xD942940)
#define RPG_CLIENT_NAVMAP_FIVEDIM_FACE__ISFOGUNLOCK_OFFSET UNITYSDK_OFFSET(0xD942400)

namespace RPG::Client::NavMap::FiveDim
{
	inline static constexpr unsigned int Face_TypeDefinitionIndex = 74661;

	class Face : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::NavMap::FiveDim::SurfaceConnectIcon*>* _SurfaceConnectIcons_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::BCMOLHGOPEK*>* _Surfaces; // 0x18
		::ALDLKGCNIAD* _FaceConfig; // 0x20
		::APAHPCEMFND* _LevelInstance_k__BackingField; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::NavMap::FiveDim::MissionIcon*>* _MissionIcons_k__BackingField; // 0x30
		::System::Collections::Generic::List_1<::RPG::Client::NavMap::FiveDim::EntityIcon*>* _Icons_k__BackingField; // 0x38
		::System::UInt32 _FaceIndex_k__BackingField; // 0x40
		::System::Void _ctor(::ALDLKGCNIAD* a1, ::APAHPCEMFND* a2)
		{
			return ((::System::Void(*)(::PVOID, ::ALDLKGCNIAD*, ::APAHPCEMFND*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_FACE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::UInt32 get_FaceID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_FACE_GET_FACEID_OFFSET))(this);
		}

		::System::UInt32 get_FaceIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_FACE_GET_FACEINDEX_OFFSET))(this);
		}

		::System::Void set_FaceIndex(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_FACE_SET_FACEINDEX_OFFSET))(this, a1);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_FACE_GET_NAME_OFFSET))(this);
		}

		::UnityEngine::Vector2 get_BackgroundSize()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_FACE_GET_BACKGROUNDSIZE_OFFSET))(this);
		}

		::System::String* get_BackgroundPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_FACE_GET_BACKGROUNDPATH_OFFSET))(this);
		}

		::System::String* get_ShowLevelVarName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_FACE_GET_SHOWLEVELVARNAME_OFFSET))(this);
		}

		::Il2CppArray<::System::Int16>* get_ShowLevelVarValues()
		{
			return ((::Il2CppArray<::System::Int16>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_FACE_GET_SHOWLEVELVARVALUES_OFFSET))(this);
		}

		::APAHPCEMFND* get_LevelInstance()
		{
			return ((::APAHPCEMFND*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_FACE_GET_LEVELINSTANCE_OFFSET))(this);
		}

		::RPG::Client::NavMap::FiveDim::CartographyFiveDim* get_Cartography()
		{
			return ((::RPG::Client::NavMap::FiveDim::CartographyFiveDim*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_FACE_GET_CARTOGRAPHY_OFFSET))(this);
		}

		::System::Boolean get_IsPlayerIn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_FACE_GET_ISPLAYERIN_OFFSET))(this);
		}

		::System::Boolean get_IsShowEmptyMap()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_FACE_GET_ISSHOWEMPTYMAP_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::NavMap::FiveDim::SurfaceConnectIcon*>* get_SurfaceConnectIcons()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::NavMap::FiveDim::SurfaceConnectIcon*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_FACE_GET_SURFACECONNECTICONS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::NavMap::FiveDim::EntityIcon*>* get_Icons()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::NavMap::FiveDim::EntityIcon*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_FACE_GET_ICONS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::NavMap::FiveDim::MissionIcon*>* get_MissionIcons()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::NavMap::FiveDim::MissionIcon*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_FACE_GET_MISSIONICONS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::NavMap::FiveDim::SectionConfig*>* get_Sections()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::NavMap::FiveDim::SectionConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_FACE_GET_SECTIONS_OFFSET))(this);
		}

		::System::Collections::Generic::HashSet_1<::System::UInt32>* get_Fogs()
		{
			return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_FACE_GET_FOGS_OFFSET))(this);
		}

		::System::UInt32 get_ContainerGroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_FACE_GET_CONTAINERGROUPID_OFFSET))(this);
		}

		::System::UInt32 get_ContainerInstanceID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_FACE_GET_CONTAINERINSTANCEID_OFFSET))(this);
		}

		::PLEODCMINJF* get_CheatSheet()
		{
			return ((::PLEODCMINJF*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_FACE_GET_CHEATSHEET_OFFSET))(this);
		}

		::System::Single get_UnitLength()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_FACE_GET_UNITLENGTH_OFFSET))(this);
		}

		::System::Int16 get_UnitPixelCount()
		{
			return ((::System::Int16(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_FACE_GET_UNITPIXELCOUNT_OFFSET))(this);
		}

		::RPG::Client::NavMap::MapData* get_MapData()
		{
			return ((::RPG::Client::NavMap::MapData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_FACE_GET_MAPDATA_OFFSET))(this);
		}

		::System::Boolean HasSectionShow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_FACE_HASSECTIONSHOW_OFFSET))(this);
		}

		::System::Boolean IsSectionShow(::RPG::Client::NavMap::FiveDim::SectionConfig* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::NavMap::FiveDim::SectionConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_FACE_ISSECTIONSHOW_OFFSET))(this, a1);
		}

		::System::Boolean _IsFogUnlock(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_FACE__ISFOGUNLOCK_OFFSET))(this, a1);
		}

		::System::Boolean IsInLockFog(::UnityEngine::Vector3 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_FACE_ISINLOCKFOG_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 GetMapLocalPosition(::JNJPJOPEDHP* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::JNJPJOPEDHP*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_FACE_GETMAPLOCALPOSITION_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 GetPlayerMapLocalPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_FACE_GETPLAYERMAPLOCALPOSITION_OFFSET))(this);
		}

		::UnityEngine::Quaternion GetPlayerMapLocalRotation()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_FACE_GETPLAYERMAPLOCALROTATION_OFFSET))(this);
		}

		::System::Boolean _GetPlayerTransformOnSurface(::KLNKLOMDIIC a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KLNKLOMDIIC))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_FACE__GETPLAYERTRANSFORMONSURFACE_OFFSET))(this, a1);
		}

		::System::Void TryAddEntityIcon(::RPG::Client::NavMap::FiveDim::EntityIcon* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::NavMap::FiveDim::EntityIcon*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_FACE_TRYADDENTITYICON_OFFSET))(this, a1);
		}

		::System::Void SortEntityIcons()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_FACE_SORTENTITYICONS_OFFSET))(this);
		}

		::System::Void _CreateSurfaces()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_FACE__CREATESURFACES_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_FACE_INIT_OFFSET))(this);
		}

		::System::Void _CollectChestIcons()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_FACE__COLLECTCHESTICONS_OFFSET))(this);
		}

		::System::Boolean ContainsSurface(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_FACE_CONTAINSSURFACE_OFFSET))(this, a1);
		}

		::System::Boolean ContainsConnectTarget(::RPG::Client::NavMap::FiveDim::SurfaceConnectIcon_SurfaceConnectTarget* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::NavMap::FiveDim::SurfaceConnectIcon_SurfaceConnectTarget*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_FACE_CONTAINSCONNECTTARGET_OFFSET))(this, a1);
		}

		::RPG::Client::NavMap::FiveDim::EntityIcon* GetTrackingEntityIcon()
		{
			return ((::RPG::Client::NavMap::FiveDim::EntityIcon*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_FACE_GETTRACKINGENTITYICON_OFFSET))(this);
		}

		::RPG::Client::NavMap::FiveDim::MissionIcon* GetTrackingMissionIcon()
		{
			return ((::RPG::Client::NavMap::FiveDim::MissionIcon*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_FACE_GETTRACKINGMISSIONICON_OFFSET))(this);
		}

		::System::Boolean HasChestIcon()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_FACE_HASCHESTICON_OFFSET))(this);
		}

		::BCMOLHGOPEK* GetSurface(::System::UInt32 a1)
		{
			return ((::BCMOLHGOPEK*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_FACE_GETSURFACE_OFFSET))(this, a1);
		}

		static ::RPG::Client::NavMap::FiveDim::Face* Create(::RPG::GameCore::FiveDimMapFaceConfig* a1, ::APAHPCEMFND* a2)
		{
			return ((::RPG::Client::NavMap::FiveDim::Face*(*)(::RPG::GameCore::FiveDimMapFaceConfig*, ::APAHPCEMFND*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_FACE_CREATE_OFFSET))(a1, a2);
		}

	};
}
