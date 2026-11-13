#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SaveMessage; }

#define RPG_GAMECORE_SAVEMESSAGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1F84C610)
#define RPG_GAMECORE_SAVEMESSAGE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1F84C620)
#define RPG_GAMECORE_SAVEMESSAGE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1F84C5E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SaveMessage_TypeDefinitionIndex = 21177;

	class SaveMessage : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 MessageSectionID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SAVEMESSAGE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SaveMessage* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SaveMessage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SAVEMESSAGE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SaveMessage* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SaveMessage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SAVEMESSAGE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
