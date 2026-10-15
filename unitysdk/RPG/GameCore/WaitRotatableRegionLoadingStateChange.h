#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class WaitRotatableRegionLoadingStateChange; }

#define RPG_GAMECORE_WAITROTATABLEREGIONLOADINGSTATECHANGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DCA0E40)
#define RPG_GAMECORE_WAITROTATABLEREGIONLOADINGSTATECHANGE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DCA0E50)
#define RPG_GAMECORE_WAITROTATABLEREGIONLOADINGSTATECHANGE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DCA0E10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitRotatableRegionLoadingStateChange_TypeDefinitionIndex = 20915;

	class WaitRotatableRegionLoadingStateChange : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnChange; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITROTATABLEREGIONLOADINGSTATECHANGE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitRotatableRegionLoadingStateChange* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitRotatableRegionLoadingStateChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITROTATABLEREGIONLOADINGSTATECHANGE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitRotatableRegionLoadingStateChange* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitRotatableRegionLoadingStateChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITROTATABLEREGIONLOADINGSTATECHANGE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
