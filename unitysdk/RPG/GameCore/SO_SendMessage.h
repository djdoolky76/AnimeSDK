#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SOTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SO_SendMessage; }
namespace System { class String; }

#define RPG_GAMECORE_SO_SENDMESSAGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA70750)
#define RPG_GAMECORE_SO_SENDMESSAGE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA70760)
#define RPG_GAMECORE_SO_SENDMESSAGE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA70DA0)

namespace RPG::GameCore
{
	class SO_SendMessage : public ::RPG::GameCore::SOTaskConfig
	{
	public:
		::System::String* Message; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SO_SENDMESSAGE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SO_SendMessage* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SO_SendMessage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SO_SENDMESSAGE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SO_SendMessage* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SO_SendMessage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SO_SENDMESSAGE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
