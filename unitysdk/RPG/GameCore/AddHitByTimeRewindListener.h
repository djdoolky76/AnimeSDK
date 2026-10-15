#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AddHitByTimeRewindListener; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_ADDHITBYTIMEREWINDLISTENER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3885F0)
#define RPG_GAMECORE_ADDHITBYTIMEREWINDLISTENER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D388600)
#define RPG_GAMECORE_ADDHITBYTIMEREWINDLISTENER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3885C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AddHitByTimeRewindListener_TypeDefinitionIndex = 20647;

	class AddHitByTimeRewindListener : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* Target; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* Callback; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDHITBYTIMEREWINDLISTENER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AddHitByTimeRewindListener* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AddHitByTimeRewindListener*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDHITBYTIMEREWINDLISTENER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AddHitByTimeRewindListener* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AddHitByTimeRewindListener*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDHITBYTIMEREWINDLISTENER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
