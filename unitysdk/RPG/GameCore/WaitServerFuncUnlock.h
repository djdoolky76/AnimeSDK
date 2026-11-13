#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class WaitServerFuncUnlock; }

#define RPG_GAMECORE_WAITSERVERFUNCUNLOCK_CTOR_OFFSET UNITYSDK_OFFSET(0x20801920)
#define RPG_GAMECORE_WAITSERVERFUNCUNLOCK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x20801930)
#define RPG_GAMECORE_WAITSERVERFUNCUNLOCK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x208018E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitServerFuncUnlock_TypeDefinitionIndex = 20829;

	class WaitServerFuncUnlock : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITSERVERFUNCUNLOCK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitServerFuncUnlock* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitServerFuncUnlock*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITSERVERFUNCUNLOCK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitServerFuncUnlock* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitServerFuncUnlock*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITSERVERFUNCUNLOCK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
