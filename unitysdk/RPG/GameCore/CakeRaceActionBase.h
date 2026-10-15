#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CakeRaceActionBase; }

#define RPG_GAMECORE_CAKERACEACTIONBASE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D547F50)
#define RPG_GAMECORE_CAKERACEACTIONBASE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D548140)
#define RPG_GAMECORE_CAKERACEACTIONBASE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D548100)

namespace RPG::GameCore
{
	class CakeRaceActionBase : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONBASE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CakeRaceActionBase* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CakeRaceActionBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONBASE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CakeRaceActionBase* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CakeRaceActionBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONBASE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
