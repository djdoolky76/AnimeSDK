#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PixAir/BasePixAirPendingAction.h"
#include "unitysdk/RPG/Client/PixAir/PixAirNodeCase.h"
class EPBFAAHFDNF;
namespace RPG::Client::PixAir { class PixAirEventContentData; }
namespace RPG::Client::PixAir { class PixAirEventOptionData; }
namespace System { class String; }

#define RPG_CLIENT_PIXAIR_PIXAIREVENTSELECTACTION_CTOR_OFFSET UNITYSDK_OFFSET(0xDB4B360)
#define RPG_CLIENT_PIXAIR_PIXAIREVENTSELECTACTION_FINISH_OFFSET UNITYSDK_OFFSET(0xDB4B3F0)
#define RPG_CLIENT_PIXAIR_PIXAIREVENTSELECTACTION_GETCONTENTKEY_OFFSET UNITYSDK_OFFSET(0xDB4B640)
#define RPG_CLIENT_PIXAIR_PIXAIREVENTSELECTACTION_GET_EVENTCONTENT_OFFSET UNITYSDK_OFFSET(0xDB4B690)
#define RPG_CLIENT_PIXAIR_PIXAIREVENTSELECTACTION_GET_NODECASE_OFFSET UNITYSDK_OFFSET(0xDB4B6A0)
#define RPG_CLIENT_PIXAIR_PIXAIREVENTSELECTACTION_SELECTOPTION_OFFSET UNITYSDK_OFFSET(0xDB4B460)
#define RPG_CLIENT_PIXAIR_PIXAIREVENTSELECTACTION_START_OFFSET UNITYSDK_OFFSET(0xDB4B390)

namespace RPG::Client::PixAir
{
	class PixAirEventSelectAction : public ::RPG::Client::PixAir::BasePixAirPendingAction
	{
	public:
		::RPG::Client::PixAir::PixAirEventContentData* _EventContent_k__BackingField; // 0x18
		::System::Void _ctor(::System::UInt32 a1, ::EPBFAAHFDNF* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::EPBFAAHFDNF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREVENTSELECTACTION_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREVENTSELECTACTION_START_OFFSET))(this);
		}

		::System::Void Finish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREVENTSELECTACTION_FINISH_OFFSET))(this);
		}

		::System::Void SelectOption(::RPG::Client::PixAir::PixAirEventOptionData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PixAir::PixAirEventOptionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREVENTSELECTACTION_SELECTOPTION_OFFSET))(this, a1);
		}

		::System::String* GetContentKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREVENTSELECTACTION_GETCONTENTKEY_OFFSET))(this);
		}

		::RPG::Client::PixAir::PixAirEventContentData* get_EventContent()
		{
			return ((::RPG::Client::PixAir::PixAirEventContentData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREVENTSELECTACTION_GET_EVENTCONTENT_OFFSET))(this);
		}

		::RPG::Client::PixAir::PixAirNodeCase get_NodeCase()
		{
			return ((::RPG::Client::PixAir::PixAirNodeCase(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREVENTSELECTACTION_GET_NODECASE_OFFSET))(this);
		}

	};
}
