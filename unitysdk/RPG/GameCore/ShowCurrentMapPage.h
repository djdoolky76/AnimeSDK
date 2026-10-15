#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ShowCurrentMapPage; }

#define RPG_GAMECORE_SHOWCURRENTMAPPAGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DADA230)
#define RPG_GAMECORE_SHOWCURRENTMAPPAGE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DADA240)
#define RPG_GAMECORE_SHOWCURRENTMAPPAGE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DADA170)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowCurrentMapPage_TypeDefinitionIndex = 23845;

	class ShowCurrentMapPage : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWCURRENTMAPPAGE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowCurrentMapPage* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowCurrentMapPage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWCURRENTMAPPAGE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowCurrentMapPage* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowCurrentMapPage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWCURRENTMAPPAGE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
