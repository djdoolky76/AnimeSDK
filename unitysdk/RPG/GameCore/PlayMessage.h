#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlayMessage; }

#define RPG_GAMECORE_PLAYMESSAGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D900020)
#define RPG_GAMECORE_PLAYMESSAGE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D900030)
#define RPG_GAMECORE_PLAYMESSAGE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8FFFE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayMessage_TypeDefinitionIndex = 21120;

	class PlayMessage : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 MessageSectionID; // 0x18
		::System::Boolean ShowNotice; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYMESSAGE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlayMessage* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlayMessage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYMESSAGE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlayMessage* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlayMessage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYMESSAGE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
