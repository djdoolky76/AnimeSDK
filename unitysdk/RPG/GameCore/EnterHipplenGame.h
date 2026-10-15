#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class EnterHipplenGame; }

#define RPG_GAMECORE_ENTERHIPPLENGAME_CTOR_OFFSET UNITYSDK_OFFSET(0x1D644D40)
#define RPG_GAMECORE_ENTERHIPPLENGAME_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D644D50)
#define RPG_GAMECORE_ENTERHIPPLENGAME_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D644C80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EnterHipplenGame_TypeDefinitionIndex = 21304;

	class EnterHipplenGame : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTERHIPPLENGAME_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::EnterHipplenGame* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::EnterHipplenGame*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTERHIPPLENGAME_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::EnterHipplenGame* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::EnterHipplenGame*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTERHIPPLENGAME_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
