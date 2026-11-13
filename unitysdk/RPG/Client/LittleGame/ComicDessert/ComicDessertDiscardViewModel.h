#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
namespace RPG::Client::LittleGame::ComicDessert { class ViewModelEventHandler; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTDISCARDVIEWMODEL_ADD_ONREFRESH_OFFSET UNITYSDK_OFFSET(0x1E148800)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTDISCARDVIEWMODEL_CONTAINS_OFFSET UNITYSDK_OFFSET(0x1E148CA0)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTDISCARDVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E148F30)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTDISCARDVIEWMODEL_GET_ISLEFTPOINTEROVER_OFFSET UNITYSDK_OFFSET(0x1E1487C0)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTDISCARDVIEWMODEL_GET_ISRIGHTPOINTEROVER_OFFSET UNITYSDK_OFFSET(0x1E1487E0)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTDISCARDVIEWMODEL_GET_VISIBLE_OFFSET UNITYSDK_OFFSET(0x1E1487A0)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTDISCARDVIEWMODEL_HITTEST_OFFSET UNITYSDK_OFFSET(0x1E148D10)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTDISCARDVIEWMODEL_REMOVE_ONREFRESH_OFFSET UNITYSDK_OFFSET(0x1E148860)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTDISCARDVIEWMODEL_SETHIGHLIGHTED_OFFSET UNITYSDK_OFFSET(0x1E148B70)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTDISCARDVIEWMODEL_SETHITRECTS_OFFSET UNITYSDK_OFFSET(0x1E148C00)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTDISCARDVIEWMODEL_SETSERVEDRAGCOUNT_OFFSET UNITYSDK_OFFSET(0x1E148A20)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTDISCARDVIEWMODEL_SETUNLOCKED_OFFSET UNITYSDK_OFFSET(0x1E1488C0)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTDISCARDVIEWMODEL_SET_ISLEFTPOINTEROVER_OFFSET UNITYSDK_OFFSET(0x1E1487D0)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTDISCARDVIEWMODEL_SET_ISRIGHTPOINTEROVER_OFFSET UNITYSDK_OFFSET(0x1E1487F0)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTDISCARDVIEWMODEL_SET_VISIBLE_OFFSET UNITYSDK_OFFSET(0x1E1487B0)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTDISCARDVIEWMODEL__CONTAINS_OFFSET UNITYSDK_OFFSET(0x1E148DD0)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTDISCARDVIEWMODEL__REFRESHVISIBLE_OFFSET UNITYSDK_OFFSET(0x1E148990)

namespace RPG::Client::LittleGame::ComicDessert
{
	inline static constexpr unsigned int ComicDessertDiscardViewModel_TypeDefinitionIndex = 80115;

	class ComicDessertDiscardViewModel : public ::System::Object
	{
	public:
		::RPG::Client::LittleGame::ComicDessert::ViewModelEventHandler* OnRefresh; // 0x10
		::UnityEngine::GameObject* _RightGameObject; // 0x18
		::UnityEngine::RectTransform* _Left; // 0x20
		::UnityEngine::GameObject* _LeftGameObject; // 0x28
		::UnityEngine::RectTransform* _Right; // 0x30
		::System::Int32 _ServeDragCount; // 0x38
		::System::Boolean _IsLeftPointerOver_k__BackingField; // 0x3C
		::System::Boolean _Visible_k__BackingField; // 0x3D
		::System::Boolean _IsRightPointerOver_k__BackingField; // 0x3E
		::System::Boolean _Unlocked; // 0x3F
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTDISCARDVIEWMODEL_CTOR_OFFSET))(this);
		}

		::System::Boolean get_Visible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTDISCARDVIEWMODEL_GET_VISIBLE_OFFSET))(this);
		}

		::System::Void set_Visible(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTDISCARDVIEWMODEL_SET_VISIBLE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsLeftPointerOver()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTDISCARDVIEWMODEL_GET_ISLEFTPOINTEROVER_OFFSET))(this);
		}

		::System::Void set_IsLeftPointerOver(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTDISCARDVIEWMODEL_SET_ISLEFTPOINTEROVER_OFFSET))(this, a1);
		}

		::System::Boolean get_IsRightPointerOver()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTDISCARDVIEWMODEL_GET_ISRIGHTPOINTEROVER_OFFSET))(this);
		}

		::System::Void set_IsRightPointerOver(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTDISCARDVIEWMODEL_SET_ISRIGHTPOINTEROVER_OFFSET))(this, a1);
		}

		::System::Void add_OnRefresh(::RPG::Client::LittleGame::ComicDessert::ViewModelEventHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ComicDessert::ViewModelEventHandler*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTDISCARDVIEWMODEL_ADD_ONREFRESH_OFFSET))(this, a1);
		}

		::System::Void remove_OnRefresh(::RPG::Client::LittleGame::ComicDessert::ViewModelEventHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ComicDessert::ViewModelEventHandler*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTDISCARDVIEWMODEL_REMOVE_ONREFRESH_OFFSET))(this, a1);
		}

		::System::Void SetUnlocked(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTDISCARDVIEWMODEL_SETUNLOCKED_OFFSET))(this, a1);
		}

		::System::Void SetServeDragCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTDISCARDVIEWMODEL_SETSERVEDRAGCOUNT_OFFSET))(this, a1);
		}

		::System::Void SetHitRects(::UnityEngine::RectTransform* a1, ::UnityEngine::RectTransform* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTDISCARDVIEWMODEL_SETHITRECTS_OFFSET))(this, a1, a2);
		}

		::System::Void SetHighlighted(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTDISCARDVIEWMODEL_SETHIGHLIGHTED_OFFSET))(this, a1, a2);
		}

		::System::Boolean Contains(::UnityEngine::Vector2 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTDISCARDVIEWMODEL_CONTAINS_OFFSET))(this, a1);
		}

		::System::Void HitTest(::UnityEngine::Vector2 a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTDISCARDVIEWMODEL_HITTEST_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean _Contains(::UnityEngine::RectTransform* a1, ::UnityEngine::GameObject* a2, ::UnityEngine::Vector2 a3, ::UnityEngine::Camera* a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::RectTransform*, ::UnityEngine::GameObject*, ::UnityEngine::Vector2, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTDISCARDVIEWMODEL__CONTAINS_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _RefreshVisible()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTDISCARDVIEWMODEL__REFRESHVISIBLE_OFFSET))(this);
		}

	};
}
