#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UIAdventureWaypointsSafeZone_EBorderShape.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector4.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace UnityEngine { class Camera; }
namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_UIADVENTUREWAYPOINTSSAFEZONE_ABEEFEOPEFB_OFFSET UNITYSDK_OFFSET(0xE3741D0)
#define RPG_CLIENT_UIADVENTUREWAYPOINTSSAFEZONE_CMGAABHDJOO_OFFSET UNITYSDK_OFFSET(0xE374000)
#define RPG_CLIENT_UIADVENTUREWAYPOINTSSAFEZONE_CTOR_OFFSET UNITYSDK_OFFSET(0xE374710)
#define RPG_CLIENT_UIADVENTUREWAYPOINTSSAFEZONE_EDPHBFBNJMK_OFFSET UNITYSDK_OFFSET(0xE3730B0)
#define RPG_CLIENT_UIADVENTUREWAYPOINTSSAFEZONE_KNIDBFPCHDA_OFFSET UNITYSDK_OFFSET(0xE374340)
#define RPG_CLIENT_UIADVENTUREWAYPOINTSSAFEZONE_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xE3729F0)
#define RPG_CLIENT_UIADVENTUREWAYPOINTSSAFEZONE_LHHGBHAKNIB_OFFSET UNITYSDK_OFFSET(0xE374640)
#define RPG_CLIENT_UIADVENTUREWAYPOINTSSAFEZONE_MILHAAJGBJF_OFFSET UNITYSDK_OFFSET(0xE374450)
#define RPG_CLIENT_UIADVENTUREWAYPOINTSSAFEZONE_NGEMGIPCFLL_OFFSET UNITYSDK_OFFSET(0xE3740E0)
#define RPG_CLIENT_UIADVENTUREWAYPOINTSSAFEZONE_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xE372BB0)

namespace RPG::Client
{
	inline static constexpr unsigned int UIAdventureWaypointsSafeZone_TypeDefinitionIndex = 69078;

	class UIAdventureWaypointsSafeZone : public ::System::Object
	{
	public:
		::System::Single MarginLeft; // 0x10
		::System::Single MarginRight; // 0x14
		::System::Single MarginUp; // 0x18
		::System::Single MarginDown; // 0x1C
		::System::Boolean _IsUsingOverrideMargin; // 0x20
		::System::Byte _padding0[0x3];
		::System::Single _OriginMarginLeft; // 0x24
		::System::Single _OriginMarginRight; // 0x28
		::System::Single _OriginMarginUp; // 0x2C
		::System::Single _OriginMarginDown; // 0x30
		::RPG::Client::UIAdventureWaypointsSafeZone_EBorderShape BorderShape; // 0x34
		::System::Single CornerRadius; // 0x38
		::System::Byte _padding1[0x4];
		::UnityEngine::RectTransform* _CanvasRectTrans; // 0x40
		::UnityEngine::Vector4 _MarginLRUD; // 0x48
		::UnityEngine::Vector2 _CanvasSize; // 0x58
		::UnityEngine::Vector2 _CanvasLB; // 0x60
		::UnityEngine::Vector2 _CanvasRT; // 0x68
		::System::Single _CanvasRatioHW; // 0x70
		::System::Single _CornerRadiusInCanvas; // 0x74
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADVENTUREWAYPOINTSSAFEZONE_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADVENTUREWAYPOINTSSAFEZONE_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void PAGKOAEOLKA(::UnityEngine::RectTransform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADVENTUREWAYPOINTSSAFEZONE_PAGKOAEOLKA_OFFSET))(this, a1);
		}

		::System::Boolean EDPHBFBNJMK(::UnityEngine::Vector3 a1, ::UnityEngine::Vector2 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Camera* a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector2, ::UnityEngine::Vector3, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADVENTUREWAYPOINTSSAFEZONE_EDPHBFBNJMK_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void CMGAABHDJOO(::System::Boolean a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADVENTUREWAYPOINTSSAFEZONE_CMGAABHDJOO_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::UnityEngine::Vector2 ABEEFEOPEFB(::System::Single a1, ::System::Single a2)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADVENTUREWAYPOINTSSAFEZONE_ABEEFEOPEFB_OFFSET))(this, a1, a2);
		}

		::System::Boolean MILHAAJGBJF(::UnityEngine::Vector2 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADVENTUREWAYPOINTSSAFEZONE_MILHAAJGBJF_OFFSET))(this, a1);
		}

		::System::Boolean KNIDBFPCHDA(::UnityEngine::Vector2 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADVENTUREWAYPOINTSSAFEZONE_KNIDBFPCHDA_OFFSET))(this, a1);
		}

		::System::Boolean NGEMGIPCFLL(::UnityEngine::Camera* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Camera*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADVENTUREWAYPOINTSSAFEZONE_NGEMGIPCFLL_OFFSET))(this, a1, a2);
		}

		::System::Void LHHGBHAKNIB(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADVENTUREWAYPOINTSSAFEZONE_LHHGBHAKNIB_OFFSET))(this, a1);
		}

	};
}
