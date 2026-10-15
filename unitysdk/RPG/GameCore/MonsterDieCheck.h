#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MonsterDieCheck; }
namespace System { class String; }

#define RPG_GAMECORE_MONSTERDIECHECK_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8AF240)
#define RPG_GAMECORE_MONSTERDIECHECK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D8AF250)
#define RPG_GAMECORE_MONSTERDIECHECK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8AF210)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonsterDieCheck_TypeDefinitionIndex = 22961;

	class MonsterDieCheck : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::System::String*>* MonsterTagList; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDIECHECK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MonsterDieCheck* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MonsterDieCheck*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDIECHECK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::MonsterDieCheck* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MonsterDieCheck*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERDIECHECK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
