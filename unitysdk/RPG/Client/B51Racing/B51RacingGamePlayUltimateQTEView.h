#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYULTIMATEQTEVIEW_AKEEPPEHBIF_OFFSET UNITYSDK_OFFSET(0xC798AE0)
#define RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYULTIMATEQTEVIEW_CLEKGHNINFP_OFFSET UNITYSDK_OFFSET(0xC798A50)
#define RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYULTIMATEQTEVIEW_CTOR_OFFSET UNITYSDK_OFFSET(0xC798CB0)
#define RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYULTIMATEQTEVIEW_MGDDOJDDHCA_OFFSET UNITYSDK_OFFSET(0xC798C40)
#define RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYULTIMATEQTEVIEW_UPDATEQTEVIEW_OFFSET UNITYSDK_OFFSET(0xC798940)

namespace RPG::Client::B51Racing
{
	class B51RacingGamePlayUltimateQTEView : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single _QTEEnd; // 0x18
		::System::Single _QTEDuration; // 0x1C
		::UnityEngine::RectTransform* _HandleTransform; // 0x20
		::System::Single _FullProgressHandleWidth; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYULTIMATEQTEVIEW_CTOR_OFFSET))(this);
		}

		::System::Void UpdateQTEView(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYULTIMATEQTEVIEW_UPDATEQTEVIEW_OFFSET))(this, a1, a2);
		}

		::System::Void CLEKGHNINFP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYULTIMATEQTEVIEW_CLEKGHNINFP_OFFSET))(this);
		}

		::System::Void AKEEPPEHBIF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYULTIMATEQTEVIEW_AKEEPPEHBIF_OFFSET))(this);
		}

		::System::Void MGDDOJDDHCA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYULTIMATEQTEVIEW_MGDDOJDDHCA_OFFSET))(this);
		}

	};
}
