#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ShowBossHPValue; }

#define RPG_GAMECORE_SHOWBOSSHPVALUE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAD9920)
#define RPG_GAMECORE_SHOWBOSSHPVALUE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAD9930)
#define RPG_GAMECORE_SHOWBOSSHPVALUE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAD98F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowBossHPValue_TypeDefinitionIndex = 22938;

	class ShowBossHPValue : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsShow; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWBOSSHPVALUE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowBossHPValue* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowBossHPValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWBOSSHPVALUE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowBossHPValue* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowBossHPValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWBOSSHPVALUE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
