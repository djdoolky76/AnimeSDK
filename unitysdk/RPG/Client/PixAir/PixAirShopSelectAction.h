#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PixAir/BasePixAirPendingAction.h"
#include "unitysdk/RPG/Client/PixAir/PixAirNodeCase.h"
class FJGMGGIGLPD;
namespace System { class String; }

#define RPG_CLIENT_PIXAIR_PIXAIRSHOPSELECTACTION_CTOR_OFFSET UNITYSDK_OFFSET(0xDB6AE00)
#define RPG_CLIENT_PIXAIR_PIXAIRSHOPSELECTACTION_FINISHSHOPSTAGE_OFFSET UNITYSDK_OFFSET(0xDB6AE70)
#define RPG_CLIENT_PIXAIR_PIXAIRSHOPSELECTACTION_FINISH_OFFSET UNITYSDK_OFFSET(0xDB6B0E0)
#define RPG_CLIENT_PIXAIR_PIXAIRSHOPSELECTACTION_GETCONTENTKEY_OFFSET UNITYSDK_OFFSET(0xDB6B200)
#define RPG_CLIENT_PIXAIR_PIXAIRSHOPSELECTACTION_GET_NODECASE_OFFSET UNITYSDK_OFFSET(0xDB6B250)
#define RPG_CLIENT_PIXAIR_PIXAIRSHOPSELECTACTION_ISCANREFRESH_OFFSET UNITYSDK_OFFSET(0xDB6B150)
#define RPG_CLIENT_PIXAIR_PIXAIRSHOPSELECTACTION_START_OFFSET UNITYSDK_OFFSET(0xDB6AE10)

namespace RPG::Client::PixAir
{
	class PixAirShopSelectAction : public ::RPG::Client::PixAir::BasePixAirPendingAction
	{
	public:
		::System::Void _ctor(::System::UInt32 a1, ::FJGMGGIGLPD* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::FJGMGGIGLPD*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRSHOPSELECTACTION_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRSHOPSELECTACTION_START_OFFSET))(this);
		}

		::System::Void FinishShopStage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRSHOPSELECTACTION_FINISHSHOPSTAGE_OFFSET))(this);
		}

		::System::Void Finish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRSHOPSELECTACTION_FINISH_OFFSET))(this);
		}

		::System::Boolean IsCanRefresh()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRSHOPSELECTACTION_ISCANREFRESH_OFFSET))(this);
		}

		::System::String* GetContentKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRSHOPSELECTACTION_GETCONTENTKEY_OFFSET))(this);
		}

		::RPG::Client::PixAir::PixAirNodeCase get_NodeCase()
		{
			return ((::RPG::Client::PixAir::PixAirNodeCase(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRSHOPSELECTACTION_GET_NODECASE_OFFSET))(this);
		}

	};
}
