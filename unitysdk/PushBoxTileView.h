#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/UnityEngine/Vector3.h"

class FMNAIOANOLK;
class GOIKJCHFIIO;
class MIKBKMMKEML;
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class SpriteRenderer; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Events { class UnityAction; }

#define PUSHBOXTILEVIEW_AWAKE_OFFSET UNITYSDK_OFFSET(0x1B9FCB90)
#define PUSHBOXTILEVIEW_GETWORLDLOCALPOS_OFFSET UNITYSDK_OFFSET(0x1B9FD390)
#define PUSHBOXTILEVIEW_GET_SELFGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x1B9FDAD0)
#define PUSHBOXTILEVIEW_GET_SELFTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1B9FD960)
#define PUSHBOXTILEVIEW_INIT_OFFSET UNITYSDK_OFFSET(0x1B9FCFE0)
#define PUSHBOXTILEVIEW_PLAYFRONTTEXTURE_OFFSET UNITYSDK_OFFSET(0x1B9FCD80)
#define PUSHBOXTILEVIEW_PLAYTEXTURE_OFFSET UNITYSDK_OFFSET(0x1B9FD650)
#define PUSHBOXTILEVIEW_REFRESHBYSERVERINFO_OFFSET UNITYSDK_OFFSET(0x1B9FD430)
#define PUSHBOXTILEVIEW_SETHIDDEN_OFFSET UNITYSDK_OFFSET(0x1B9FCBF0)
#define PUSHBOXTILEVIEW_SETWORLDLOCALPOS_OFFSET UNITYSDK_OFFSET(0x1B9FD300)
#define PUSHBOXTILEVIEW_SHOWREALTILE_OFFSET UNITYSDK_OFFSET(0x1B9FCF30)
#define PUSHBOXTILEVIEW_SHOWRESETFRAME_OFFSET UNITYSDK_OFFSET(0x1B9FCCE0)
#define PUSHBOXTILEVIEW_SHOWWHITE_OFFSET UNITYSDK_OFFSET(0x1B9FCC50)
#define PUSHBOXTILEVIEW_UPDATE_OFFSET UNITYSDK_OFFSET(0x1B9FD800)
#define PUSHBOXTILEVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9FDC40)

inline static constexpr unsigned int PushBoxTileView_TypeDefinitionIndex = 89420;

class PushBoxTileView : public ::UnityEngine::MonoBehaviour
{
public:
	::UnityEngine::SpriteRenderer* spriteRenderer; // 0x18
	::UnityEngine::SpriteRenderer* gridRenderer; // 0x20
	::UnityEngine::SpriteRenderer* frontWhiteRender; // 0x28
	::UnityEngine::Transform* selfTran; // 0x30
	::UnityEngine::GameObject* go; // 0x38
	::MIKBKMMKEML* spriteRenderAnim; // 0x40
	::MIKBKMMKEML* gridRenderAnim; // 0x48
	::UnityEngine::Vector2 _cacheSize; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PUSHBOXTILEVIEW__CTOR_OFFSET))(this);
	}

	::System::Void Awake()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PUSHBOXTILEVIEW_AWAKE_OFFSET))(this);
	}

	::System::Void SetHidden()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PUSHBOXTILEVIEW_SETHIDDEN_OFFSET))(this);
	}

	::System::Void ShowWhite()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PUSHBOXTILEVIEW_SHOWWHITE_OFFSET))(this);
	}

	::System::Void ShowResetFrame(::System::String* resetFrameKey)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PUSHBOXTILEVIEW_SHOWRESETFRAME_OFFSET))(this, resetFrameKey);
	}

	::System::Void ShowRealTile()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PUSHBOXTILEVIEW_SHOWREALTILE_OFFSET))(this);
	}

	::System::Void Init(::MoleMole::HollowChessboard::HollowCell cell, ::GOIKJCHFIIO* spriteResourceProxy, ::System::String* gridKey, ::System::Boolean initMap, ::UnityEngine::Vector2 tileSize)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell, ::GOIKJCHFIIO*, ::System::String*, ::System::Boolean, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + PUSHBOXTILEVIEW_INIT_OFFSET))(this, cell, spriteResourceProxy, gridKey, initMap, tileSize);
	}

	::System::Void SetWorldLocalPos(::UnityEngine::Vector3 position)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + PUSHBOXTILEVIEW_SETWORLDLOCALPOS_OFFSET))(this, position);
	}

	::UnityEngine::Vector3 GetWorldLocalPos()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + PUSHBOXTILEVIEW_GETWORLDLOCALPOS_OFFSET))(this);
	}

	::System::Void RefreshByServerInfo(::FMNAIOANOLK* serverInfo, ::System::Boolean initMap)
	{
		return ((::System::Void(*)(::PVOID, ::FMNAIOANOLK*, ::System::Boolean))((::PBYTE)hIl2Cpp + PUSHBOXTILEVIEW_REFRESHBYSERVERINFO_OFFSET))(this, serverInfo, initMap);
	}

	::System::Void PlayTexture(::System::String* textureSheetKey, ::UnityEngine::Events::UnityAction* finishCallBack)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + PUSHBOXTILEVIEW_PLAYTEXTURE_OFFSET))(this, textureSheetKey, finishCallBack);
	}

	::System::Void PlayFrontTexture(::System::String* textureSheetKey, ::UnityEngine::Events::UnityAction* finishCallBack)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + PUSHBOXTILEVIEW_PLAYFRONTTEXTURE_OFFSET))(this, textureSheetKey, finishCallBack);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PUSHBOXTILEVIEW_UPDATE_OFFSET))(this);
	}

	::UnityEngine::Transform* get_SelfTransform()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + PUSHBOXTILEVIEW_GET_SELFTRANSFORM_OFFSET))(this);
	}

	::UnityEngine::GameObject* get_SelfGameObject()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + PUSHBOXTILEVIEW_GET_SELFGAMEOBJECT_OFFSET))(this);
	}
};
