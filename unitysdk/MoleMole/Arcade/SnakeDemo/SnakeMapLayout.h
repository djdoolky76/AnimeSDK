#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/KBKLCGKKIPI.h"

namespace UnityEngine { class Camera; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Rendering { class Volume; }

#define MOLEMOLE_ARCADE_SNAKEDEMO_SNAKEMAPLAYOUT_AWAKE_OFFSET UNITYSDK_OFFSET(0x1F5287C0)
#define MOLEMOLE_ARCADE_SNAKEDEMO_SNAKEMAPLAYOUT_CONVERTLOGICPOSTOLAYOUTPOS_1_OFFSET UNITYSDK_OFFSET(0x1F529010)
#define MOLEMOLE_ARCADE_SNAKEDEMO_SNAKEMAPLAYOUT_CONVERTLOGICPOSTOLAYOUTPOS_OFFSET UNITYSDK_OFFSET(0x1F528F60)
#define MOLEMOLE_ARCADE_SNAKEDEMO_SNAKEMAPLAYOUT_GETCELLITEM_OFFSET UNITYSDK_OFFSET(0x1F528C60)
#define MOLEMOLE_ARCADE_SNAKEDEMO_SNAKEMAPLAYOUT_GETCELLROOT_OFFSET UNITYSDK_OFFSET(0x1F528CE0)
#define MOLEMOLE_ARCADE_SNAKEDEMO_SNAKEMAPLAYOUT_GETHOSTMARK_OFFSET UNITYSDK_OFFSET(0x1F528B90)
#define MOLEMOLE_ARCADE_SNAKEDEMO_SNAKEMAPLAYOUT_GETMAPEFFBOMB_OFFSET UNITYSDK_OFFSET(0x1F528EC0)
#define MOLEMOLE_ARCADE_SNAKEDEMO_SNAKEMAPLAYOUT_GETMAPEFFEAT_OFFSET UNITYSDK_OFFSET(0x1F528DD0)
#define MOLEMOLE_ARCADE_SNAKEDEMO_SNAKEMAPLAYOUT_GETMAPEFFHITBACK_OFFSET UNITYSDK_OFFSET(0x1F528E70)
#define MOLEMOLE_ARCADE_SNAKEDEMO_SNAKEMAPLAYOUT_GETMAPEFFITEMIDLE_OFFSET UNITYSDK_OFFSET(0x1F528E20)
#define MOLEMOLE_ARCADE_SNAKEDEMO_SNAKEMAPLAYOUT_GETMAPEFFROOT_OFFSET UNITYSDK_OFFSET(0x1F528F10)
#define MOLEMOLE_ARCADE_SNAKEDEMO_SNAKEMAPLAYOUT_GETSHADOWROOT_OFFSET UNITYSDK_OFFSET(0x1F528D80)
#define MOLEMOLE_ARCADE_SNAKEDEMO_SNAKEMAPLAYOUT_GETSHADOW_OFFSET UNITYSDK_OFFSET(0x1F528CA0)
#define MOLEMOLE_ARCADE_SNAKEDEMO_SNAKEMAPLAYOUT_GETSNAKEBODY_OFFSET UNITYSDK_OFFSET(0x1F528C20)
#define MOLEMOLE_ARCADE_SNAKEDEMO_SNAKEMAPLAYOUT_GETSNAKEHEAD_OFFSET UNITYSDK_OFFSET(0x1F528BE0)
#define MOLEMOLE_ARCADE_SNAKEDEMO_SNAKEMAPLAYOUT_GETSNAKEROOT_OFFSET UNITYSDK_OFFSET(0x1F528D30)
#define MOLEMOLE_ARCADE_SNAKEDEMO_SNAKEMAPLAYOUT_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1F528760)
#define MOLEMOLE_ARCADE_SNAKEDEMO_SNAKEMAPLAYOUT_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1F528770)
#define MOLEMOLE_ARCADE_SNAKEDEMO_SNAKEMAPLAYOUT__CTOR_OFFSET UNITYSDK_OFFSET(0x1F5290C0)

namespace MoleMole::Arcade::SnakeDemo
{
	inline static constexpr unsigned int SnakeMapLayout_TypeDefinitionIndex = 96626;

	class SnakeMapLayout : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::MoleMole::Arcade::SnakeDemo::SnakeMapLayout** StaticGet_ECMMKCJLBMD()
		{
			return (::MoleMole::Arcade::SnakeDemo::SnakeMapLayout**)Il2CppClass::FromTypeDefinitionIndex(SnakeMapLayout_TypeDefinitionIndex)->GetStaticField(0x52F20);
		}
		::UnityEngine::Camera* camera; // 0x18
		::UnityEngine::Rendering::Volume* volume; // 0x20
		::UnityEngine::Vector2 mapSize; // 0x28
		::System::Single gridSizeX; // 0x30
		::System::Single gridSizeY; // 0x34
		::UnityEngine::Vector2 FBKGDNMDHLA; // 0x38
		::UnityEngine::Vector3 EPFBIOCOAMO; // 0x40
		::System::Byte _padding0[0x4];
		::UnityEngine::Transform* leftDownAnchor; // 0x50
		::UnityEngine::Transform* rightUpAnchor; // 0x58
		::UnityEngine::GameObject* templateShadow; // 0x60
		::UnityEngine::GameObject* templateSnake; // 0x68
		::UnityEngine::GameObject* templateSnakeHead; // 0x70
		::UnityEngine::GameObject* templateItem; // 0x78
		::UnityEngine::Transform* cellRoot; // 0x80
		::UnityEngine::Transform* snakeRoot; // 0x88
		::UnityEngine::Transform* shadowRoot; // 0x90
		::UnityEngine::Transform* hostMark; // 0x98
		::UnityEngine::GameObject* templateEatEff; // 0xA0
		::UnityEngine::GameObject* templateItemIdleEff; // 0xA8
		::UnityEngine::GameObject* templateHitBackEff; // 0xB0
		::UnityEngine::GameObject* templateBombEff; // 0xB8
		::UnityEngine::Transform* mapEffRoot; // 0xC0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_SNAKEMAPLAYOUT__CTOR_OFFSET))(this);
		}

		static ::MoleMole::Arcade::SnakeDemo::SnakeMapLayout* get_Instance()
		{
			return ((::MoleMole::Arcade::SnakeDemo::SnakeMapLayout*(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_SNAKEMAPLAYOUT_GET_INSTANCE_OFFSET))();
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_SNAKEMAPLAYOUT_ONDESTROY_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_SNAKEMAPLAYOUT_AWAKE_OFFSET))(this);
		}

		::UnityEngine::Transform* GetHostMark()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_SNAKEMAPLAYOUT_GETHOSTMARK_OFFSET))(this);
		}

		::UnityEngine::GameObject* GetSnakeHead()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_SNAKEMAPLAYOUT_GETSNAKEHEAD_OFFSET))(this);
		}

		::UnityEngine::GameObject* GetSnakeBody()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_SNAKEMAPLAYOUT_GETSNAKEBODY_OFFSET))(this);
		}

		::UnityEngine::GameObject* GetCellItem()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_SNAKEMAPLAYOUT_GETCELLITEM_OFFSET))(this);
		}

		::UnityEngine::GameObject* GetShadow()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_SNAKEMAPLAYOUT_GETSHADOW_OFFSET))(this);
		}

		::UnityEngine::Transform* GetCellRoot()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_SNAKEMAPLAYOUT_GETCELLROOT_OFFSET))(this);
		}

		::UnityEngine::Transform* GetSnakeRoot()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_SNAKEMAPLAYOUT_GETSNAKEROOT_OFFSET))(this);
		}

		::UnityEngine::Transform* GetShadowRoot()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_SNAKEMAPLAYOUT_GETSHADOWROOT_OFFSET))(this);
		}

		::UnityEngine::GameObject* GetMapEffEat()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_SNAKEMAPLAYOUT_GETMAPEFFEAT_OFFSET))(this);
		}

		::UnityEngine::GameObject* GetMapEffItemIdle()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_SNAKEMAPLAYOUT_GETMAPEFFITEMIDLE_OFFSET))(this);
		}

		::UnityEngine::GameObject* GetMapEffHitBack()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_SNAKEMAPLAYOUT_GETMAPEFFHITBACK_OFFSET))(this);
		}

		::UnityEngine::GameObject* GetMapEffBomb()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_SNAKEMAPLAYOUT_GETMAPEFFBOMB_OFFSET))(this);
		}

		::UnityEngine::Transform* GetMapEffRoot()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_SNAKEMAPLAYOUT_GETMAPEFFROOT_OFFSET))(this);
		}

		::UnityEngine::Vector3 ConvertLogicPosToLayoutPos(::KBKLCGKKIPI CKPGOKHECCH)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::KBKLCGKKIPI))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_SNAKEMAPLAYOUT_CONVERTLOGICPOSTOLAYOUTPOS_OFFSET))(this, CKPGOKHECCH);
		}

		::UnityEngine::Vector3 ConvertLogicPosToLayoutPos_1(::UnityEngine::Vector3 CKPGOKHECCH)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_SNAKEMAPLAYOUT_CONVERTLOGICPOSTOLAYOUTPOS_1_OFFSET))(this, CKPGOKHECCH);
		}
	};
}
