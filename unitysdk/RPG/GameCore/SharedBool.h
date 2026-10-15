#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SharedValue.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SharedBool; }

#define RPG_GAMECORE_SHAREDBOOL_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAD0320)
#define RPG_GAMECORE_SHAREDBOOL_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAD0330)
#define RPG_GAMECORE_SHAREDBOOL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAD02F0)

namespace RPG::GameCore
{
	class SharedBool : public ::RPG::GameCore::SharedValue
	{
	public:
		::System::Boolean Value; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHAREDBOOL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SharedBool* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SharedBool*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHAREDBOOL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SharedBool* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SharedBool*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHAREDBOOL_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
