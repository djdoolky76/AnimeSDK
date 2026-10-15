#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class OpenTarotBookletPageForCharater; }

#define RPG_GAMECORE_OPENTAROTBOOKLETPAGEFORCHARATER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8E1FA0)
#define RPG_GAMECORE_OPENTAROTBOOKLETPAGEFORCHARATER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D8E1FB0)
#define RPG_GAMECORE_OPENTAROTBOOKLETPAGEFORCHARATER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8E1F70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int OpenTarotBookletPageForCharater_TypeDefinitionIndex = 22353;

	class OpenTarotBookletPageForCharater : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 CharacterID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPENTAROTBOOKLETPAGEFORCHARATER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::OpenTarotBookletPageForCharater* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::OpenTarotBookletPageForCharater*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPENTAROTBOOKLETPAGEFORCHARATER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::OpenTarotBookletPageForCharater* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::OpenTarotBookletPageForCharater*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPENTAROTBOOKLETPAGEFORCHARATER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
