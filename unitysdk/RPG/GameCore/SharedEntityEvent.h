#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SharedEntityEvent; }
namespace System { class String; }

#define RPG_GAMECORE_SHAREDENTITYEVENT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAD0640)
#define RPG_GAMECORE_SHAREDENTITYEVENT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAD0460)

namespace RPG::GameCore
{
	class SharedEntityEvent : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Name; // 0x10
		::System::Boolean IsPrivate; // 0x18
		::System::Boolean IsClient; // 0x19
		::System::Byte _padding0[0x6];
		::System::String* Description; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHAREDENTITYEVENT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SharedEntityEvent* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SharedEntityEvent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHAREDENTITYEVENT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
