#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace RPG::Client::TrainParty::OutlinePost { class OutlinePostManager; }

#define RPG_CLIENT_TRAINPARTY_OUTLINEPOST_OUTLINESLOTMONO_CTOR_OFFSET UNITYSDK_OFFSET(0xE2CA7C0)
#define RPG_CLIENT_TRAINPARTY_OUTLINEPOST_OUTLINESLOTMONO_DGDMAJMJGMH_OFFSET UNITYSDK_OFFSET(0xE2CA4D0)
#define RPG_CLIENT_TRAINPARTY_OUTLINEPOST_OUTLINESLOTMONO_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xE2CA580)
#define RPG_CLIENT_TRAINPARTY_OUTLINEPOST_OUTLINESLOTMONO_START_OFFSET UNITYSDK_OFFSET(0xE2CA280)

namespace RPG::Client::TrainParty::OutlinePost
{
	class OutlineSlotMono : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::UInt32 _SlotID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_OUTLINEPOST_OUTLINESLOTMONO_CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_OUTLINEPOST_OUTLINESLOTMONO_START_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_OUTLINEPOST_OUTLINESLOTMONO_ONDESTROY_OFFSET))(this);
		}

		::RPG::Client::TrainParty::OutlinePost::OutlinePostManager* DGDMAJMJGMH()
		{
			return ((::RPG::Client::TrainParty::OutlinePost::OutlinePostManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_OUTLINEPOST_OUTLINESLOTMONO_DGDMAJMJGMH_OFFSET))(this);
		}

	};
}
