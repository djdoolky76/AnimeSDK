#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace RPG::Client::TrainParty::OutlinePost { class OutlinePostManager; }

#define RPG_CLIENT_TRAINPARTY_OUTLINEPOST_OUTLINESLOTMONO_CTOR_OFFSET UNITYSDK_OFFSET(0xE2BF920)
#define RPG_CLIENT_TRAINPARTY_OUTLINEPOST_OUTLINESLOTMONO_DGDMAJMJGMH_OFFSET UNITYSDK_OFFSET(0xE2BF630)
#define RPG_CLIENT_TRAINPARTY_OUTLINEPOST_OUTLINESLOTMONO_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xE2BF6E0)
#define RPG_CLIENT_TRAINPARTY_OUTLINEPOST_OUTLINESLOTMONO_START_OFFSET UNITYSDK_OFFSET(0xE2BF3E0)

namespace RPG::Client::TrainParty::OutlinePost
{
	inline static constexpr unsigned int OutlineSlotMono_TypeDefinitionIndex = 74368;

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
