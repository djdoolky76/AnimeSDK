#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SimpleTalkInfo; }
namespace RPG::GameCore { class SimpleTalkListConfig; }

#define RPG_GAMECORE_SIMPLETALKLISTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAEA180)
#define RPG_GAMECORE_SIMPLETALKLISTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAEA190)
#define RPG_GAMECORE_SIMPLETALKLISTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAE9E10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SimpleTalkListConfig_TypeDefinitionIndex = 20843;

	class SimpleTalkListConfig : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::SimpleTalkInfo*>* SimpleTalkList; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SIMPLETALKLISTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SimpleTalkListConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SimpleTalkListConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SIMPLETALKLISTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SimpleTalkListConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SimpleTalkListConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SIMPLETALKLISTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
