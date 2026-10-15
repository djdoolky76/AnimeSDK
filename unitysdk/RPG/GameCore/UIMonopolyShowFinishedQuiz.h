#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class UIMonopolyShowFinishedQuiz; }

#define RPG_GAMECORE_UIMONOPOLYSHOWFINISHEDQUIZ_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC41D60)
#define RPG_GAMECORE_UIMONOPOLYSHOWFINISHEDQUIZ_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC41D70)
#define RPG_GAMECORE_UIMONOPOLYSHOWFINISHEDQUIZ_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC41CA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int UIMonopolyShowFinishedQuiz_TypeDefinitionIndex = 21729;

	class UIMonopolyShowFinishedQuiz : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UIMONOPOLYSHOWFINISHEDQUIZ_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::UIMonopolyShowFinishedQuiz* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::UIMonopolyShowFinishedQuiz*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UIMONOPOLYSHOWFINISHEDQUIZ_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::UIMonopolyShowFinishedQuiz* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::UIMonopolyShowFinishedQuiz*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UIMONOPOLYSHOWFINISHEDQUIZ_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
