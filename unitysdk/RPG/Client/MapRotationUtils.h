#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PoseSwitcherType.h"
#include "unitysdk/RPG/GameCore/TransitionLoadingType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client { class MapEntityDef; }
namespace RPG::Client { class MapNpcDef; }
namespace RPG::Client::NavMap { class NavMap3DIconData; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelGroupInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_MAPROTATIONUTILS_CANPLAYENTITYTRANSITION_OFFSET UNITYSDK_OFFSET(0x1E08BB00)
#define RPG_CLIENT_MAPROTATIONUTILS_COMPUTEMAP3DMODELROTATION_OFFSET UNITYSDK_OFFSET(0x1E08D0B0)
#define RPG_CLIENT_MAPROTATIONUTILS_CTOR_OFFSET UNITYSDK_OFFSET(0x1E08DBE0)
#define RPG_CLIENT_MAPROTATIONUTILS_GETROTATABLEREGIONINDEXIGNOREAIRLOCK_OFFSET UNITYSDK_OFFSET(0x1E08BDE0)
#define RPG_CLIENT_MAPROTATIONUTILS_GETVISIBLEPOSESFROMMAP3DROTATION_OFFSET UNITYSDK_OFFSET(0x1E08CC50)
#define RPG_CLIENT_MAPROTATIONUTILS_HASMAPROTATIONENERGY_OFFSET UNITYSDK_OFFSET(0x1E08C300)
#define RPG_CLIENT_MAPROTATIONUTILS_ISCURRENTROTATABLEREGION_OFFSET UNITYSDK_OFFSET(0x1E08BC00)
#define RPG_CLIENT_MAPROTATIONUTILS_ISINCURRENTROTATABLEREGION_OFFSET UNITYSDK_OFFSET(0x1E08B730)
#define RPG_CLIENT_MAPROTATIONUTILS_ISINMAPROTATIONVOLUME_OFFSET UNITYSDK_OFFSET(0x1E08C390)
#define RPG_CLIENT_MAPROTATIONUTILS_ISINROTATABLEREGION_OFFSET UNITYSDK_OFFSET(0x1E08B940)
#define RPG_CLIENT_MAPROTATIONUTILS_ISPOSESWITCHING_OFFSET UNITYSDK_OFFSET(0x1E08C440)
#define RPG_CLIENT_MAPROTATIONUTILS_ISSTEPONPOSESWITCHER_OFFSET UNITYSDK_OFFSET(0x1E08D990)
#define RPG_CLIENT_MAPROTATIONUTILS_LOCALTOWORLD_1_OFFSET UNITYSDK_OFFSET(0x1E08AC80)
#define RPG_CLIENT_MAPROTATIONUTILS_LOCALTOWORLD_OFFSET UNITYSDK_OFFSET(0x1E08AA60)
#define RPG_CLIENT_MAPROTATIONUTILS_ORIGINALWORLDTO3DMAP_1_OFFSET UNITYSDK_OFFSET(0x1E08C9B0)
#define RPG_CLIENT_MAPROTATIONUTILS_ORIGINALWORLDTO3DMAP_OFFSET UNITYSDK_OFFSET(0x1E08C630)
#define RPG_CLIENT_MAPROTATIONUTILS_PROCESSNPCAFTERLOAD_OFFSET UNITYSDK_OFFSET(0x1E08C130)
#define RPG_CLIENT_MAPROTATIONUTILS_SATISFYPOSEPERMANENTGROUPRULE_OFFSET UNITYSDK_OFFSET(0x1E08C1C0)
#define RPG_CLIENT_MAPROTATIONUTILS_SHOULDSTOPMOVEMENTSYNC_OFFSET UNITYSDK_OFFSET(0x1E08C270)
#define RPG_CLIENT_MAPROTATIONUTILS_SHOWPOSESWITCHBANMAZEATTACKTEXT_OFFSET UNITYSDK_OFFSET(0x1E08B5E0)
#define RPG_CLIENT_MAPROTATIONUTILS_SHOWPOSESWITCHBANMAZESKILLTEXT_OFFSET UNITYSDK_OFFSET(0x1E08B490)
#define RPG_CLIENT_MAPROTATIONUTILS_TELEPORTTOROTATABLEREGION_OFFSET UNITYSDK_OFFSET(0x1E08BE70)
#define RPG_CLIENT_MAPROTATIONUTILS_TRYGETPOSESWITCHALPHA_OFFSET UNITYSDK_OFFSET(0x1E08DA00)
#define RPG_CLIENT_MAPROTATIONUTILS_TRYGETPOSESWITCHERTYPE_OFFSET UNITYSDK_OFFSET(0x1E08DB40)
#define RPG_CLIENT_MAPROTATIONUTILS_WORLDPOSTOICONCANVASPOS_OFFSET UNITYSDK_OFFSET(0x1E08D790)
#define RPG_CLIENT_MAPROTATIONUTILS_WORLDTO3DMAP_1_OFFSET UNITYSDK_OFFSET(0x1E08C8B0)
#define RPG_CLIENT_MAPROTATIONUTILS_WORLDTO3DMAP_OFFSET UNITYSDK_OFFSET(0x1E08C520)
#define RPG_CLIENT_MAPROTATIONUTILS_WORLDTOLOCAL_1_OFFSET UNITYSDK_OFFSET(0x1E08AE10)
#define RPG_CLIENT_MAPROTATIONUTILS_WORLDTOLOCAL_2_OFFSET UNITYSDK_OFFSET(0x1E08AFB0)
#define RPG_CLIENT_MAPROTATIONUTILS_WORLDTOLOCAL_3_OFFSET UNITYSDK_OFFSET(0x1E08B1F0)
#define RPG_CLIENT_MAPROTATIONUTILS_WORLDTOLOCAL_OFFSET UNITYSDK_OFFSET(0x1E08AB70)

namespace RPG::Client
{
	inline static constexpr unsigned int MapRotationUtils_TypeDefinitionIndex = 61969;

	class MapRotationUtils : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONUTILS_CTOR_OFFSET))(this);
		}

		static ::UnityEngine::Vector3 LocalToWorld(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONUTILS_LOCALTOWORLD_OFFSET))(a1);
		}

		static ::UnityEngine::Vector3 WorldToLocal(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONUTILS_WORLDTOLOCAL_OFFSET))(a1);
		}

		static ::UnityEngine::Quaternion LocalToWorld_1(::UnityEngine::Quaternion a1)
		{
			return ((::UnityEngine::Quaternion(*)(::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONUTILS_LOCALTOWORLD_1_OFFSET))(a1);
		}

		static ::UnityEngine::Quaternion WorldToLocal_1(::UnityEngine::Quaternion a1)
		{
			return ((::UnityEngine::Quaternion(*)(::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONUTILS_WORLDTOLOCAL_1_OFFSET))(a1);
		}

		static ::UnityEngine::Vector3 WorldToLocal_2(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONUTILS_WORLDTOLOCAL_2_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::Quaternion WorldToLocal_3(::UnityEngine::Quaternion a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3)
		{
			return ((::UnityEngine::Quaternion(*)(::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONUTILS_WORLDTOLOCAL_3_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ShowPoseSwitchBanMazeSkillText()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONUTILS_SHOWPOSESWITCHBANMAZESKILLTEXT_OFFSET))();
		}

		static ::System::Void ShowPoseSwitchBanMazeAttackText()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONUTILS_SHOWPOSESWITCHBANMAZEATTACKTEXT_OFFSET))();
		}

		static ::System::Boolean IsInCurrentRotatableRegion(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONUTILS_ISINCURRENTROTATABLEREGION_OFFSET))(a1);
		}

		static ::System::Boolean IsInRotatableRegion(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONUTILS_ISINROTATABLEREGION_OFFSET))(a1);
		}

		static ::System::Boolean CanPlayEntityTransition(::RPG::Client::MapEntityDef* a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::MapEntityDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONUTILS_CANPLAYENTITYTRANSITION_OFFSET))(a1);
		}

		static ::System::Boolean IsCurrentRotatableRegion(::System::UInt32 a1, ::System::UInt32 a2, ::System::Int32 a3)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONUTILS_ISCURRENTROTATABLEREGION_OFFSET))(a1, a2, a3);
		}

		static ::System::Void TeleportToRotatableRegion(::System::Int32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::RPG::GameCore::TransitionLoadingType a4)
		{
			return ((::System::Void(*)(::System::Int32, ::System::UInt32, ::System::UInt32, ::RPG::GameCore::TransitionLoadingType))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONUTILS_TELEPORTTOROTATABLEREGION_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void ProcessNpcAfterLoad(::RPG::GameCore::GameEntity* a1, ::RPG::Client::MapNpcDef* a2)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONUTILS_PROCESSNPCAFTERLOAD_OFFSET))(a1, a2);
		}

		static ::System::Boolean SatisfyPosePermanentGroupRule(::RPG::GameCore::LevelGroupInfo* a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::LevelGroupInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONUTILS_SATISFYPOSEPERMANENTGROUPRULE_OFFSET))(a1);
		}

		static ::System::Boolean ShouldStopMovementSync()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONUTILS_SHOULDSTOPMOVEMENTSYNC_OFFSET))();
		}

		static ::System::Int32 GetRotatableRegionIndexIgnoreAirlock()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONUTILS_GETROTATABLEREGIONINDEXIGNOREAIRLOCK_OFFSET))();
		}

		static ::System::Boolean HasMapRotationEnergy()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONUTILS_HASMAPROTATIONENERGY_OFFSET))();
		}

		static ::System::Boolean IsInMapRotationVolume()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONUTILS_ISINMAPROTATIONVOLUME_OFFSET))();
		}

		static ::System::Boolean IsPoseSwitching()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONUTILS_ISPOSESWITCHING_OFFSET))();
		}

		static ::UnityEngine::Vector3 WorldTo3DMap(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONUTILS_WORLDTO3DMAP_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::Vector3 OriginalWorldTo3DMap(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONUTILS_ORIGINALWORLDTO3DMAP_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::Quaternion WorldTo3DMap_1(::UnityEngine::Quaternion a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3)
		{
			return ((::UnityEngine::Quaternion(*)(::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONUTILS_WORLDTO3DMAP_1_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::Quaternion OriginalWorldTo3DMap_1(::UnityEngine::Quaternion a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3)
		{
			return ((::UnityEngine::Quaternion(*)(::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONUTILS_ORIGINALWORLDTO3DMAP_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>* GetVisiblePosesFromMap3DRotation(::UnityEngine::Quaternion a1, ::UnityEngine::Quaternion a2)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::UnityEngine::Quaternion, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONUTILS_GETVISIBLEPOSESFROMMAP3DROTATION_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Quaternion ComputeMap3DModelRotation(::UnityEngine::Quaternion a1, ::RPG::Client::NavMap::NavMap3DIconData* a2)
		{
			return ((::UnityEngine::Quaternion(*)(::UnityEngine::Quaternion, ::RPG::Client::NavMap::NavMap3DIconData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONUTILS_COMPUTEMAP3DMODELROTATION_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Vector3 WorldPosToIconCanvasPos(::UnityEngine::Vector3 a1, ::UnityEngine::RectTransform* a2)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONUTILS_WORLDPOSTOICONCANVASPOS_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsStepOnPoseSwitcher()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONUTILS_ISSTEPONPOSESWITCHER_OFFSET))();
		}

		static ::System::Boolean TryGetPoseSwitchAlpha(::System::Single a1)
		{
			return ((::System::Boolean(*)(::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONUTILS_TRYGETPOSESWITCHALPHA_OFFSET))(a1);
		}

		static ::System::Boolean TryGetPoseSwitcherType(::RPG::Client::PoseSwitcherType a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::PoseSwitcherType))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONUTILS_TRYGETPOSESWITCHERTYPE_OFFSET))(a1);
		}

	};
}
