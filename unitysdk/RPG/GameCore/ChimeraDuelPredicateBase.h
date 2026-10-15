#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraDuelPredicateBase; }

#define RPG_GAMECORE_CHIMERADUELPREDICATEBASE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5A6FA0)
#define RPG_GAMECORE_CHIMERADUELPREDICATEBASE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5A6F40)
#define RPG_GAMECORE_CHIMERADUELPREDICATEBASE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5A6C10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelPredicateBase_TypeDefinitionIndex = 15974;

	class ChimeraDuelPredicateBase : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELPREDICATEBASE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelPredicateBase* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelPredicateBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELPREDICATEBASE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelPredicateBase* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelPredicateBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELPREDICATEBASE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
