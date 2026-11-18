#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class GOIKJCHFIIO;
class MIKBKMMKEML;
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class SpriteRenderer; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Events { class UnityAction; }

#define PUSHBOXPLAYERVIEW_AWAKE_OFFSET UNITYSDK_OFFSET(0x1EBC2DE0)
#define PUSHBOXPLAYERVIEW_GETWORLDLOCALPOS_OFFSET UNITYSDK_OFFSET(0x1EBC3450)
#define PUSHBOXPLAYERVIEW_GET_SELFGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x1EBC3730)
#define PUSHBOXPLAYERVIEW_GET_SELFTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1EBC35C0)
#define PUSHBOXPLAYERVIEW_INIT_OFFSET UNITYSDK_OFFSET(0x1EBC2E40)
#define PUSHBOXPLAYERVIEW_PLAYTEXTURE_OFFSET UNITYSDK_OFFSET(0x1EBC2F00)
#define PUSHBOXPLAYERVIEW_RESET_OFFSET UNITYSDK_OFFSET(0x1EBC38A0)
#define PUSHBOXPLAYERVIEW_SETAPPEARANCE_OFFSET UNITYSDK_OFFSET(0x1EBC30B0)
#define PUSHBOXPLAYERVIEW_SETWORLDLOCALPOS_OFFSET UNITYSDK_OFFSET(0x1EBC33C0)
#define PUSHBOXPLAYERVIEW_UPDATE_OFFSET UNITYSDK_OFFSET(0x1EBC34F0)
#define PUSHBOXPLAYERVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0x1EBC38E0)

inline static constexpr unsigned int PushBoxPlayerView_TypeDefinitionIndex = 51901;

class PushBoxPlayerView : public ::UnityEngine::MonoBehaviour
{
public:
	::UnityEngine::SpriteRenderer* spriteRenderer; // 0x18
	::System::String* IdleSheetKey; // 0x20
	::System::Collections::Generic::List_1<::System::Object*>* Appearances; // 0x28
	::UnityEngine::Transform* selfTran; // 0x30
	::UnityEngine::GameObject* go; // 0x38
	::MIKBKMMKEML* spriteRenderAnim; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PUSHBOXPLAYERVIEW__CTOR_OFFSET))(this);
	}

	::System::Void Awake()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PUSHBOXPLAYERVIEW_AWAKE_OFFSET))(this);
	}

	::System::Void Init(::GOIKJCHFIIO* spriteResourceProxy, ::UnityEngine::Vector2 tileSize)
	{
		return ((::System::Void(*)(::PVOID, ::GOIKJCHFIIO*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + PUSHBOXPLAYERVIEW_INIT_OFFSET))(this, spriteResourceProxy, tileSize);
	}

	::System::Void SetAppearance(::System::String* key, ::UnityEngine::Vector2 tileSize)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + PUSHBOXPLAYERVIEW_SETAPPEARANCE_OFFSET))(this, key, tileSize);
	}

	::System::Void PlayTexture(::System::String* textureKey, ::UnityEngine::Vector2 tileSize, ::UnityEngine::Events::UnityAction* finishCallBack)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Vector2, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + PUSHBOXPLAYERVIEW_PLAYTEXTURE_OFFSET))(this, textureKey, tileSize, finishCallBack);
	}

	::System::Void SetWorldLocalPos(::UnityEngine::Vector3 position)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + PUSHBOXPLAYERVIEW_SETWORLDLOCALPOS_OFFSET))(this, position);
	}

	::UnityEngine::Vector3 GetWorldLocalPos()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + PUSHBOXPLAYERVIEW_GETWORLDLOCALPOS_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PUSHBOXPLAYERVIEW_UPDATE_OFFSET))(this);
	}

	::UnityEngine::Transform* get_SelfTransform()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + PUSHBOXPLAYERVIEW_GET_SELFTRANSFORM_OFFSET))(this);
	}

	::UnityEngine::GameObject* get_SelfGameObject()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + PUSHBOXPLAYERVIEW_GET_SELFGAMEOBJECT_OFFSET))(this);
	}

	::System::Void Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PUSHBOXPLAYERVIEW_RESET_OFFSET))(this);
	}
};
