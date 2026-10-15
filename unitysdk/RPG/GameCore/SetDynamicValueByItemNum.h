#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetDynamicValueByItemNum; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYITEMNUM_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAA6D00)
#define RPG_GAMECORE_SETDYNAMICVALUEBYITEMNUM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAA6D10)
#define RPG_GAMECORE_SETDYNAMICVALUEBYITEMNUM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAA6CD0)

namespace RPG::GameCore
{
	class SetDynamicValueByItemNum : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYITEMNUM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByItemNum* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByItemNum*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYITEMNUM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByItemNum* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByItemNum*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYITEMNUM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
