#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
namespace RPG::Client { class NotifyHandler; }
namespace System { class Object; }

#define RPG_CLIENT_UIADJUSTMAINCAMERAVIEWPORT_BLFLBLENGMA_OFFSET UNITYSDK_OFFSET(0x1A0E9E20)
#define RPG_CLIENT_UIADJUSTMAINCAMERAVIEWPORT_CTOR_OFFSET UNITYSDK_OFFSET(0x1A0E9E70)
#define RPG_CLIENT_UIADJUSTMAINCAMERAVIEWPORT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1A0E9DB0)
#define RPG_CLIENT_UIADJUSTMAINCAMERAVIEWPORT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1A0E9830)
#define RPG_CLIENT_UIADJUSTMAINCAMERAVIEWPORT_REFRESHADJUSTMENT_OFFSET UNITYSDK_OFFSET(0x1A0E9900)

namespace RPG::Client
{
	inline static constexpr unsigned int UIAdjustMainCameraViewport_TypeDefinitionIndex = 75133;

	class UIAdjustMainCameraViewport : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::NotifyHandler* CDCKDFJEMON; // 0x18
		::UnityEngine::Vector2 OffsetMin; // 0x20
		::UnityEngine::Vector2 OffsetMax; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADJUSTMAINCAMERAVIEWPORT_CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADJUSTMAINCAMERAVIEWPORT_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADJUSTMAINCAMERAVIEWPORT_ONDISABLE_OFFSET))(this);
		}

		::System::Void RefreshAdjustment()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADJUSTMAINCAMERAVIEWPORT_REFRESHADJUSTMENT_OFFSET))(this);
		}

		::System::Void BLFLBLENGMA(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADJUSTMAINCAMERAVIEWPORT_BLFLBLENGMA_OFFSET))(this, a1);
		}

	};
}
