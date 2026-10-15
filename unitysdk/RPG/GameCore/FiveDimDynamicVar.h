#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameDynamicVar.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimDynamicVar; }

#define RPG_GAMECORE_FIVEDIMDYNAMICVAR_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6BAB00)
#define RPG_GAMECORE_FIVEDIMDYNAMICVAR_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6BAB10)
#define RPG_GAMECORE_FIVEDIMDYNAMICVAR_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6BAAD0)

namespace RPG::GameCore
{
	class FiveDimDynamicVar : public ::RPG::GameCore::LittleGameDynamicVar
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMDYNAMICVAR_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimDynamicVar* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimDynamicVar*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMDYNAMICVAR_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimDynamicVar* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimDynamicVar*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMDYNAMICVAR_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
