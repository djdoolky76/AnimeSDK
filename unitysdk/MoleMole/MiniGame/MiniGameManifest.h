#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/JGLIFHIAIEH.h"
#include "unitysdk/KBKLCGKKIPI.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Camera; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_MINIGAME_MINIGAMEMANIFEST_CONVERTLOGICPOSTOGLOBALLAYOUTPOS_OFFSET UNITYSDK_OFFSET(0x12B51840)
#define MOLEMOLE_MINIGAME_MINIGAMEMANIFEST_CONVERTLOGICPOSTOLAYOUTPOS_1_OFFSET UNITYSDK_OFFSET(0x12B51690)
#define MOLEMOLE_MINIGAME_MINIGAMEMANIFEST_CONVERTLOGICPOSTOLAYOUTPOS_2_OFFSET UNITYSDK_OFFSET(0x12B51760)
#define MOLEMOLE_MINIGAME_MINIGAMEMANIFEST_CONVERTLOGICPOSTOLAYOUTPOS_OFFSET UNITYSDK_OFFSET(0x12B515B0)
#define MOLEMOLE_MINIGAME_MINIGAMEMANIFEST_GETGAMEROOT_OFFSET UNITYSDK_OFFSET(0x12B519A0)
#define MOLEMOLE_MINIGAME_MINIGAMEMANIFEST_GET_LEFTDOWNGLOBALPOS_OFFSET UNITYSDK_OFFSET(0x12B51A80)
#define MOLEMOLE_MINIGAME_MINIGAMEMANIFEST_GET_LEFTDOWNPOS_OFFSET UNITYSDK_OFFSET(0x12B519E0)
#define MOLEMOLE_MINIGAME_MINIGAMEMANIFEST_GET_RIGHTUPGLOBALPOS_OFFSET UNITYSDK_OFFSET(0x12B51AD0)
#define MOLEMOLE_MINIGAME_MINIGAMEMANIFEST_GET_RIGHTUPPOS_OFFSET UNITYSDK_OFFSET(0x12B51A30)
#define MOLEMOLE_MINIGAME_MINIGAMEMANIFEST__CTOR_OFFSET UNITYSDK_OFFSET(0x12B51B20)

namespace MoleMole::MiniGame
{
	inline static constexpr unsigned int MiniGameManifest_TypeDefinitionIndex = 55032;

	class MiniGameManifest : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Camera* camera; // 0x18
		::UnityEngine::Transform* gameCanvas; // 0x20
		::UnityEngine::Transform* gameRoot; // 0x28
		::UnityEngine::Transform* leftDownAnchor; // 0x30
		::UnityEngine::Transform* rightUpAnchor; // 0x38
		::UnityEngine::Vector2 mapSize; // 0x40
		::System::Single gridSizeX; // 0x48
		::System::Single gridSizeY; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_MINIGAMEMANIFEST__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 ConvertLogicPosToLayoutPos(::KBKLCGKKIPI CKPGOKHECCH)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::KBKLCGKKIPI))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_MINIGAMEMANIFEST_CONVERTLOGICPOSTOLAYOUTPOS_OFFSET))(this, CKPGOKHECCH);
		}

		::UnityEngine::Vector3 ConvertLogicPosToLayoutPos_1(::JGLIFHIAIEH CKPGOKHECCH)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::JGLIFHIAIEH))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_MINIGAMEMANIFEST_CONVERTLOGICPOSTOLAYOUTPOS_1_OFFSET))(this, CKPGOKHECCH);
		}

		::UnityEngine::Vector3 ConvertLogicPosToLayoutPos_2(::UnityEngine::Vector3 CKPGOKHECCH)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_MINIGAMEMANIFEST_CONVERTLOGICPOSTOLAYOUTPOS_2_OFFSET))(this, CKPGOKHECCH);
		}

		::UnityEngine::Vector3 ConvertLogicPosToGlobalLayoutPos(::JGLIFHIAIEH CKPGOKHECCH)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::JGLIFHIAIEH))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_MINIGAMEMANIFEST_CONVERTLOGICPOSTOGLOBALLAYOUTPOS_OFFSET))(this, CKPGOKHECCH);
		}

		::UnityEngine::Transform* GetGameRoot()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_MINIGAMEMANIFEST_GETGAMEROOT_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_LeftDownPos()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_MINIGAMEMANIFEST_GET_LEFTDOWNPOS_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_RightUpPos()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_MINIGAMEMANIFEST_GET_RIGHTUPPOS_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_LeftDownGlobalPos()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_MINIGAMEMANIFEST_GET_LEFTDOWNGLOBALPOS_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_RightUpGlobalPos()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_MINIGAMEMANIFEST_GET_RIGHTUPGLOBALPOS_OFFSET))(this);
		}
	};
}
