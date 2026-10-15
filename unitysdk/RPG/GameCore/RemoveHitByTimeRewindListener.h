#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RemoveHitByTimeRewindListener; }

#define RPG_GAMECORE_REMOVEHITBYTIMEREWINDLISTENER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D957EA0)
#define RPG_GAMECORE_REMOVEHITBYTIMEREWINDLISTENER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D957EB0)
#define RPG_GAMECORE_REMOVEHITBYTIMEREWINDLISTENER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D957DE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RemoveHitByTimeRewindListener_TypeDefinitionIndex = 20662;

	class RemoveHitByTimeRewindListener : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVEHITBYTIMEREWINDLISTENER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RemoveHitByTimeRewindListener* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RemoveHitByTimeRewindListener*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVEHITBYTIMEREWINDLISTENER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RemoveHitByTimeRewindListener* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RemoveHitByTimeRewindListener*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVEHITBYTIMEREWINDLISTENER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
