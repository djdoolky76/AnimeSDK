#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BaseChimeraDuelValueGetter; }

#define RPG_GAMECORE_BASECHIMERADUELVALUEGETTER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D40F8B0)
#define RPG_GAMECORE_BASECHIMERADUELVALUEGETTER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D40F850)
#define RPG_GAMECORE_BASECHIMERADUELVALUEGETTER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D40F160)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BaseChimeraDuelValueGetter_TypeDefinitionIndex = 15989;

	class BaseChimeraDuelValueGetter : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASECHIMERADUELVALUEGETTER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::BaseChimeraDuelValueGetter* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BaseChimeraDuelValueGetter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASECHIMERADUELVALUEGETTER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::BaseChimeraDuelValueGetter* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BaseChimeraDuelValueGetter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASECHIMERADUELVALUEGETTER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
