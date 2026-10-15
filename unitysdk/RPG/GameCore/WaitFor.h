#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class WaitFor; }

#define RPG_GAMECORE_WAITFOR_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC989F0)
#define RPG_GAMECORE_WAITFOR_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC98A00)
#define RPG_GAMECORE_WAITFOR_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC989C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitFor_TypeDefinitionIndex = 23792;

	class WaitFor : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::PredicateConfig* Predicate; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITFOR_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitFor* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitFor*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITFOR_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitFor* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitFor*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITFOR_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
