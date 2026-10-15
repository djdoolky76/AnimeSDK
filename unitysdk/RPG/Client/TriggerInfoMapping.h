#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace RPG::Client { class AttachMappingItem; }
namespace RPG::Client { class TriggerInfoConfigItem; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_TRIGGERINFOMAPPING_CTOR_OFFSET UNITYSDK_OFFSET(0xE331D10)

namespace RPG::Client
{
	class TriggerInfoMapping : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::TriggerInfoConfigItem*>* TriggerInfos; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::AttachMappingItem*>* AttachMapping; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRIGGERINFOMAPPING_CTOR_OFFSET))(this);
		}

	};
}
