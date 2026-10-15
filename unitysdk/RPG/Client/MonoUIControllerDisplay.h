#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace RPG::Client { class UIController; }

#define RPG_CLIENT_MONOUICONTROLLERDISPLAY_CTOR_OFFSET UNITYSDK_OFFSET(0xD87B530)
#define RPG_CLIENT_MONOUICONTROLLERDISPLAY_INIT_OFFSET UNITYSDK_OFFSET(0xD87B490)
#define RPG_CLIENT_MONOUICONTROLLERDISPLAY_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xD87B4E0)

namespace RPG::Client
{
	class MonoUIControllerDisplay : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::UIController* CPIIOIPAAKK; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUICONTROLLERDISPLAY_CTOR_OFFSET))(this);
		}

		::System::Void Init(::RPG::Client::UIController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUICONTROLLERDISPLAY_INIT_OFFSET))(this, a1);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUICONTROLLERDISPLAY_ONDESTROY_OFFSET))(this);
		}

	};
}
