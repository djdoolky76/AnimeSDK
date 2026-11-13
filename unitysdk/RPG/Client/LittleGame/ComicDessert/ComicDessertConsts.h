#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ComicDessert/ComicDessertDeviceID.h"
#include "unitysdk/RPG/Client/LittleGame/ComicDessert/GlowStyle.h"
#include "unitysdk/RPG/Client/LittleGame/ComicDessert/OutlineStyle.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Quaternion.h"
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCONSTS_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E141DA0)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCONSTS_GETLEAVEPOSITION_OFFSET UNITYSDK_OFFSET(0x1E141600)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCONSTS_GETORDERBUBBLEPOSITION_OFFSET UNITYSDK_OFFSET(0x1E141B90)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCONSTS_GETSLOTPOSITION_OFFSET UNITYSDK_OFFSET(0x1E141120)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCONSTS_GETSPAWNPOSITION_OFFSET UNITYSDK_OFFSET(0x1E141390)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCONSTS_GETSPAWNROTATION_OFFSET UNITYSDK_OFFSET(0x1E141870)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCONSTS_GET_DEVICEHINTIDLESECONDS_OFFSET UNITYSDK_OFFSET(0x1E140170)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCONSTS_GET_ICEMACHINEDEVICEID_OFFSET UNITYSDK_OFFSET(0x1E140150)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCONSTS_GET_LEAVEPOSITIONS_OFFSET UNITYSDK_OFFSET(0x1E140560)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCONSTS_GET_ORDERBUBBLEPOSITIONS_OFFSET UNITYSDK_OFFSET(0x1E140320)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCONSTS_GET_ORDERBUBBLEPOSITIONVALID_OFFSET UNITYSDK_OFFSET(0x1E1403E0)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCONSTS_GET_SCENEROOTSPAWNPOSITION_OFFSET UNITYSDK_OFFSET(0x1E140180)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCONSTS_GET_SLOTPOSITIONS_OFFSET UNITYSDK_OFFSET(0x1E140260)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCONSTS_GET_SPAWNPOSITIONS_OFFSET UNITYSDK_OFFSET(0x1E1404A0)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCONSTS_GET_STOPREFRESHBEFOREENDSECONDS_OFFSET UNITYSDK_OFFSET(0x1E140160)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCONSTS_HASORDERBUBBLEPOSITION_OFFSET UNITYSDK_OFFSET(0x1E1419A0)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCONSTS_INITSLOTPOSITIONS_OFFSET UNITYSDK_OFFSET(0x1E140750)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCONSTS_ISRESTOCKBASKET_OFFSET UNITYSDK_OFFSET(0x1E140620)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCONSTS_SET_LEAVEPOSITIONS_OFFSET UNITYSDK_OFFSET(0x1E1405C0)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCONSTS_SET_ORDERBUBBLEPOSITIONS_OFFSET UNITYSDK_OFFSET(0x1E140380)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCONSTS_SET_ORDERBUBBLEPOSITIONVALID_OFFSET UNITYSDK_OFFSET(0x1E140440)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCONSTS_SET_SCENEROOTSPAWNPOSITION_OFFSET UNITYSDK_OFFSET(0x1E1401F0)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCONSTS_SET_SLOTPOSITIONS_OFFSET UNITYSDK_OFFSET(0x1E1402C0)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCONSTS_SET_SPAWNPOSITIONS_OFFSET UNITYSDK_OFFSET(0x1E140500)

namespace RPG::Client::LittleGame::ComicDessert
{
	inline static constexpr unsigned int ComicDessertConsts_TypeDefinitionIndex = 79809;

	class ComicDessertConsts : public ::System::Object
	{
	public:
		static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet__SlotPositions_k__BackingField()
		{
			return (::Il2CppArray<::UnityEngine::Vector3>**)UnitySDK::FromName("RPG.Client.LittleGame.ComicDessert", "ComicDessertConsts")->GetStaticField(0x280F0);
		}

		static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet__LeavePositions_k__BackingField()
		{
			return (::Il2CppArray<::UnityEngine::Vector3>**)UnitySDK::FromName("RPG.Client.LittleGame.ComicDessert", "ComicDessertConsts")->GetStaticField(0x280F8);
		}

		static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet__SpawnPositions_k__BackingField()
		{
			return (::Il2CppArray<::UnityEngine::Vector3>**)UnitySDK::FromName("RPG.Client.LittleGame.ComicDessert", "ComicDessertConsts")->GetStaticField(0x28100);
		}

		static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet__OrderBubblePositions_k__BackingField()
		{
			return (::Il2CppArray<::UnityEngine::Vector3>**)UnitySDK::FromName("RPG.Client.LittleGame.ComicDessert", "ComicDessertConsts")->GetStaticField(0x28108);
		}

		static ::Il2CppArray<::System::Boolean>** StaticGet__OrderBubblePositionValid_k__BackingField()
		{
			return (::Il2CppArray<::System::Boolean>**)UnitySDK::FromName("RPG.Client.LittleGame.ComicDessert", "ComicDessertConsts")->GetStaticField(0x28110);
		}

		static ::Il2CppArray<::RPG::Client::LittleGame::ComicDessert::ComicDessertDeviceID>** StaticGet_RestockBaskets()
		{
			return (::Il2CppArray<::RPG::Client::LittleGame::ComicDessert::ComicDessertDeviceID>**)UnitySDK::FromName("RPG.Client.LittleGame.ComicDessert", "ComicDessertConsts")->GetStaticField(0x28118);
		}

		static ::System::Single* StaticGet_DragPlaneDistance()
		{
			return (::System::Single*)UnitySDK::FromName("RPG.Client.LittleGame.ComicDessert", "ComicDessertConsts")->GetStaticField(0x82F0);
		}

		static ::UnityEngine::Vector3* StaticGet__SceneRootSpawnPosition_k__BackingField()
		{
			return (::UnityEngine::Vector3*)UnitySDK::FromName("RPG.Client.LittleGame.ComicDessert", "ComicDessertConsts")->GetStaticField(0x82F4);
		}

		static ::RPG::Client::LittleGame::ComicDessert::OutlineStyle* StaticGet_FallbackOutlineStyle()
		{
			return (::RPG::Client::LittleGame::ComicDessert::OutlineStyle*)UnitySDK::FromName("RPG.Client.LittleGame.ComicDessert", "ComicDessertConsts")->GetStaticField(0x8300);
		}

		static ::RPG::Client::LittleGame::ComicDessert::GlowStyle* StaticGet_FallbackGlowStyle()
		{
			return (::RPG::Client::LittleGame::ComicDessert::GlowStyle*)UnitySDK::FromName("RPG.Client.LittleGame.ComicDessert", "ComicDessertConsts")->GetStaticField(0x8318);
		}

		// static const ::System::Object SlotCount; // 0x0
		// static const ::System::Object InvalidDishID; // 0x0
		// static const ::System::Object CommonOwnerDishID; // 0x0
		// static const ::System::Object PlainIceCreamDishID; // 0x0
		// static const ::System::Object Invalid_hit_time; // 0x0
		// static const ::System::Object FillEffectSeconds; // 0x0
		// static const ::System::Object DefaultMakingSeconds; // 0x0
		// static const ::System::String* ProductPrefabPath; // 0x0
		// static const ::System::String* TaiyakiPrefabPath; // 0x0
		// static const ::System::String* TofuPrefabPath; // 0x0
		// static const ::System::String* BlueberryPrefabPath; // 0x0
		// static const ::System::String* StrawberryPrefabPath; // 0x0
		// static const ::System::String* PlatePrefabPath; // 0x0
		// static const ::System::String* IceCreamPrefabPath; // 0x0
		// static const ::System::String* ChocolatePrefabPath; // 0x0
		// static const ::System::String* OutlineRootPrefabPath; // 0x0
		// static const ::System::Object DefaultOutlineDepthTestBias; // 0x0
		// static const ::System::Object RaisedBasketOutlineDepthTestBias; // 0x0
		// static const ::System::String* TransportSettingDirectory; // 0x0
		// static const ::System::String* TransportDefaultFlightSettingsPath; // 0x0
		// static const ::System::String* TransportProduceFlightSettingsPath; // 0x0
		// static const ::System::String* OrderBubblePositionChildName; // 0x0
		// static const ::System::String* SpawnPointChildName; // 0x0
		// static const ::System::String* LeavePointChildName; // 0x0
		// static const ::System::String* TutorialPointChildName; // 0x0
		// static const ::System::Object DragDropRaycastDistance; // 0x0
		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCONSTS_CCTOR_OFFSET))();
		}

		static ::System::UInt32 get_IceMachineDeviceID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCONSTS_GET_ICEMACHINEDEVICEID_OFFSET))();
		}

		static ::System::Single get_StopRefreshBeforeEndSeconds()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCONSTS_GET_STOPREFRESHBEFOREENDSECONDS_OFFSET))();
		}

		static ::System::Single get_DeviceHintIdleSeconds()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCONSTS_GET_DEVICEHINTIDLESECONDS_OFFSET))();
		}

		static ::UnityEngine::Vector3 get_SceneRootSpawnPosition()
		{
			return ((::UnityEngine::Vector3(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCONSTS_GET_SCENEROOTSPAWNPOSITION_OFFSET))();
		}

		static ::System::Void set_SceneRootSpawnPosition(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCONSTS_SET_SCENEROOTSPAWNPOSITION_OFFSET))(a1);
		}

		static ::Il2CppArray<::UnityEngine::Vector3>* get_SlotPositions()
		{
			return ((::Il2CppArray<::UnityEngine::Vector3>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCONSTS_GET_SLOTPOSITIONS_OFFSET))();
		}

		static ::System::Void set_SlotPositions(::Il2CppArray<::UnityEngine::Vector3>* a1)
		{
			return ((::System::Void(*)(::Il2CppArray<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCONSTS_SET_SLOTPOSITIONS_OFFSET))(a1);
		}

		static ::Il2CppArray<::UnityEngine::Vector3>* get_OrderBubblePositions()
		{
			return ((::Il2CppArray<::UnityEngine::Vector3>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCONSTS_GET_ORDERBUBBLEPOSITIONS_OFFSET))();
		}

		static ::System::Void set_OrderBubblePositions(::Il2CppArray<::UnityEngine::Vector3>* a1)
		{
			return ((::System::Void(*)(::Il2CppArray<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCONSTS_SET_ORDERBUBBLEPOSITIONS_OFFSET))(a1);
		}

		static ::Il2CppArray<::System::Boolean>* get_OrderBubblePositionValid()
		{
			return ((::Il2CppArray<::System::Boolean>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCONSTS_GET_ORDERBUBBLEPOSITIONVALID_OFFSET))();
		}

		static ::System::Void set_OrderBubblePositionValid(::Il2CppArray<::System::Boolean>* a1)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCONSTS_SET_ORDERBUBBLEPOSITIONVALID_OFFSET))(a1);
		}

		static ::Il2CppArray<::UnityEngine::Vector3>* get_SpawnPositions()
		{
			return ((::Il2CppArray<::UnityEngine::Vector3>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCONSTS_GET_SPAWNPOSITIONS_OFFSET))();
		}

		static ::System::Void set_SpawnPositions(::Il2CppArray<::UnityEngine::Vector3>* a1)
		{
			return ((::System::Void(*)(::Il2CppArray<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCONSTS_SET_SPAWNPOSITIONS_OFFSET))(a1);
		}

		static ::Il2CppArray<::UnityEngine::Vector3>* get_LeavePositions()
		{
			return ((::Il2CppArray<::UnityEngine::Vector3>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCONSTS_GET_LEAVEPOSITIONS_OFFSET))();
		}

		static ::System::Void set_LeavePositions(::Il2CppArray<::UnityEngine::Vector3>* a1)
		{
			return ((::System::Void(*)(::Il2CppArray<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCONSTS_SET_LEAVEPOSITIONS_OFFSET))(a1);
		}

		static ::System::Boolean IsRestockBasket(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCONSTS_ISRESTOCKBASKET_OFFSET))(a1);
		}

		static ::System::Void InitSlotPositions(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCONSTS_INITSLOTPOSITIONS_OFFSET))(a1);
		}

		static ::UnityEngine::Vector3 GetSlotPosition(::System::Int32 a1)
		{
			return ((::UnityEngine::Vector3(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCONSTS_GETSLOTPOSITION_OFFSET))(a1);
		}

		static ::UnityEngine::Vector3 GetSpawnPosition(::System::Int32 a1)
		{
			return ((::UnityEngine::Vector3(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCONSTS_GETSPAWNPOSITION_OFFSET))(a1);
		}

		static ::UnityEngine::Vector3 GetLeavePosition(::System::Int32 a1)
		{
			return ((::UnityEngine::Vector3(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCONSTS_GETLEAVEPOSITION_OFFSET))(a1);
		}

		static ::UnityEngine::Quaternion GetSpawnRotation(::System::Int32 a1)
		{
			return ((::UnityEngine::Quaternion(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCONSTS_GETSPAWNROTATION_OFFSET))(a1);
		}

		static ::System::Boolean HasOrderBubblePosition(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCONSTS_HASORDERBUBBLEPOSITION_OFFSET))(a1);
		}

		static ::UnityEngine::Vector3 GetOrderBubblePosition(::System::Int32 a1)
		{
			return ((::UnityEngine::Vector3(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTCONSTS_GETORDERBUBBLEPOSITION_OFFSET))(a1);
		}

	};
}
