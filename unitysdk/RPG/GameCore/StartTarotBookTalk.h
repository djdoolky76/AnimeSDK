#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class StartTarotBookTalk; }

#define RPG_GAMECORE_STARTTAROTBOOKTALK_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAF0FE0)
#define RPG_GAMECORE_STARTTAROTBOOKTALK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAF0FF0)
#define RPG_GAMECORE_STARTTAROTBOOKTALK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAF0F20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StartTarotBookTalk_TypeDefinitionIndex = 21139;

	class StartTarotBookTalk : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTTAROTBOOKTALK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::StartTarotBookTalk* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StartTarotBookTalk*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTTAROTBOOKTALK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::StartTarotBookTalk* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StartTarotBookTalk*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTTAROTBOOKTALK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
