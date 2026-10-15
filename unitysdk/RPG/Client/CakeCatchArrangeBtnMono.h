#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_CAKECATCHARRANGEBTNMONO_AWAKE_OFFSET UNITYSDK_OFFSET(0xC8D73F0)
#define RPG_CLIENT_CAKECATCHARRANGEBTNMONO_CLEARBUTTONCONFIG_OFFSET UNITYSDK_OFFSET(0xC8D75E0)
#define RPG_CLIENT_CAKECATCHARRANGEBTNMONO_CTOR_OFFSET UNITYSDK_OFFSET(0xC8D7CF0)
#define RPG_CLIENT_CAKECATCHARRANGEBTNMONO_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xC8D7620)
#define RPG_CLIENT_CAKECATCHARRANGEBTNMONO_SETBUTTONCONFIG_OFFSET UNITYSDK_OFFSET(0xC8D7580)
#define RPG_CLIENT_CAKECATCHARRANGEBTNMONO__GETANCHORPOSITION_OFFSET UNITYSDK_OFFSET(0xC8D7B10)
#define RPG_CLIENT_CAKECATCHARRANGEBTNMONO__GETWORLDPOSITION_OFFSET UNITYSDK_OFFSET(0xC8D7880)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeCatchArrangeBtnMono_TypeDefinitionIndex = 62961;

	class CakeCatchArrangeBtnMono : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::RectTransform* _rectTransform; // 0x18
		::UnityEngine::RectTransform* _parentRectTransform; // 0x20
		::System::Boolean _isInitialized; // 0x28
		::System::Byte _padding0[0x3];
		::System::Int32 _btnType; // 0x2C
		::System::Int32 _index; // 0x30
		::System::Int32 _subIndex; // 0x34
		::System::Boolean _hasButtonConfig; // 0x38
		// static const ::System::Object BTN_TYPE_GROUND; // 0x0
		// static const ::System::Object BTN_TYPE_GROUND_CAT; // 0x0
		// static const ::System::Object BTN_TYPE_SHELF; // 0x0
		// static const ::System::Object BTN_TYPE_SHELF_CAT; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHARRANGEBTNMONO_CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHARRANGEBTNMONO_AWAKE_OFFSET))(this);
		}

		::System::Void SetButtonConfig(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHARRANGEBTNMONO_SETBUTTONCONFIG_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ClearButtonConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHARRANGEBTNMONO_CLEARBUTTONCONFIG_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHARRANGEBTNMONO_LATEUPDATE_OFFSET))(this);
		}

		::UnityEngine::Vector3 _GetWorldPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHARRANGEBTNMONO__GETWORLDPOSITION_OFFSET))(this);
		}

		::UnityEngine::Vector3 _GetAnchorPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHARRANGEBTNMONO__GETANCHORPOSITION_OFFSET))(this);
		}

	};
}
