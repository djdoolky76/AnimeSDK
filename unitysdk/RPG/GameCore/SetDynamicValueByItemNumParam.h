#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueParamBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetDynamicValueByItemNumParam; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYITEMNUMPARAM_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAA6D60)
#define RPG_GAMECORE_SETDYNAMICVALUEBYITEMNUMPARAM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAA6D70)
#define RPG_GAMECORE_SETDYNAMICVALUEBYITEMNUMPARAM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAA6D20)

namespace RPG::GameCore
{
	class SetDynamicValueByItemNumParam : public ::RPG::GameCore::SetDynamicValueParamBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYITEMNUMPARAM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByItemNumParam* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByItemNumParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYITEMNUMPARAM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByItemNumParam* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByItemNumParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYITEMNUMPARAM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
