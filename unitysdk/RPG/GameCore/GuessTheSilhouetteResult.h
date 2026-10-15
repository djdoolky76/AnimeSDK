#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GuessTheSilhouetteResult; }

#define RPG_GAMECORE_GUESSTHESILHOUETTERESULT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D74D1A0)
#define RPG_GAMECORE_GUESSTHESILHOUETTERESULT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D74D1B0)
#define RPG_GAMECORE_GUESSTHESILHOUETTERESULT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D74D170)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GuessTheSilhouetteResult_TypeDefinitionIndex = 21175;

	class GuessTheSilhouetteResult : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 SilhouetteID; // 0x18
		::System::Boolean IsExecuting; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GUESSTHESILHOUETTERESULT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GuessTheSilhouetteResult* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GuessTheSilhouetteResult*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GUESSTHESILHOUETTERESULT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GuessTheSilhouetteResult* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GuessTheSilhouetteResult*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GUESSTHESILHOUETTERESULT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
