#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class WaitPredicateSucc; }

#define RPG_GAMECORE_WAITPREDICATESUCC_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC9E150)
#define RPG_GAMECORE_WAITPREDICATESUCC_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC9E160)
#define RPG_GAMECORE_WAITPREDICATESUCC_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC9E120)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitPredicateSucc_TypeDefinitionIndex = 22082;

	class WaitPredicateSucc : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITPREDICATESUCC_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitPredicateSucc* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitPredicateSucc*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITPREDICATESUCC_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitPredicateSucc* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitPredicateSucc*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITPREDICATESUCC_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
