#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CloseAllTopPage; }

#define RPG_GAMECORE_CLOSEALLTOPPAGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D599DD0)
#define RPG_GAMECORE_CLOSEALLTOPPAGE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D599DE0)
#define RPG_GAMECORE_CLOSEALLTOPPAGE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D599D10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CloseAllTopPage_TypeDefinitionIndex = 20622;

	class CloseAllTopPage : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOSEALLTOPPAGE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CloseAllTopPage* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CloseAllTopPage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOSEALLTOPPAGE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CloseAllTopPage* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CloseAllTopPage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOSEALLTOPPAGE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
