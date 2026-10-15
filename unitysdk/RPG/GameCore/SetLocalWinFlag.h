#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetLocalWinFlag; }

#define RPG_GAMECORE_SETLOCALWINFLAG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAB8670)
#define RPG_GAMECORE_SETLOCALWINFLAG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAB8680)
#define RPG_GAMECORE_SETLOCALWINFLAG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAB85B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetLocalWinFlag_TypeDefinitionIndex = 23406;

	class SetLocalWinFlag : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETLOCALWINFLAG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetLocalWinFlag* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetLocalWinFlag*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETLOCALWINFLAG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetLocalWinFlag* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetLocalWinFlag*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETLOCALWINFLAG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
