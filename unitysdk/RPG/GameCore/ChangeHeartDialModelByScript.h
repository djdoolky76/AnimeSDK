#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChangeHeartDialModelByScript; }
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_CHANGEHEARTDIALMODELBYSCRIPT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D539770)
#define RPG_GAMECORE_CHANGEHEARTDIALMODELBYSCRIPT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D539780)
#define RPG_GAMECORE_CHANGEHEARTDIALMODELBYSCRIPT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D539740)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChangeHeartDialModelByScript_TypeDefinitionIndex = 21897;

	class ChangeHeartDialModelByScript : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* ScriptID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGEHEARTDIALMODELBYSCRIPT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChangeHeartDialModelByScript* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChangeHeartDialModelByScript*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGEHEARTDIALMODELBYSCRIPT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChangeHeartDialModelByScript* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChangeHeartDialModelByScript*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGEHEARTDIALMODELBYSCRIPT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
