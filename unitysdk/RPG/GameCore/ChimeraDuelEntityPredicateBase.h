#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraDuelEntityPredicateBase; }

#define RPG_GAMECORE_CHIMERADUELENTITYPREDICATEBASE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D59FA80)
#define RPG_GAMECORE_CHIMERADUELENTITYPREDICATEBASE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5A0260)
#define RPG_GAMECORE_CHIMERADUELENTITYPREDICATEBASE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D59B060)

namespace RPG::GameCore
{
	class ChimeraDuelEntityPredicateBase : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELENTITYPREDICATEBASE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelEntityPredicateBase* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelEntityPredicateBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELENTITYPREDICATEBASE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelEntityPredicateBase* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelEntityPredicateBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELENTITYPREDICATEBASE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
