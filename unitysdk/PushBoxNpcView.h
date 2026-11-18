#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class CEDHMCAELMM;
class GOIKJCHFIIO;
class MIKBKMMKEML;
class MLPGEJOFJBL;
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class SpriteRenderer; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Events { class UnityAction; }

#define PUSHBOXNPCVIEW_AWAKE_OFFSET UNITYSDK_OFFSET(0x1D9E2500)
#define PUSHBOXNPCVIEW_GETWORLDINDEX_OFFSET UNITYSDK_OFFSET(0x1D9E2D20)
#define PUSHBOXNPCVIEW_GETWORLDLOCALPOS_OFFSET UNITYSDK_OFFSET(0x1D9E2D80)
#define PUSHBOXNPCVIEW_GET_SELFGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x1D9E3060)
#define PUSHBOXNPCVIEW_GET_SELFTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1D9E2EF0)
#define PUSHBOXNPCVIEW_INIT_OFFSET UNITYSDK_OFFSET(0x1D9E2560)
#define PUSHBOXNPCVIEW_PLAYTEXTURE_OFFSET UNITYSDK_OFFSET(0x1D9E2820)
#define PUSHBOXNPCVIEW_SETWORLDLOCALPOS_OFFSET UNITYSDK_OFFSET(0x1D9E2C70)
#define PUSHBOXNPCVIEW_UPDATE_OFFSET UNITYSDK_OFFSET(0x1D9E2E20)
#define PUSHBOXNPCVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9E31D0)

inline static constexpr unsigned int PushBoxNpcView_TypeDefinitionIndex = 72735;

class PushBoxNpcView : public ::UnityEngine::MonoBehaviour
{
public:
	::UnityEngine::SpriteRenderer* spriteRenderer; // 0x18
	::UnityEngine::Transform* selfTran; // 0x20
	::UnityEngine::GameObject* go; // 0x28
	::MIKBKMMKEML* spriteRenderAnim; // 0x30
	::MLPGEJOFJBL* _npcData; // 0x38
	::MoleMole::HollowChessboard::HollowCell _worldIndex; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PUSHBOXNPCVIEW__CTOR_OFFSET))(this);
	}

	::System::Void Awake()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PUSHBOXNPCVIEW_AWAKE_OFFSET))(this);
	}

	::System::Void Init(::System::Int32 npcTemplateID, ::GOIKJCHFIIO* spriteResourceProxy, ::UnityEngine::Vector2 tileSize, ::System::Boolean initMap)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::GOIKJCHFIIO*, ::UnityEngine::Vector2, ::System::Boolean))((::PBYTE)hIl2Cpp + PUSHBOXNPCVIEW_INIT_OFFSET))(this, npcTemplateID, spriteResourceProxy, tileSize, initMap);
	}

	::System::Void PlayTexture(::CEDHMCAELMM* config, ::UnityEngine::Vector2 tileSize, ::UnityEngine::Events::UnityAction* finishCallBack)
	{
		return ((::System::Void(*)(::PVOID, ::CEDHMCAELMM*, ::UnityEngine::Vector2, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + PUSHBOXNPCVIEW_PLAYTEXTURE_OFFSET))(this, config, tileSize, finishCallBack);
	}

	::System::Void SetWorldLocalPos(::MoleMole::HollowChessboard::HollowCell index, ::UnityEngine::Vector3 position)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + PUSHBOXNPCVIEW_SETWORLDLOCALPOS_OFFSET))(this, index, position);
	}

	::MoleMole::HollowChessboard::HollowCell GetWorldIndex()
	{
		return ((::MoleMole::HollowChessboard::HollowCell(*)(::PVOID))((::PBYTE)hIl2Cpp + PUSHBOXNPCVIEW_GETWORLDINDEX_OFFSET))(this);
	}

	::UnityEngine::Vector3 GetWorldLocalPos()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + PUSHBOXNPCVIEW_GETWORLDLOCALPOS_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PUSHBOXNPCVIEW_UPDATE_OFFSET))(this);
	}

	::UnityEngine::Transform* get_SelfTransform()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + PUSHBOXNPCVIEW_GET_SELFTRANSFORM_OFFSET))(this);
	}

	::UnityEngine::GameObject* get_SelfGameObject()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + PUSHBOXNPCVIEW_GET_SELFGAMEOBJECT_OFFSET))(this);
	}
};
